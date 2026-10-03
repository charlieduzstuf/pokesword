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
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07E0
fun_07E0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0868
fun_0868() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1500(var_8)
    OP_JZER lab_0938
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1530(var_24)
    OP_JNZ lab_0938
    pri = 0;
    return pri;
// lab_0938
    OP_JUMP lab_0948
// lab_0948
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09A8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0948
    pri = 0;
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A98
fun_0A98() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AE0
    pri = 0;
    return pri;
// lab_0AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B20
// lab_0B20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1500(var_8)
    OP_JNZ lab_0BA8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B98
    pri = 0;
    return pri;
// lab_0BA8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BF0
    pri = 0;
    return pri;
// lab_0BF0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C98(var_8)
    pri = 0;
    return pri;
// lab_0C50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B20
    pri = 0;
    return pri;
// lab_0B98
    OP_JUMP lab_0BF0
}
// fun_0C98
fun_0C98() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CD0
fun_0CD0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D20
    pri = 0;
    return pri;
// lab_0D20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1500(var_8)
    OP_JZER lab_0E50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D78
    OP_ZERO_P_S 64
// lab_0E50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E88
    OP_CONST_S 64, 1
// lab_0E88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC0
    OP_CONST_S 72, 1
// lab_0EC0
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
// lab_0D78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DA0
    OP_ZERO_P_S 72
// lab_0DA0
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
    OP_JUMP lab_0F60
// lab_0F60
    pri = 0;
    return pri;
}
// fun_0F70
fun_0F70() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB0
fun_0FB0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF0
fun_0FF0() {
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
// fun_1050
fun_1050() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1410
        case default:
        {
// switch_1410_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1410_case_0x0
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
            pri = fun_0FF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1410_case_default
        }
        case 0x1:
        {
// switch_1410_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FF0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1410_case_default
        }
        case 0x2:
        {
// switch_1410_case_0x2
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
            pri = fun_0FF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1410_case_default
        }
        case 0x3:
        {
// switch_1410_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FF0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1410_case_default
        }
        case 0x4:
        {
// switch_1410_case_0x4
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
            pri = fun_0FF0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1410_case_default
        }
        case 0x5:
        {
// switch_1410_case_0x5
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
            pri = fun_0FF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1410_case_default
        }
        case 0x6:
        {
// switch_1410_case_0x6
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
            pri = fun_0FF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1410_case_default
        }
        case 0x7:
        {
// switch_1410_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FF0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1410_case_default
        }
    }
}
// fun_14C0
fun_14C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1560
fun_1560() {
    OP_JUMP lab_1578
// lab_1578
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1608
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_15F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A98(var_8)
    pri = 0;
    return pri;
// lab_1608
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1698
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1688
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A98(var_8)
    pri = 0;
    return pri;
// lab_1698
    pri = 0;
    return pri;
// lab_1688
    OP_JUMP lab_16A8
// lab_16A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1578
    pri = 0;
    return pri;
// lab_15F8
    OP_JUMP lab_16A8
}
// fun_16E8
fun_16E8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A98(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1560(var_40)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_17A8
fun_17A8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_17D0
fun_17D0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1838
fun_1838() {
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
// switch_1E50
        case default:
        {
// switch_1E50_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E98
// lab_1E98
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
            OP_JNZ lab_1F40
            var_88 = 0;
            pri = fun_2210()
// lab_1F40
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E50_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A38
                case default:
                {
// switch_1A38_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AB0
// lab_1AB0
                    OP_JUMP lab_1E98
                }
                case 0x0:
                {
// switch_1A38_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1AB0
                }
                case 0x1:
                {
// switch_1A38_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1AB0
                }
                case 0x2:
                {
// switch_1A38_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1AB0
                }
                case 0x3:
                {
// switch_1A38_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AB0
                }
                case 0x4:
                {
// switch_1A38_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1AB0
                }
                case 0x5:
                {
// switch_1A38_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1AB0
                }
            }
        }
        case 0x65:
        {
// switch_1E50_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BF0
                case default:
                {
// switch_1BF0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C68
// lab_1C68
                    OP_JUMP lab_1E98
                }
                case 0x0:
                {
// switch_1BF0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C68
                }
                case 0x1:
                {
// switch_1BF0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C68
                }
                case 0x2:
                {
// switch_1BF0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C68
                }
                case 0x3:
                {
// switch_1BF0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C68
                }
                case 0x4:
                {
// switch_1BF0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C68
                }
                case 0x5:
                {
// switch_1BF0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C68
                }
            }
        }
        case 0x66:
        {
// switch_1E50_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1DA8
                case default:
                {
// switch_1DA8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E20
// lab_1E20
                    OP_JUMP lab_1E98
                }
                case 0x0:
                {
// switch_1DA8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E20
                }
                case 0x1:
                {
// switch_1DA8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E20
                }
                case 0x2:
                {
// switch_1DA8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E20
                }
                case 0x3:
                {
// switch_1DA8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E20
                }
                case 0x4:
                {
// switch_1DA8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E20
                }
                case 0x5:
                {
// switch_1DA8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E20
                }
            }
        }
    }
}
// fun_1F58
fun_1F58() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1838(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FC0
fun_1FC0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A60(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2068
    pri = 1;
    return pri;
// lab_2068
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_20B0
fun_20B0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2100
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1FC0(var_8)
    arg_2 = pri;
// lab_2100
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1838(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2160
fun_2160() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1F58(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21B0
fun_21B0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2160(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2210
fun_2210() {
    OP_JUMP lab_2228
// lab_2228
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2268
    pri = 0;
    return pri;
// lab_2268
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2228
    pri = 0;
    return pri;
}
// fun_22A8
fun_22A8() {
    var_8 = 0;
    pri = fun_2210()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2358
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2358
    pri = 0;
    return pri;
}
// fun_2368
fun_2368() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2398
fun_2398() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_23C8
// lab_23C8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2408
    OP_JUMP lab_2438
// lab_2408
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23C8
// lab_2438
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2480
fun_2480() {
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
// fun_24F0
fun_24F0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2528
fun_2528() {
    OP_JUMP lab_2540
// lab_2540
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2588
    OP_JUMP lab_25B8
    OP_JUMP lab_25A8
// lab_2588
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_25B8
    pri = 0;
    return pri;
// lab_25A8
    OP_JUMP lab_2540
}
// fun_25C8
fun_25C8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_25F8
fun_25F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2648
fun_2648() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2698
fun_2698() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26E8
fun_26E8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2738
fun_2738() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = PlayDemoScene_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27A0
fun_27A0() {
    OP_JUMP lab_27B8
// lab_27B8
    pri = EvCameraMoveWait_()
    OP_JZER lab_27F0
    pri = 0;
    return pri;
// lab_27F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27B8
    pri = 0;
    return pri;
}
// fun_2830
fun_2830() {
    pri = arg_6;
    OP_JNZ lab_2868
    var_8 = 0;
    pri = fun_0F70()
// lab_2868
    pri = arg_1;
    switch (pri) {
// switch_3DD0
        case default:
        {
// switch_3DD0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4120
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4120
            pri = 1;
            OP_JUMP lab_4128
// lab_4120
            pri = 0;
// lab_4128
            OP_JZER lab_4280
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A60(var_24, var_16)
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
            OP_JUMP lab_42E0
// lab_4280
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
// lab_42E0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4340
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_43A0
// lab_4340
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_43A0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_43A0
            pri = arg_2;
            OP_JZER lab_43E0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_43E0
            var_8 = 0;
            pri = fun_0FB0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3DD0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1:
        {
// switch_3DD0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x2:
        {
// switch_3DD0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x3:
        {
// switch_3DD0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x4:
        {
// switch_3DD0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x5:
        {
// switch_3DD0_case_0x5
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x6:
        {
// switch_3DD0_case_0x6
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x7:
        {
// switch_3DD0_case_0x7
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x8:
        {
// switch_3DD0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x9:
        {
// switch_3DD0_case_0x9
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xa:
        {
// switch_3DD0_case_0xa
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xb:
        {
// switch_3DD0_case_0xb
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xc:
        {
// switch_3DD0_case_0xc
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xd:
        {
// switch_3DD0_case_0xd
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xe:
        {
// switch_3DD0_case_0xe
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xf:
        {
// switch_3DD0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x10:
        {
// switch_3DD0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x11:
        {
// switch_3DD0_case_0x11
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x12:
        {
// switch_3DD0_case_0x12
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x13:
        {
// switch_3DD0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x14:
        {
// switch_3DD0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x15:
        {
// switch_3DD0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x16:
        {
// switch_3DD0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x17:
        {
// switch_3DD0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x18:
        {
// switch_3DD0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x19:
        {
// switch_3DD0_case_0x19
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
            pri = fun_0CD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1a:
        {
// switch_3DD0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A20(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E8(var_48, var_40)
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
            pri = fun_0CD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1b:
        {
// switch_3DD0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A20(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E8(var_48, var_40)
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
            pri = fun_0CD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1c:
        {
// switch_3DD0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A20(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E8(var_48, var_40)
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
            pri = fun_0CD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1d:
        {
// switch_3DD0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1e:
        {
// switch_3DD0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1f:
        {
// switch_3DD0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x20:
        {
// switch_3DD0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x21:
        {
// switch_3DD0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x22:
        {
// switch_3DD0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x23:
        {
// switch_3DD0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x24:
        {
// switch_3DD0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x25:
        {
// switch_3DD0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x26:
        {
// switch_3DD0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x27:
        {
// switch_3DD0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x28:
        {
// switch_3DD0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x29:
        {
// switch_3DD0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
    }
}
// fun_4410
fun_4410() {
    pri = arg_4;
    OP_JNZ lab_4448
    var_8 = 0;
    pri = fun_0F70()
// lab_4448
    pri = arg_1;
    switch (pri) {
// switch_5820
        case default:
        {
// switch_5820_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1500(var_264)
            OP_JZER lab_5DE8
            pri = arg_3;
            switch (pri) {
// switch_5D90
                case default:
                {
// switch_5D90_case_default
                    OP_JUMP lab_60A0
// lab_60A0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6110
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6110
                    var_8 = 0;
                    pri = fun_0FB0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5D90_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5D90_case_default
                }
                case 0x2:
                {
// switch_5D90_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5D90_case_default
                }
                case 0x3:
                {
// switch_5D90_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5D90_case_default
                }
            }
// lab_5DE8
            pri = arg_1;
            OP_JZER lab_5E38
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5E38
            pri = 0;
            OP_JUMP lab_5E40
// lab_5E38
            pri = 1;
// lab_5E40
            OP_JZER lab_5EA8
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A60(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5EA8
            pri = 1;
            OP_JUMP lab_5EB0
// lab_5EA8
            pri = 0;
// lab_5EB0
            OP_JZER lab_5F00
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_60A0
// lab_5F00
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5F68
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_60A0
// lab_5F68
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A60(var_24, var_16)
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
            var_176 = 9792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5820_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x1:
        {
// switch_5820_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x2:
        {
// switch_5820_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x3:
        {
// switch_5820_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x4:
        {
// switch_5820_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x5:
        {
// switch_5820_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A20(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C98(var_40)
            OP_JUMP switch_5820_case_default
        }
        case 0x6:
        {
// switch_5820_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x7:
        {
// switch_5820_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x8:
        {
// switch_5820_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x9:
        {
// switch_5820_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0xa:
        {
// switch_5820_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0xb:
        {
// switch_5820_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0xc:
        {
// switch_5820_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0xd:
        {
// switch_5820_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0xe:
        {
// switch_5820_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0xf:
        {
// switch_5820_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x10:
        {
// switch_5820_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x11:
        {
// switch_5820_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x12:
        {
// switch_5820_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x13:
        {
// switch_5820_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x14:
        {
// switch_5820_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x15:
        {
// switch_5820_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x16:
        {
// switch_5820_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x17:
        {
// switch_5820_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x18:
        {
// switch_5820_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x19:
        {
// switch_5820_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x1a:
        {
// switch_5820_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x1b:
        {
// switch_5820_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x1c:
        {
// switch_5820_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x1d:
        {
// switch_5820_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x1e:
        {
// switch_5820_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x1f:
        {
// switch_5820_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x20:
        {
// switch_5820_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x21:
        {
// switch_5820_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x22:
        {
// switch_5820_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x23:
        {
// switch_5820_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x24:
        {
// switch_5820_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x25:
        {
// switch_5820_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x26:
        {
// switch_5820_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x27:
        {
// switch_5820_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x28:
        {
// switch_5820_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x29:
        {
// switch_5820_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x2a:
        {
// switch_5820_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x2b:
        {
// switch_5820_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x2c:
        {
// switch_5820_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x2d:
        {
// switch_5820_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x2e:
        {
// switch_5820_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x2f:
        {
// switch_5820_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x30:
        {
// switch_5820_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x31:
        {
// switch_5820_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x32:
        {
// switch_5820_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x33:
        {
// switch_5820_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x34:
        {
// switch_5820_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x35:
        {
// switch_5820_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x36:
        {
// switch_5820_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x37:
        {
// switch_5820_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x38:
        {
// switch_5820_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x39:
        {
// switch_5820_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x3a:
        {
// switch_5820_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x3b:
        {
// switch_5820_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x3c:
        {
// switch_5820_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x3d:
        {
// switch_5820_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
        case 0x3e:
        {
// switch_5820_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A20(var_24, var_16, var_8)
            OP_JUMP switch_5820_case_default
        }
    }
}
// fun_6140
fun_6140() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6350(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 9856;
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
    var_424 = 9912;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 9928;
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
    OP_JZER lab_6338
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6338
    pri = 0;
    return pri;
}
// fun_6350
fun_6350() {
    var_8 = arg_1;
    var_16 = 9976;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A20(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6398
fun_6398() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6498
        case default:
        {
// switch_6498_case_default
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
// switch_6498_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6498_case_default
        }
        case 0x1:
        {
// switch_6498_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6498_case_default
        }
        case 0x2:
        {
// switch_6498_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6498_case_default
        }
        case 0x3:
        {
// switch_6498_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6498_case_default
        }
    }
}
// fun_6558
fun_6558() {
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
    pri = fun_20B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2210()
    pri = 0;
    return pri;
}
// fun_65F0
fun_65F0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6398(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_6558(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6698
fun_6698() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_66E8
// lab_66E8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 10080;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6760
    OP_JUMP lab_6790
// lab_6760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_66E8
// lab_6790
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6818
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4410(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_17D0(var_56)
// lab_6818
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6880
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14C0(var_24, var_16)
// lab_6880
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14C0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6940
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A98(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0818(var_88, var_80, var_72, var_64, var_56)
// lab_6940
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6980
    pri = 0;
    return pri;
// lab_6980
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6AC8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 10200;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09E8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6A90
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_6AC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08C0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A98(var_40)
    pri = 0;
    return pri;
// lab_6A90
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14C0(var_16, var_8)
}
// fun_6B50
fun_6B50() {
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
    pri = fun_65F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_22A8(var_112)
    var_128 = 0;
    pri = fun_2368()
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
    pri = fun_6698(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6CC8
fun_6CC8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_6D60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A98(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2830(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_6D60
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_6EB8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_6E20
    var_24 = 10336;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_6E20
    pri = 1;
    OP_JUMP lab_6E28
// lab_6EB8
    pri = 0;
    return pri;
// lab_6E20
    pri = 0;
// lab_6E28
    OP_JZER lab_6EB8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A98(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2830(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_6EC8
fun_6EC8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_6CC8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_6F50(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_6F50
fun_6F50() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_70E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6FB8
fun_6FB8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_7028
    OP_CONST_S -8, 1
// lab_7028
    pri = arg_0;
    OP_JNZ lab_7048
    OP_ZERO_P_S -8
// lab_7048
    pri = var_8;
    OP_JZER lab_70D0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_70D0
    pri = 0;
    return pri;
}
// fun_70E8
fun_70E8() {
    var_8 = 10440;
    var_16 = 8;
    pri = fun_24F0(var_8)
    var_24 = 0;
    pri = fun_2528()
    pri = arg_3;
    OP_JNZ lab_7208
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_71D0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_7278(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_71F8
// lab_7208
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7418(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_71D0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7340(var_16, var_8)
// lab_71F8
    OP_JUMP lab_7250
// lab_7250
    var_8 = 0;
    pri = fun_25C8()
    pri = 0;
    return pri;
}
// fun_7278
fun_7278() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7418(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_7328
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_7328
    pri = 0;
    return pri;
}
// fun_7340
fun_7340() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2648(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_21B0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_22A8(var_72)
    var_88 = 0;
    pri = fun_2368()
    var_96 = 0;
    var_104 = 8;
    pri = fun_25F8(var_96)
    pri = 0;
    return pri;
}
// fun_7418
fun_7418() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_7460
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_7720(var_8)
// lab_7460
    pri = arg_4;
    OP_JNZ lab_74C8
    var_8 = 0;
    var_16 = 8;
    pri = fun_25F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2648(var_40, var_32, var_24)
// lab_74C8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_7568
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2698(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_21B0(var_56, var_48, var_40)
    OP_JUMP lab_7658
// lab_7568
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_7620
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_7620
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_7620
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_21B0(var_24, var_16, var_8)
// lab_7658
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_7698
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
// lab_7698
    var_8 = 1;
    var_16 = 8;
    pri = fun_22A8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_7928(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_6FB8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_7720
fun_7720() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_7780
    var_16 = 10600;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_7780
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_78C0
        case default:
        {
// switch_78C0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_78B0
            var_16 = 11144;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_78B0
            OP_JUMP lab_78F8
// lab_78F8
            var_8 = 11360;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_78C0_case_0x1
            var_8 = 10816;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_78F8
        }
        case 0x2:
        {
// switch_78C0_case_0x2
            var_8 = 10944;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_78F8
        }
    }
}
// fun_7928
fun_7928() {
    pri = arg_2;
    OP_JNZ lab_7A10
    var_8 = 0;
    var_16 = 8;
    pri = fun_25F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2648(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_26E8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_7A10
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_21B0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_22A8(var_40)
    var_56 = 0;
    pri = fun_2368()
    pri = 0;
    return pri;
}
// fun_7A88
fun_7A88() {
    pri = 11544;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7B10
// lab_7B10
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7C90
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7C80
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7BD0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7BD0
    pri = 0;
    OP_JUMP lab_7BD8
// lab_7C90
    pri = 0;
    return pri;
// lab_7C80
    OP_JUMP lab_7B08
// lab_7B08
    OP_INC_P_S -936
// lab_7BD0
    pri = 1;
// lab_7BD8
    OP_JZER lab_7C50
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7C48
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7C50
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7C48
}
// fun_7CB0
fun_7CB0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7D48
    var_8 = 1;
    var_16 = 0;
    var_24 = 12464;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_17A8()
// lab_7D48
    pri = arg_4;
    OP_JZER lab_7D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_1800(var_8)
// lab_7D80
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7DD8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7DD8
    pri = 0;
    OP_JUMP lab_7DE0
// lab_7DD8
    pri = 1;
// lab_7DE0
    OP_JZER lab_7EA8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7EA8
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_7E80
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16E8(var_32, var_24)
    OP_JUMP lab_7EA8
// lab_7EA8
    pri = arg_2;
    OP_JZER lab_7F80
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_7F50
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14C0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07E0(var_40)
    OP_JUMP lab_7F80
// lab_7F80
    pri = arg_3;
    OP_JZER lab_7FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1770(var_8)
// lab_7FB8
    pri = 0;
    return pri;
// lab_7F50
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14C0(var_16, var_8)
// lab_7E80
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16E8(var_16, var_8)
}
// fun_7FC8
fun_7FC8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7A88(var_24)
    pri = 0;
    return pri;
}
// fun_8030
fun_8030() {
    pri = g_mode;
    switch (pri) {
// switch_8118
        case default:
        {
// switch_8118_case_default
            pri = CommandNOP()
            OP_JUMP lab_8170
// lab_8170
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8118_case_0x0
            var_8 = 0;
            pri = fun_8180()
            OP_JUMP lab_8170
        }
        case 0x247448276b3e9851:
        {
// switch_8118_case_0x247448276b3e9851
            var_8 = 0;
            pri = fun_9EF0()
            OP_JUMP lab_8170
        }
        case 0x269d2199bb05021a:
        {
// switch_8118_case_0x269d2199bb05021a
            var_8 = 0;
            pri = fun_9F38()
            OP_JUMP lab_8170
        }
        case 0x41d3b22af53370dd:
        {
// switch_8118_case_0x41d3b22af53370dd
            var_8 = 0;
            pri = fun_9E00()
            OP_JUMP lab_8170
        }
    }
}
// fun_8180
fun_8180() {
    pri = 0;
    return pri;
}
// fun_8198
fun_8198() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7CB0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_81F0
fun_81F0() {
    var_8 = -4548719486856412097;
    var_16 = 8;
    pri = fun_06F0(var_8)
    var_24 = -683078124329981204;
    var_32 = 8;
    pri = fun_0570(var_24)
    pri = 0;
    return pri;
}
// fun_8258
fun_8258() {
    pri = 0;
    return pri;
}
// fun_8270
fun_8270() {
    var_8 = 0;
    pri = fun_05A0()
    var_16 = 1;
    var_24 = 1;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    OP_PUSH3_C 4670112691937869824, 4670442655377365402, 8802641224559852288
    var_48 = 48;
    pri = fun_0748(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    var_72 = 160;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH3_C 4670093175606476800, 4670391693013417984, -7800673974562670051
    var_88 = 48;
    pri = fun_0748(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 8;
    pri = fun_0090(var_96)
    var_112 = 12512;
    pri = SoundPostEvent(var_112)
    var_120 = 0;
    var_128 = 1;
    var_136 = 1;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 12696;
    var_176 = 56;
    pri = fun_2738(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 12736;
    pri = SoundPostEvent(var_184)
    pri = EvCameraStart()
    var_192 = 0;
    var_200 = 4631952216750555136;
    var_208 = 0;
    OP_PUSH5_C 4670116644682171679, 4661276004946364334, 4670418872940856607, 4670127612310658744, 4661274454634969170
    var_216 = 4670418842704286843;
    var_224 = 1;
    pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_232 = 0;
    pri = fun_27A0()
    var_240 = 0;
    var_248 = 4631952216750555136;
    var_256 = 3;
    OP_PUSH5_C 4670208365942160753, 4660854353232228516, 4670418620053182218, 4670361789045921546, 4660774528688051978
    var_264 = 4670417833902368358;
    var_272 = 200;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 1;
    var_288 = 8802641224559852288;
    var_296 = 16;
    pri = fun_07A0(var_288, var_280)
    var_304 = 1;
    var_312 = -7800673974562670051;
    var_320 = 16;
    pri = fun_07A0(var_312, var_304)
    var_328 = 12920;
    var_336 = 8;
    var_344 = 16;
    pri = fun_02D8(var_336, var_328)
    var_352 = 0;
    pri = fun_03A8()
    var_360 = 60;
    var_368 = 8;
    pri = fun_0090(var_360)
    var_376 = 0;
    var_384 = 3;
    var_392 = 0;
    var_400 = 100;
    var_408 = -1;
    OP_PUSH2_C -679055817562182558, -7800673974562670051
    var_416 = 56;
    pri = fun_20B0(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 8;
    pri = fun_22A8(var_424)
    var_440 = 0;
    pri = fun_2368()
    var_448 = 0;
    pri = fun_27A0()
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    OP_PUSH2_C -7800673974562670051, 8802641224559852288
    var_488 = 48;
    pri = fun_0868(var_480, var_472, var_464, var_456, var_448, var_440)
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    var_520 = 0;
    OP_PUSH2_C 8802641224559852288, -7800673974562670051
    var_528 = 48;
    pri = fun_0868(var_520, var_512, var_504, var_496, var_488, var_480)
    var_536 = 8802641224559852288;
    var_544 = 8;
    pri = fun_08C0(var_536)
    var_552 = -7800673974562670051;
    var_560 = 8;
    pri = fun_08C0(var_552)
    var_568 = 0;
    var_576 = 3;
    var_584 = 0;
    var_592 = 100;
    var_600 = -1;
    OP_PUSH2_C -679056917073810769, -7800673974562670051
    var_608 = 56;
    pri = fun_20B0(var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_616 = 1;
    var_624 = 8;
    pri = fun_22A8(var_616)
    var_632 = 0;
    var_640 = 7111099697175425252;
    var_648 = 0;
    var_656 = 24;
    pri = fun_2398(var_648, var_640, var_632)
    var_664 = 0;
    var_672 = 7111098597663797041;
    var_680 = 1;
    var_688 = 24;
    pri = fun_2398(var_680, var_672, var_664)
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    var_720 = 1;
    var_728 = 32;
    pri = fun_2480(var_720, var_712, var_704, var_696)
    var_736 = 0;
    var_744 = 4632824789178358170;
    var_752 = 0;
    OP_PUSH5_C 4669899337204058030, 4660878300595481477, 4670381445565047112, 4670165226603444961, 4660591525972724941
    var_760 = 4670414139543299031;
    var_768 = 1;
    pri = EvCameraMove(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_776 = 0;
    pri = fun_27A0()
    var_784 = 0;
    var_792 = 0;
    var_800 = 0;
    var_808 = -135;
    pri = float(var_808)
    var_816 = pri;
    var_824 = 8802641224559852288;
    var_832 = 40;
    pri = fun_0818(var_824, var_816, var_808, var_800, var_792)
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    var_864 = 165;
    pri = float(var_864)
    var_872 = pri;
    var_880 = -7800673974562670051;
    var_888 = 40;
    pri = fun_0818(var_880, var_872, var_864, var_856, var_848)
    var_896 = 8802641224559852288;
    var_904 = 8;
    pri = fun_08C0(var_896)
    var_912 = -7800673974562670051;
    var_920 = 8;
    pri = fun_08C0(var_912)
    var_928 = 0;
    var_936 = 3;
    var_944 = 0;
    var_952 = 100;
    var_960 = -1;
    OP_PUSH2_C -679045921957528659, -7800673974562670051
    var_968 = 56;
    pri = fun_20B0(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 8;
    pri = fun_22A8(var_976)
    var_992 = 0;
    pri = fun_2368()
    var_1000 = 0;
    var_1008 = 4632895157922535834;
    var_1016 = 0;
    OP_PUSH5_C 4669917803501846528, 4660869658434087158, 4670415340759752376, 4670193758930185748, 4660644038648067523
    var_1024 = 4670426264407774331;
    var_1032 = 1;
    pri = EvCameraMove(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1040 = 0;
    pri = fun_27A0()
    var_1048 = 0;
    var_1056 = 0;
    var_1064 = 0;
    var_1072 = 0;
    OP_PUSH2_C 8802641224559852288, -7800673974562670051
    var_1080 = 48;
    pri = fun_0868(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1088 = -7800673974562670051;
    var_1096 = 8;
    pri = fun_08C0(var_1088)
    var_1104 = 0;
    var_1112 = 2;
    var_1120 = -7800673974562670051;
    var_1128 = 24;
    pri = fun_6140(var_1120, var_1112, var_1104)
    var_1136 = 1;
    var_1144 = 8;
    pri = fun_0090(var_1136)
    var_1152 = -7800673974562670051;
    var_1160 = 8;
    pri = fun_0A98(var_1152)
    var_1168 = 0;
    var_1176 = 3;
    var_1184 = 0;
    var_1192 = 100;
    var_1200 = -1;
    OP_PUSH2_C -679047021469156870, -7800673974562670051
    var_1208 = 56;
    pri = fun_20B0(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1216 = 1;
    var_1224 = 8;
    pri = fun_22A8(var_1216)
    var_1232 = 0;
    var_1240 = 7111097498152168830;
    var_1248 = 0;
    var_1256 = 24;
    pri = fun_2398(var_1248, var_1240, var_1232)
    var_1264 = 0;
    var_1272 = 7111096398640540619;
    var_1280 = 1;
    var_1288 = 24;
    pri = fun_2398(var_1280, var_1272, var_1264)
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 0;
    var_1320 = 1;
    var_1328 = 32;
    pri = fun_2480(var_1320, var_1312, var_1304, var_1296)
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = -7800673974562670051;
    var_1360 = 24;
    pri = fun_6140(var_1352, var_1344, var_1336)
    var_1368 = 1;
    var_1376 = 8;
    pri = fun_0090(var_1368)
    var_1384 = -7800673974562670051;
    var_1392 = 8;
    pri = fun_0A98(var_1384)
    var_1400 = 0;
    var_1408 = 3;
    var_1416 = 0;
    var_1424 = 100;
    var_1432 = -1;
    OP_PUSH2_C -680046477539011444, -7800673974562670051
    var_1440 = 56;
    pri = fun_20B0(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1448 = 1;
    var_1456 = 8;
    pri = fun_22A8(var_1448)
    var_1464 = 0;
    pri = fun_2368()
    var_1472 = 0;
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 165;
    pri = float(var_1496)
    var_1504 = pri;
    var_1512 = -7800673974562670051;
    var_1520 = 40;
    pri = fun_0818(var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1528 = -7800673974562670051;
    var_1536 = 8;
    pri = fun_08C0(var_1528)
    var_1544 = 1;
    var_1552 = 1;
    var_1560 = -1;
    var_1568 = 0;
    var_1576 = 8802641224559852288;
    var_1584 = 40;
    pri = fun_1050(var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1592 = 0;
    var_1600 = 1;
    var_1608 = -7800673974562670051;
    var_1616 = 24;
    pri = fun_6140(var_1608, var_1600, var_1592)
    var_1624 = 1;
    var_1632 = 8;
    pri = fun_0090(var_1624)
    var_1640 = -7800673974562670051;
    var_1648 = 8;
    pri = fun_0A98(var_1640)
    var_1656 = 0;
    var_1664 = 4634232164061911450;
    var_1672 = 0;
    OP_PUSH5_C 4669925621029520015, 4661403559290302628, 4670382410386500485, 4670040646438459802, 4661441778314484122
    var_1680 = 4670380689650803016;
    var_1688 = 1;
    pri = EvCameraMove(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1696 = 0;
    pri = fun_27A0()
    var_1704 = 0;
    var_1712 = 4634232164061911450;
    var_1720 = 0;
    OP_PUSH5_C 4669930315944170619, 4661403559290302628, 4670460819309456261, 4670045341353110405, 4661441778314484122
    var_1728 = 4670459098573758792;
    var_1736 = 250;
    pri = EvCameraMove(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1744 = 0;
    var_1752 = 0;
    var_1760 = -7800673974562670051;
    var_1768 = 24;
    pri = fun_6140(var_1760, var_1752, var_1744)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_0090(var_1776)
    var_1792 = -7800673974562670051;
    var_1800 = 8;
    pri = fun_0A98(var_1792)
    var_1808 = -1;
    var_1816 = 8802641224559852288;
    var_1824 = 16;
    pri = fun_14C0(var_1816, var_1808)
    var_1832 = 0;
    var_1840 = 0;
    var_1848 = 0;
    var_1856 = 0;
    OP_PUSH2_C 8802641224559852288, -7800673974562670051
    var_1864 = 48;
    pri = fun_0868(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1872 = -7800673974562670051;
    var_1880 = 8;
    pri = fun_08C0(var_1872)
    var_1888 = 0;
    var_1896 = 0;
    var_1904 = 0;
    var_1912 = 180;
    pri = float(var_1912)
    var_1920 = pri;
    var_1928 = 8802641224559852288;
    var_1936 = 40;
    pri = fun_0818(var_1928, var_1920, var_1912, var_1904, var_1896)
    var_1944 = 8802641224559852288;
    var_1952 = 8;
    pri = fun_08C0(var_1944)
    var_1960 = 0;
    var_1968 = 3;
    var_1976 = 0;
    var_1984 = 100;
    var_1992 = -1;
    OP_PUSH2_C -680045378027383233, -7800673974562670051
    var_2000 = 56;
    pri = fun_20B0(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2008 = 1;
    var_2016 = 8;
    pri = fun_22A8(var_2008)
    var_2024 = 0;
    pri = fun_2368()
    var_2032 = 0;
    var_2040 = 3;
    var_2048 = 0;
    var_2056 = 100;
    var_2064 = -1;
    OP_PUSH2_C -679058016585438980, -7800673974562670051
    var_2072 = 56;
    pri = fun_20B0(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016)
    var_2080 = 1;
    var_2088 = 8;
    pri = fun_22A8(var_2080)
    var_2096 = 0;
    var_2104 = 7111101896198681674;
    var_2112 = 0;
    var_2120 = 24;
    pri = fun_2398(var_2112, var_2104, var_2096)
    var_2128 = 0;
    var_2136 = 7111100796687053463;
    var_2144 = 1;
    var_2152 = 24;
    pri = fun_2398(var_2144, var_2136, var_2128)
    var_2160 = 0;
    var_2168 = 0;
    var_2176 = 0;
    var_2184 = 1;
    var_2192 = 32;
    pri = fun_2480(var_2184, var_2176, var_2168, var_2160)
    var_2200 = 0;
    var_2208 = 4631952216750555136;
    var_2216 = 0;
    OP_PUSH5_C 4669958045627423130, 4660821851668511457, 4670321643127612375, 4670154143526236979, 4660723005573174395
    var_2224 = 4670422770709577073;
    var_2232 = 1;
    pri = EvCameraMove(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2240 = 0;
    pri = fun_27A0()
    var_2248 = 0;
    var_2256 = 4631952216750555136;
    var_2264 = 3;
    OP_PUSH5_C 4669926984423938458, 4660837508714090988, 4670305625991974748, 4670123087820310446, 4660738662618753925
    var_2272 = 4670406753573939446;
    var_2280 = 5;
    pri = EvCameraMove(var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2288 = 0;
    var_2296 = 3;
    var_2304 = 0;
    var_2312 = 100;
    var_2320 = -1;
    OP_PUSH2_C -679059116097067191, -7800673974562670051
    var_2328 = 56;
    pri = fun_20B0(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2336 = 1;
    var_2344 = 8;
    pri = fun_22A8(var_2336)
    var_2352 = 0;
    pri = fun_2368()
    var_2360 = 0;
    var_2368 = 4632895157922535834;
    var_2376 = 0;
    OP_PUSH5_C 4669917803501846528, 4660869658434087158, 4670415340759752376, 4670193758930185748, 4660644038648067523
    var_2384 = 4670426264407774331;
    var_2392 = 1;
    pri = EvCameraMove(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
    var_2400 = 0;
    pri = fun_27A0()
    var_2408 = 0;
    var_2416 = 0;
    var_2424 = 0;
    var_2432 = 165;
    pri = float(var_2432)
    var_2440 = pri;
    var_2448 = -7800673974562670051;
    var_2456 = 40;
    pri = fun_0818(var_2448, var_2440, var_2432, var_2424, var_2416)
    var_2464 = -7800673974562670051;
    var_2472 = 8;
    pri = fun_08C0(var_2464)
    var_2480 = 0;
    var_2488 = 3;
    var_2496 = 0;
    var_2504 = 100;
    var_2512 = -1;
    OP_PUSH2_C -679060215608695402, -7800673974562670051
    var_2520 = 56;
    pri = fun_20B0(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2528 = 1;
    var_2536 = 8;
    pri = fun_22A8(var_2528)
    var_2544 = 0;
    pri = fun_2368()
    var_2552 = 50;
    var_2560 = 8;
    pri = fun_0090(var_2552)
    var_2568 = 0;
    var_2576 = 0;
    var_2584 = 0;
    var_2592 = 0;
    OP_PUSH2_C -7800673974562670051, 8802641224559852288
    var_2600 = 48;
    pri = fun_0868(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552)
    var_2608 = 0;
    var_2616 = 0;
    var_2624 = 0;
    var_2632 = 0;
    OP_PUSH2_C 8802641224559852288, -7800673974562670051
    var_2640 = 48;
    pri = fun_0868(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592)
    var_2648 = 8802641224559852288;
    var_2656 = 8;
    pri = fun_08C0(var_2648)
    var_2664 = -7800673974562670051;
    var_2672 = 8;
    pri = fun_08C0(var_2664)
    var_2680 = 0;
    var_2688 = 3;
    var_2696 = 0;
    var_2704 = 100;
    var_2712 = -1;
    OP_PUSH2_C -679061315120323613, -7800673974562670051
    var_2720 = 56;
    pri = fun_20B0(var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2728 = 1;
    var_2736 = 8;
    pri = fun_22A8(var_2728)
    var_2744 = 0;
    pri = fun_2368()
    var_2752 = 6;
    var_2760 = 4;
    var_2768 = 2;
    var_2776 = 1;
    var_2784 = 9;
    var_2792 = 2;
    var_2800 = 28;
    var_2808 = -7800673974562670051;
    var_2816 = 64;
    pri = fun_6EC8(var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2824 = 0;
    var_2832 = 8802641224559852288;
    var_2840 = 16;
    pri = fun_07A0(var_2832, var_2824)
    var_2848 = 0;
    var_2856 = -7800673974562670051;
    var_2864 = 16;
    pri = fun_07A0(var_2856, var_2848)
    var_2872 = 12968;
    pri = SoundPostEvent(var_2872)
    var_2880 = 13152;
    pri = SoundPostEvent(var_2880)
    var_2888 = 13280;
    pri = SoundPostEvent(var_2888)
    var_2896 = 1;
    var_2904 = 0;
    var_2912 = 12464;
    var_2920 = 8;
    var_2928 = 32;
    pri = fun_0338(var_2920, var_2912, var_2904, var_2896)
    var_2936 = 0;
    pri = fun_03A8()
    var_2944 = 3;
    var_2952 = 1;
    pri = EvCameraEnd(var_2952, var_2944)
    var_2960 = 30;
    var_2968 = 8;
    pri = fun_0090(var_2960)
    pri = 0;
    return pri;
}
// fun_9B70
fun_9B70() {
    pri = 0;
    return pri;
}
// fun_9B88
fun_9B88() {
    var_8 = 1112;
    var_16 = 8;
    pri = fun_7FC8(var_8)
    var_24 = 6993011665769714356;
    pri = VanishFlagSet(var_24)
    var_32 = 397679088637193503;
    pri = VanishFlagSet(var_32)
    var_40 = 4415613990680089099;
    pri = VanishFlagSet(var_40)
    var_48 = -8031658436188856910;
    pri = VanishFlagSet(var_48)
    var_56 = -8410792811454780805;
    pri = VanishFlagSet(var_56)
    var_64 = 5988590829402734262;
    pri = VanishFlagSet(var_64)
    var_72 = -146323291695471432;
    pri = VanishFlagSet(var_72)
    var_80 = -3377648196502420775;
    pri = VanishFlagSet(var_80)
    var_88 = 20;
    var_96 = -2225298751995199961;
    pri = WorkSet(var_96, var_88)
    var_104 = 1551124569145526424;
    pri = VanishFlagSet(var_104)
    var_112 = 4416541122757820847;
    pri = VanishFlagSet(var_112)
    var_120 = 2;
    var_128 = 28;
    pri = ItemAdd(var_128, var_120)
    pri = 0;
    return pri;
}
// fun_9DA8
fun_9DA8() {
    var_8 = 12920;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02D8(var_16, var_8)
    var_32 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_9E00
fun_9E00() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8198()
    var_16 = 0;
    pri = fun_81F0()
    var_24 = 0;
    pri = fun_8258()
    var_32 = 0;
    pri = fun_8270()
    var_40 = 0;
    pri = fun_9B70()
    var_48 = 0;
    pri = fun_9B88()
    var_56 = 0;
    pri = fun_9DA8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9EF0
fun_9EF0() {
    var_8 = 0;
    pri = fun_81F0()
    var_16 = 0;
    pri = fun_9B88()
    pri = 0;
    return pri;
}
// fun_9F38
fun_9F38() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -679062414631951824;
    var_88 = 80;
    pri = fun_6B50(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
