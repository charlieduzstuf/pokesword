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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04E8
    OP_JUMP lab_0558
// lab_04E8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0528
    OP_JUMP lab_0558
// lab_0528
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
// lab_0558
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_05D8
// lab_05D8
    var_8 = 0;
    pri = fun_0720()
    OP_JNZ lab_0610
    OP_JUMP lab_0640
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05D8
// lab_0640
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0670
// lab_0670
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_06B0
    pri = 0;
    return pri;
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0720
fun_0720() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0850
fun_0850() {
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
// fun_08C8
fun_08C8() {
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
// fun_0988
fun_0988() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A30
fun_0A30() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B20(var_8)
    OP_JZER lab_0AA8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1B50(var_24)
    OP_JNZ lab_0AA8
    pri = 0;
    return pri;
// lab_0AA8
    OP_JUMP lab_0AB8
// lab_0AB8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B18
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AB8
    pri = 0;
    return pri;
}
// fun_0B58
fun_0B58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B90
fun_0B90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C08
fun_0C08() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C50
    pri = 0;
    return pri;
// lab_0C50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C90
// lab_0C90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B20(var_8)
    OP_JNZ lab_0D18
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D08
    pri = 0;
    return pri;
// lab_0D18
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D60
    pri = 0;
    return pri;
// lab_0D60
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E08(var_8)
    pri = 0;
    return pri;
// lab_0DC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C90
    pri = 0;
    return pri;
// lab_0D08
    OP_JUMP lab_0D60
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E40
fun_0E40() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E90
    pri = 0;
    return pri;
// lab_0E90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B20(var_8)
    OP_JZER lab_0FC0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EE8
    OP_ZERO_P_S 64
// lab_0FC0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF8
    OP_CONST_S 64, 1
// lab_0FF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1030
    OP_CONST_S 72, 1
// lab_1030
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
// lab_0EE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F10
    OP_ZERO_P_S 72
// lab_0F10
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
    OP_JUMP lab_10D0
// lab_10D0
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
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
// fun_1218
fun_1218() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_15D8
        case default:
        {
// switch_15D8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_15D8_case_0x0
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
            pri = fun_11B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15D8_case_default
        }
        case 0x1:
        {
// switch_15D8_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11B8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15D8_case_default
        }
        case 0x2:
        {
// switch_15D8_case_0x2
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
            pri = fun_11B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15D8_case_default
        }
        case 0x3:
        {
// switch_15D8_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11B8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15D8_case_default
        }
        case 0x4:
        {
// switch_15D8_case_0x4
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
            pri = fun_11B8(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_15D8_case_default
        }
        case 0x5:
        {
// switch_15D8_case_0x5
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
            pri = fun_11B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15D8_case_default
        }
        case 0x6:
        {
// switch_15D8_case_0x6
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
            pri = fun_11B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15D8_case_default
        }
        case 0x7:
        {
// switch_15D8_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11B8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15D8_case_default
        }
    }
}
// fun_1688
fun_1688() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16C8
fun_16C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1708
fun_1708() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1740
fun_1740() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1780
fun_1780() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_17B8
fun_17B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_16C8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1740(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1820
fun_1820() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1708(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1780(var_24)
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1B20(var_8)
    OP_JZER lab_1918
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
// lab_1918
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
// fun_1980
fun_1980() {
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
    pri = fun_1878(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1B20
fun_1B20() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1B50
fun_1B50() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1B80
fun_1B80() {
    OP_JUMP lab_1B98
// lab_1B98
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1C28
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1C18
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C08(var_8)
    pri = 0;
    return pri;
// lab_1C28
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1CB8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1CA8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C08(var_8)
    pri = 0;
    return pri;
// lab_1CB8
    pri = 0;
    return pri;
// lab_1CA8
    OP_JUMP lab_1CC8
// lab_1CC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B98
    pri = 0;
    return pri;
// lab_1C18
    OP_JUMP lab_1CC8
}
// fun_1D08
fun_1D08() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1B80(var_40)
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1DC8
fun_1DC8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1DF0
fun_1DF0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1E28
fun_1E28() {
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
// switch_2440
        case default:
        {
// switch_2440_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2488
// lab_2488
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
            OP_JNZ lab_2530
            var_88 = 0;
            pri = fun_2800()
// lab_2530
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2440_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_2028
                case default:
                {
// switch_2028_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_20A0
// lab_20A0
                    OP_JUMP lab_2488
                }
                case 0x0:
                {
// switch_2028_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_20A0
                }
                case 0x1:
                {
// switch_2028_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_20A0
                }
                case 0x2:
                {
// switch_2028_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_20A0
                }
                case 0x3:
                {
// switch_2028_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_20A0
                }
                case 0x4:
                {
// switch_2028_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_20A0
                }
                case 0x5:
                {
// switch_2028_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_20A0
                }
            }
        }
        case 0x65:
        {
// switch_2440_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_21E0
                case default:
                {
// switch_21E0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2258
// lab_2258
                    OP_JUMP lab_2488
                }
                case 0x0:
                {
// switch_21E0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2258
                }
                case 0x1:
                {
// switch_21E0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2258
                }
                case 0x2:
                {
// switch_21E0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2258
                }
                case 0x3:
                {
// switch_21E0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2258
                }
                case 0x4:
                {
// switch_21E0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2258
                }
                case 0x5:
                {
// switch_21E0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2258
                }
            }
        }
        case 0x66:
        {
// switch_2440_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2398
                case default:
                {
// switch_2398_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2410
// lab_2410
                    OP_JUMP lab_2488
                }
                case 0x0:
                {
// switch_2398_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2410
                }
                case 0x1:
                {
// switch_2398_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2410
                }
                case 0x2:
                {
// switch_2398_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2410
                }
                case 0x3:
                {
// switch_2398_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2410
                }
                case 0x4:
                {
// switch_2398_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2410
                }
                case 0x5:
                {
// switch_2398_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2410
                }
            }
        }
    }
}
// fun_2548
fun_2548() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1E28(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BD0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2658
    pri = 1;
    return pri;
// lab_2658
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_26A0
fun_26A0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_26F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_25B0(var_8)
    arg_2 = pri;
// lab_26F0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1E28(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2750
fun_2750() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2548(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27A0
fun_27A0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2750(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2800
fun_2800() {
    OP_JUMP lab_2818
// lab_2818
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2858
    pri = 0;
    return pri;
// lab_2858
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2818
    pri = 0;
    return pri;
}
// fun_2898
fun_2898() {
    var_8 = 0;
    pri = fun_2800()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2948
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2948
    pri = 0;
    return pri;
}
// fun_2958
fun_2958() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2988
fun_2988() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_29B8
// lab_29B8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_29F8
    OP_JUMP lab_2A28
// lab_29F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_29B8
// lab_2A28
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A70
fun_2A70() {
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
// fun_2AE0
fun_2AE0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2B18
fun_2B18() {
    OP_JUMP lab_2B30
// lab_2B30
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2B78
    OP_JUMP lab_2BA8
    OP_JUMP lab_2B98
// lab_2B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2BA8
    pri = 0;
    return pri;
// lab_2B98
    OP_JUMP lab_2B30
}
// fun_2BB8
fun_2BB8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2BE8
fun_2BE8() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2C48(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2DD8(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2C48
fun_2C48() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C98
fun_2C98() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2CE8
fun_2CE8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2D38
fun_2D38() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2D88
fun_2D88() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2DD8
fun_2DD8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2E28
fun_2E28() {
    pri = arg_1;
    OP_JNZ lab_2E70
    var_8 = 3408;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2E70
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
// fun_2EC8
fun_2EC8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2F40
fun_2F40() {
    var_8 = 0;
    pri = fun_2EC8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2FC0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2FC0
    pri = 1;
    return pri;
// lab_2FC0
    var_8 = 0;
    pri = fun_2EC8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_3000
    pri = 1;
    return pri;
// lab_3000
    var_8 = 0;
    pri = fun_2EC8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_3030
fun_3030() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_3080
fun_3080() {
    OP_JUMP lab_3098
// lab_3098
    pri = EvCameraMoveWait_()
    OP_JZER lab_30D0
    pri = 0;
    return pri;
// lab_30D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_3098
    pri = 0;
    return pri;
}
// fun_3110
fun_3110() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_3148
fun_3148() {
    pri = arg_6;
    OP_JNZ lab_3180
    var_8 = 0;
    pri = fun_10E0()
// lab_3180
    pri = arg_1;
    switch (pri) {
// switch_46E8
        case default:
        {
// switch_46E8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4A38
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4A38
            pri = 1;
            OP_JUMP lab_4A40
// lab_4A38
            pri = 0;
// lab_4A40
            OP_JZER lab_4B98
            var_16 = 11088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BD0(var_24, var_16)
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
            var_64 = 11192;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4BF8
// lab_4B98
            var_8 = 64;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_4BF8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4C58
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4CB8
// lab_4C58
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4CB8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4CB8
            pri = arg_2;
            OP_JZER lab_4CF8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4CF8
            var_8 = 0;
            pri = fun_1120()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_46E8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x1:
        {
// switch_46E8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x2:
        {
// switch_46E8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x3:
        {
// switch_46E8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x4:
        {
// switch_46E8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x5:
        {
// switch_46E8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8376;
            var_72 = 8368;
            var_80 = 8360;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0x6:
        {
// switch_46E8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8400;
            var_72 = 8392;
            var_80 = 8384;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0x7:
        {
// switch_46E8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8424;
            var_72 = 8416;
            var_80 = 8408;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0x8:
        {
// switch_46E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x9:
        {
// switch_46E8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8448;
            var_72 = 8440;
            var_80 = 8432;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0xa:
        {
// switch_46E8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8472;
            var_72 = 8464;
            var_80 = 8456;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0xb:
        {
// switch_46E8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8496;
            var_72 = 8488;
            var_80 = 8480;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0xc:
        {
// switch_46E8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8520;
            var_72 = 8512;
            var_80 = 8504;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0xd:
        {
// switch_46E8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8544;
            var_72 = 8536;
            var_80 = 8528;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0xe:
        {
// switch_46E8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8568;
            var_72 = 8560;
            var_80 = 8552;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0xf:
        {
// switch_46E8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x10:
        {
// switch_46E8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x11:
        {
// switch_46E8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8592;
            var_72 = 8584;
            var_80 = 8576;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0x12:
        {
// switch_46E8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8616;
            var_72 = 8608;
            var_80 = 8600;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0x13:
        {
// switch_46E8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x14:
        {
// switch_46E8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x15:
        {
// switch_46E8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x16:
        {
// switch_46E8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x17:
        {
// switch_46E8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x18:
        {
// switch_46E8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x19:
        {
// switch_46E8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8640;
            var_72 = 8632;
            var_80 = 8624;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_46E8_case_default
        }
        case 0x1a:
        {
// switch_46E8_case_0x1a
            var_8 = 1;
            var_16 = 8648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = 8784;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8864;
            var_88 = 8856;
            var_96 = 8848;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_46E8_case_default
        }
        case 0x1b:
        {
// switch_46E8_case_0x1b
            var_8 = 3;
            var_16 = 8872;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = 9008;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9088;
            var_88 = 9080;
            var_96 = 9072;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_46E8_case_default
        }
        case 0x1c:
        {
// switch_46E8_case_0x1c
            var_8 = 2;
            var_16 = 9096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = 9232;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9312;
            var_88 = 9304;
            var_96 = 9296;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_46E8_case_default
        }
        case 0x1d:
        {
// switch_46E8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x1e:
        {
// switch_46E8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9456;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x1f:
        {
// switch_46E8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9592;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x20:
        {
// switch_46E8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9728;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x21:
        {
// switch_46E8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9848;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x22:
        {
// switch_46E8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9968;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x23:
        {
// switch_46E8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10104;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x24:
        {
// switch_46E8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10240;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x25:
        {
// switch_46E8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10376;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x26:
        {
// switch_46E8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10512;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x27:
        {
// switch_46E8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x28:
        {
// switch_46E8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
        case 0x29:
        {
// switch_46E8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10944;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_46E8_case_default
        }
    }
}
// fun_4D28
fun_4D28() {
    pri = arg_5;
    OP_JNZ lab_4D60
    var_8 = 0;
    pri = fun_10E0()
// lab_4D60
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4DB0
    OP_CONST_S -8, -1
// lab_4DB0
    pri = arg_1;
    switch (pri) {
// switch_6868
        case default:
        {
// switch_6868_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6D10
            var_520 = 30952;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BD0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6D10
            pri = 1;
            OP_JUMP lab_6D18
// lab_6D10
            pri = 0;
// lab_6D18
            OP_JZER lab_6D68
            var_8 = 64;
            var_16 = 31048;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6FC0
// lab_6D68
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6DD0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6DD0
            pri = 1;
            OP_JUMP lab_6DD8
// lab_6DD0
            pri = 0;
// lab_6DD8
            OP_JZER lab_6F60
            var_16 = 31224;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BD0(var_24, var_16)
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
            var_176 = 31328;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31344;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6FC0
// lab_6F60
            var_8 = 64;
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_6FC0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_7030
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_7030
            var_8 = 0;
            pri = fun_1120()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6868_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x1:
        {
// switch_6868_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x2:
        {
// switch_6868_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x3:
        {
// switch_6868_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x4:
        {
// switch_6868_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x5:
        {
// switch_6868_case_0x5
            var_8 = 2;
            var_16 = 21208;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E08(var_40)
            OP_JUMP switch_6868_case_default
        }
        case 0x6:
        {
// switch_6868_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x7:
        {
// switch_6868_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x8:
        {
// switch_6868_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x9:
        {
// switch_6868_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0xa:
        {
// switch_6868_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0xb:
        {
// switch_6868_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0xc:
        {
// switch_6868_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0xd:
        {
// switch_6868_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21856;
            var_72 = 21680;
            var_80 = 21496;
            var_88 = 21304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0xe:
        {
// switch_6868_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22512;
            var_72 = 22304;
            var_80 = 22088;
            var_88 = 21864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0xf:
        {
// switch_6868_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22904;
            var_72 = 22784;
            var_80 = 22656;
            var_88 = 22520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x10:
        {
// switch_6868_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23248;
            var_72 = 23144;
            var_80 = 23032;
            var_88 = 22912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x11:
        {
// switch_6868_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23592;
            var_72 = 23488;
            var_80 = 23376;
            var_88 = 23256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x12:
        {
// switch_6868_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x13:
        {
// switch_6868_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x14:
        {
// switch_6868_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24152;
            var_72 = 23976;
            var_80 = 23792;
            var_88 = 23600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x15:
        {
// switch_6868_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x16:
        {
// switch_6868_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x17:
        {
// switch_6868_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x18:
        {
// switch_6868_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x19:
        {
// switch_6868_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x1a:
        {
// switch_6868_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x1b:
        {
// switch_6868_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x1c:
        {
// switch_6868_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24544;
            var_72 = 24424;
            var_80 = 24296;
            var_88 = 24160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x1d:
        {
// switch_6868_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x1e:
        {
// switch_6868_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25008;
            var_72 = 24864;
            var_80 = 24712;
            var_88 = 24552;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x1f:
        {
// switch_6868_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x20:
        {
// switch_6868_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x21:
        {
// switch_6868_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x22:
        {
// switch_6868_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x23:
        {
// switch_6868_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x24:
        {
// switch_6868_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25264;
            var_80 = 25144;
            var_88 = 25016;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x25:
        {
// switch_6868_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25744;
            var_72 = 25632;
            var_80 = 25512;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x26:
        {
// switch_6868_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x27:
        {
// switch_6868_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x28:
        {
// switch_6868_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x29:
        {
// switch_6868_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26184;
            var_72 = 26048;
            var_80 = 25904;
            var_88 = 25752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x2a:
        {
// switch_6868_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26456;
            var_80 = 26328;
            var_88 = 26192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x2b:
        {
// switch_6868_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26992;
            var_72 = 26864;
            var_80 = 26728;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x2c:
        {
// switch_6868_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27296;
            var_80 = 27152;
            var_88 = 27000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x2d:
        {
// switch_6868_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x2e:
        {
// switch_6868_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27656;
            var_80 = 27552;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x2f:
        {
// switch_6868_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28144;
            var_72 = 28024;
            var_80 = 27896;
            var_88 = 27760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x30:
        {
// switch_6868_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28536;
            var_72 = 28416;
            var_80 = 28288;
            var_88 = 28152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x31:
        {
// switch_6868_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x32:
        {
// switch_6868_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x33:
        {
// switch_6868_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28928;
            var_72 = 28808;
            var_80 = 28680;
            var_88 = 28544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x34:
        {
// switch_6868_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29296;
            var_72 = 29184;
            var_80 = 29064;
            var_88 = 28936;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x35:
        {
// switch_6868_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29784;
            var_72 = 29632;
            var_80 = 29472;
            var_88 = 29304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x36:
        {
// switch_6868_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30152;
            var_72 = 30040;
            var_80 = 29920;
            var_88 = 29792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x37:
        {
// switch_6868_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x38:
        {
// switch_6868_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30520;
            var_72 = 30408;
            var_80 = 30288;
            var_88 = 30160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6868_case_default
        }
        case 0x39:
        {
// switch_6868_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x3a:
        {
// switch_6868_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x3b:
        {
// switch_6868_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x3c:
        {
// switch_6868_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x3d:
        {
// switch_6868_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
        case 0x3e:
        {
// switch_6868_case_0x3e
            var_8 = 4;
            var_16 = 30848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            OP_JUMP switch_6868_case_default
        }
    }
}
// fun_7060
fun_7060() {
    pri = arg_4;
    OP_JNZ lab_7098
    var_8 = 0;
    pri = fun_10E0()
// lab_7098
    pri = arg_1;
    switch (pri) {
// switch_8470
        case default:
        {
// switch_8470_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31920;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1B20(var_264)
            OP_JZER lab_8A38
            pri = arg_3;
            switch (pri) {
// switch_89E0
                case default:
                {
// switch_89E0_case_default
                    OP_JUMP lab_8CF0
// lab_8CF0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8D60
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8D60
                    var_8 = 0;
                    pri = fun_1120()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_89E0_case_0x1
                    var_8 = 32;
                    var_16 = 32072;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_89E0_case_default
                }
                case 0x2:
                {
// switch_89E0_case_0x2
                    var_8 = 32;
                    var_16 = 32176;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_89E0_case_default
                }
                case 0x3:
                {
// switch_89E0_case_0x3
                    var_8 = 32;
                    var_16 = 31976;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_89E0_case_default
                }
            }
// lab_8A38
            pri = arg_1;
            OP_JZER lab_8A88
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8A88
            pri = 0;
            OP_JUMP lab_8A90
// lab_8A88
            pri = 1;
// lab_8A90
            OP_JZER lab_8AF8
            var_8 = 32272;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BD0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8AF8
            pri = 1;
            OP_JUMP lab_8B00
// lab_8AF8
            pri = 0;
// lab_8B00
            OP_JZER lab_8B50
            var_8 = 32;
            var_16 = 32368;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8CF0
// lab_8B50
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8BB8
            var_8 = 32;
            var_16 = 32528;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_8CF0
// lab_8BB8
            var_16 = 32648;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BD0(var_24, var_16)
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
            var_176 = 32752;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32768;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_8470_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x1:
        {
// switch_8470_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x2:
        {
// switch_8470_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x3:
        {
// switch_8470_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x4:
        {
// switch_8470_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x5:
        {
// switch_8470_case_0x5
            var_8 = 1;
            var_16 = 31400;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E08(var_40)
            OP_JUMP switch_8470_case_default
        }
        case 0x6:
        {
// switch_8470_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x7:
        {
// switch_8470_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x8:
        {
// switch_8470_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x9:
        {
// switch_8470_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0xa:
        {
// switch_8470_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0xb:
        {
// switch_8470_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0xc:
        {
// switch_8470_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0xd:
        {
// switch_8470_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0xe:
        {
// switch_8470_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0xf:
        {
// switch_8470_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x10:
        {
// switch_8470_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x11:
        {
// switch_8470_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x12:
        {
// switch_8470_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x13:
        {
// switch_8470_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x14:
        {
// switch_8470_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x15:
        {
// switch_8470_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x16:
        {
// switch_8470_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x17:
        {
// switch_8470_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x18:
        {
// switch_8470_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x19:
        {
// switch_8470_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x1a:
        {
// switch_8470_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x1b:
        {
// switch_8470_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x1c:
        {
// switch_8470_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x1d:
        {
// switch_8470_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x1e:
        {
// switch_8470_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x1f:
        {
// switch_8470_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x20:
        {
// switch_8470_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x21:
        {
// switch_8470_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x22:
        {
// switch_8470_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x23:
        {
// switch_8470_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x24:
        {
// switch_8470_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x25:
        {
// switch_8470_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x26:
        {
// switch_8470_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x27:
        {
// switch_8470_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x28:
        {
// switch_8470_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x29:
        {
// switch_8470_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x2a:
        {
// switch_8470_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x2b:
        {
// switch_8470_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x2c:
        {
// switch_8470_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x2d:
        {
// switch_8470_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x2e:
        {
// switch_8470_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x2f:
        {
// switch_8470_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x30:
        {
// switch_8470_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x31:
        {
// switch_8470_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x32:
        {
// switch_8470_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x33:
        {
// switch_8470_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x34:
        {
// switch_8470_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x35:
        {
// switch_8470_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x36:
        {
// switch_8470_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x37:
        {
// switch_8470_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x38:
        {
// switch_8470_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x39:
        {
// switch_8470_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x3a:
        {
// switch_8470_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x3b:
        {
// switch_8470_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x3c:
        {
// switch_8470_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31496;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x3d:
        {
// switch_8470_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31672;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
        case 0x3e:
        {
// switch_8470_case_0x3e
            var_8 = 3;
            var_16 = 31816;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            OP_JUMP switch_8470_case_default
        }
    }
}
// fun_8D90
fun_8D90() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8E28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_3148(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8E28
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8F80
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8EE8
    var_24 = 32816;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8EE8
    pri = 1;
    OP_JUMP lab_8EF0
// lab_8F80
    pri = 0;
    return pri;
// lab_8EE8
    pri = 0;
// lab_8EF0
    OP_JZER lab_8F80
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_3148(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8F90
fun_8F90() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9310(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8FF8
fun_8FF8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9068
    OP_CONST_S -8, 1
// lab_9068
    pri = arg_0;
    OP_JNZ lab_9088
    OP_ZERO_P_S -8
// lab_9088
    pri = var_8;
    OP_JZER lab_9110
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_9110
    pri = 0;
    return pri;
}
// fun_9128
fun_9128() {
    var_8 = 32920;
    var_16 = 8;
    pri = fun_2AE0(var_8)
    var_24 = 0;
    pri = fun_2B18()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2C48(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2D88(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_9240
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_9240
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8D90(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_8F90(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2BB8()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_3110(var_112)
    pri = 0;
    return pri;
}
// fun_9310
fun_9310() {
    var_8 = 33080;
    var_16 = 8;
    pri = fun_2AE0(var_8)
    var_24 = 0;
    pri = fun_2B18()
    pri = arg_3;
    OP_JNZ lab_9430
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_93F8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_94A0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9420
// lab_9430
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9640(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_93F8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9568(var_16, var_8)
// lab_9420
    OP_JUMP lab_9478
// lab_9478
    var_8 = 0;
    pri = fun_2BB8()
    pri = 0;
    return pri;
}
// fun_94A0
fun_94A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9640(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9550
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9550
    pri = 0;
    return pri;
}
// fun_9568
fun_9568() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2C98(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_27A0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2898(var_72)
    var_88 = 0;
    pri = fun_2958()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2C48(var_96)
    pri = 0;
    return pri;
}
// fun_9640
fun_9640() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9688
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9948(var_8)
// lab_9688
    pri = arg_4;
    OP_JNZ lab_96F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2C48(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2C98(var_40, var_32, var_24)
// lab_96F0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9790
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2CE8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_27A0(var_56, var_48, var_40)
    OP_JUMP lab_9880
// lab_9790
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9848
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9848
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9848
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_27A0(var_24, var_16, var_8)
// lab_9880
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_98C0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
// lab_98C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_2898(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9B50(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8FF8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9948
fun_9948() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_99A8
    var_16 = 33240;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_99A8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9AE8
        case default:
        {
// switch_9AE8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9AD8
            var_16 = 33784;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9AD8
            OP_JUMP lab_9B20
// lab_9B20
            var_8 = 34000;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9AE8_case_0x1
            var_8 = 33456;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9B20
        }
        case 0x2:
        {
// switch_9AE8_case_0x2
            var_8 = 33584;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9B20
        }
    }
}
// fun_9B50
fun_9B50() {
    pri = arg_2;
    OP_JNZ lab_9C38
    var_8 = 0;
    var_16 = 8;
    pri = fun_2C48(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2C98(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2D38(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9C38
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_27A0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2898(var_40)
    var_56 = 0;
    pri = fun_2958()
    pri = 0;
    return pri;
}
// fun_9CB0
fun_9CB0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9D48
    var_8 = 1;
    var_16 = 0;
    var_24 = 34184;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1DC8()
// lab_9D48
    pri = arg_4;
    OP_JZER lab_9D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_1DF0(var_8)
// lab_9D80
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9DD8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9DD8
    pri = 0;
    OP_JUMP lab_9DE0
// lab_9DD8
    pri = 1;
// lab_9DE0
    OP_JZER lab_9EA8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9EA8
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_9E80
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1D08(var_32, var_24)
    OP_JUMP lab_9EA8
// lab_9EA8
    pri = arg_2;
    OP_JZER lab_9F80
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_9F50
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1688(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0818(var_40)
    OP_JUMP lab_9F80
// lab_9F80
    pri = arg_3;
    OP_JZER lab_9FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1D90(var_8)
// lab_9FB8
    pri = 0;
    return pri;
// lab_9F50
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1688(var_16, var_8)
// lab_9E80
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1D08(var_16, var_8)
}
// fun_9FC8
fun_9FC8() {
    pri = g_mode;
    switch (pri) {
// switch_A088
        case default:
        {
// switch_A088_case_default
            pri = CommandNOP()
            OP_JUMP lab_A0D0
// lab_A0D0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_A088_case_0x0
            var_8 = 0;
            pri = fun_A0E0()
            OP_JUMP lab_A0D0
        }
        case 0xd8d5e17f7b52774:
        {
// switch_A088_case_0xd8d5e17f7b52774
            var_8 = 0;
            pri = fun_F2B0()
            OP_JUMP lab_A0D0
        }
        case 0x2c9fa81b831b5e20:
        {
// switch_A088_case_0x2c9fa81b831b5e20
            var_8 = 0;
            pri = fun_F1C0()
            OP_JUMP lab_A0D0
        }
    }
}
// fun_A0E0
fun_A0E0() {
    pri = 0;
    return pri;
}
// fun_A0F8
fun_A0F8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9CB0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A150
fun_A150() {
    var_8 = 6149361526766711478;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = 398139449972301239;
    var_32 = 8;
    pri = fun_0570(var_24)
    var_40 = -5633339793993941687;
    var_48 = 8;
    pri = fun_0570(var_40)
    var_56 = 2649506633853810915;
    var_64 = 8;
    pri = fun_0570(var_56)
    pri = 0;
    return pri;
}
// fun_A208
fun_A208() {
    var_8 = 0;
    pri = fun_05A0()
    pri = 0;
    return pri;
}
// fun_A238
fun_A238() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07D8(var_16, var_8)
    var_32 = 1;
    var_40 = 2649506633853810915;
    var_48 = 16;
    pri = fun_07D8(var_40, var_32)
    var_56 = 1;
    var_64 = 6149361526766711478;
    var_72 = 16;
    pri = fun_07D8(var_64, var_56)
    var_80 = 1;
    var_88 = 398139449972301239;
    var_96 = 16;
    pri = fun_07D8(var_88, var_80)
    var_104 = 1;
    var_112 = -5633339793993941687;
    var_120 = 16;
    pri = fun_07D8(var_112, var_104)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C 4640537203540230144, 4658025375784658534, 4657556104221923738, 8802641224559852288
    var_144 = 48;
    pri = fun_0748(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = 1;
    OP_PUSH4_C 4640537203540230144, 4658199758328823808, 4657350935352180736, 2649506633853810915
    var_168 = 48;
    pri = fun_0748(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 1;
    var_184 = 1;
    OP_PUSH4_C 4640537203540230144, 4658217350514868224, 4657740162468413440, 6149361526766711478
    var_192 = 48;
    pri = fun_0748(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4656805357682478285, 4657555444514947072, 398139449972301239
    var_216 = 48;
    pri = fun_0748(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH4_C 4631769258015693210, 4656666159510401843, 4657094969045234483, -5633339793993941687
    var_240 = 48;
    pri = fun_0748(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 0;
    var_256 = -5633339793993941687;
    var_264 = 16;
    pri = fun_07A0(var_256, var_248)
    var_272 = 0;
    var_280 = 4631952216750555136;
    var_288 = 0;
    OP_PUSH5_C 4656861124912239084, 4646750587729257431, 4657523580667974124, 4658354437624619336, 4644800493906233917
    var_296 = 4657637468082379162;
    var_304 = 1;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 0;
    pri = fun_3080()
    var_320 = 34232;
    var_328 = 8;
    var_336 = 16;
    pri = fun_02D8(var_328, var_320)
    var_344 = 0;
    pri = fun_03A8()
    var_352 = 0;
    pri = fun_2BE8()
    var_360 = 1;
    var_368 = 8;
    pri = fun_0090(var_360)
    var_376 = 1;
    var_384 = 1;
    var_392 = -1;
    var_400 = -1;
    var_408 = 0;
    var_416 = 2;
    var_424 = 398139449972301239;
    var_432 = 56;
    pri = fun_4D28(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 0;
    var_448 = 4631121865569258701;
    var_456 = 3;
    OP_PUSH5_C 4655955215291881882, -4588697957079428628, 4657461348309842002, 4657717776411671921, 4641617011919636398
    var_464 = 4657593245724710011;
    var_472 = 200;
    pri = EvCameraMove(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 35;
    var_488 = 8;
    pri = fun_0090(var_480)
    var_496 = 1;
    var_504 = 3;
    var_512 = 0;
    var_520 = 2;
    var_528 = 398139449972301239;
    var_536 = 40;
    pri = fun_7060(var_528, var_520, var_512, var_504, var_496)
    var_544 = 55;
    var_552 = 8;
    pri = fun_0090(var_544)
    var_560 = 398139449972301239;
    var_568 = 8;
    pri = fun_0C08(var_560)
    var_576 = 1;
    var_584 = 0;
    var_592 = 0;
    OP_PUSH2_C 4607182418800017408, 398139449972301239
    var_600 = 0;
    var_608 = 48;
    pri = fun_1980(var_600, var_592, var_584, var_576, var_568, var_560)
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    var_640 = 0;
    OP_PUSH2_C 8802641224559852288, 398139449972301239
    var_648 = 48;
    pri = fun_09D8(var_640, var_632, var_624, var_616, var_608, var_600)
    var_656 = 1;
    var_664 = 0;
    OP_PUSH5_C 4641240890982006784, 398139449972301239, 4657189746947548774, 4657556104221923738, 4611686018427387904
    var_672 = 8802641224559852288;
    var_680 = 64;
    pri = fun_08C8(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_688 = 1;
    var_696 = 0;
    OP_PUSH5_C 4641240890982006784, 398139449972301239, 4657302556840558592, 4657740162468413440, 4611686018427387904
    var_704 = 6149361526766711478;
    var_712 = 64;
    pri = fun_08C8(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_720 = 1;
    var_728 = 0;
    OP_PUSH5_C 4641240890982006784, 398139449972301239, 4657284964654514176, 4657350935352180736, 4611686018427387904
    var_736 = 2649506633853810915;
    var_744 = 64;
    pri = fun_08C8(var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_752 = 398139449972301239;
    var_760 = 8;
    pri = fun_0A30(var_752)
    var_768 = 4;
    var_776 = 4;
    var_784 = 398139449972301239;
    var_792 = 24;
    pri = fun_17B8(var_784, var_776, var_768)
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 100;
    var_832 = -1;
    OP_PUSH2_C -8498927338892501992, 398139449972301239
    var_840 = 56;
    pri = fun_26A0(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 8802641224559852288;
    var_856 = 8;
    pri = fun_0A30(var_848)
    var_864 = 2649506633853810915;
    var_872 = 8;
    pri = fun_0A30(var_864)
    var_880 = 6149361526766711478;
    var_888 = 8;
    pri = fun_0A30(var_880)
    var_896 = 1;
    var_904 = 8;
    pri = fun_2898(var_896)
    var_912 = 0;
    pri = fun_2958()
    var_920 = 4;
    var_928 = 4;
    var_936 = 6149361526766711478;
    var_944 = 24;
    pri = fun_17B8(var_936, var_928, var_920)
    var_952 = 0;
    var_960 = 4626688634686065869;
    var_968 = 0;
    OP_PUSH5_C 4657457016234028564, 4628878510004874772, 4657349132153111183, 4655757786983998423, 4643562707696148808
    var_976 = 4658074523954420122;
    var_984 = 1;
    pri = EvCameraMove(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_992 = 0;
    pri = fun_3080()
    var_1000 = 0;
    var_1008 = 4626688634686065869;
    var_1016 = 3;
    OP_PUSH5_C 4657421348076823511, 4628878510004874772, 4657299961993117041, 4655981779492808950, 4643565346524055470
    var_1024 = 4658229203250215649;
    var_1032 = 400;
    pri = EvCameraMove(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1040 = 1;
    var_1048 = 1;
    var_1056 = -1;
    var_1064 = -1;
    var_1072 = 0;
    var_1080 = 22;
    var_1088 = 6149361526766711478;
    var_1096 = 56;
    pri = fun_4D28(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 0;
    var_1112 = 3;
    var_1120 = 0;
    var_1128 = 100;
    var_1136 = -1;
    OP_PUSH2_C 7026099634937771055, 6149361526766711478
    var_1144 = 56;
    pri = fun_26A0(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1152 = 1;
    var_1160 = 8;
    pri = fun_2898(var_1152)
    var_1168 = 0;
    pri = fun_2958()
    var_1176 = 2;
    var_1184 = 2;
    var_1192 = 398139449972301239;
    var_1200 = 24;
    pri = fun_17B8(var_1192, var_1184, var_1176)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    var_1232 = -1;
    var_1240 = 0;
    var_1248 = 1;
    var_1256 = 398139449972301239;
    var_1264 = 56;
    pri = fun_4D28(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 0;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 100;
    var_1304 = -1;
    OP_PUSH2_C -8498924040357617359, 398139449972301239
    var_1312 = 56;
    pri = fun_26A0(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1320 = 1;
    var_1328 = 8;
    pri = fun_2898(var_1320)
    var_1336 = 0;
    pri = fun_2958()
    var_1344 = 1;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 1;
    var_1376 = 398139449972301239;
    var_1384 = 40;
    pri = fun_7060(var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1392 = 1;
    var_1400 = 3;
    var_1408 = 0;
    var_1416 = 22;
    var_1424 = 6149361526766711478;
    var_1432 = 40;
    pri = fun_7060(var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1440 = 0;
    var_1448 = 3;
    var_1456 = 0;
    var_1464 = 100;
    var_1472 = -1;
    OP_PUSH2_C 7026100734449399266, 6149361526766711478
    var_1480 = 56;
    pri = fun_26A0(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1488 = 398139449972301239;
    var_1496 = 8;
    pri = fun_0C08(var_1488)
    var_1504 = 6149361526766711478;
    var_1512 = 8;
    pri = fun_0C08(var_1504)
    var_1520 = 1;
    var_1528 = 8;
    pri = fun_2898(var_1520)
    var_1536 = 0;
    pri = fun_2958()
    var_1544 = 34280;
    pri = SoundPostEvent(var_1544)
    var_1552 = 8;
    var_1560 = 398139449972301239;
    var_1568 = 16;
    pri = fun_16C8(var_1560, var_1552)
    var_1576 = 398139449972301239;
    var_1584 = 8;
    pri = fun_1780(var_1576)
    OP_PUSH2_C 4620468037700760371, 4628996729495093248
    var_1592 = 0;
    OP_PUSH5_C 4654835120806433915, 4642419215603261768, 4656769425642482565, 4657064314661052088, 4636476223313737155
    var_1600 = 4657734203115390894;
    var_1608 = 1;
    pri = EvCameraMove(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1616 = 0;
    pri = fun_3080()
    OP_PUSH2_C 4620468037700760371, 4628996729495093248
    var_1624 = 3;
    OP_PUSH5_C 4654861201222244762, 4642419215603261768, 4656752053358763704, 4657077464820120289, 4636476927001178931
    var_1632 = 4657716698890276700;
    var_1640 = 140;
    pri = EvCameraMove(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1648 = 1;
    var_1656 = 1;
    var_1664 = -1;
    var_1672 = -1;
    var_1680 = 0;
    var_1688 = 6;
    var_1696 = 398139449972301239;
    var_1704 = 56;
    pri = fun_4D28(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1712 = 0;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 100;
    var_1744 = -1;
    OP_PUSH2_C -8498925139869245570, 398139449972301239
    var_1752 = 56;
    pri = fun_26A0(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1760 = 1;
    var_1768 = 8;
    pri = fun_2898(var_1760)
    var_1776 = 0;
    pri = fun_2958()
    var_1784 = 6;
    var_1792 = 6;
    var_1800 = 6149361526766711478;
    var_1808 = 24;
    pri = fun_17B8(var_1800, var_1792, var_1784)
    var_1816 = 0;
    var_1824 = 4627617502109211034;
    var_1832 = 0;
    OP_PUSH5_C 4656384904436016742, 4636828770722067251, 4657257256961494221, 4657952544134434652, 4637275612247595418
    var_1840 = 4657844286219563827;
    var_1848 = 1;
    pri = EvCameraMove(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 0;
    pri = fun_3080()
    var_1864 = 1;
    var_1872 = -1;
    var_1880 = -1;
    var_1888 = 3;
    var_1896 = 0;
    var_1904 = 1;
    var_1912 = 6149361526766711478;
    var_1920 = 56;
    pri = fun_3148(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1928 = 0;
    var_1936 = 3;
    var_1944 = 0;
    var_1952 = 100;
    var_1960 = -1;
    OP_PUSH2_C 7026101833961027477, 6149361526766711478
    var_1968 = 56;
    pri = fun_26A0(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1976 = 6149361526766711478;
    var_1984 = 8;
    pri = fun_0C08(var_1976)
    var_1992 = 1;
    var_2000 = 8;
    pri = fun_2898(var_1992)
    var_2008 = 0;
    pri = fun_2958()
    var_2016 = 7;
    var_2024 = 7;
    var_2032 = 2649506633853810915;
    var_2040 = 24;
    pri = fun_17B8(var_2032, var_2024, var_2016)
    var_2048 = 0;
    var_2056 = 4631121865569258701;
    var_2064 = 0;
    OP_PUSH5_C 4656327817792302612, -4593860208152302060, 4657245866021030461, 4657790564081430692, 4642619766524168110
    var_2072 = 4657834588527006843;
    var_2080 = 1;
    pri = EvCameraMove(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2088 = 0;
    pri = fun_3080()
    var_2096 = 0;
    var_2104 = 0;
    var_2112 = 0;
    var_2120 = 0;
    pri = float(var_2120)
    var_2128 = pri;
    var_2136 = 2649506633853810915;
    var_2144 = 40;
    pri = fun_0988(var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2152 = 2649506633853810915;
    var_2160 = 8;
    pri = fun_0A30(var_2152)
    var_2168 = 1;
    var_2176 = 1;
    var_2184 = -1;
    var_2192 = -1;
    var_2200 = 0;
    var_2208 = 6;
    var_2216 = 2649506633853810915;
    var_2224 = 56;
    pri = fun_4D28(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2232 = 0;
    var_2240 = 3;
    var_2248 = 0;
    var_2256 = 100;
    var_2264 = -1;
    OP_PUSH2_C 6410904707547284434, 2649506633853810915
    var_2272 = 56;
    pri = fun_26A0(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2280 = 1;
    var_2288 = 8;
    pri = fun_2898(var_2280)
    var_2296 = 0;
    pri = fun_2958()
    var_2304 = 1;
    var_2312 = 3;
    var_2320 = 0;
    var_2328 = 6;
    var_2336 = 2649506633853810915;
    var_2344 = 40;
    pri = fun_7060(var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2352 = 398139449972301239;
    var_2360 = 8;
    pri = fun_1820(var_2352)
    var_2368 = 6149361526766711478;
    var_2376 = 8;
    pri = fun_1820(var_2368)
    var_2384 = 2649506633853810915;
    var_2392 = 8;
    pri = fun_1820(var_2384)
    var_2400 = 1;
    var_2408 = 3;
    var_2416 = 0;
    var_2424 = 6;
    var_2432 = 398139449972301239;
    var_2440 = 40;
    pri = fun_7060(var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2448 = 0;
    var_2456 = 4631121865569258701;
    var_2464 = 0;
    OP_PUSH5_C 4654880332724568064, 4637189762379698668, 4656673416287145165, 4656981829298736333, 4638989443012042424
    var_2472 = 4657648551159587144;
    var_2480 = 1;
    pri = EvCameraMove(var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2488 = 0;
    pri = fun_3080()
    var_2496 = 1;
    var_2504 = 1;
    OP_PUSH4_C 4639727962982187008, 4657287163677769728, 4657350935352180736, 2649506633853810915
    var_2512 = 48;
    pri = fun_0748(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2520 = 0;
    var_2528 = 3;
    var_2536 = 0;
    var_2544 = 100;
    var_2552 = -1;
    OP_PUSH2_C -8498921841334360937, 398139449972301239
    var_2560 = 56;
    pri = fun_26A0(var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2568 = 398139449972301239;
    var_2576 = 8;
    pri = fun_0C08(var_2568)
    var_2584 = 2649506633853810915;
    var_2592 = 8;
    pri = fun_0C08(var_2584)
    var_2600 = 1;
    var_2608 = 8;
    pri = fun_2898(var_2600)
    var_2616 = 0;
    pri = fun_2958()
    var_2624 = 6;
    var_2632 = 398139449972301239;
    var_2640 = 16;
    pri = fun_16C8(var_2632, var_2624)
    var_2648 = 1;
    var_2656 = -1;
    var_2664 = -1;
    var_2672 = 3;
    var_2680 = 0;
    var_2688 = 1;
    var_2696 = 398139449972301239;
    var_2704 = 56;
    pri = fun_3148(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2712 = 0;
    var_2720 = 4631121865569258701;
    var_2728 = 3;
    OP_PUSH5_C 4655555960629603860, 4635959716731473101, 4656775187083412111, 4657319599270789120, 4638042631559131955
    var_2736 = 4657726110709810463;
    var_2744 = 30;
    pri = EvCameraMove(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672)
    var_2752 = 0;
    var_2760 = 3;
    var_2768 = 0;
    var_2776 = 100;
    var_2784 = -1;
    OP_PUSH2_C -8498922940845989148, 398139449972301239
    var_2792 = 56;
    pri = fun_26A0(var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736)
    var_2800 = 398139449972301239;
    var_2808 = 8;
    pri = fun_0C08(var_2800)
    var_2816 = 1;
    var_2824 = 8;
    pri = fun_2898(var_2816)
    var_2832 = 0;
    pri = fun_2958()
    var_2840 = 3;
    var_2848 = 3;
    var_2856 = 6149361526766711478;
    var_2864 = 24;
    pri = fun_17B8(var_2856, var_2848, var_2840)
    var_2872 = 0;
    var_2880 = 4631121865569258701;
    var_2888 = 0;
    OP_PUSH5_C 4655652057945871483, -4591210121246571233, 4657541678629367316, 4657613322807033201, 4640739865523461816
    var_2896 = 4657560612219597619;
    var_2904 = 1;
    pri = EvCameraMove(var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832)
    var_2912 = 0;
    pri = fun_3080()
    var_2920 = 1;
    var_2928 = -1;
    var_2936 = -1;
    var_2944 = 3;
    var_2952 = 0;
    var_2960 = 1;
    var_2968 = 6149361526766711478;
    var_2976 = 56;
    pri = fun_3148(var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920)
    var_2984 = 0;
    var_2992 = 3;
    var_3000 = 0;
    var_3008 = 100;
    var_3016 = -1;
    OP_PUSH2_C 7026094137379630000, 6149361526766711478
    var_3024 = 56;
    pri = fun_26A0(var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968)
    var_3032 = 6149361526766711478;
    var_3040 = 8;
    pri = fun_0C08(var_3032)
    var_3048 = 1;
    var_3056 = 8;
    pri = fun_2898(var_3048)
    var_3064 = 0;
    pri = fun_2958()
    var_3072 = 6149361526766711478;
    var_3080 = 8;
    pri = fun_1820(var_3072)
    var_3088 = 398139449972301239;
    var_3096 = 8;
    pri = fun_1708(var_3088)
    var_3104 = 1;
    var_3112 = -5633339793993941687;
    var_3120 = 16;
    pri = fun_07A0(var_3112, var_3104)
    var_3128 = 1;
    var_3136 = 0;
    OP_PUSH5_C 4641240890982006784, 6149361526766711478, 4656902334608048128, 4657315750980091904, 4607182418800017408
    var_3144 = -5633339793993941687;
    var_3152 = 64;
    pri = fun_08C8(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3160 = 0;
    var_3168 = 4628011567076605952;
    var_3176 = 0;
    OP_PUSH5_C 4655887749258401546, -4583408690423314514, 4655321500770096906, 4656828359465731359, 4633096412530883953
    var_3184 = 4657361358722412052;
    var_3192 = 1;
    pri = EvCameraMove(var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120)
    var_3200 = 0;
    pri = fun_3080()
    var_3208 = 0;
    var_3216 = 4628011567076605952;
    var_3224 = 3;
    OP_PUSH5_C 4656881927672236605, 4620957804160236913, 4656976815525713674, 4657405669041011425, 4642241182680492278
    var_3232 = 4658316218600437842;
    var_3240 = 120;
    pri = EvCameraMove(var_3240, var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168)
    var_3248 = 1;
    var_3256 = 1;
    var_3264 = 30;
    OP_PUSH2_C -5633339793993941687, 398139449972301239
    var_3272 = 40;
    pri = fun_1160(var_3264, var_3256, var_3248, var_3240, var_3232)
    var_3280 = 0;
    var_3288 = 0;
    var_3296 = 0;
    var_3304 = 0;
    OP_PUSH2_C -5633339793993941687, 8802641224559852288
    var_3312 = 48;
    pri = fun_09D8(var_3304, var_3296, var_3288, var_3280, var_3272, var_3264)
    var_3320 = 0;
    var_3328 = 0;
    var_3336 = 0;
    var_3344 = 0;
    OP_PUSH2_C -5633339793993941687, 6149361526766711478
    var_3352 = 48;
    pri = fun_09D8(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304)
    var_3360 = 0;
    var_3368 = 0;
    var_3376 = 0;
    var_3384 = 0;
    OP_PUSH2_C -5633339793993941687, 2649506633853810915
    var_3392 = 48;
    pri = fun_09D8(var_3384, var_3376, var_3368, var_3360, var_3352, var_3344)
    var_3400 = 0;
    var_3408 = 3;
    var_3416 = 0;
    var_3424 = 100;
    var_3432 = -1;
    OP_PUSH2_C 4684764650326579323, -5633339793993941687
    var_3440 = 56;
    pri = fun_26A0(var_3432, var_3424, var_3416, var_3408, var_3400, var_3392, var_3384)
    var_3448 = -5633339793993941687;
    var_3456 = 8;
    pri = fun_0A30(var_3448)
    var_3464 = 8802641224559852288;
    var_3472 = 8;
    pri = fun_0A30(var_3464)
    var_3480 = 2649506633853810915;
    var_3488 = 8;
    pri = fun_0A30(var_3480)
    var_3496 = 6149361526766711478;
    var_3504 = 8;
    pri = fun_0A30(var_3496)
    var_3512 = 1;
    var_3520 = 8;
    pri = fun_2898(var_3512)
    var_3528 = 0;
    pri = fun_2958()
    var_3536 = 0;
    var_3544 = 4628011567076605952;
    var_3552 = 0;
    OP_PUSH5_C 4656348048806253691, -4592620310879891620, 4655802515117016351, 4657063105198261535, 4639923236247280026
    var_3560 = 4657613586689823867;
    var_3568 = 1;
    pri = EvCameraMove(var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496)
    var_3576 = 0;
    pri = fun_3080()
    var_3584 = 0;
    var_3592 = 4628011567076605952;
    var_3600 = 3;
    OP_PUSH5_C 4656319769367187292, -4592620310879891620, 4655813554213759222, 4657048943488495780, 4639920421497512919
    var_3608 = 4657619194199125524;
    var_3616 = 120;
    pri = EvCameraMove(var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552, var_3544)
    var_3624 = 2;
    var_3632 = 2;
    var_3640 = -5633339793993941687;
    var_3648 = 24;
    pri = fun_17B8(var_3640, var_3632, var_3624)
    var_3656 = 0;
    var_3664 = 3;
    var_3672 = 0;
    var_3680 = 100;
    var_3688 = -1;
    OP_PUSH2_C 4684765749838207534, -5633339793993941687
    var_3696 = 56;
    pri = fun_26A0(var_3688, var_3680, var_3672, var_3664, var_3656, var_3648, var_3640)
    var_3704 = 8802641224559852288;
    var_3712 = 8;
    pri = fun_0A30(var_3704)
    var_3720 = 6149361526766711478;
    var_3728 = 8;
    pri = fun_0A30(var_3720)
    var_3736 = 2649506633853810915;
    var_3744 = 8;
    pri = fun_0A30(var_3736)
    var_3752 = 1;
    var_3760 = 8;
    pri = fun_2898(var_3752)
    var_3768 = 0;
    pri = fun_2958()
    var_3776 = 5;
    var_3784 = 5;
    var_3792 = -5633339793993941687;
    var_3800 = 24;
    pri = fun_17B8(var_3792, var_3784, var_3776)
    var_3808 = 0;
    var_3816 = 4628011567076605952;
    var_3824 = 0;
    OP_PUSH5_C 4656824577145731809, 4614996164153505219, 4656874429002935173, 4657352628600087511, 4641408720436870513
    var_3832 = 4658226256559053210;
    var_3840 = 1;
    pri = EvCameraMove(var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776, var_3768)
    var_3848 = 0;
    pri = fun_3080()
    var_3856 = 1;
    var_3864 = 1;
    var_3872 = -1;
    var_3880 = -1;
    var_3888 = 0;
    var_3896 = 4;
    var_3904 = -5633339793993941687;
    var_3912 = 56;
    pri = fun_4D28(var_3904, var_3896, var_3888, var_3880, var_3872, var_3864, var_3856)
    var_3920 = 0;
    var_3928 = 3;
    var_3936 = 0;
    var_3944 = 100;
    var_3952 = -1;
    OP_PUSH2_C 4684766849349835745, -5633339793993941687
    var_3960 = 56;
    pri = fun_26A0(var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904)
    var_3968 = 1;
    var_3976 = 8;
    pri = fun_2898(var_3968)
    var_3984 = 0;
    pri = fun_2958()
    var_3992 = 7;
    var_4000 = 8;
    var_4008 = 398139449972301239;
    var_4016 = 24;
    pri = fun_17B8(var_4008, var_4000, var_3992)
    var_4024 = 1;
    var_4032 = 1;
    var_4040 = -1;
    var_4048 = -1;
    var_4056 = 0;
    var_4064 = 9;
    var_4072 = 398139449972301239;
    var_4080 = 56;
    pri = fun_4D28(var_4072, var_4064, var_4056, var_4048, var_4040, var_4032, var_4024)
    var_4088 = 0;
    var_4096 = 3;
    var_4104 = 0;
    var_4112 = 100;
    var_4120 = -1;
    OP_PUSH2_C -8498919642311104515, 398139449972301239
    var_4128 = 56;
    pri = fun_26A0(var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072)
    var_4136 = 1;
    var_4144 = 8;
    pri = fun_2898(var_4136)
    var_4152 = 0;
    pri = fun_2958()
    var_4160 = -5633339793993941687;
    var_4168 = 8;
    pri = fun_1820(var_4160)
    var_4176 = 1;
    var_4184 = 3;
    var_4192 = 0;
    var_4200 = 9;
    var_4208 = 398139449972301239;
    var_4216 = 40;
    pri = fun_7060(var_4208, var_4200, var_4192, var_4184, var_4176)
    var_4224 = 1;
    var_4232 = 3;
    var_4240 = 0;
    var_4248 = 4;
    var_4256 = -5633339793993941687;
    var_4264 = 40;
    pri = fun_7060(var_4256, var_4248, var_4240, var_4232, var_4224)
    var_4272 = 1;
    var_4280 = -1;
    var_4288 = -1;
    var_4296 = 3;
    var_4304 = 0;
    var_4312 = 0;
    var_4320 = 2649506633853810915;
    var_4328 = 56;
    pri = fun_3148(var_4320, var_4312, var_4304, var_4296, var_4288, var_4280, var_4272)
    var_4336 = 0;
    var_4344 = 3;
    var_4352 = 0;
    var_4360 = 100;
    var_4368 = -1;
    OP_PUSH2_C 6410903608035656223, 2649506633853810915
    var_4376 = 56;
    pri = fun_26A0(var_4368, var_4360, var_4352, var_4344, var_4336, var_4328, var_4320)
    var_4384 = -5633339793993941687;
    var_4392 = 8;
    pri = fun_0C08(var_4384)
    var_4400 = 398139449972301239;
    var_4408 = 8;
    pri = fun_0C08(var_4400)
    var_4416 = 2649506633853810915;
    var_4424 = 8;
    pri = fun_0C08(var_4416)
    var_4432 = 1;
    var_4440 = 8;
    pri = fun_2898(var_4432)
    var_4448 = 0;
    pri = fun_2958()
    var_4456 = 398139449972301239;
    var_4464 = 8;
    pri = fun_1820(var_4456)
    var_4472 = -1;
    var_4480 = 398139449972301239;
    var_4488 = 16;
    pri = fun_1688(var_4480, var_4472)
    var_4496 = 0;
    var_4504 = 0;
    var_4512 = 0;
    var_4520 = 0;
    OP_PUSH2_C 398139449972301239, 2649506633853810915
    var_4528 = 48;
    pri = fun_09D8(var_4520, var_4512, var_4504, var_4496, var_4488, var_4480)
    var_4536 = 0;
    var_4544 = 0;
    var_4552 = 0;
    var_4560 = 0;
    OP_PUSH2_C 398139449972301239, 6149361526766711478
    var_4568 = 48;
    pri = fun_09D8(var_4560, var_4552, var_4544, var_4536, var_4528, var_4520)
    var_4576 = 0;
    var_4584 = 0;
    var_4592 = 0;
    var_4600 = 0;
    OP_PUSH2_C 398139449972301239, 8802641224559852288
    var_4608 = 48;
    pri = fun_09D8(var_4600, var_4592, var_4584, var_4576, var_4568, var_4560)
    var_4616 = 1;
    var_4624 = -1;
    var_4632 = -1;
    var_4640 = 3;
    var_4648 = 0;
    var_4656 = 1;
    var_4664 = 398139449972301239;
    var_4672 = 56;
    pri = fun_3148(var_4664, var_4656, var_4648, var_4640, var_4632, var_4624, var_4616)
    var_4680 = 0;
    var_4688 = 3;
    var_4696 = 0;
    var_4704 = 100;
    var_4712 = -1;
    OP_PUSH2_C -8498920741822732726, 398139449972301239
    var_4720 = 56;
    pri = fun_26A0(var_4712, var_4704, var_4696, var_4688, var_4680, var_4672, var_4664)
    var_4728 = 1;
    var_4736 = 8;
    pri = fun_2898(var_4728)
    var_4744 = 0;
    var_4752 = -986911069854201671;
    var_4760 = 0;
    var_4768 = 24;
    pri = fun_2988(var_4760, var_4752, var_4744)
    var_4776 = 0;
    var_4784 = -986914368389086304;
    var_4792 = 1;
    var_4800 = 24;
    pri = fun_2988(var_4792, var_4784, var_4776)
    var_4816 = 0;
    var_4824 = 0;
    var_4832 = 0;
    var_4840 = 1;
    var_4848 = 32;
    pri = fun_2A70(var_4840, var_4832, var_4824, var_4816)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_CB70
        case default:
        {
// switch_CB70_case_default
            var_8 = 398139449972301239;
            var_16 = 8;
            pri = fun_0C08(var_8)
            var_24 = 2;
            var_32 = 2;
            var_40 = 398139449972301239;
            var_48 = 24;
            pri = fun_17B8(var_40, var_32, var_24)
            var_56 = 0;
            var_64 = 8802641224559852288;
            var_72 = 16;
            pri = fun_07A0(var_64, var_56)
            var_80 = 1;
            var_88 = 1;
            var_96 = 30;
            OP_PUSH2_C 398139449972301239, -5633339793993941687
            var_104 = 40;
            pri = fun_1160(var_96, var_88, var_80, var_72, var_64)
            var_112 = 1;
            var_120 = 1;
            var_128 = -1;
            var_136 = -1;
            var_144 = 0;
            var_152 = 11;
            var_160 = 398139449972301239;
            var_168 = 56;
            pri = fun_4D28(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            OP_PUSH2_C -4597443384605828710, 4628011567076605952
            var_176 = 0;
            OP_PUSH5_C 4655145095124536525, 4631497634663167427, 4657507747700534149, 4657433882509380157, 4639283936206425948
            var_184 = 4657561777701923062;
            var_192 = 1;
            pri = EvCameraMove(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
            var_200 = 0;
            pri = fun_3080()
            OP_PUSH2_C 4622269477551708570, 4628011567076605952
            var_208 = 15;
            OP_PUSH5_C 4654570842191581676, 4632750198309529846, 4657501700386581381, 4657146844003832955, 4639589688399877898
            var_216 = 4657555708397737738;
            var_224 = 25;
            pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_232 = 0;
            var_240 = 3;
            var_248 = 0;
            var_256 = 100;
            var_264 = -1;
            OP_PUSH2_C -8498935035473899469, 398139449972301239
            var_272 = 56;
            pri = fun_26A0(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
            var_280 = 8802641224559852288;
            var_288 = 8;
            pri = fun_0A30(var_280)
            var_296 = 2649506633853810915;
            var_304 = 8;
            pri = fun_0A30(var_296)
            var_312 = 6149361526766711478;
            var_320 = 8;
            pri = fun_0A30(var_312)
            var_328 = 1;
            var_336 = 8;
            pri = fun_2898(var_328)
            var_344 = 0;
            pri = fun_2958()
            var_352 = 1;
            var_360 = 0;
            var_368 = 34184;
            var_376 = 8;
            var_384 = 32;
            pri = fun_0338(var_376, var_368, var_360, var_352)
            var_392 = 0;
            pri = fun_03A8()
            var_400 = 28;
            var_408 = 0;
            var_416 = 0;
            var_424 = 0;
            var_432 = 231;
            var_440 = 40;
            pri = fun_2E28(var_432, var_424, var_416, var_408, var_400)
            var_448 = 0;
            pri = fun_2F40()
            OP_JZER lab_CFC8
            var_456 = 0;
            pri = fun_3030()
// lab_CFC8
            var_8 = 1;
            var_16 = 8802641224559852288;
            var_24 = 16;
            pri = fun_07D8(var_16, var_8)
            var_32 = 1;
            var_40 = 2649506633853810915;
            var_48 = 16;
            pri = fun_07D8(var_40, var_32)
            var_56 = 1;
            var_64 = 6149361526766711478;
            var_72 = 16;
            pri = fun_07D8(var_64, var_56)
            var_80 = 1;
            var_88 = 398139449972301239;
            var_96 = 16;
            pri = fun_07D8(var_88, var_80)
            var_104 = 1;
            var_112 = -5633339793993941687;
            var_120 = 16;
            pri = fun_07D8(var_112, var_104)
            var_128 = 1;
            var_136 = 1;
            OP_PUSH4_C 4640537203540230144, 4656805357682478285, 4657562041584713728, 398139449972301239
            var_144 = 48;
            pri = fun_0748(var_136, var_128, var_120, var_112, var_104, var_96)
            var_152 = 1;
            var_160 = 1;
            OP_PUSH4_C 4640537203540230144, 4657189746947548774, 4657556104221923738, 8802641224559852288
            var_168 = 48;
            pri = fun_0748(var_160, var_152, var_144, var_136, var_128, var_120)
            var_176 = 1;
            var_184 = 1;
            var_192 = 4640537203540230144;
            var_200 = 2312;
            pri = float(var_200)
            var_208 = pri;
            OP_PUSH2_C 4657740162468413440, 6149361526766711478
            var_216 = 48;
            pri = fun_0748(var_208, var_200, var_192, var_184, var_176, var_168)
            var_224 = 1;
            var_232 = 1;
            OP_PUSH4_C 4640537203540230144, 4657284964654514176, 4657350935352180736, 2649506633853810915
            var_240 = 48;
            pri = fun_0748(var_232, var_224, var_216, var_208, var_200, var_192)
            var_248 = 1;
            var_256 = 1;
            OP_PUSH4_C 4635351027094336307, 4656902334608048128, 4657315750980091904, -5633339793993941687
            var_264 = 48;
            pri = fun_0748(var_256, var_248, var_240, var_232, var_224, var_216)
            var_272 = 0;
            var_280 = 0;
            var_288 = 0;
            var_296 = 0;
            OP_PUSH2_C 398139449972301239, 8802641224559852288
            var_304 = 48;
            pri = fun_09D8(var_296, var_288, var_280, var_272, var_264, var_256)
            var_312 = 0;
            var_320 = 0;
            var_328 = 0;
            var_336 = 0;
            OP_PUSH2_C 398139449972301239, 6149361526766711478
            var_344 = 48;
            pri = fun_09D8(var_336, var_328, var_320, var_312, var_304, var_296)
            var_352 = 0;
            var_360 = 0;
            var_368 = 0;
            var_376 = 0;
            OP_PUSH2_C 398139449972301239, 2649506633853810915
            var_384 = 48;
            pri = fun_09D8(var_376, var_368, var_360, var_352, var_344, var_336)
            var_392 = 8802641224559852288;
            var_400 = 8;
            pri = fun_0A30(var_392)
            var_408 = 6149361526766711478;
            var_416 = 8;
            pri = fun_0A30(var_408)
            var_424 = 2649506633853810915;
            var_432 = 8;
            pri = fun_0A30(var_424)
            var_440 = 1;
            var_448 = 1;
            var_456 = 30;
            OP_PUSH2_C 398139449972301239, -5633339793993941687
            var_464 = 40;
            pri = fun_1160(var_456, var_448, var_440, var_432, var_424)
            var_472 = 1;
            var_480 = 8802641224559852288;
            var_488 = 16;
            pri = fun_07A0(var_480, var_472)
            var_496 = 0;
            var_504 = 4628011567076605952;
            var_512 = 0;
            OP_PUSH5_C 4656874516963865395, 4644455335216042476, 4657243359134519132, 4657990191412569702, 4642454751819071488
            var_520 = 4658251127512073503;
            var_528 = 1;
            pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
            var_536 = 0;
            pri = fun_3080()
            var_544 = 0;
            var_552 = 4628011567076605952;
            var_560 = 3;
            OP_PUSH5_C 4656890965657816924, 4629808784802903491, 4657250835813588009, 4657954435294434427, 4643239363316652442
            var_568 = 4658213128390217564;
            var_576 = 150;
            pri = EvCameraMove(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
            var_584 = 1;
            var_592 = 3;
            var_600 = 0;
            var_608 = 11;
            var_616 = 398139449972301239;
            var_624 = 40;
            pri = fun_7060(var_616, var_608, var_600, var_592, var_584)
            var_632 = 34232;
            var_640 = 8;
            var_648 = 16;
            pri = fun_02D8(var_640, var_632)
            var_656 = 0;
            pri = fun_03A8()
            var_664 = 50;
            var_672 = 8;
            pri = fun_0090(var_664)
            var_680 = 6;
            var_688 = 398139449972301239;
            var_696 = 16;
            pri = fun_16C8(var_688, var_680)
            var_704 = 1;
            var_712 = -1;
            var_720 = -1;
            var_728 = 3;
            var_736 = 0;
            var_744 = 1;
            var_752 = 398139449972301239;
            var_760 = 56;
            pri = fun_3148(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
            var_768 = 0;
            var_776 = 3;
            var_784 = 0;
            var_792 = 100;
            var_800 = -1;
            OP_PUSH2_C -8498936134985527680, 398139449972301239
            var_808 = 56;
            pri = fun_26A0(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
            var_816 = 398139449972301239;
            var_824 = 8;
            pri = fun_0A30(var_816)
            var_832 = 1;
            var_840 = 8;
            pri = fun_2898(var_832)
            var_848 = 0;
            pri = fun_2958()
            var_856 = 0;
            var_864 = 0;
            var_872 = 0;
            var_880 = 0;
            pri = float(var_880)
            var_888 = pri;
            var_896 = 398139449972301239;
            var_904 = 40;
            pri = fun_0988(var_896, var_888, var_880, var_872, var_864)
            var_912 = 0;
            var_920 = 3;
            var_928 = 0;
            var_936 = 100;
            var_944 = -1;
            OP_PUSH2_C -8499777261380919870, 398139449972301239
            var_952 = 56;
            pri = fun_26A0(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
            var_960 = 398139449972301239;
            var_968 = 8;
            pri = fun_0A30(var_960)
            var_976 = 1;
            var_984 = 8;
            pri = fun_2898(var_976)
            var_992 = 0;
            pri = fun_2958()
            var_1000 = 2;
            var_1008 = 398139449972301239;
            var_1016 = 16;
            pri = fun_16C8(var_1008, var_1000)
            var_1024 = 0;
            var_1032 = 4631727036769186611;
            var_1040 = 0;
            OP_PUSH5_C 4655192506065926226, -4589539567259793490, 4656549743219252920, 4656968679139668132, 4639887348187749417
            var_1048 = 4657655192209818911;
            var_1056 = 1;
            pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
            var_1064 = 0;
            pri = fun_3080()
            var_1072 = 0;
            var_1080 = 4631727036769186611;
            var_1088 = 3;
            OP_PUSH5_C 4655170779716161372, -4589539567259793490, 4656571293647157330, 4656957728003855483, 4639894385062167183
            var_1096 = 4657665835482375782;
            var_1104 = 50;
            pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
            var_1112 = 0;
            var_1120 = 3;
            var_1128 = 0;
            var_1136 = 100;
            var_1144 = -1;
            OP_PUSH2_C -8499776161869291659, 398139449972301239
            var_1152 = 56;
            pri = fun_26A0(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
            var_1160 = 1;
            var_1168 = 8;
            pri = fun_2898(var_1160)
            var_1176 = 0;
            pri = fun_2958()
            var_1184 = 0;
            var_1192 = 4631727036769186611;
            var_1200 = 0;
            OP_PUSH5_C 4655545801142163210, -4593398589190496584, 4656865369027122299, 4657326900027997553, 4639283936206425948
            var_1208 = 4657716962773067366;
            var_1216 = 1;
            pri = EvCameraMove(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
            var_1224 = 0;
            pri = fun_3080()
            var_1232 = 1;
            var_1240 = 29;
            OP_PUSH2_C 4585034260417726079, 398139449972301239
            var_1248 = 32;
            pri = fun_9128(var_1240, var_1232, var_1224, var_1216)
            var_1256 = 398139449972301239;
            var_1264 = 8;
            pri = fun_1708(var_1256)
            var_1272 = 1;
            var_1280 = 0;
            var_1288 = 4641240890982006784;
            var_1296 = 0;
            var_1304 = 0;
            OP_PUSH4_C 4656367971956948992, 4658276724142768128, 4607182418800017408, 398139449972301239
            var_1312 = 72;
            pri = fun_0850(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
            var_1320 = 0;
            var_1328 = 3;
            var_1336 = 0;
            var_1344 = 100;
            var_1352 = -1;
            OP_PUSH2_C -8499779460404176292, 398139449972301239
            var_1360 = 56;
            pri = fun_26A0(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
            var_1368 = 1;
            var_1376 = 8;
            pri = fun_2898(var_1368)
            var_1384 = 0;
            pri = fun_2958()
            var_1392 = 0;
            var_1400 = 4631727036769186611;
            var_1408 = 3;
            OP_PUSH5_C 4656783543371783209, -4593398589190496584, 4656089927456516997, 4657211385336383406, 4639250862896662446
            var_1416 = 4657808464130730885;
            var_1424 = 45;
            pri = EvCameraMove(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
            var_1432 = -1;
            var_1440 = -5633339793993941687;
            var_1448 = 16;
            pri = fun_1688(var_1440, var_1432)
            var_1456 = 0;
            var_1464 = 0;
            var_1472 = 0;
            var_1480 = 0;
            OP_PUSH2_C 8802641224559852288, -5633339793993941687
            var_1488 = 48;
            pri = fun_09D8(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
            var_1496 = 20;
            var_1504 = 8;
            pri = fun_0090(var_1496)
            var_1512 = -5633339793993941687;
            var_1520 = 8;
            pri = fun_0A30(var_1512)
            var_1528 = 34440;
            pri = SoundPostEvent(var_1528)
            var_1536 = 0;
            var_1544 = 3;
            var_1552 = 0;
            var_1560 = 100;
            var_1568 = -1;
            OP_PUSH2_C 4684767948861463956, -5633339793993941687
            var_1576 = 56;
            pri = fun_26A0(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
            var_1584 = 5;
            var_1592 = -5633339793993941687;
            var_1600 = 16;
            pri = fun_16C8(var_1592, var_1584)
            var_1608 = 1;
            var_1616 = -1;
            var_1624 = -1;
            var_1632 = 3;
            var_1640 = 0;
            var_1648 = 0;
            var_1656 = -5633339793993941687;
            var_1664 = 56;
            pri = fun_3148(var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608)
            var_1672 = 0;
            var_1680 = 0;
            var_1688 = 0;
            var_1696 = 0;
            OP_PUSH2_C -5633339793993941687, 8802641224559852288
            var_1704 = 48;
            pri = fun_09D8(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
            var_1712 = -5633339793993941687;
            var_1720 = 8;
            pri = fun_0C08(var_1712)
            var_1728 = 0;
            pri = fun_3080()
            var_1736 = 8802641224559852288;
            var_1744 = 8;
            pri = fun_0A30(var_1736)
            var_1752 = 1;
            var_1760 = 8;
            pri = fun_2898(var_1752)
            var_1768 = 0;
            pri = fun_2958()
            var_1776 = 1;
            var_1784 = 15;
            OP_PUSH2_C 8497580040830310512, -5633339793993941687
            var_1792 = 32;
            pri = fun_9128(var_1784, var_1776, var_1768, var_1760)
            var_1800 = -5633339793993941687;
            var_1808 = 8;
            pri = fun_1708(var_1800)
            var_1816 = 1;
            var_1824 = 1;
            var_1832 = 60;
            var_1840 = 0;
            var_1848 = 8802641224559852288;
            var_1856 = 40;
            pri = fun_1218(var_1848, var_1840, var_1832, var_1824, var_1816)
            var_1864 = 1;
            var_1872 = 0;
            var_1880 = 4641240890982006784;
            var_1888 = 0;
            var_1896 = 0;
            OP_PUSH4_C 4656669238142959616, 4657581832794013696, 4607182418800017408, -5633339793993941687
            var_1904 = 72;
            pri = fun_0850(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
            var_1912 = -5633339793993941687;
            var_1920 = 8;
            pri = fun_0A30(var_1912)
            var_1928 = 0;
            var_1936 = -5633339793993941687;
            var_1944 = 16;
            pri = fun_07A0(var_1936, var_1928)
            var_1952 = 0;
            var_1960 = 398139449972301239;
            var_1968 = 16;
            pri = fun_07A0(var_1960, var_1952)
            var_1976 = -1;
            var_1984 = 8802641224559852288;
            var_1992 = 16;
            pri = fun_1688(var_1984, var_1976)
            var_2000 = 1;
            var_2008 = 1;
            var_2016 = 30;
            OP_PUSH2_C 6149361526766711478, 8802641224559852288
            var_2024 = 40;
            pri = fun_1160(var_2016, var_2008, var_2000, var_1992, var_1984)
            var_2032 = 1;
            var_2040 = 1;
            var_2048 = 30;
            OP_PUSH2_C 6149361526766711478, 2649506633853810915
            var_2056 = 40;
            pri = fun_1160(var_2048, var_2040, var_2032, var_2024, var_2016)
            var_2064 = 0;
            var_2072 = 0;
            var_2080 = 0;
            var_2088 = 0;
            OP_PUSH2_C 8802641224559852288, 6149361526766711478
            var_2096 = 48;
            pri = fun_09D8(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
            var_2104 = 0;
            var_2112 = 4631727036769186611;
            var_2120 = 0;
            OP_PUSH5_C 4656552338066694472, -4590406510188062310, 4657888200713977201, 4657835138282820731, 4641507940366161019
            var_2128 = 4657158081012668826;
            var_2136 = 1;
            pri = EvCameraMove(var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064)
            var_2144 = 0;
            pri = fun_3080()
            var_2152 = 0;
            var_2160 = 3;
            var_2168 = 0;
            var_2176 = 100;
            var_2184 = -1;
            OP_PUSH2_C 7026095236891258211, 6149361526766711478
            var_2192 = 56;
            pri = fun_26A0(var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136)
            var_2200 = 6149361526766711478;
            var_2208 = 8;
            pri = fun_0A30(var_2200)
            var_2216 = 1;
            var_2224 = 8;
            pri = fun_2898(var_2216)
            var_2232 = 0;
            pri = fun_2958()
            var_2240 = -1;
            var_2248 = 8802641224559852288;
            var_2256 = 16;
            pri = fun_1688(var_2248, var_2240)
            var_2264 = 0;
            var_2272 = 0;
            var_2280 = 0;
            var_2288 = 0;
            OP_PUSH2_C 6149361526766711478, 8802641224559852288
            var_2296 = 48;
            pri = fun_09D8(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
            var_2304 = 1;
            var_2312 = -1;
            var_2320 = -1;
            var_2328 = 3;
            var_2336 = 0;
            var_2344 = 0;
            var_2352 = 6149361526766711478;
            var_2360 = 56;
            pri = fun_3148(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304)
            var_2368 = 0;
            var_2376 = 3;
            var_2384 = 0;
            var_2392 = 100;
            var_2400 = -1;
            OP_PUSH2_C 7026096336402886422, 6149361526766711478
            var_2408 = 56;
            pri = fun_26A0(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352)
            var_2416 = 6149361526766711478;
            var_2424 = 8;
            pri = fun_0C08(var_2416)
            var_2432 = 8802641224559852288;
            var_2440 = 8;
            pri = fun_0A30(var_2432)
            var_2448 = 1;
            var_2456 = 8;
            pri = fun_2898(var_2448)
            var_2464 = 0;
            pri = fun_2958()
            var_2472 = 8;
            var_2480 = 6149361526766711478;
            var_2488 = 16;
            pri = fun_16C8(var_2480, var_2472)
            var_2496 = 0;
            var_2504 = 2649506633853810915;
            var_2512 = 16;
            pri = fun_07A0(var_2504, var_2496)
            var_2520 = 0;
            var_2528 = 4627533059616197837;
            var_2536 = 0;
            OP_PUSH5_C 4657023962584312709, -4595101512799596052, 4658490733085998449, 4657359467562412278, 4641106486680627446
            var_2544 = 4657094727152676372;
            var_2552 = 1;
            pri = EvCameraMove(var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480)
            var_2560 = 0;
            pri = fun_3080()
            var_2568 = 1;
            var_2576 = 1;
            var_2584 = -1;
            var_2592 = -1;
            var_2600 = 0;
            var_2608 = 6;
            var_2616 = 6149361526766711478;
            var_2624 = 56;
            pri = fun_4D28(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568)
            var_2632 = 0;
            var_2640 = 3;
            var_2648 = 0;
            var_2656 = 100;
            var_2664 = -1;
            OP_PUSH2_C 7026097435914514633, 6149361526766711478
            var_2672 = 56;
            pri = fun_26A0(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616)
            var_2680 = 1;
            var_2688 = 8;
            pri = fun_2898(var_2680)
            var_2696 = 0;
            var_2704 = -986913268877458093;
            var_2712 = 0;
            var_2720 = 24;
            pri = fun_2988(var_2712, var_2704, var_2696)
            var_2728 = 0;
            var_2736 = -986907771319317038;
            var_2744 = 1;
            var_2752 = 24;
            pri = fun_2988(var_2744, var_2736, var_2728)
            var_2768 = 0;
            var_2776 = 0;
            var_2784 = 0;
            var_2792 = 1;
            var_2800 = 32;
            pri = fun_2A70(var_2792, var_2784, var_2776, var_2768)
            var_16 = pri;
            pri = var_16;
            switch (pri) {
// switch_EA18
                case default:
                {
// switch_EA18_case_default
                    var_8 = 6149361526766711478;
                    var_16 = 8;
                    pri = fun_0C08(var_8)
                    var_24 = 1;
                    var_32 = 2649506633853810915;
                    var_40 = 16;
                    pri = fun_07A0(var_32, var_24)
                    var_48 = 6;
                    var_56 = 2649506633853810915;
                    var_64 = 16;
                    pri = fun_16C8(var_56, var_48)
                    var_72 = -1;
                    var_80 = 2649506633853810915;
                    var_88 = 16;
                    pri = fun_1688(var_80, var_72)
                    var_96 = 0;
                    var_104 = 0;
                    var_112 = 0;
                    OP_PUSH2_C 4634401049047937843, 2649506633853810915
                    var_120 = 40;
                    pri = fun_0988(var_112, var_104, var_96, var_88, var_80)
                    var_128 = 1;
                    var_136 = 1;
                    var_144 = 30;
                    OP_PUSH2_C 2649506633853810915, 8802641224559852288
                    var_152 = 40;
                    pri = fun_1160(var_144, var_136, var_128, var_120, var_112)
                    var_160 = 1;
                    var_168 = 1;
                    var_176 = 30;
                    OP_PUSH2_C 2649506633853810915, 6149361526766711478
                    var_184 = 40;
                    pri = fun_1160(var_176, var_168, var_160, var_152, var_144)
                    var_192 = 0;
                    var_200 = 4627533059616197837;
                    var_208 = 0;
                    OP_PUSH5_C 4656822751956429701, 4624453723370983260, 4657283425338235290, 4658076151231629230, 4642452640756746158
                    var_216 = 4657988806027918705;
                    var_224 = 1;
                    pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
                    var_232 = 0;
                    pri = fun_3080()
                    var_240 = 0;
                    var_248 = 3;
                    var_256 = 0;
                    var_264 = 100;
                    var_272 = -1;
                    OP_PUSH2_C 6410902508524028012, 2649506633853810915
                    var_280 = 56;
                    pri = fun_26A0(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
                    var_288 = 2649506633853810915;
                    var_296 = 8;
                    pri = fun_0A30(var_288)
                    var_304 = 1;
                    var_312 = 8;
                    pri = fun_2898(var_304)
                    var_320 = 0;
                    pri = fun_2958()
                    var_328 = 2649506633853810915;
                    var_336 = 8;
                    pri = fun_1708(var_328)
                    var_344 = 2;
                    var_352 = 2;
                    var_360 = 6149361526766711478;
                    var_368 = 24;
                    pri = fun_17B8(var_360, var_352, var_344)
                    var_376 = -1;
                    var_384 = 6149361526766711478;
                    var_392 = 16;
                    pri = fun_1688(var_384, var_376)
                    var_400 = -1;
                    var_408 = 8802641224559852288;
                    var_416 = 16;
                    pri = fun_1688(var_408, var_400)
                    var_424 = 1;
                    var_432 = -1;
                    var_440 = -1;
                    var_448 = 3;
                    var_456 = 0;
                    var_464 = 0;
                    var_472 = 6149361526766711478;
                    var_480 = 56;
                    pri = fun_3148(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
                    var_488 = 0;
                    var_496 = 3;
                    var_504 = 0;
                    var_512 = 100;
                    var_520 = -1;
                    OP_PUSH2_C 7027090294914599941, 6149361526766711478
                    var_528 = 56;
                    pri = fun_26A0(var_520, var_512, var_504, var_496, var_488, var_480, var_472)
                    var_536 = 1;
                    var_544 = 8;
                    pri = fun_2898(var_536)
                    var_552 = 0;
                    pri = fun_2958()
                    var_560 = 0;
                    var_568 = 8802641224559852288;
                    var_576 = 16;
                    pri = fun_07D8(var_568, var_560)
                    var_584 = 0;
                    var_592 = 2649506633853810915;
                    var_600 = 16;
                    pri = fun_07D8(var_592, var_584)
                    var_608 = 0;
                    var_616 = 6149361526766711478;
                    var_624 = 16;
                    pri = fun_07D8(var_616, var_608)
                    var_632 = 0;
                    var_640 = 398139449972301239;
                    var_648 = 16;
                    pri = fun_07D8(var_640, var_632)
                    var_656 = 0;
                    var_664 = -5633339793993941687;
                    var_672 = 16;
                    pri = fun_07D8(var_664, var_656)
                    var_680 = 3;
                    var_688 = 0;
                    pri = EvCameraEnd(var_688, var_680)
                    var_696 = 398139449972301239;
                    var_704 = 8;
                    pri = fun_0A30(var_696)
                    pri = 0;
                    return pri;
                }
                case 0x0:
                {
// switch_EA18_case_0x0
                    var_8 = 5;
                    var_16 = 5;
                    var_24 = 6149361526766711478;
                    var_32 = 24;
                    pri = fun_17B8(var_24, var_16, var_8)
                    var_40 = 1;
                    var_48 = 3;
                    var_56 = 0;
                    var_64 = 6;
                    var_72 = 6149361526766711478;
                    var_80 = 40;
                    pri = fun_7060(var_72, var_64, var_56, var_48, var_40)
                    var_88 = 0;
                    var_96 = 3;
                    var_104 = 0;
                    var_112 = 100;
                    var_120 = -1;
                    OP_PUSH2_C 7026107331519168532, 6149361526766711478
                    var_128 = 56;
                    pri = fun_26A0(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
                    var_136 = 1;
                    var_144 = 8;
                    pri = fun_2898(var_136)
                    var_152 = 0;
                    pri = fun_2958()
                    OP_JUMP switch_EA18_case_default
                }
                case 0x1:
                {
// switch_EA18_case_0x1
                    var_8 = 4;
                    var_16 = 4;
                    var_24 = 6149361526766711478;
                    var_32 = 24;
                    pri = fun_17B8(var_24, var_16, var_8)
                    var_40 = 1;
                    var_48 = 3;
                    var_56 = 0;
                    var_64 = 6;
                    var_72 = 6149361526766711478;
                    var_80 = 40;
                    pri = fun_7060(var_72, var_64, var_56, var_48, var_40)
                    var_88 = 0;
                    var_96 = 3;
                    var_104 = 0;
                    var_112 = 100;
                    var_120 = -1;
                    OP_PUSH2_C 7026108431030796743, 6149361526766711478
                    var_128 = 56;
                    pri = fun_26A0(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
                    var_136 = 1;
                    var_144 = 8;
                    pri = fun_2898(var_136)
                    var_152 = 0;
                    pri = fun_2958()
                    OP_JUMP switch_EA18_case_default
                }
            }
        }
        case 0x0:
        {
// switch_CB70_case_0x0
            OP_JUMP switch_CB70_case_default
        }
        case 0x1:
        {
// switch_CB70_case_0x1
            OP_JUMP switch_CB70_case_default
        }
    }
}
// fun_F030
fun_F030() {
    pri = 0;
    return pri;
}
// fun_F048
fun_F048() {
    var_8 = 398139449972301239;
    var_16 = 8;
    pri = fun_06F0(var_8)
    var_24 = -5633339793993941687;
    var_32 = 8;
    pri = fun_06F0(var_24)
    var_40 = 100;
    var_48 = -5939167126162154565;
    pri = WorkSet(var_48, var_40)
    var_56 = -6555522702472174733;
    pri = FlagReset(var_56)
    var_72 = -4109595392289114602;
    pri = WorkGet(var_72)
    OP_ADD_P_C 1
    var_8 = pri;
    var_80 = var_8;
    var_88 = -4109595392289114602;
    pri = WorkSet(var_88, var_80)
    pri = 0;
    return pri;
}
// fun_F180
fun_F180() {
    var_8 = 3221248130153244534;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_F1C0
fun_F1C0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A0F8()
    var_16 = 0;
    pri = fun_A150()
    var_24 = 0;
    pri = fun_A208()
    var_32 = 0;
    pri = fun_A238()
    var_40 = 0;
    pri = fun_F030()
    var_48 = 0;
    pri = fun_F048()
    var_56 = 0;
    pri = fun_F180()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_F2B0
fun_F2B0() {
    var_8 = 0;
    pri = fun_A150()
    var_16 = 0;
    pri = fun_F048()
    var_24 = 29;
    pri = SetNpcLicenseCardFlag(var_24)
    var_32 = 15;
    pri = SetNpcLicenseCardFlag(var_32)
    pri = 0;
    return pri;
}
