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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07D8
fun_07D8() {
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
    pri = fun_1728(var_8)
    OP_JZER lab_0970
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1758(var_24)
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
    pri = fun_1728(var_8)
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
    pri = fun_0CD0(var_8)
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
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D08
fun_0D08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D58
    pri = 0;
    return pri;
// lab_0D58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1728(var_8)
    OP_JZER lab_0E88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB0
    OP_ZERO_P_S 64
// lab_0E88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC0
    OP_CONST_S 64, 1
// lab_0EC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF8
    OP_CONST_S 72, 1
// lab_0EF8
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
// lab_0DB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DD8
    OP_ZERO_P_S 72
// lab_0DD8
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
    OP_JUMP lab_0F98
// lab_0F98
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1028
fun_1028() {
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
// fun_1088
fun_1088() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1448
        case default:
        {
// switch_1448_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1448_case_0x0
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
            pri = fun_1028(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1448_case_default
        }
        case 0x1:
        {
// switch_1448_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1028(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1448_case_default
        }
        case 0x2:
        {
// switch_1448_case_0x2
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
            pri = fun_1028(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1448_case_default
        }
        case 0x3:
        {
// switch_1448_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1028(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1448_case_default
        }
        case 0x4:
        {
// switch_1448_case_0x4
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
            pri = fun_1028(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1448_case_default
        }
        case 0x5:
        {
// switch_1448_case_0x5
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
            pri = fun_1028(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1448_case_default
        }
        case 0x6:
        {
// switch_1448_case_0x6
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
            pri = fun_1028(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1448_case_default
        }
        case 0x7:
        {
// switch_1448_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1028(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1448_case_default
        }
    }
}
// fun_14F8
fun_14F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1538
fun_1538() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15B8
fun_15B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_15F0
fun_15F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1630
fun_1630() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1668
fun_1668() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1578(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_15F0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15B8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1630(var_24)
    pri = 0;
    return pri;
}
// fun_1728
fun_1728() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1758
fun_1758() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1788
fun_1788() {
    OP_JUMP lab_17A0
// lab_17A0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1830
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1820
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    pri = 0;
    return pri;
// lab_1830
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18C0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_18B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    pri = 0;
    return pri;
// lab_18C0
    pri = 0;
    return pri;
// lab_18B0
    OP_JUMP lab_18D0
// lab_18D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17A0
    pri = 0;
    return pri;
// lab_1820
    OP_JUMP lab_18D0
}
// fun_1910
fun_1910() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1788(var_40)
    pri = 0;
    return pri;
}
// fun_1998
fun_1998() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_19D0
fun_19D0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_19F8
fun_19F8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1A30
fun_1A30() {
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
// switch_2048
        case default:
        {
// switch_2048_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2090
// lab_2090
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
            OP_JNZ lab_2138
            var_88 = 0;
            pri = fun_2408()
// lab_2138
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2048_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1C30
                case default:
                {
// switch_1C30_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CA8
// lab_1CA8
                    OP_JUMP lab_2090
                }
                case 0x0:
                {
// switch_1C30_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1CA8
                }
                case 0x1:
                {
// switch_1C30_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1CA8
                }
                case 0x2:
                {
// switch_1C30_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1CA8
                }
                case 0x3:
                {
// switch_1C30_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CA8
                }
                case 0x4:
                {
// switch_1C30_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1CA8
                }
                case 0x5:
                {
// switch_1C30_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1CA8
                }
            }
        }
        case 0x65:
        {
// switch_2048_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1DE8
                case default:
                {
// switch_1DE8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E60
// lab_1E60
                    OP_JUMP lab_2090
                }
                case 0x0:
                {
// switch_1DE8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1E60
                }
                case 0x1:
                {
// switch_1DE8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1E60
                }
                case 0x2:
                {
// switch_1DE8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1E60
                }
                case 0x3:
                {
// switch_1DE8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E60
                }
                case 0x4:
                {
// switch_1DE8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1E60
                }
                case 0x5:
                {
// switch_1DE8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1E60
                }
            }
        }
        case 0x66:
        {
// switch_2048_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1FA0
                case default:
                {
// switch_1FA0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2018
// lab_2018
                    OP_JUMP lab_2090
                }
                case 0x0:
                {
// switch_1FA0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2018
                }
                case 0x1:
                {
// switch_1FA0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2018
                }
                case 0x2:
                {
// switch_1FA0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2018
                }
                case 0x3:
                {
// switch_1FA0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2018
                }
                case 0x4:
                {
// switch_1FA0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2018
                }
                case 0x5:
                {
// switch_1FA0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2018
                }
            }
        }
    }
}
// fun_2150
fun_2150() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1A30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A98(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2260
    pri = 1;
    return pri;
// lab_2260
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_22A8
fun_22A8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_22F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_21B8(var_8)
    arg_2 = pri;
// lab_22F8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2358
fun_2358() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2150(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23A8
fun_23A8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2358(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2408
fun_2408() {
    OP_JUMP lab_2420
// lab_2420
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2460
    pri = 0;
    return pri;
// lab_2460
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2420
    pri = 0;
    return pri;
}
// fun_24A0
fun_24A0() {
    var_8 = 0;
    pri = fun_2408()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2550
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2550
    pri = 0;
    return pri;
}
// fun_2560
fun_2560() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2590
fun_2590() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_25C0
// lab_25C0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2600
    OP_JUMP lab_2630
// lab_2600
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25C0
// lab_2630
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2678
fun_2678() {
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
// fun_26E8
fun_26E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2760()
    return pri;
}
// fun_2760
fun_2760() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_27A0
fun_27A0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_27D8
fun_27D8() {
    OP_JUMP lab_27F0
// lab_27F0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2838
    OP_JUMP lab_2868
    OP_JUMP lab_2858
// lab_2838
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2868
    pri = 0;
    return pri;
// lab_2858
    OP_JUMP lab_27F0
}
// fun_2878
fun_2878() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_28A8
fun_28A8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28F8
fun_28F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2948
fun_2948() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2998
fun_2998() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29E8
fun_29E8() {
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    var_8 = pri;
    OP_ZERO_P_S -16
    OP_JUMP lab_2A50
// lab_2A50
    OP_LOAD_S_BOTH -16, -8
    OP_JSGEQ lab_2BB8
    var_16 = 0;
    var_24 = 0;
    var_32 = var_16;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_24 = pri;
    OP_LOAD_S_BOTH 24, -24
    OP_JNEQ lab_2BA0
    pri = arg_1;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2B18
    pri = 1;
    return pri;
// lab_2BB8
    pri = 0;
    return pri;
// lab_2BA0
    OP_JUMP lab_2A48
// lab_2A48
    OP_INC_P_S -16
// lab_2B18
    var_16 = 0;
    var_24 = 1;
    var_32 = var_16;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_32 = pri;
    OP_LOAD_S_BOTH -32, 32
    OP_JNEQ lab_2B98
    pri = 1;
    return pri;
// lab_2B98
}
// fun_2BD8
fun_2BD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_29E8(var_16, var_8)
    OP_JZER lab_2C28
    pri = 1;
    return pri;
// lab_2C28
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PokeBoxMonsNoExists(var_16, var_8)
    OP_JZER lab_2C70
    pri = 1;
    return pri;
// lab_2C70
    pri = 0;
    return pri;
}
// fun_2C80
fun_2C80() {
    OP_JUMP lab_2C98
// lab_2C98
    pri = EvCameraMoveWait_()
    OP_JZER lab_2CD0
    pri = 0;
    return pri;
// lab_2CD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2C98
    pri = 0;
    return pri;
}
// fun_2D10
fun_2D10() {
    pri = arg_6;
    OP_JNZ lab_2D48
    var_8 = 0;
    pri = fun_0FA8()
// lab_2D48
    pri = arg_1;
    switch (pri) {
// switch_42B0
        case default:
        {
// switch_42B0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4600
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4600
            pri = 1;
            OP_JUMP lab_4608
// lab_4600
            pri = 0;
// lab_4608
            OP_JZER lab_4760
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
            OP_JUMP lab_47C0
// lab_4760
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
// lab_47C0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4820
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4880
// lab_4820
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4880
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4880
            pri = arg_2;
            OP_JZER lab_48C0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_48C0
            var_8 = 0;
            pri = fun_0FE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_42B0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x1:
        {
// switch_42B0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x2:
        {
// switch_42B0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x3:
        {
// switch_42B0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x4:
        {
// switch_42B0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x5:
        {
// switch_42B0_case_0x5
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0x6:
        {
// switch_42B0_case_0x6
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0x7:
        {
// switch_42B0_case_0x7
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0x8:
        {
// switch_42B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x9:
        {
// switch_42B0_case_0x9
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0xa:
        {
// switch_42B0_case_0xa
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0xb:
        {
// switch_42B0_case_0xb
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0xc:
        {
// switch_42B0_case_0xc
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0xd:
        {
// switch_42B0_case_0xd
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0xe:
        {
// switch_42B0_case_0xe
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0xf:
        {
// switch_42B0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x10:
        {
// switch_42B0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x11:
        {
// switch_42B0_case_0x11
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0x12:
        {
// switch_42B0_case_0x12
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0x13:
        {
// switch_42B0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x14:
        {
// switch_42B0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x15:
        {
// switch_42B0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x16:
        {
// switch_42B0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x17:
        {
// switch_42B0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x18:
        {
// switch_42B0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x19:
        {
// switch_42B0_case_0x19
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42B0_case_default
        }
        case 0x1a:
        {
// switch_42B0_case_0x1a
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
            pri = fun_0D08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_42B0_case_default
        }
        case 0x1b:
        {
// switch_42B0_case_0x1b
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
            pri = fun_0D08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_42B0_case_default
        }
        case 0x1c:
        {
// switch_42B0_case_0x1c
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
            pri = fun_0D08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_42B0_case_default
        }
        case 0x1d:
        {
// switch_42B0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x1e:
        {
// switch_42B0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x1f:
        {
// switch_42B0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x20:
        {
// switch_42B0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x21:
        {
// switch_42B0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x22:
        {
// switch_42B0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x23:
        {
// switch_42B0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x24:
        {
// switch_42B0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x25:
        {
// switch_42B0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x26:
        {
// switch_42B0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x27:
        {
// switch_42B0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x28:
        {
// switch_42B0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
        case 0x29:
        {
// switch_42B0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42B0_case_default
        }
    }
}
// fun_48F0
fun_48F0() {
    pri = arg_5;
    OP_JNZ lab_4928
    var_8 = 0;
    pri = fun_0FA8()
// lab_4928
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4978
    OP_CONST_S -8, -1
// lab_4978
    pri = arg_1;
    switch (pri) {
// switch_6430
        case default:
        {
// switch_6430_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_68D8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A98(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_68D8
            pri = 1;
            OP_JUMP lab_68E0
// lab_68D8
            pri = 0;
// lab_68E0
            OP_JZER lab_6930
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6B88
// lab_6930
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6998
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6998
            pri = 1;
            OP_JUMP lab_69A0
// lab_6998
            pri = 0;
// lab_69A0
            OP_JZER lab_6B28
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
            OP_JUMP lab_6B88
// lab_6B28
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_6B88
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6BF8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6BF8
            var_8 = 0;
            pri = fun_0FE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6430_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x1:
        {
// switch_6430_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x2:
        {
// switch_6430_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x3:
        {
// switch_6430_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x4:
        {
// switch_6430_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x5:
        {
// switch_6430_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD0(var_40)
            OP_JUMP switch_6430_case_default
        }
        case 0x6:
        {
// switch_6430_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x7:
        {
// switch_6430_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x8:
        {
// switch_6430_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x9:
        {
// switch_6430_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0xa:
        {
// switch_6430_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0xb:
        {
// switch_6430_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0xc:
        {
// switch_6430_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0xd:
        {
// switch_6430_case_0xd
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0xe:
        {
// switch_6430_case_0xe
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0xf:
        {
// switch_6430_case_0xf
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x10:
        {
// switch_6430_case_0x10
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x11:
        {
// switch_6430_case_0x11
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x12:
        {
// switch_6430_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x13:
        {
// switch_6430_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x14:
        {
// switch_6430_case_0x14
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x15:
        {
// switch_6430_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x16:
        {
// switch_6430_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x17:
        {
// switch_6430_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x18:
        {
// switch_6430_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x19:
        {
// switch_6430_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x1a:
        {
// switch_6430_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x1b:
        {
// switch_6430_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x1c:
        {
// switch_6430_case_0x1c
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x1d:
        {
// switch_6430_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x1e:
        {
// switch_6430_case_0x1e
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x1f:
        {
// switch_6430_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x20:
        {
// switch_6430_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x21:
        {
// switch_6430_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x22:
        {
// switch_6430_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x23:
        {
// switch_6430_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x24:
        {
// switch_6430_case_0x24
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x25:
        {
// switch_6430_case_0x25
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x26:
        {
// switch_6430_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x27:
        {
// switch_6430_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x28:
        {
// switch_6430_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x29:
        {
// switch_6430_case_0x29
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x2a:
        {
// switch_6430_case_0x2a
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x2b:
        {
// switch_6430_case_0x2b
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x2c:
        {
// switch_6430_case_0x2c
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x2d:
        {
// switch_6430_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x2e:
        {
// switch_6430_case_0x2e
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x2f:
        {
// switch_6430_case_0x2f
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x30:
        {
// switch_6430_case_0x30
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x31:
        {
// switch_6430_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x32:
        {
// switch_6430_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x33:
        {
// switch_6430_case_0x33
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x34:
        {
// switch_6430_case_0x34
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x35:
        {
// switch_6430_case_0x35
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x36:
        {
// switch_6430_case_0x36
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x37:
        {
// switch_6430_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x38:
        {
// switch_6430_case_0x38
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6430_case_default
        }
        case 0x39:
        {
// switch_6430_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x3a:
        {
// switch_6430_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x3b:
        {
// switch_6430_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x3c:
        {
// switch_6430_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x3d:
        {
// switch_6430_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
        case 0x3e:
        {
// switch_6430_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            OP_JUMP switch_6430_case_default
        }
    }
}
// fun_6C28
fun_6C28() {
    pri = arg_4;
    OP_JNZ lab_6C60
    var_8 = 0;
    pri = fun_0FA8()
// lab_6C60
    pri = arg_1;
    switch (pri) {
// switch_8038
        case default:
        {
// switch_8038_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1728(var_264)
            OP_JZER lab_8600
            pri = arg_3;
            switch (pri) {
// switch_85A8
                case default:
                {
// switch_85A8_case_default
                    OP_JUMP lab_88B8
// lab_88B8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8928
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8928
                    var_8 = 0;
                    pri = fun_0FE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_85A8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_85A8_case_default
                }
                case 0x2:
                {
// switch_85A8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_85A8_case_default
                }
                case 0x3:
                {
// switch_85A8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_85A8_case_default
                }
            }
// lab_8600
            pri = arg_1;
            OP_JZER lab_8650
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8650
            pri = 0;
            OP_JUMP lab_8658
// lab_8650
            pri = 1;
// lab_8658
            OP_JZER lab_86C0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A98(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_86C0
            pri = 1;
            OP_JUMP lab_86C8
// lab_86C0
            pri = 0;
// lab_86C8
            OP_JZER lab_8718
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_88B8
// lab_8718
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8780
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_88B8
// lab_8780
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
// switch_8038_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x1:
        {
// switch_8038_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x2:
        {
// switch_8038_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x3:
        {
// switch_8038_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x4:
        {
// switch_8038_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x5:
        {
// switch_8038_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD0(var_40)
            OP_JUMP switch_8038_case_default
        }
        case 0x6:
        {
// switch_8038_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x7:
        {
// switch_8038_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x8:
        {
// switch_8038_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x9:
        {
// switch_8038_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0xa:
        {
// switch_8038_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0xb:
        {
// switch_8038_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0xc:
        {
// switch_8038_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0xd:
        {
// switch_8038_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0xe:
        {
// switch_8038_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0xf:
        {
// switch_8038_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x10:
        {
// switch_8038_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x11:
        {
// switch_8038_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x12:
        {
// switch_8038_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x13:
        {
// switch_8038_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x14:
        {
// switch_8038_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x15:
        {
// switch_8038_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x16:
        {
// switch_8038_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x17:
        {
// switch_8038_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x18:
        {
// switch_8038_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x19:
        {
// switch_8038_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x1a:
        {
// switch_8038_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x1b:
        {
// switch_8038_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x1c:
        {
// switch_8038_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x1d:
        {
// switch_8038_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x1e:
        {
// switch_8038_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x1f:
        {
// switch_8038_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x20:
        {
// switch_8038_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x21:
        {
// switch_8038_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x22:
        {
// switch_8038_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x23:
        {
// switch_8038_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x24:
        {
// switch_8038_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x25:
        {
// switch_8038_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x26:
        {
// switch_8038_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x27:
        {
// switch_8038_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x28:
        {
// switch_8038_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x29:
        {
// switch_8038_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x2a:
        {
// switch_8038_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x2b:
        {
// switch_8038_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x2c:
        {
// switch_8038_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x2d:
        {
// switch_8038_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x2e:
        {
// switch_8038_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x2f:
        {
// switch_8038_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x30:
        {
// switch_8038_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x31:
        {
// switch_8038_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x32:
        {
// switch_8038_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x33:
        {
// switch_8038_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x34:
        {
// switch_8038_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x35:
        {
// switch_8038_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x36:
        {
// switch_8038_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x37:
        {
// switch_8038_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x38:
        {
// switch_8038_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x39:
        {
// switch_8038_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x3a:
        {
// switch_8038_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x3b:
        {
// switch_8038_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x3c:
        {
// switch_8038_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x3d:
        {
// switch_8038_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
        case 0x3e:
        {
// switch_8038_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            OP_JUMP switch_8038_case_default
        }
    }
}
// fun_8958
fun_8958() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_89F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2D10(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_89F0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8B48
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8AB0
    var_24 = 30048;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8AB0
    pri = 1;
    OP_JUMP lab_8AB8
// lab_8B48
    pri = 0;
    return pri;
// lab_8AB0
    pri = 0;
// lab_8AB8
    OP_JZER lab_8B48
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2D10(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8B58
fun_8B58() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8958(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8BE0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8BE0
fun_8BE0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8D78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8C48
fun_8C48() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8CB8
    OP_CONST_S -8, 1
// lab_8CB8
    pri = arg_0;
    OP_JNZ lab_8CD8
    OP_ZERO_P_S -8
// lab_8CD8
    pri = var_8;
    OP_JZER lab_8D60
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_8D60
    pri = 0;
    return pri;
}
// fun_8D78
fun_8D78() {
    var_8 = 30152;
    var_16 = 8;
    pri = fun_27A0(var_8)
    var_24 = 0;
    pri = fun_27D8()
    pri = arg_3;
    OP_JNZ lab_8E98
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8E60
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8F08(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8E88
// lab_8E98
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_90A8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8E60
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8FD0(var_16, var_8)
// lab_8E88
    OP_JUMP lab_8EE0
// lab_8EE0
    var_8 = 0;
    pri = fun_2878()
    pri = 0;
    return pri;
}
// fun_8F08
fun_8F08() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_90A8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8FB8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8FB8
    pri = 0;
    return pri;
}
// fun_8FD0
fun_8FD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_28F8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_23A8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_24A0(var_72)
    var_88 = 0;
    pri = fun_2560()
    var_96 = 0;
    var_104 = 8;
    pri = fun_28A8(var_96)
    pri = 0;
    return pri;
}
// fun_90A8
fun_90A8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_90F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_93B0(var_8)
// lab_90F0
    pri = arg_4;
    OP_JNZ lab_9158
    var_8 = 0;
    var_16 = 8;
    pri = fun_28A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_28F8(var_40, var_32, var_24)
// lab_9158
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_91F8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2948(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_23A8(var_56, var_48, var_40)
    OP_JUMP lab_92E8
// lab_91F8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_92B0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_92B0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_92B0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_23A8(var_24, var_16, var_8)
// lab_92E8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9328
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
// lab_9328
    var_8 = 1;
    var_16 = 8;
    pri = fun_24A0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_95B8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8C48(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_93B0
fun_93B0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9410
    var_16 = 30312;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9410
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9550
        case default:
        {
// switch_9550_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9540
            var_16 = 30856;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9540
            OP_JUMP lab_9588
// lab_9588
            var_8 = 31072;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9550_case_0x1
            var_8 = 30528;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9588
        }
        case 0x2:
        {
// switch_9550_case_0x2
            var_8 = 30656;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9588
        }
    }
}
// fun_95B8
fun_95B8() {
    pri = arg_2;
    OP_JNZ lab_96A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_28A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_28F8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2998(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_96A0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_23A8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_24A0(var_40)
    var_56 = 0;
    pri = fun_2560()
    pri = 0;
    return pri;
}
// fun_9718
fun_9718() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_97B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 31256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_19D0()
// lab_97B0
    pri = arg_4;
    OP_JZER lab_97E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_19F8(var_8)
// lab_97E8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9840
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9840
    pri = 0;
    OP_JUMP lab_9848
// lab_9840
    pri = 1;
// lab_9848
    OP_JZER lab_9910
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9910
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_98E8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1910(var_32, var_24)
    OP_JUMP lab_9910
// lab_9910
    pri = arg_2;
    OP_JZER lab_99E8
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_99B8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14F8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07A0(var_40)
    OP_JUMP lab_99E8
// lab_99E8
    pri = arg_3;
    OP_JZER lab_9A20
    var_8 = 1;
    var_16 = 8;
    pri = fun_1998(var_8)
// lab_9A20
    pri = 0;
    return pri;
// lab_99B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14F8(var_16, var_8)
// lab_98E8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1910(var_16, var_8)
}
// fun_9A30
fun_9A30() {
    pri = g_mode;
    switch (pri) {
// switch_9AC8
        case default:
        {
// switch_9AC8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9B00
// lab_9B00
            pri = 0;
            return pri;
        }
        case 0xbeea39b89011e9d8:
        {
// switch_9AC8_case_0xbeea39b89011e9d8
            var_8 = 0;
            pri = fun_9B28()
            OP_JUMP lab_9B00
        }
        case 0x0:
        {
// switch_9AC8_case_0x0
            var_8 = 0;
            pri = fun_9B10()
            OP_JUMP lab_9B00
        }
    }
}
// fun_9B10
fun_9B10() {
    pri = 0;
    return pri;
}
// fun_9B28
fun_9B28() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9718(var_40, var_32, var_24, var_16, var_8)
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 8802641224559852288;
    var_104 = var_8;
    var_112 = 48;
    pri = fun_08A0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    var_152 = var_8;
    var_160 = 8802641224559852288;
    var_168 = 48;
    pri = fun_08A0(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 3102359309162764884;
    pri = WorkGet(var_176)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9CA8
    var_184 = var_8;
    var_192 = 8;
    pri = fun_A4F0(var_184)
    OP_JUMP lab_9D28
// lab_9CA8
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9D40(var_8)
    var_24 = 3102359309162764884;
    pri = WorkGet(var_24)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9D28
    var_32 = var_8;
    var_40 = 8;
    pri = fun_A4F0(var_32)
// lab_9D28
    pri = 0;
    return pri;
}
// fun_9D40
fun_9D40() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -9071286497901583312;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_22A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = arg_0;
    var_80 = 8;
    pri = fun_08F8(var_72)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_08F8(var_88)
    var_104 = 1;
    var_112 = 8;
    pri = fun_24A0(var_104)
    var_120 = 0;
    var_128 = -5724658094338289005;
    var_136 = 0;
    var_144 = 24;
    pri = fun_2590(var_136, var_128, var_120)
    var_152 = 0;
    var_160 = -5724656994826660794;
    var_168 = 1;
    var_176 = 24;
    pri = fun_2590(var_168, var_160, var_152)
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    var_216 = 1;
    var_224 = 32;
    pri = fun_2678(var_216, var_208, var_200, var_192)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A4A0
        case default:
        {
// switch_A4A0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_A4A0_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -9071283199366698679;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_22A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_24A0(var_72)
            var_88 = 0;
            pri = fun_2560()
            OP_JUMP switch_A4A0_case_default
        }
        case 0x1:
        {
// switch_A4A0_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -9071284298878326890;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_22A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_24A0(var_72)
            var_88 = 0;
            pri = fun_2560()
            var_96 = 1;
            var_104 = 1;
            var_112 = -1;
            var_120 = -1;
            var_128 = 0;
            var_136 = 1;
            var_144 = arg_0;
            var_152 = 56;
            pri = fun_48F0(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_160 = 0;
            var_168 = 3;
            var_176 = 0;
            var_184 = 100;
            var_192 = -1;
            var_200 = -9071281000343442257;
            var_208 = arg_0;
            var_216 = 56;
            pri = fun_22A8(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_224 = 1;
            var_232 = 8;
            pri = fun_24A0(var_224)
            var_240 = 0;
            pri = fun_2560()
            var_248 = 4;
            var_256 = 5;
            var_264 = arg_0;
            var_272 = 24;
            pri = fun_1668(var_264, var_256, var_248)
            var_280 = 1;
            var_288 = 3;
            var_296 = 0;
            var_304 = 1;
            var_312 = arg_0;
            var_320 = 40;
            pri = fun_6C28(var_312, var_304, var_296, var_288, var_280)
            var_328 = arg_0;
            var_336 = 8;
            pri = fun_0AD0(var_328)
            var_344 = 5;
            var_352 = 8;
            pri = fun_0090(var_344)
            var_360 = 1;
            var_368 = 1;
            var_376 = -1;
            var_384 = -1;
            var_392 = 0;
            var_400 = 9;
            var_408 = arg_0;
            var_416 = 56;
            pri = fun_48F0(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
            var_424 = 0;
            var_432 = 3;
            var_440 = 0;
            var_448 = 100;
            var_456 = -1;
            var_464 = -9071282099855070468;
            var_472 = arg_0;
            var_480 = 56;
            pri = fun_22A8(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
            var_488 = 1;
            var_496 = 8;
            pri = fun_24A0(var_488)
            var_504 = 0;
            var_512 = 3;
            var_520 = 0;
            var_528 = 100;
            var_536 = -1;
            var_544 = -9071278801320185835;
            var_552 = arg_0;
            var_560 = 56;
            pri = fun_22A8(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
            var_568 = 1;
            var_576 = 8;
            pri = fun_24A0(var_568)
            var_584 = 0;
            var_592 = 3;
            var_600 = 0;
            var_608 = 100;
            var_616 = -1;
            var_624 = -9071279900831814046;
            var_632 = arg_0;
            var_640 = 56;
            pri = fun_22A8(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
            var_648 = 1;
            var_656 = 8;
            pri = fun_24A0(var_648)
            var_664 = 0;
            pri = fun_2560()
            var_672 = arg_0;
            var_680 = 8;
            pri = fun_16D0(var_672)
            var_688 = 1;
            var_696 = 3;
            var_704 = 0;
            var_712 = 9;
            var_720 = arg_0;
            var_728 = 40;
            pri = fun_6C28(var_720, var_712, var_704, var_696, var_688)
            var_736 = 0;
            var_744 = 3;
            var_752 = 0;
            var_760 = 100;
            var_768 = -1;
            var_776 = -9071276602296929413;
            var_784 = arg_0;
            var_792 = 56;
            pri = fun_22A8(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
            var_800 = arg_0;
            var_808 = 8;
            pri = fun_0AD0(var_800)
            var_816 = 1;
            var_824 = 8;
            pri = fun_24A0(var_816)
            var_832 = 1;
            var_840 = 3102359309162764884;
            pri = WorkSet(var_840, var_832)
            OP_JUMP switch_A4A0_case_default
        }
    }
}
// fun_A4F0
fun_A4F0() {
    var_8 = 3102359309162764884;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A5F8
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -9072241973506309446;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_22A8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = arg_0;
    var_88 = 8;
    pri = fun_08F8(var_80)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_08F8(var_96)
    var_112 = 1;
    var_120 = 8;
    pri = fun_24A0(var_112)
// lab_A5F8
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 48;
    pri = fun_26E8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A6C0
    var_72 = 0;
    var_80 = 840;
    var_88 = 16;
    pri = fun_2BD8(var_80, var_72)
    OP_JZER lab_A6C0
    pri = 1;
    OP_JUMP lab_A6C8
// lab_A6C0
    pri = 0;
// lab_A6C8
    OP_JZER lab_DFB0
    var_8 = 0;
    pri = fun_2560()
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 3;
    var_48 = 0;
    var_56 = 21;
    var_64 = 8802641224559852288;
    var_72 = 56;
    pri = fun_2D10(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 5;
    var_88 = 8;
    pri = fun_0090(var_80)
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 3;
    var_128 = 0;
    var_136 = 2;
    var_144 = arg_0;
    var_152 = 56;
    pri = fun_2D10(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 3;
    var_168 = 0;
    var_176 = 4557275159506989832;
    var_184 = 24;
    pri = fun_2358(var_176, var_168, var_160)
    var_192 = 1;
    var_200 = 8;
    pri = fun_24A0(var_192)
    var_208 = arg_0;
    var_216 = 8;
    pri = fun_0AD0(var_208)
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_0AD0(var_224)
    var_240 = 0;
    pri = fun_2560()
    var_248 = 4;
    var_256 = 7;
    var_264 = arg_0;
    var_272 = 24;
    pri = fun_1668(var_264, var_256, var_248)
    var_280 = 1;
    var_288 = 1;
    var_296 = -1;
    var_304 = -1;
    var_312 = 0;
    var_320 = 8;
    var_328 = arg_0;
    var_336 = 56;
    pri = fun_48F0(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    var_384 = -9072240873994681235;
    var_392 = arg_0;
    var_400 = 56;
    pri = fun_22A8(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_24A0(var_408)
    var_424 = 0;
    pri = fun_2560()
    var_432 = 0;
    var_440 = 3;
    var_448 = 0;
    var_456 = 100;
    var_464 = -1;
    var_472 = -9072244172529565868;
    var_480 = arg_0;
    var_488 = 56;
    pri = fun_22A8(var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_496 = 1;
    var_504 = 8;
    pri = fun_24A0(var_496)
    var_512 = 0;
    pri = fun_2560()
    var_520 = arg_0;
    var_528 = 8;
    pri = fun_16D0(var_520)
    var_536 = 1;
    var_544 = 3;
    var_552 = 0;
    var_560 = 8;
    var_568 = arg_0;
    var_576 = 40;
    pri = fun_6C28(var_568, var_560, var_552, var_544, var_536)
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    var_624 = -9072243073017937657;
    var_632 = arg_0;
    var_640 = 56;
    pri = fun_22A8(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = arg_0;
    var_656 = 8;
    pri = fun_0AD0(var_648)
    var_664 = 1;
    var_672 = 8;
    pri = fun_24A0(var_664)
    var_680 = 1;
    var_688 = -1;
    var_696 = -1;
    var_704 = 3;
    var_712 = 0;
    var_720 = 0;
    var_728 = arg_0;
    var_736 = 56;
    pri = fun_2D10(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 0;
    var_752 = 3;
    var_760 = 0;
    var_768 = 100;
    var_776 = -1;
    var_784 = -9072246371552822290;
    var_792 = arg_0;
    var_800 = 56;
    pri = fun_22A8(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = arg_0;
    var_816 = 8;
    pri = fun_0AD0(var_808)
    var_824 = 1;
    var_832 = 8;
    pri = fun_24A0(var_824)
    var_840 = 0;
    pri = fun_2560()
    var_848 = 1;
    var_856 = 0;
    var_864 = 31256;
    var_872 = 8;
    var_880 = 32;
    pri = fun_0338(var_872, var_864, var_856, var_848)
    var_888 = 0;
    pri = fun_03A8()
    var_896 = 1;
    var_904 = 1;
    var_912 = -1;
    var_920 = -1;
    var_928 = 0;
    var_936 = 9;
    var_944 = arg_0;
    var_952 = 56;
    pri = fun_48F0(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 10;
    var_968 = 8;
    pri = fun_0090(var_960)
    var_976 = 1;
    var_984 = 1;
    var_992 = 90;
    pri = float(var_992)
    var_1000 = pri;
    OP_PUSH2_C 4666314341058787410, 4663324197196818022
    var_1008 = arg_0;
    var_1016 = 48;
    pri = fun_0748(var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1024 = 1;
    var_1032 = 1;
    var_1040 = -160;
    pri = float(var_1040)
    var_1048 = pri;
    OP_PUSH3_C 4666601951310381056, 4663611191721900114, 8802641224559852288
    var_1056 = 48;
    pri = fun_0748(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1064 = -492037105610703242;
    var_1072 = 8;
    pri = fun_0570(var_1064)
    var_1080 = 0;
    pri = fun_05A0()
    var_1088 = 1;
    var_1096 = 1;
    OP_PUSH4_C -4587338432941916160, 4666318552188321792, 4663620240702596710, -492037105610703242
    var_1104 = 48;
    pri = fun_0748(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    pri = EvCameraStart()
    var_1112 = 0;
    var_1120 = 4631318898052956160;
    var_1128 = 0;
    OP_PUSH5_C 4666283576723442237, 4638585174576741745, 4663383592814950482, 4666758956073269330, 4640687088965328568
    var_1136 = 4663421449000294810;
    var_1144 = 1;
    pri = EvCameraMove(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1152 = 0;
    pri = fun_2C80()
    var_1160 = 10;
    var_1168 = 8;
    pri = fun_0090(var_1160)
    var_1176 = 0;
    var_1184 = 4628349337048658739;
    var_1192 = 0;
    OP_PUSH5_C 4666301075450998292, 4631535633785023365, 4663519712354469151, 4666773843460709417, 4639573151744996147
    var_1200 = 4663557348637487923;
    var_1208 = 1;
    pri = EvCameraMove(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1216 = 0;
    pri = fun_2C80()
    var_1224 = 0;
    var_1232 = 4628349337048658739;
    var_1240 = 3;
    OP_PUSH5_C 4666105334893463470, 4627057366905556828, 4663356423882628137, 4666578102903174595, 4638783614435322757
    var_1248 = 4663394060165646909;
    var_1256 = 150;
    pri = EvCameraMove(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1264 = 31304;
    var_1272 = 8;
    var_1280 = 16;
    pri = fun_02D8(var_1272, var_1264)
    var_1288 = 0;
    pri = fun_03A8()
    var_1296 = 1;
    var_1304 = 0;
    var_1312 = 4641240890982006784;
    var_1320 = 0;
    var_1328 = 0;
    OP_PUSH4_C 4666318552188321792, 4663432224214247014, 4607182418800017408, -492037105610703242
    var_1336 = 72;
    pri = fun_07D8(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 100;
    var_1376 = -1;
    OP_PUSH2_C -8344720168342507329, -492037105610703242
    var_1384 = 56;
    pri = fun_22A8(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = -492037105610703242;
    var_1400 = 8;
    pri = fun_08F8(var_1392)
    var_1408 = 1;
    var_1416 = 8;
    pri = fun_24A0(var_1408)
    var_1424 = 0;
    pri = fun_2560()
    var_1432 = 1;
    var_1440 = 3;
    var_1448 = 0;
    var_1456 = 9;
    var_1464 = arg_0;
    var_1472 = 40;
    pri = fun_6C28(var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1480 = arg_0;
    var_1488 = 8;
    pri = fun_0AD0(var_1480)
    var_1496 = 0;
    var_1504 = 3;
    var_1512 = 0;
    var_1520 = 100;
    var_1528 = -1;
    var_1536 = -9072245272041194079;
    var_1544 = arg_0;
    var_1552 = 56;
    pri = fun_22A8(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1560 = 1;
    var_1568 = 8;
    pri = fun_24A0(var_1560)
    var_1576 = 0;
    pri = fun_2560()
    var_1584 = 4;
    var_1592 = 5;
    var_1600 = -492037105610703242;
    var_1608 = 24;
    pri = fun_1668(var_1600, var_1592, var_1584)
    var_1616 = 1;
    var_1624 = 1;
    var_1632 = -1;
    var_1640 = -1;
    var_1648 = 0;
    var_1656 = 1;
    var_1664 = -492037105610703242;
    var_1672 = 56;
    pri = fun_48F0(var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1680 = 0;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 100;
    var_1712 = -1;
    OP_PUSH2_C -8344719068830879118, -492037105610703242
    var_1720 = 56;
    pri = fun_22A8(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 1;
    var_1736 = 8;
    pri = fun_24A0(var_1728)
    var_1744 = 0;
    pri = fun_2560()
    var_1752 = 1;
    var_1760 = 3;
    var_1768 = 0;
    var_1776 = 1;
    var_1784 = -492037105610703242;
    var_1792 = 40;
    pri = fun_6C28(var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1800 = -492037105610703242;
    var_1808 = 8;
    pri = fun_0AD0(var_1800)
    var_1816 = -492037105610703242;
    var_1824 = 8;
    pri = fun_16D0(var_1816)
    var_1832 = 0;
    var_1840 = 4628349337048658739;
    var_1848 = 0;
    OP_PUSH5_C 4666049017907888783, 4623772553927343473, 4664010952159526912, 4666363621169944330, 4639417988664084398
    var_1856 = 4663309837574959268;
    var_1864 = 1;
    pri = EvCameraMove(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1872 = 0;
    pri = fun_2C80()
    var_1880 = 0;
    var_1888 = 1;
    var_1896 = 60;
    var_1904 = 3;
    var_1912 = -492037105610703242;
    var_1920 = 40;
    pri = fun_1088(var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1928 = 0;
    var_1936 = 3;
    var_1944 = 0;
    var_1952 = 100;
    var_1960 = -1;
    OP_PUSH2_C -8344717969319250907, -492037105610703242
    var_1968 = 56;
    pri = fun_22A8(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1976 = 1;
    var_1984 = 8;
    pri = fun_24A0(var_1976)
    var_1992 = 0;
    pri = fun_2560()
    var_2000 = 7;
    var_2008 = 7;
    var_2016 = arg_0;
    var_2024 = 24;
    pri = fun_1668(var_2016, var_2008, var_2000)
    var_2032 = 0;
    var_2040 = 4628349337048658739;
    var_2048 = 0;
    OP_PUSH5_C 4666123509820670607, -4590160219583440486, 4662897509719426990, 4666410245960520172, 4640414058237919232
    var_2056 = 4663614919066318275;
    var_2064 = 1;
    pri = EvCameraMove(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2072 = 0;
    pri = fun_2C80()
    var_2080 = 1;
    var_2088 = -1;
    var_2096 = -1;
    var_2104 = 3;
    var_2112 = 0;
    var_2120 = 0;
    var_2128 = arg_0;
    var_2136 = 56;
    pri = fun_2D10(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2144 = 0;
    var_2152 = 3;
    var_2160 = 0;
    var_2168 = 100;
    var_2176 = -1;
    var_2184 = -9072248570576078712;
    var_2192 = arg_0;
    var_2200 = 56;
    pri = fun_22A8(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = arg_0;
    var_2216 = 8;
    pri = fun_0AD0(var_2208)
    var_2224 = 1;
    var_2232 = 8;
    pri = fun_24A0(var_2224)
    var_2240 = 0;
    pri = fun_2560()
    var_2248 = arg_0;
    var_2256 = 8;
    pri = fun_16D0(var_2248)
    var_2264 = -1;
    var_2272 = -492037105610703242;
    var_2280 = 16;
    pri = fun_14F8(var_2272, var_2264)
    var_2288 = 70;
    var_2296 = -492037105610703242;
    var_2304 = 16;
    pri = fun_1538(var_2296, var_2288)
    var_2312 = 1;
    var_2320 = -1;
    var_2328 = -1;
    var_2336 = 3;
    var_2344 = 0;
    var_2352 = 2;
    var_2360 = arg_0;
    var_2368 = 56;
    pri = fun_2D10(var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2376 = 0;
    var_2384 = 3;
    var_2392 = 0;
    var_2400 = 100;
    var_2408 = -1;
    var_2416 = -9072247471064450501;
    var_2424 = arg_0;
    var_2432 = 56;
    pri = fun_22A8(var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2440 = arg_0;
    var_2448 = 8;
    pri = fun_0AD0(var_2440)
    var_2456 = 1;
    var_2464 = 8;
    pri = fun_24A0(var_2456)
    var_2472 = 0;
    pri = fun_2560()
    var_2480 = 5;
    var_2488 = 8;
    pri = fun_0090(var_2480)
    var_2496 = 1;
    var_2504 = 1;
    var_2512 = -1;
    var_2520 = -1;
    var_2528 = 0;
    var_2536 = 12;
    var_2544 = -492037105610703242;
    var_2552 = 56;
    pri = fun_48F0(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2560 = 4;
    var_2568 = 4;
    var_2576 = -492037105610703242;
    var_2584 = 24;
    pri = fun_1668(var_2576, var_2568, var_2560)
    var_2592 = 0;
    var_2600 = 4628349337048658739;
    var_2608 = 0;
    OP_PUSH5_C 4666079875701722317, -4590391029064343224, 4663789312605599826, 4666422736412611707, 4640460853452797379
    var_2616 = 4663178182052649370;
    var_2624 = 1;
    pri = EvCameraMove(var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552)
    var_2632 = 0;
    pri = fun_2C80()
    var_2640 = 0;
    var_2648 = 3;
    var_2656 = 0;
    var_2664 = 100;
    var_2672 = -1;
    OP_PUSH2_C -8344725665900648384, -492037105610703242
    var_2680 = 56;
    pri = fun_22A8(var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2688 = 1;
    var_2696 = 8;
    pri = fun_24A0(var_2688)
    var_2704 = 0;
    pri = fun_2560()
    var_2712 = 1;
    var_2720 = 3;
    var_2728 = 0;
    var_2736 = 12;
    var_2744 = -492037105610703242;
    var_2752 = 40;
    pri = fun_6C28(var_2744, var_2736, var_2728, var_2720, var_2712)
    var_2760 = -492037105610703242;
    var_2768 = 8;
    pri = fun_0AD0(var_2760)
    var_2776 = 1;
    var_2784 = 1;
    var_2792 = 50;
    var_2800 = 3;
    var_2808 = arg_0;
    var_2816 = 40;
    pri = fun_1088(var_2808, var_2800, var_2792, var_2784, var_2776)
    var_2824 = 0;
    var_2832 = 3;
    var_2840 = 0;
    var_2848 = 100;
    var_2856 = -1;
    var_2864 = -9072250769599335134;
    var_2872 = arg_0;
    var_2880 = 56;
    pri = fun_22A8(var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824)
    var_2888 = 1;
    var_2896 = 8;
    pri = fun_24A0(var_2888)
    var_2904 = 0;
    pri = fun_2560()
    var_2912 = -1;
    var_2920 = arg_0;
    var_2928 = 16;
    pri = fun_14F8(var_2920, var_2912)
    var_2936 = 1;
    var_2944 = -1;
    var_2952 = -1;
    var_2960 = 3;
    var_2968 = 0;
    var_2976 = 1;
    var_2984 = arg_0;
    var_2992 = 56;
    pri = fun_2D10(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936)
    var_3000 = 0;
    var_3008 = 4628349337048658739;
    var_3016 = 0;
    OP_PUSH5_C 4666068253863816724, -4589954742850441708, 4662731813317121147, 4666359041704014643, 4639991845772853248
    var_3024 = 4663446726772617380;
    var_3032 = 1;
    pri = EvCameraMove(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960)
    var_3040 = 0;
    pri = fun_2C80()
    var_3048 = 0;
    var_3056 = 3;
    var_3064 = 0;
    var_3072 = 100;
    var_3080 = -1;
    var_3088 = -9072249670087706923;
    var_3096 = arg_0;
    var_3104 = 56;
    pri = fun_22A8(var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048)
    var_3112 = arg_0;
    var_3120 = 8;
    pri = fun_0AD0(var_3112)
    var_3128 = 1;
    var_3136 = 8;
    pri = fun_24A0(var_3128)
    var_3144 = 0;
    pri = fun_2560()
    var_3152 = 0;
    var_3160 = 4628349337048658739;
    var_3168 = 0;
    OP_PUSH5_C 4666072756363932467, -4591006051888456008, 4662886316691056230, 4666394061149359309, 4640253969344915046
    var_3176 = 4663546925267256607;
    var_3184 = 1;
    pri = EvCameraMove(var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112)
    var_3192 = 0;
    pri = fun_2C80()
    var_3200 = 7;
    var_3208 = 7;
    var_3216 = arg_0;
    var_3224 = 24;
    pri = fun_1668(var_3216, var_3208, var_3200)
    var_3232 = 1;
    var_3240 = 1;
    var_3248 = -1;
    var_3256 = -1;
    var_3264 = 0;
    var_3272 = 9;
    var_3280 = arg_0;
    var_3288 = 56;
    pri = fun_48F0(var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232)
    var_3296 = 0;
    var_3304 = 3;
    var_3312 = 0;
    var_3320 = 100;
    var_3328 = -1;
    var_3336 = -9073233732994766543;
    var_3344 = arg_0;
    var_3352 = 56;
    pri = fun_22A8(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    var_3360 = 1;
    var_3368 = 8;
    pri = fun_24A0(var_3360)
    var_3376 = 0;
    pri = fun_2560()
    var_3384 = 1;
    var_3392 = 3;
    var_3400 = 0;
    var_3408 = 9;
    var_3416 = arg_0;
    var_3424 = 40;
    pri = fun_6C28(var_3416, var_3408, var_3400, var_3392, var_3384)
    var_3432 = 0;
    var_3440 = 3;
    var_3448 = 0;
    var_3456 = 100;
    var_3464 = -1;
    var_3472 = -9073234832506394754;
    var_3480 = arg_0;
    var_3488 = 56;
    pri = fun_22A8(var_3480, var_3472, var_3464, var_3456, var_3448, var_3440, var_3432)
    var_3496 = arg_0;
    var_3504 = 8;
    pri = fun_0AD0(var_3496)
    var_3512 = 1;
    var_3520 = 8;
    pri = fun_24A0(var_3512)
    var_3528 = 0;
    pri = fun_2560()
    var_3536 = 1;
    var_3544 = -1;
    var_3552 = -1;
    var_3560 = 3;
    var_3568 = 0;
    var_3576 = 2;
    var_3584 = -492037105610703242;
    var_3592 = 56;
    pri = fun_2D10(var_3584, var_3576, var_3568, var_3560, var_3552, var_3544, var_3536)
    var_3600 = 0;
    var_3608 = 4628349337048658739;
    var_3616 = 0;
    OP_PUSH5_C 4666187039602523505, -4587725461034893312, 4663667431741660856, 4666475732873070510, 4643403146568725955
    var_3624 = 4663014178898250301;
    var_3632 = 1;
    pri = EvCameraMove(var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560)
    var_3640 = 0;
    pri = fun_2C80()
    var_3648 = 0;
    var_3656 = 4628349337048658739;
    var_3664 = 3;
    OP_PUSH5_C 4666171558478804419, -4587725461034893312, 4663636601435618017, 4666497041408416809, 4643384498851518874
    var_3672 = 4663055839393826734;
    var_3680 = 240;
    pri = EvCameraMove(var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632, var_3624, var_3616, var_3608)
    var_3688 = -492037105610703242;
    var_3696 = 8;
    pri = fun_16D0(var_3688)
    var_3704 = 0;
    var_3712 = 3;
    var_3720 = 0;
    var_3728 = 100;
    var_3736 = -1;
    OP_PUSH2_C -8344724566389020173, -492037105610703242
    var_3744 = 56;
    pri = fun_22A8(var_3736, var_3728, var_3720, var_3712, var_3704, var_3696, var_3688)
    var_3752 = -492037105610703242;
    var_3760 = 8;
    pri = fun_0AD0(var_3752)
    var_3768 = 1;
    var_3776 = 8;
    pri = fun_24A0(var_3768)
    var_3784 = 0;
    pri = fun_2560()
    var_3792 = arg_0;
    var_3800 = 8;
    pri = fun_16D0(var_3792)
    var_3808 = 1;
    var_3816 = 1;
    var_3824 = 60;
    var_3832 = 3;
    var_3840 = arg_0;
    var_3848 = 40;
    pri = fun_1088(var_3840, var_3832, var_3824, var_3816, var_3808)
    var_3856 = 0;
    var_3864 = 3;
    var_3872 = 0;
    var_3880 = 100;
    var_3888 = -1;
    var_3896 = -9073235932018022965;
    var_3904 = arg_0;
    var_3912 = 56;
    pri = fun_22A8(var_3904, var_3896, var_3888, var_3880, var_3872, var_3864, var_3856)
    var_3920 = 1;
    var_3928 = 8;
    pri = fun_24A0(var_3920)
    var_3936 = 0;
    pri = fun_2560()
    OP_PUSH2_C -4602115869219225600, 4628349337048658739
    var_3944 = 0;
    OP_PUSH5_C 4666016428383241503, -4581106225113821348, 4663956537329068278, 4666338403870761288, 4639169235153416356
    var_3952 = 4663382955098206372;
    var_3960 = 1;
    pri = EvCameraMove(var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904, var_3896, var_3888)
    var_3968 = 0;
    pri = fun_2C80()
    var_3976 = 0;
    var_3984 = 3;
    var_3992 = 0;
    var_4000 = 100;
    var_4008 = -1;
    OP_PUSH2_C -8344723466877391962, -492037105610703242
    var_4016 = 56;
    pri = fun_22A8(var_4008, var_4000, var_3992, var_3984, var_3976, var_3968, var_3960)
    var_4024 = 1;
    var_4032 = 8;
    pri = fun_24A0(var_4024)
    var_4040 = 0;
    pri = fun_2560()
    var_4048 = 4;
    var_4056 = 5;
    var_4064 = -492037105610703242;
    var_4072 = 24;
    pri = fun_1668(var_4064, var_4056, var_4048)
    var_4080 = 1;
    var_4088 = 1;
    var_4096 = -1;
    var_4104 = -1;
    var_4112 = 0;
    var_4120 = 4;
    var_4128 = -492037105610703242;
    var_4136 = 56;
    pri = fun_48F0(var_4128, var_4120, var_4112, var_4104, var_4096, var_4088, var_4080)
    var_4144 = 0;
    var_4152 = 4628349337048658739;
    var_4160 = 0;
    OP_PUSH5_C 4666138204793575834, 4616730050010042860, 4663939604850000527, 4666385243066104545, 4639533745248256655
    var_4168 = 4663140160940560876;
    var_4176 = 1;
    pri = EvCameraMove(var_4176, var_4168, var_4160, var_4152, var_4144, var_4136, var_4128, var_4120, var_4112, var_4104)
    var_4184 = 0;
    pri = fun_2C80()
    var_4192 = 0;
    var_4200 = 4628349337048658739;
    var_4208 = 3;
    OP_PUSH5_C 4666084916962535670, 4616730050010042860, 4663855997985824440, 4666409580755985367, 4639533041560814879
    var_4216 = 4663176543780323983;
    var_4224 = 130;
    pri = EvCameraMove(var_4224, var_4216, var_4208, var_4200, var_4192, var_4184, var_4176, var_4168, var_4160, var_4152)
    var_4232 = 0;
    var_4240 = 3;
    var_4248 = 0;
    var_4256 = 100;
    var_4264 = -1;
    OP_PUSH2_C -8344722367365763751, -492037105610703242
    var_4272 = 56;
    pri = fun_22A8(var_4264, var_4256, var_4248, var_4240, var_4232, var_4224, var_4216)
    var_4280 = 1;
    var_4288 = 8;
    pri = fun_24A0(var_4280)
    var_4296 = 0;
    pri = fun_2560()
    var_4304 = 0;
    var_4312 = 4628349337048658739;
    var_4320 = 0;
    OP_PUSH5_C 4666048770517772534, -4592793417990568673, 4662984118250346906, 4666420625350286377, 4640045677862149161
    var_4328 = 4663537304540513567;
    var_4336 = 1;
    pri = EvCameraMove(var_4336, var_4328, var_4320, var_4312, var_4304, var_4296, var_4288, var_4280, var_4272, var_4264)
    var_4344 = 0;
    pri = fun_2C80()
    var_4352 = 0;
    var_4360 = 4628349337048658739;
    var_4368 = 3;
    OP_PUSH5_C 4666095582225325097, -4592793417990568673, 4662879609670126797, 4666402340471916462, 4640048492611916268
    var_4376 = 4663574325097020785;
    var_4384 = 130;
    pri = EvCameraMove(var_4384, var_4376, var_4368, var_4360, var_4352, var_4344, var_4336, var_4328, var_4320, var_4312)
    var_4392 = 1;
    var_4400 = 3;
    var_4408 = 0;
    var_4416 = 4;
    var_4424 = -492037105610703242;
    var_4432 = 40;
    pri = fun_6C28(var_4424, var_4416, var_4408, var_4400, var_4392)
    var_4440 = -1;
    var_4448 = arg_0;
    var_4456 = 16;
    pri = fun_14F8(var_4448, var_4440)
    var_4464 = 4;
    var_4472 = 4;
    var_4480 = arg_0;
    var_4488 = 24;
    pri = fun_1668(var_4480, var_4472, var_4464)
    var_4496 = 1;
    var_4504 = -1;
    var_4512 = -1;
    var_4520 = 3;
    var_4528 = 0;
    var_4536 = 1;
    var_4544 = arg_0;
    var_4552 = 56;
    pri = fun_2D10(var_4544, var_4536, var_4528, var_4520, var_4512, var_4504, var_4496)
    var_4560 = 0;
    var_4568 = 3;
    var_4576 = 0;
    var_4584 = 100;
    var_4592 = -1;
    var_4600 = -9073237031529651176;
    var_4608 = arg_0;
    var_4616 = 56;
    pri = fun_22A8(var_4608, var_4600, var_4592, var_4584, var_4576, var_4568, var_4560)
    var_4624 = -492037105610703242;
    var_4632 = 8;
    pri = fun_0AD0(var_4624)
    var_4640 = arg_0;
    var_4648 = 8;
    pri = fun_0AD0(var_4640)
    var_4656 = 1;
    var_4664 = 8;
    pri = fun_24A0(var_4656)
    var_4672 = 0;
    pri = fun_2560()
    var_4680 = 1;
    var_4688 = 3;
    var_4696 = 0;
    var_4704 = 12;
    var_4712 = arg_0;
    var_4720 = 40;
    pri = fun_6C28(var_4712, var_4704, var_4696, var_4688, var_4680)
    var_4728 = -492037105610703242;
    var_4736 = 8;
    pri = fun_16D0(var_4728)
    var_4744 = 0;
    var_4752 = 4628349337048658739;
    var_4760 = 0;
    OP_PUSH5_C 4666137726506017751, -4588094896941826048, 4663500349954704015, 4666551604672945193, 4643121495670154854
    var_4768 = 4663199479592879391;
    var_4776 = 1;
    pri = EvCameraMove(var_4776, var_4768, var_4760, var_4752, var_4744, var_4736, var_4728, var_4720, var_4712, var_4704)
    var_4784 = 0;
    pri = fun_2C80()
    var_4792 = 1;
    var_4800 = -1;
    var_4808 = -1;
    var_4816 = 3;
    var_4824 = 0;
    var_4832 = 0;
    var_4840 = -492037105610703242;
    var_4848 = 56;
    pri = fun_2D10(var_4840, var_4832, var_4824, var_4816, var_4808, var_4800, var_4792)
    var_4856 = 0;
    var_4864 = 3;
    var_4872 = 0;
    var_4880 = 100;
    var_4888 = -1;
    OP_PUSH2_C -8344712471761109852, -492037105610703242
    var_4896 = 56;
    pri = fun_22A8(var_4888, var_4880, var_4872, var_4864, var_4856, var_4848, var_4840)
    var_4904 = arg_0;
    var_4912 = 8;
    pri = fun_0AD0(var_4904)
    var_4920 = -492037105610703242;
    var_4928 = 8;
    pri = fun_0AD0(var_4920)
    var_4936 = arg_0;
    var_4944 = 8;
    pri = fun_0AD0(var_4936)
    var_4952 = 1;
    var_4960 = 8;
    pri = fun_24A0(var_4952)
    var_4968 = 0;
    pri = fun_2560()
    var_4976 = 0;
    var_4984 = 4628349337048658739;
    var_4992 = 3;
    OP_PUSH5_C 4666199293659615068, -4593615324922563789, 4663475533977265111, 4666613479689798287, 4643982809098889462
    var_5000 = 4663175609195440374;
    var_5008 = 90;
    pri = EvCameraMove(var_5008, var_5000, var_4992, var_4984, var_4976, var_4968, var_4960, var_4952, var_4944, var_4936)
    var_5016 = 1;
    var_5024 = 0;
    var_5032 = 4641240890982006784;
    var_5040 = 0;
    var_5048 = 0;
    OP_PUSH4_C 4666293060011231805, 4664820478590593270, 4611686018427387904, -492037105610703242
    var_5056 = 72;
    pri = fun_07D8(var_5048, var_5040, var_5032, var_5024, var_5016, var_5008, var_5000, var_4992, var_4984)
    var_5064 = -492037105610703242;
    var_5072 = 8;
    pri = fun_08F8(var_5064)
    var_5080 = -492037105610703242;
    var_5088 = 8;
    pri = fun_06F0(var_5080)
    var_5096 = 0;
    var_5104 = 0;
    var_5112 = 0;
    var_5120 = 4629876338797314048;
    var_5128 = arg_0;
    var_5136 = 40;
    pri = fun_0850(var_5128, var_5120, var_5112, var_5104, var_5096)
    var_5144 = arg_0;
    var_5152 = 8;
    pri = fun_08F8(var_5144)
    var_5160 = 0;
    var_5168 = 4628349337048658739;
    var_5176 = 3;
    OP_PUSH5_C 4666140871109273190, -4588116007565079347, 4663514291762144215, 4666568322747245527, 4641975188827500708
    var_5184 = 4663249518367059476;
    var_5192 = 75;
    pri = EvCameraMove(var_5192, var_5184, var_5176, var_5168, var_5160, var_5152, var_5144, var_5136, var_5128, var_5120)
    var_5200 = 1;
    var_5208 = 0;
    var_5216 = 4641240890982006784;
    var_5224 = 0;
    var_5232 = 0;
    OP_PUSH4_C 4666403346525055877, 4663429189562154353, 4611686018427387904, 8802641224559852288
    var_5240 = 72;
    pri = fun_07D8(var_5232, var_5224, var_5216, var_5208, var_5200, var_5192, var_5184, var_5176, var_5168)
    var_5248 = 8802641224559852288;
    var_5256 = 8;
    pri = fun_08F8(var_5248)
    var_5264 = 0;
    var_5272 = 0;
    var_5280 = 0;
    var_5288 = 0;
    var_5296 = 8802641224559852288;
    var_5304 = arg_0;
    var_5312 = 48;
    pri = fun_08A0(var_5304, var_5296, var_5288, var_5280, var_5272, var_5264)
    var_5320 = 0;
    var_5328 = 0;
    var_5336 = 0;
    var_5344 = 0;
    var_5352 = arg_0;
    var_5360 = 8802641224559852288;
    var_5368 = 48;
    pri = fun_08A0(var_5360, var_5352, var_5344, var_5336, var_5328, var_5320)
    var_5376 = arg_0;
    var_5384 = 8;
    pri = fun_08F8(var_5376)
    var_5392 = 8802641224559852288;
    var_5400 = 8;
    pri = fun_08F8(var_5392)
    var_5408 = 7;
    var_5416 = 7;
    var_5424 = arg_0;
    var_5432 = 24;
    pri = fun_1668(var_5424, var_5416, var_5408)
    var_5440 = 1;
    var_5448 = 1;
    var_5456 = -1;
    var_5464 = -1;
    var_5472 = 0;
    var_5480 = 6;
    var_5488 = arg_0;
    var_5496 = 56;
    pri = fun_48F0(var_5488, var_5480, var_5472, var_5464, var_5456, var_5448, var_5440)
    var_5504 = 0;
    var_5512 = 3;
    var_5520 = 0;
    var_5528 = 100;
    var_5536 = -1;
    var_5544 = -9073229334948253699;
    var_5552 = arg_0;
    var_5560 = 56;
    pri = fun_22A8(var_5552, var_5544, var_5536, var_5528, var_5520, var_5512, var_5504)
    var_5568 = 1;
    var_5576 = 8;
    pri = fun_24A0(var_5568)
    var_5584 = 0;
    var_5592 = -5724655895315032583;
    var_5600 = 0;
    var_5608 = 24;
    pri = fun_2590(var_5600, var_5592, var_5584)
    var_5616 = 0;
    var_5624 = -5724654795803404372;
    var_5632 = 1;
    var_5640 = 24;
    pri = fun_2590(var_5632, var_5624, var_5616)
    var_5648 = 0;
    var_5656 = 0;
    var_5664 = 0;
    var_5672 = 1;
    var_5680 = 32;
    pri = fun_2678(var_5672, var_5664, var_5656, var_5648)
    var_5688 = 1;
    var_5696 = -1;
    var_5704 = -1;
    var_5712 = 3;
    var_5720 = 0;
    var_5728 = 19;
    var_5736 = 8802641224559852288;
    var_5744 = 56;
    pri = fun_2D10(var_5736, var_5728, var_5720, var_5712, var_5704, var_5696, var_5688)
    var_5752 = 8802641224559852288;
    var_5760 = 8;
    pri = fun_0AD0(var_5752)
    var_5768 = 1;
    var_5776 = 3;
    var_5784 = 0;
    var_5792 = 6;
    var_5800 = arg_0;
    var_5808 = 40;
    pri = fun_6C28(var_5800, var_5792, var_5784, var_5776, var_5768)
    var_5816 = arg_0;
    var_5824 = 8;
    pri = fun_16D0(var_5816)
    var_5832 = 0;
    var_5840 = 3;
    var_5848 = 0;
    var_5856 = 100;
    var_5864 = -1;
    var_5872 = -9073230434459881910;
    var_5880 = arg_0;
    var_5888 = 56;
    pri = fun_22A8(var_5880, var_5872, var_5864, var_5856, var_5848, var_5840, var_5832)
    var_5896 = arg_0;
    var_5904 = 8;
    pri = fun_0AD0(var_5896)
    var_5912 = 1;
    var_5920 = 8;
    pri = fun_24A0(var_5912)
    var_5928 = 0;
    pri = fun_2560()
    var_5936 = 1;
    var_5944 = 1;
    var_5952 = -1;
    var_5960 = -1;
    var_5968 = 0;
    var_5976 = 12;
    var_5984 = arg_0;
    var_5992 = 56;
    pri = fun_48F0(var_5984, var_5976, var_5968, var_5960, var_5952, var_5944, var_5936)
    var_6000 = 4;
    var_6008 = 4;
    var_6016 = arg_0;
    var_6024 = 24;
    pri = fun_1668(var_6016, var_6008, var_6000)
    var_6032 = 0;
    var_6040 = 3;
    var_6048 = 0;
    var_6056 = 100;
    var_6064 = -1;
    var_6072 = -9073231533971510121;
    var_6080 = arg_0;
    var_6088 = 56;
    pri = fun_22A8(var_6080, var_6072, var_6064, var_6056, var_6048, var_6040, var_6032)
    var_6096 = 1;
    var_6104 = 8;
    pri = fun_24A0(var_6096)
    var_6112 = 0;
    pri = fun_2560()
    var_6120 = 1;
    var_6128 = 3;
    var_6136 = 0;
    var_6144 = 12;
    var_6152 = arg_0;
    var_6160 = 40;
    pri = fun_6C28(var_6152, var_6144, var_6136, var_6128, var_6120)
    var_6168 = arg_0;
    var_6176 = 8;
    pri = fun_0AD0(var_6168)
    var_6184 = 1;
    var_6192 = 1;
    var_6200 = -1;
    var_6208 = -1;
    var_6216 = 0;
    var_6224 = 8;
    var_6232 = arg_0;
    var_6240 = 56;
    pri = fun_48F0(var_6232, var_6224, var_6216, var_6208, var_6200, var_6192, var_6184)
    var_6248 = 5;
    var_6256 = 5;
    var_6264 = arg_0;
    var_6272 = 24;
    pri = fun_1668(var_6264, var_6256, var_6248)
    var_6280 = 0;
    var_6288 = 3;
    var_6296 = 0;
    var_6304 = 100;
    var_6312 = -1;
    var_6320 = -9073232633483138332;
    var_6328 = arg_0;
    var_6336 = 56;
    pri = fun_22A8(var_6328, var_6320, var_6312, var_6304, var_6296, var_6288, var_6280)
    var_6344 = 1;
    var_6352 = 8;
    pri = fun_24A0(var_6344)
    var_6360 = 0;
    pri = fun_2560()
    var_6368 = 1;
    var_6376 = 3;
    var_6384 = 0;
    var_6392 = 8;
    var_6400 = arg_0;
    var_6408 = 40;
    pri = fun_6C28(var_6400, var_6392, var_6384, var_6376, var_6368)
    var_6416 = arg_0;
    var_6424 = 8;
    pri = fun_16D0(var_6416)
    var_6432 = 0;
    var_6440 = 3;
    var_6448 = 0;
    var_6456 = 100;
    var_6464 = -1;
    var_6472 = -9073242529087792231;
    var_6480 = arg_0;
    var_6488 = 56;
    pri = fun_22A8(var_6480, var_6472, var_6464, var_6456, var_6448, var_6440, var_6432)
    var_6496 = arg_0;
    var_6504 = 8;
    pri = fun_0AD0(var_6496)
    var_6512 = 1;
    var_6520 = 8;
    pri = fun_24A0(var_6512)
    var_6528 = 0;
    pri = fun_2560()
    var_6536 = 1;
    var_6544 = -1;
    var_6552 = -1;
    var_6560 = 3;
    var_6568 = 0;
    var_6576 = 1;
    var_6584 = arg_0;
    var_6592 = 56;
    pri = fun_2D10(var_6584, var_6576, var_6568, var_6560, var_6552, var_6544, var_6536)
    var_6600 = 0;
    var_6608 = 3;
    var_6616 = 0;
    var_6624 = 100;
    var_6632 = -1;
    var_6640 = -9073243628599420442;
    var_6648 = arg_0;
    var_6656 = 56;
    pri = fun_22A8(var_6648, var_6640, var_6632, var_6624, var_6616, var_6608, var_6600)
    var_6664 = arg_0;
    var_6672 = 8;
    pri = fun_0AD0(var_6664)
    var_6680 = 1;
    var_6688 = 8;
    pri = fun_24A0(var_6680)
    var_6696 = 0;
    pri = fun_2560()
    var_6704 = 1;
    var_6712 = -1;
    var_6720 = -1;
    var_6728 = 3;
    var_6736 = 0;
    var_6744 = 2;
    var_6752 = arg_0;
    var_6760 = 56;
    pri = fun_2D10(var_6752, var_6744, var_6736, var_6728, var_6720, var_6712, var_6704)
    var_6768 = 5;
    var_6776 = 8;
    pri = fun_0090(var_6768)
    var_6784 = 1;
    var_6792 = -1;
    var_6800 = -1;
    var_6808 = 3;
    var_6816 = 0;
    var_6824 = 21;
    var_6832 = 8802641224559852288;
    var_6840 = 56;
    pri = fun_2D10(var_6832, var_6824, var_6816, var_6808, var_6800, var_6792, var_6784)
    var_6848 = 3;
    var_6856 = 0;
    var_6864 = 4557278458041874465;
    var_6872 = 24;
    pri = fun_2358(var_6864, var_6856, var_6848)
    var_6880 = arg_0;
    var_6888 = 8;
    pri = fun_0AD0(var_6880)
    var_6896 = 8802641224559852288;
    var_6904 = 8;
    pri = fun_0AD0(var_6896)
    var_6912 = 1;
    var_6920 = 8;
    pri = fun_24A0(var_6912)
    var_6928 = 0;
    pri = fun_2560()
    var_6936 = 0;
    var_6944 = 3;
    var_6952 = 0;
    var_6960 = 100;
    var_6968 = -1;
    var_6976 = -9074084754994812632;
    var_6984 = arg_0;
    var_6992 = 56;
    pri = fun_22A8(var_6984, var_6976, var_6968, var_6960, var_6952, var_6944, var_6936)
    var_7000 = 1;
    var_7008 = 8;
    pri = fun_24A0(var_7000)
    var_7016 = 0;
    pri = fun_2560()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_DA38
    var_7024 = 6;
    var_7032 = 4;
    var_7040 = 2;
    var_7048 = 0;
    var_7056 = 8;
    var_7064 = 1;
    var_7072 = 1117;
    var_7080 = arg_0;
    var_7088 = 64;
    pri = fun_8B58(var_7080, var_7072, var_7064, var_7056, var_7048, var_7040, var_7032, var_7024)
    OP_JUMP lab_DA90
// lab_DFB0
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_E0A0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -9074079257436671577;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_22A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_24A0(var_72)
    var_88 = 0;
    pri = fun_2560()
    var_96 = 2;
    var_104 = 3102359309162764884;
    pri = WorkSet(var_104, var_96)
    OP_JUMP lab_E160
// lab_E0A0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -9071277701808557624;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_22A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_24A0(var_72)
    var_88 = 0;
    pri = fun_2560()
    var_96 = 2;
    var_104 = 3102359309162764884;
    pri = WorkSet(var_104, var_96)
// lab_E160
    pri = 0;
    return pri;
// lab_DA38
    var_8 = 6;
    var_16 = 4;
    var_24 = 2;
    var_32 = 0;
    var_40 = 8;
    var_48 = 1;
    var_56 = 1116;
    var_64 = arg_0;
    var_72 = 64;
    pri = fun_8B58(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_DA90
    var_8 = 4;
    var_16 = 5;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1668(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    var_64 = -1;
    var_72 = 0;
    var_80 = 1;
    var_88 = arg_0;
    var_96 = 56;
    pri = fun_48F0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    var_144 = -9074083655483184421;
    var_152 = arg_0;
    var_160 = 56;
    pri = fun_22A8(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_24A0(var_168)
    var_184 = 0;
    pri = fun_2560()
    var_192 = 1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 1;
    var_224 = arg_0;
    var_232 = 40;
    pri = fun_6C28(var_224, var_216, var_208, var_200, var_192)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    var_280 = -9074082555971556210;
    var_288 = arg_0;
    var_296 = 56;
    pri = fun_22A8(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = arg_0;
    var_312 = 8;
    pri = fun_0AD0(var_304)
    var_320 = 1;
    var_328 = 8;
    pri = fun_24A0(var_320)
    var_336 = 0;
    pri = fun_2560()
    var_344 = arg_0;
    var_352 = 8;
    pri = fun_16D0(var_344)
    var_360 = 1;
    var_368 = -1;
    var_376 = -1;
    var_384 = 3;
    var_392 = 0;
    var_400 = 0;
    var_408 = arg_0;
    var_416 = 56;
    pri = fun_2D10(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    var_464 = -9074081456459927999;
    var_472 = arg_0;
    var_480 = 56;
    pri = fun_22A8(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0AD0(var_488)
    var_504 = 1;
    var_512 = 8;
    pri = fun_24A0(var_504)
    var_520 = 0;
    pri = fun_2560()
    var_528 = 1;
    var_536 = 0;
    var_544 = 4641240890982006784;
    var_552 = 0;
    var_560 = 0;
    OP_PUSH3_C 4666306737935881339, 4661985596765582131, 4611686018427387904
    var_568 = arg_0;
    var_576 = 72;
    pri = fun_07D8(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    var_624 = -9074080356948299788;
    var_632 = arg_0;
    var_640 = 56;
    pri = fun_22A8(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 8;
    var_656 = 8;
    pri = fun_0090(var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = -90;
    pri = float(var_688)
    var_696 = pri;
    var_704 = 8802641224559852288;
    var_712 = 40;
    pri = fun_0850(var_704, var_696, var_688, var_680, var_672)
    var_720 = arg_0;
    var_728 = 8;
    pri = fun_08F8(var_720)
    var_736 = 1;
    var_744 = 8;
    pri = fun_24A0(var_736)
    var_752 = 0;
    pri = fun_2560()
    var_760 = arg_0;
    var_768 = 8;
    pri = fun_06F0(var_760)
    var_776 = 3;
    var_784 = 30;
    pri = EvCameraEnd(var_784, var_776)
    OP_JUMP lab_E160
}
