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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06A0
fun_06A0() {
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
// fun_0718
fun_0718() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1500(var_8)
    OP_JZER lab_0838
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1530(var_24)
    OP_JNZ lab_0838
    pri = 0;
    return pri;
// lab_0838
    OP_JUMP lab_0848
// lab_0848
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08A8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0848
    pri = 0;
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09E0
    pri = 0;
    return pri;
// lab_09E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A20
// lab_0A20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1500(var_8)
    OP_JNZ lab_0AA8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A98
    pri = 0;
    return pri;
// lab_0AA8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AF0
    pri = 0;
    return pri;
// lab_0AF0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B98(var_8)
    pri = 0;
    return pri;
// lab_0B50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A20
    pri = 0;
    return pri;
// lab_0A98
    OP_JUMP lab_0AF0
}
// fun_0B98
fun_0B98() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C20
    pri = 0;
    return pri;
// lab_0C20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1500(var_8)
    OP_JZER lab_0D50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C78
    OP_ZERO_P_S 64
// lab_0D50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D88
    OP_CONST_S 64, 1
// lab_0D88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DC0
    OP_CONST_S 72, 1
// lab_0DC0
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
// lab_0C78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CA0
    OP_ZERO_P_S 72
// lab_0CA0
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
    OP_JUMP lab_0E60
// lab_0E60
    pri = 0;
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EB0
fun_0EB0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EF0
fun_0EF0() {
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
// fun_0F50
fun_0F50() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1310
        case default:
        {
// switch_1310_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1310_case_0x0
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
            pri = fun_0EF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1310_case_default
        }
        case 0x1:
        {
// switch_1310_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0EF0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1310_case_default
        }
        case 0x2:
        {
// switch_1310_case_0x2
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
            pri = fun_0EF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1310_case_default
        }
        case 0x3:
        {
// switch_1310_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0EF0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1310_case_default
        }
        case 0x4:
        {
// switch_1310_case_0x4
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
            pri = fun_0EF0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1310_case_default
        }
        case 0x5:
        {
// switch_1310_case_0x5
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
            pri = fun_0EF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1310_case_default
        }
        case 0x6:
        {
// switch_1310_case_0x6
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
            pri = fun_0EF0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1310_case_default
        }
        case 0x7:
        {
// switch_1310_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0EF0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1310_case_default
        }
    }
}
// fun_13C0
fun_13C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1400
fun_1400() {
    OP_ZERO_P_S -8
    OP_JUMP lab_1428
// lab_1428
    var_8 = arg_0;
    pri = IsFinishFieldObjectLookAt_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1478
    pri = 0;
    return pri;
// lab_1478
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_14B8
    pri = 0;
    return pri;
// lab_14B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1428
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
    pri = fun_0998(var_8)
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
    pri = fun_0998(var_8)
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
    pri = fun_0998(var_8)
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
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1808
fun_1808() {
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
// switch_1E20
        case default:
        {
// switch_1E20_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E68
// lab_1E68
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
            OP_JNZ lab_1F10
            var_88 = 0;
            pri = fun_2130()
// lab_1F10
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E20_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A08
                case default:
                {
// switch_1A08_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A80
// lab_1A80
                    OP_JUMP lab_1E68
                }
                case 0x0:
                {
// switch_1A08_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A80
                }
                case 0x1:
                {
// switch_1A08_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A80
                }
                case 0x2:
                {
// switch_1A08_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A80
                }
                case 0x3:
                {
// switch_1A08_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A80
                }
                case 0x4:
                {
// switch_1A08_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A80
                }
                case 0x5:
                {
// switch_1A08_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A80
                }
            }
        }
        case 0x65:
        {
// switch_1E20_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BC0
                case default:
                {
// switch_1BC0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C38
// lab_1C38
                    OP_JUMP lab_1E68
                }
                case 0x0:
                {
// switch_1BC0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C38
                }
                case 0x1:
                {
// switch_1BC0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C38
                }
                case 0x2:
                {
// switch_1BC0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C38
                }
                case 0x3:
                {
// switch_1BC0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C38
                }
                case 0x4:
                {
// switch_1BC0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C38
                }
                case 0x5:
                {
// switch_1BC0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C38
                }
            }
        }
        case 0x66:
        {
// switch_1E20_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D78
                case default:
                {
// switch_1D78_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DF0
// lab_1DF0
                    OP_JUMP lab_1E68
                }
                case 0x0:
                {
// switch_1D78_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1DF0
                }
                case 0x1:
                {
// switch_1D78_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1DF0
                }
                case 0x2:
                {
// switch_1D78_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1DF0
                }
                case 0x3:
                {
// switch_1D78_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DF0
                }
                case 0x4:
                {
// switch_1D78_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1DF0
                }
                case 0x5:
                {
// switch_1D78_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1DF0
                }
            }
        }
    }
}
// fun_1F28
fun_1F28() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1808(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0960(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2038
    pri = 1;
    return pri;
// lab_2038
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2080
fun_2080() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_20D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F90(var_8)
    arg_2 = pri;
// lab_20D0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1808(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    OP_JUMP lab_2148
// lab_2148
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2188
    pri = 0;
    return pri;
// lab_2188
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2148
    pri = 0;
    return pri;
}
// fun_21C8
fun_21C8() {
    var_8 = 0;
    pri = fun_2130()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2278
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2278
    pri = 0;
    return pri;
}
// fun_2288
fun_2288() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_22B8
fun_22B8() {
    OP_JUMP lab_22D0
// lab_22D0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2308
    pri = 0;
    return pri;
// lab_2308
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22D0
    pri = 0;
    return pri;
}
// fun_2348
fun_2348() {
    pri = arg_6;
    OP_JNZ lab_2380
    var_8 = 0;
    pri = fun_0E70()
// lab_2380
    pri = arg_1;
    switch (pri) {
// switch_38E8
        case default:
        {
// switch_38E8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C38
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C38
            pri = 1;
            OP_JUMP lab_3C40
// lab_3C38
            pri = 0;
// lab_3C40
            OP_JZER lab_3D98
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0960(var_24, var_16)
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
            OP_JUMP lab_3DF8
// lab_3D98
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
// lab_3DF8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E58
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3EB8
// lab_3E58
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3EB8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3EB8
            pri = arg_2;
            OP_JZER lab_3EF8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3EF8
            var_8 = 0;
            pri = fun_0EB0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38E8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1:
        {
// switch_38E8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x2:
        {
// switch_38E8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x3:
        {
// switch_38E8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x4:
        {
// switch_38E8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x5:
        {
// switch_38E8_case_0x5
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x6:
        {
// switch_38E8_case_0x6
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x7:
        {
// switch_38E8_case_0x7
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x8:
        {
// switch_38E8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x9:
        {
// switch_38E8_case_0x9
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xa:
        {
// switch_38E8_case_0xa
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xb:
        {
// switch_38E8_case_0xb
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xc:
        {
// switch_38E8_case_0xc
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xd:
        {
// switch_38E8_case_0xd
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xe:
        {
// switch_38E8_case_0xe
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0xf:
        {
// switch_38E8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x10:
        {
// switch_38E8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x11:
        {
// switch_38E8_case_0x11
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x12:
        {
// switch_38E8_case_0x12
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x13:
        {
// switch_38E8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x14:
        {
// switch_38E8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x15:
        {
// switch_38E8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x16:
        {
// switch_38E8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x17:
        {
// switch_38E8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x18:
        {
// switch_38E8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x19:
        {
// switch_38E8_case_0x19
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
            pri = fun_0BD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1a:
        {
// switch_38E8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0920(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08E8(var_48, var_40)
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
            pri = fun_0BD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1b:
        {
// switch_38E8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0920(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08E8(var_48, var_40)
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
            pri = fun_0BD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1c:
        {
// switch_38E8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0920(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08E8(var_48, var_40)
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
            pri = fun_0BD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1d:
        {
// switch_38E8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1e:
        {
// switch_38E8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x1f:
        {
// switch_38E8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x20:
        {
// switch_38E8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x21:
        {
// switch_38E8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x22:
        {
// switch_38E8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x23:
        {
// switch_38E8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x24:
        {
// switch_38E8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x25:
        {
// switch_38E8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x26:
        {
// switch_38E8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x27:
        {
// switch_38E8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x28:
        {
// switch_38E8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
        case 0x29:
        {
// switch_38E8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38E8_case_default
        }
    }
}
// fun_3F28
fun_3F28() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4138(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 8440;
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
    var_424 = 8496;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 8512;
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
    OP_JZER lab_4120
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_4120
    pri = 0;
    return pri;
}
// fun_4138
fun_4138() {
    var_8 = arg_1;
    var_16 = 8560;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0920(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4180
fun_4180() {
    pri = 8664;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4208
// lab_4208
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4388
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4378
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_42C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_42C8
    pri = 0;
    OP_JUMP lab_42D0
// lab_4388
    pri = 0;
    return pri;
// lab_4378
    OP_JUMP lab_4200
// lab_4200
    OP_INC_P_S -936
// lab_42C8
    pri = 1;
// lab_42D0
    OP_JZER lab_4348
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4340
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4348
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4340
}
// fun_43A8
fun_43A8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4440
    var_8 = 1;
    var_16 = 0;
    var_24 = 9584;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_17A8()
// lab_4440
    pri = arg_4;
    OP_JZER lab_4478
    var_8 = 1;
    var_16 = 8;
    pri = fun_17D0(var_8)
// lab_4478
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_44D0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_44D0
    pri = 0;
    OP_JUMP lab_44D8
// lab_44D0
    pri = 1;
// lab_44D8
    OP_JZER lab_45A0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_45A0
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_4578
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16E8(var_32, var_24)
    OP_JUMP lab_45A0
// lab_45A0
    pri = arg_2;
    OP_JZER lab_4678
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_4648
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13C0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0668(var_40)
    OP_JUMP lab_4678
// lab_4678
    pri = arg_3;
    OP_JZER lab_46B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1770(var_8)
// lab_46B0
    pri = 0;
    return pri;
// lab_4648
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13C0(var_16, var_8)
// lab_4578
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16E8(var_16, var_8)
}
// fun_46C0
fun_46C0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4180(var_24)
    pri = 0;
    return pri;
}
// fun_4728
fun_4728() {
    pri = g_mode;
    switch (pri) {
// switch_47E8
        case default:
        {
// switch_47E8_case_default
            pri = CommandNOP()
            OP_JUMP lab_4830
// lab_4830
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_47E8_case_0x0
            var_8 = 0;
            pri = fun_4840()
            OP_JUMP lab_4830
        }
        case 0x2bd077276f0b348a:
        {
// switch_47E8_case_0x2bd077276f0b348a
            var_8 = 0;
            pri = fun_5F28()
            OP_JUMP lab_4830
        }
        case 0x4ae3412afa7244b6:
        {
// switch_47E8_case_0x4ae3412afa7244b6
            var_8 = 0;
            pri = fun_5E38()
            OP_JUMP lab_4830
        }
    }
}
// fun_4840
fun_4840() {
    pri = 0;
    return pri;
}
// fun_4858
fun_4858() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_43A8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_48B0
fun_48B0() {
    pri = 0;
    return pri;
}
// fun_48C8
fun_48C8() {
    pri = 0;
    return pri;
}
// fun_48E0
fun_48E0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4671743542559768576, 4671109399228448768, 8802641224559852288
    var_40 = 48;
    pri = fun_0610(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    var_64 = 180;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 4671968942443462656, 4671034357559853056, -7800673974562670051
    var_80 = 48;
    pri = fun_0610(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    var_104 = 180;
    pri = float(var_104)
    var_112 = pri;
    OP_PUSH3_C 4671955198548115456, 4671075589245894656, -9002353280860239615
    var_120 = 48;
    pri = fun_0610(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0090(var_128)
    var_144 = 0;
    var_152 = 4631952216750555136;
    var_160 = 0;
    OP_PUSH5_C 4671849736141558252, 4657074672060585738, 4671103110021937889, 4671908975079283753, 4657122104992207995
    var_168 = 4671138371359840666;
    var_176 = 1;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    pri = fun_22B8()
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    var_224 = 0;
    OP_PUSH4_C 4671831503489990656, 4671109399228448768, 4607182418800017408, 8802641224559852288
    var_232 = 72;
    pri = fun_06A0(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 15;
    var_248 = 8;
    pri = fun_0090(var_240)
    var_256 = 9632;
    var_264 = 8;
    var_272 = 16;
    pri = fun_02B0(var_264, var_256)
    var_280 = 0;
    pri = fun_0380()
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    var_312 = 835;
    pri = SoundPlayPokeVoice(var_312, var_304, var_296, var_288)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C -439490430323968789, -9002353280860239615
    var_360 = 56;
    pri = fun_2080(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_21C8(var_368)
    var_384 = 0;
    pri = fun_2288()
    var_392 = 8802641224559852288;
    var_400 = 8;
    pri = fun_07C0(var_392)
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH2_C -9002353280860239615, 8802641224559852288
    var_440 = 48;
    pri = fun_0768(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 1;
    var_456 = 0;
    var_464 = 15;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 0;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 0;
    OP_PUSH4_C 4671861740059754496, 4671096754844729344, 4607182418800017408, -9002353280860239615
    var_504 = 72;
    pri = fun_06A0(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 50;
    var_520 = 8;
    pri = fun_0090(var_512)
    var_528 = 8802641224559852288;
    var_536 = 8;
    pri = fun_07C0(var_528)
    var_544 = 1;
    var_552 = 1;
    var_560 = -1;
    var_568 = 3;
    var_576 = 8802641224559852288;
    var_584 = 40;
    pri = fun_0F50(var_576, var_568, var_560, var_552, var_544)
    var_592 = -9002353280860239615;
    var_600 = 8;
    pri = fun_07C0(var_592)
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH2_C 8802641224559852288, -9002353280860239615
    var_640 = 48;
    pri = fun_0768(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = -9002353280860239615;
    var_656 = 8;
    pri = fun_07C0(var_648)
    var_664 = 9680;
    pri = SoundPostEvent(var_664)
    var_672 = 9864;
    pri = SoundPostEvent(var_672)
    var_680 = 0;
    var_688 = 4631952216750555136;
    var_696 = 3;
    OP_PUSH5_C 4671866676866963210, 4657080851315933839, 4671074508975720366, 4671955168311545692, 4657151703845227725
    var_704 = 4671127186577807114;
    var_712 = 30;
    pri = EvCameraMove(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_720 = 1;
    var_728 = 0;
    var_736 = 4641240890982006784;
    var_744 = 0;
    var_752 = 0;
    OP_PUSH4_C 4671906270280679424, 4671048926088921088, 4607182418800017408, -7800673974562670051
    var_760 = 72;
    pri = fun_06A0(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = -7800673974562670051;
    var_776 = 8;
    pri = fun_07C0(var_768)
    var_784 = -1;
    var_792 = 8802641224559852288;
    var_800 = 16;
    pri = fun_13C0(var_792, var_784)
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    OP_PUSH2_C -7800673974562670051, 8802641224559852288
    var_840 = 48;
    pri = fun_0768(var_832, var_824, var_816, var_808, var_800, var_792)
    var_848 = 0;
    var_856 = 0;
    var_864 = 0;
    var_872 = 0;
    OP_PUSH2_C 8802641224559852288, -7800673974562670051
    var_880 = 48;
    pri = fun_0768(var_872, var_864, var_856, var_848, var_840, var_832)
    var_888 = 0;
    var_896 = 3;
    var_904 = 0;
    var_912 = 100;
    var_920 = -1;
    OP_PUSH2_C -8204925594159333285, -7800673974562670051
    var_928 = 56;
    pri = fun_2080(var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_936 = 1;
    var_944 = 8;
    pri = fun_21C8(var_936)
    var_952 = 0;
    pri = fun_22B8()
    var_960 = 8802641224559852288;
    var_968 = 8;
    pri = fun_07C0(var_960)
    var_976 = -7800673974562670051;
    var_984 = 8;
    pri = fun_07C0(var_976)
    var_992 = 0;
    var_1000 = 1;
    var_1008 = -7800673974562670051;
    var_1016 = 24;
    pri = fun_3F28(var_1008, var_1000, var_992)
    var_1024 = 1;
    var_1032 = 8;
    pri = fun_0090(var_1024)
    var_1040 = -7800673974562670051;
    var_1048 = 8;
    pri = fun_0998(var_1040)
    var_1056 = 0;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 100;
    var_1088 = -1;
    OP_PUSH2_C -8204924494647705074, -7800673974562670051
    var_1096 = 56;
    pri = fun_2080(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_21C8(var_1104)
    var_1120 = 0;
    pri = fun_2288()
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = -7800673974562670051;
    var_1152 = 24;
    pri = fun_3F28(var_1144, var_1136, var_1128)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_0090(var_1160)
    var_1176 = -7800673974562670051;
    var_1184 = 8;
    pri = fun_0998(var_1176)
    var_1192 = 0;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 100;
    var_1224 = -1;
    OP_PUSH2_C -8204923395136076863, -7800673974562670051
    var_1232 = 56;
    pri = fun_2080(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1240 = 1;
    var_1248 = 8;
    pri = fun_21C8(var_1240)
    var_1256 = 0;
    pri = fun_2288()
    var_1264 = 10024;
    pri = SoundPostEvent(var_1264)
    var_1272 = 1;
    var_1280 = -1;
    var_1288 = -1;
    var_1296 = 3;
    var_1304 = 0;
    var_1312 = 4;
    var_1320 = -7800673974562670051;
    var_1328 = 56;
    pri = fun_2348(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1336 = 10184;
    pri = SoundPostEvent(var_1336)
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 101;
    var_1368 = 4129308560216288614;
    var_1376 = 32;
    pri = fun_1F28(var_1368, var_1360, var_1352, var_1344)
    var_1384 = 1;
    var_1392 = 8;
    pri = fun_21C8(var_1384)
    var_1400 = 0;
    pri = fun_2288()
    var_1408 = -7800673974562670051;
    var_1416 = 8;
    pri = fun_0998(var_1408)
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = -90;
    pri = float(var_1448)
    var_1456 = pri;
    var_1464 = 8802641224559852288;
    var_1472 = 40;
    pri = fun_0718(var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 0;
    var_1504 = -136;
    pri = float(var_1504)
    var_1512 = pri;
    var_1520 = -7800673974562670051;
    var_1528 = 40;
    pri = fun_0718(var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 0;
    var_1560 = -120;
    pri = float(var_1560)
    var_1568 = pri;
    var_1576 = -9002353280860239615;
    var_1584 = 40;
    pri = fun_0718(var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1592 = 8802641224559852288;
    var_1600 = 8;
    pri = fun_07C0(var_1592)
    var_1608 = -7800673974562670051;
    var_1616 = 8;
    pri = fun_07C0(var_1608)
    var_1624 = -9002353280860239615;
    var_1632 = 8;
    pri = fun_07C0(var_1624)
    var_1640 = 30;
    var_1648 = 8;
    pri = fun_0090(var_1640)
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C -8204922295624448652, -7800673974562670051
    var_1696 = 56;
    pri = fun_2080(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_21C8(var_1704)
    var_1720 = 0;
    pri = fun_2288()
    var_1728 = 0;
    var_1736 = 0;
    var_1744 = 0;
    var_1752 = 0;
    OP_PUSH2_C -7800673974562670051, 8802641224559852288
    var_1760 = 48;
    pri = fun_0768(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1768 = 8802641224559852288;
    var_1776 = 8;
    pri = fun_07C0(var_1768)
    var_1784 = 1;
    var_1792 = 1;
    var_1800 = -1;
    var_1808 = 0;
    var_1816 = -7800673974562670051;
    var_1824 = 40;
    pri = fun_0F50(var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1832 = 15;
    var_1840 = 8;
    pri = fun_0090(var_1832)
    var_1848 = 0;
    var_1856 = 3;
    var_1864 = 0;
    var_1872 = 100;
    var_1880 = -1;
    OP_PUSH2_C -8204921196112820441, -7800673974562670051
    var_1888 = 56;
    pri = fun_2080(var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1896 = 1;
    var_1904 = 8;
    pri = fun_21C8(var_1896)
    var_1912 = 0;
    pri = fun_2288()
    var_1920 = -1;
    var_1928 = -7800673974562670051;
    var_1936 = 16;
    pri = fun_13C0(var_1928, var_1920)
    var_1944 = -7800673974562670051;
    var_1952 = 8;
    pri = fun_1400(var_1944)
    var_1960 = 1;
    var_1968 = 0;
    var_1976 = 50;
    pri = float(var_1976)
    var_1984 = pri;
    var_1992 = 0;
    pri = float(var_1992)
    var_2000 = pri;
    var_2008 = 0;
    OP_PUSH4_C 4671695164048146432, 4670649253612224512, 4611686018427387904, -7800673974562670051
    var_2016 = 72;
    pri = fun_06A0(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2024 = 1;
    var_2032 = 0;
    var_2040 = 15;
    pri = float(var_2040)
    var_2048 = pri;
    var_2056 = 0;
    pri = float(var_2056)
    var_2064 = pri;
    var_2072 = 0;
    OP_PUSH4_C 4671848545920221184, 4670950794676142080, 4607182418800017408, -9002353280860239615
    var_2080 = 72;
    pri = fun_06A0(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2088 = 30;
    var_2096 = 8;
    pri = fun_0090(var_2088)
    var_2104 = 0;
    var_2112 = 0;
    var_2120 = 0;
    var_2128 = -75;
    pri = float(var_2128)
    var_2136 = pri;
    var_2144 = 8802641224559852288;
    var_2152 = 40;
    pri = fun_0718(var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2160 = 30;
    var_2168 = 8;
    pri = fun_0090(var_2160)
    var_2176 = 1;
    var_2184 = 0;
    var_2192 = 9584;
    var_2200 = 8;
    var_2208 = 32;
    pri = fun_0310(var_2200, var_2192, var_2184, var_2176)
    var_2216 = 0;
    pri = fun_0380()
    var_2224 = -7800673974562670051;
    var_2232 = 8;
    pri = fun_07C0(var_2224)
    var_2240 = -9002353280860239615;
    var_2248 = 8;
    pri = fun_07C0(var_2240)
    var_2256 = 8802641224559852288;
    var_2264 = 8;
    pri = fun_07C0(var_2256)
    var_2272 = 3;
    var_2280 = 1;
    pri = EvCameraEnd(var_2280, var_2272)
    pri = 0;
    return pri;
}
// fun_5C70
fun_5C70() {
    pri = 0;
    return pri;
}
// fun_5C88
fun_5C88() {
    var_8 = -9002353280860239615;
    var_16 = 8;
    pri = fun_05B8(var_8)
    var_24 = -4374024216485124166;
    var_32 = 8;
    pri = fun_0438(var_24)
    var_40 = -2634777529138130236;
    var_48 = 8;
    pri = fun_0438(var_40)
    var_56 = 1050;
    var_64 = 8;
    pri = fun_46C0(var_56)
    pri = 0;
    return pri;
}
// fun_5D38
fun_5D38() {
    var_8 = 0;
    pri = fun_0468()
    OP_PUSH2_C -7800673974562670051, 5743254801841098527
    pri = SetBamiriInfoToChara(var_8, var_0)
    var_16 = 10376;
    pri = SoundPostEvent(var_16)
    var_24 = 10504;
    pri = SoundPostEvent(var_24)
    var_32 = 15;
    var_40 = 8;
    pri = fun_0090(var_32)
    var_48 = 9632;
    var_56 = 8;
    var_64 = 16;
    pri = fun_02B0(var_56, var_48)
    var_72 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_5E38
fun_5E38() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4858()
    var_16 = 0;
    pri = fun_48B0()
    var_24 = 0;
    pri = fun_48C8()
    var_32 = 0;
    pri = fun_48E0()
    var_40 = 0;
    pri = fun_5C70()
    var_48 = 0;
    pri = fun_5C88()
    var_56 = 0;
    pri = fun_5D38()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_5F28
fun_5F28() {
    var_8 = 0;
    pri = fun_48B0()
    var_16 = 0;
    pri = fun_5C88()
    pri = 0;
    return pri;
}
