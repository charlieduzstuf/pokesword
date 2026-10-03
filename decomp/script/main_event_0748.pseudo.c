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
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00A0
    pri = 0;
    return pri;
// lab_00A0
    OP_ZERO_P_S -8
    OP_JUMP lab_00C8
// lab_00C8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0120
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00C0
// lab_0120
    pri = 0;
    return pri;
// lab_00C0
    OP_INC_P_S -8
}
// fun_0138
fun_0138() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0168
// lab_0168
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0268
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_01E8
    pri = 0;
    return pri;
// lab_0268
    pri = 0;
    return pri;
// lab_01E8
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
    OP_JUMP lab_0160
// lab_0160
    OP_INC_P_S -8
}
// fun_0280
fun_0280() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02E0
fun_02E0() {
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
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = FadeWait_()
    OP_JZER lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0368
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0408
fun_0408() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0580
// lab_0580
    var_8 = 0;
    pri = fun_06C8()
    OP_JNZ lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0580
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0618
// lab_0618
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0618
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
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
    pri = fun_1350(var_8)
    OP_JZER lab_0AA8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1380(var_24)
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
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C90
// lab_0C90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1350(var_8)
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
    pri = fun_1350(var_8)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A0
fun_11A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1258
fun_1258() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_11A0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1218(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11E0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1258(var_24)
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1380
fun_1380() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_13B0
fun_13B0() {
    OP_JUMP lab_13C8
// lab_13C8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1458
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1448
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C08(var_8)
    pri = 0;
    return pri;
// lab_1458
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14E8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_14D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C08(var_8)
    pri = 0;
    return pri;
// lab_14E8
    pri = 0;
    return pri;
// lab_14D8
    OP_JUMP lab_14F8
// lab_14F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13C8
    pri = 0;
    return pri;
// lab_1448
    OP_JUMP lab_14F8
}
// fun_1538
fun_1538() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_13B0(var_40)
    pri = 0;
    return pri;
}
// fun_15C0
fun_15C0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_15F8
fun_15F8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1620
fun_1620() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1658
fun_1658() {
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
// switch_1C70
        case default:
        {
// switch_1C70_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1CB8
// lab_1CB8
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
            OP_JNZ lab_1D60
            var_88 = 0;
            pri = fun_1F18()
// lab_1D60
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C70_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1858
                case default:
                {
// switch_1858_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18D0
// lab_18D0
                    OP_JUMP lab_1CB8
                }
                case 0x0:
                {
// switch_1858_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_18D0
                }
                case 0x1:
                {
// switch_1858_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_18D0
                }
                case 0x2:
                {
// switch_1858_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_18D0
                }
                case 0x3:
                {
// switch_1858_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18D0
                }
                case 0x4:
                {
// switch_1858_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_18D0
                }
                case 0x5:
                {
// switch_1858_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_18D0
                }
            }
        }
        case 0x65:
        {
// switch_1C70_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1A10
                case default:
                {
// switch_1A10_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A88
// lab_1A88
                    OP_JUMP lab_1CB8
                }
                case 0x0:
                {
// switch_1A10_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A88
                }
                case 0x1:
                {
// switch_1A10_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A88
                }
                case 0x2:
                {
// switch_1A10_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A88
                }
                case 0x3:
                {
// switch_1A10_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A88
                }
                case 0x4:
                {
// switch_1A10_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A88
                }
                case 0x5:
                {
// switch_1A10_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A88
                }
            }
        }
        case 0x66:
        {
// switch_1C70_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1BC8
                case default:
                {
// switch_1BC8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C40
// lab_1C40
                    OP_JUMP lab_1CB8
                }
                case 0x0:
                {
// switch_1BC8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C40
                }
                case 0x1:
                {
// switch_1BC8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C40
                }
                case 0x2:
                {
// switch_1BC8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C40
                }
                case 0x3:
                {
// switch_1BC8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C40
                }
                case 0x4:
                {
// switch_1BC8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C40
                }
                case 0x5:
                {
// switch_1BC8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C40
                }
            }
        }
    }
}
// fun_1D78
fun_1D78() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BD0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E20
    pri = 1;
    return pri;
// lab_1E20
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E68
fun_1E68() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D78(var_8)
    arg_2 = pri;
// lab_1EB8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1658(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F18
fun_1F18() {
    OP_JUMP lab_1F30
// lab_1F30
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F70
    pri = 0;
    return pri;
// lab_1F70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F30
    pri = 0;
    return pri;
}
// fun_1FB0
fun_1FB0() {
    var_8 = 0;
    pri = fun_1F18()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2060
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2060
    pri = 0;
    return pri;
}
// fun_2070
fun_2070() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2118()
    return pri;
}
// fun_2118
fun_2118() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2158
fun_2158() {
    pri = arg_1;
    OP_JNZ lab_21A0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_21A0
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
// fun_21F8
fun_21F8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2270
fun_2270() {
    var_8 = 0;
    pri = fun_21F8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_22F0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_22F0
    pri = 1;
    return pri;
// lab_22F0
    var_8 = 0;
    pri = fun_21F8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2330
    pri = 1;
    return pri;
// lab_2330
    var_8 = 0;
    pri = fun_21F8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2360
fun_2360() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_23B0
fun_23B0() {
    OP_JUMP lab_23C8
// lab_23C8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2400
    pri = 0;
    return pri;
// lab_2400
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23C8
    pri = 0;
    return pri;
}
// fun_2440
fun_2440() {
    pri = arg_6;
    OP_JNZ lab_2478
    var_8 = 0;
    pri = fun_10E0()
// lab_2478
    pri = arg_1;
    switch (pri) {
// switch_39E0
        case default:
        {
// switch_39E0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D30
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D30
            pri = 1;
            OP_JUMP lab_3D38
// lab_3D30
            pri = 0;
// lab_3D38
            OP_JZER lab_3E90
            var_16 = 8328;
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
            var_64 = 8432;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3EF0
// lab_3E90
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3EF0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3F50
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3FB0
// lab_3F50
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3FB0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3FB0
            pri = arg_2;
            OP_JZER lab_3FF0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3FF0
            var_8 = 0;
            pri = fun_1120()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_39E0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1:
        {
// switch_39E0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x2:
        {
// switch_39E0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x3:
        {
// switch_39E0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x4:
        {
// switch_39E0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x5:
        {
// switch_39E0_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x6:
        {
// switch_39E0_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5640;
            var_72 = 5632;
            var_80 = 5624;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x7:
        {
// switch_39E0_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x8:
        {
// switch_39E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x9:
        {
// switch_39E0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xa:
        {
// switch_39E0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xb:
        {
// switch_39E0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xc:
        {
// switch_39E0_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xd:
        {
// switch_39E0_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xe:
        {
// switch_39E0_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xf:
        {
// switch_39E0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x10:
        {
// switch_39E0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x11:
        {
// switch_39E0_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x12:
        {
// switch_39E0_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x13:
        {
// switch_39E0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x14:
        {
// switch_39E0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x15:
        {
// switch_39E0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x16:
        {
// switch_39E0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x17:
        {
// switch_39E0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x18:
        {
// switch_39E0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x19:
        {
// switch_39E0_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1a:
        {
// switch_39E0_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6104;
            var_88 = 6096;
            var_96 = 6088;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1b:
        {
// switch_39E0_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6328;
            var_88 = 6320;
            var_96 = 6312;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1c:
        {
// switch_39E0_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B58(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6552;
            var_88 = 6544;
            var_96 = 6536;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1d:
        {
// switch_39E0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1e:
        {
// switch_39E0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1f:
        {
// switch_39E0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x20:
        {
// switch_39E0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x21:
        {
// switch_39E0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x22:
        {
// switch_39E0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x23:
        {
// switch_39E0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x24:
        {
// switch_39E0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x25:
        {
// switch_39E0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x26:
        {
// switch_39E0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x27:
        {
// switch_39E0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x28:
        {
// switch_39E0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x29:
        {
// switch_39E0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
    }
}
// fun_4020
fun_4020() {
    pri = arg_5;
    OP_JNZ lab_4058
    var_8 = 0;
    pri = fun_10E0()
// lab_4058
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_40A8
    OP_CONST_S -8, -1
// lab_40A8
    pri = arg_1;
    switch (pri) {
// switch_5B60
        case default:
        {
// switch_5B60_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6008
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BD0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6008
            pri = 1;
            OP_JUMP lab_6010
// lab_6008
            pri = 0;
// lab_6010
            OP_JZER lab_6060
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_62B8
// lab_6060
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_60C8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_60C8
            pri = 1;
            OP_JUMP lab_60D0
// lab_60C8
            pri = 0;
// lab_60D0
            OP_JZER lab_6258
            var_16 = 28464;
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
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_62B8
// lab_6258
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_62B8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6328
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6328
            var_8 = 0;
            pri = fun_1120()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5B60_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1:
        {
// switch_5B60_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2:
        {
// switch_5B60_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3:
        {
// switch_5B60_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x4:
        {
// switch_5B60_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x5:
        {
// switch_5B60_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E08(var_40)
            OP_JUMP switch_5B60_case_default
        }
        case 0x6:
        {
// switch_5B60_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x7:
        {
// switch_5B60_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x8:
        {
// switch_5B60_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x9:
        {
// switch_5B60_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xa:
        {
// switch_5B60_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xb:
        {
// switch_5B60_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xc:
        {
// switch_5B60_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xd:
        {
// switch_5B60_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0xe:
        {
// switch_5B60_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0xf:
        {
// switch_5B60_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x10:
        {
// switch_5B60_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x11:
        {
// switch_5B60_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x12:
        {
// switch_5B60_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x13:
        {
// switch_5B60_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x14:
        {
// switch_5B60_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x15:
        {
// switch_5B60_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x16:
        {
// switch_5B60_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x17:
        {
// switch_5B60_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x18:
        {
// switch_5B60_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x19:
        {
// switch_5B60_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1a:
        {
// switch_5B60_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1b:
        {
// switch_5B60_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1c:
        {
// switch_5B60_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1d:
        {
// switch_5B60_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1e:
        {
// switch_5B60_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1f:
        {
// switch_5B60_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x20:
        {
// switch_5B60_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x21:
        {
// switch_5B60_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x22:
        {
// switch_5B60_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x23:
        {
// switch_5B60_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x24:
        {
// switch_5B60_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x25:
        {
// switch_5B60_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x26:
        {
// switch_5B60_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x27:
        {
// switch_5B60_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x28:
        {
// switch_5B60_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x29:
        {
// switch_5B60_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2a:
        {
// switch_5B60_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2b:
        {
// switch_5B60_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2c:
        {
// switch_5B60_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2d:
        {
// switch_5B60_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2e:
        {
// switch_5B60_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2f:
        {
// switch_5B60_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x30:
        {
// switch_5B60_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x31:
        {
// switch_5B60_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x32:
        {
// switch_5B60_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x33:
        {
// switch_5B60_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x34:
        {
// switch_5B60_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x35:
        {
// switch_5B60_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x36:
        {
// switch_5B60_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x37:
        {
// switch_5B60_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x38:
        {
// switch_5B60_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x39:
        {
// switch_5B60_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3a:
        {
// switch_5B60_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3b:
        {
// switch_5B60_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3c:
        {
// switch_5B60_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3d:
        {
// switch_5B60_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3e:
        {
// switch_5B60_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B90(var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
    }
}
// fun_6358
fun_6358() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6568(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 28640;
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
    var_424 = 28696;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 28712;
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
    OP_JZER lab_6550
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6550
    pri = 0;
    return pri;
}
// fun_6568
fun_6568() {
    var_8 = arg_1;
    var_16 = 28760;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B90(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_65B0
fun_65B0() {
    pri = 28864;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6638
// lab_6638
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_67B8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_67A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_66F8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_66F8
    pri = 0;
    OP_JUMP lab_6700
// lab_67B8
    pri = 0;
    return pri;
// lab_67A8
    OP_JUMP lab_6630
// lab_6630
    OP_INC_P_S -936
// lab_66F8
    pri = 1;
// lab_6700
    OP_JZER lab_6778
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6770
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6778
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6770
}
// fun_67D8
fun_67D8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6870
    var_8 = 1;
    var_16 = 0;
    var_24 = 29784;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_15F8()
// lab_6870
    pri = arg_4;
    OP_JZER lab_68A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1620(var_8)
// lab_68A8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6900
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6900
    pri = 0;
    OP_JUMP lab_6908
// lab_6900
    pri = 1;
// lab_6908
    OP_JZER lab_69D0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_69D0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_69A8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1538(var_32, var_24)
    OP_JUMP lab_69D0
// lab_69D0
    pri = arg_2;
    OP_JZER lab_6AA8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6A78
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1160(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0818(var_40)
    OP_JUMP lab_6AA8
// lab_6AA8
    pri = arg_3;
    OP_JZER lab_6AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_15C0(var_8)
// lab_6AE0
    pri = 0;
    return pri;
// lab_6A78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1160(var_16, var_8)
// lab_69A8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1538(var_16, var_8)
}
// fun_6AF0
fun_6AF0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_65B0(var_24)
    pri = 0;
    return pri;
}
// fun_6B58
fun_6B58() {
    pri = g_mode;
    switch (pri) {
// switch_6C90
        case default:
        {
// switch_6C90_case_default
            pri = CommandNOP()
            OP_JUMP lab_6D08
// lab_6D08
            pri = 0;
            return pri;
        }
        case 0x81d878ab1d43df4b:
        {
// switch_6C90_case_0x81d878ab1d43df4b
            var_8 = 0;
            pri = fun_9280()
            OP_JUMP lab_6D08
        }
        case 0x81d879ab1d43e0fe:
        {
// switch_6C90_case_0x81d879ab1d43e0fe
            var_8 = 0;
            pri = fun_8BE8()
            OP_JUMP lab_6D08
        }
        case 0xaf3e4c22158eef73:
        {
// switch_6C90_case_0xaf3e4c22158eef73
            var_8 = 0;
            pri = fun_87D8()
            OP_JUMP lab_6D08
        }
        case 0x0:
        {
// switch_6C90_case_0x0
            var_8 = 0;
            pri = fun_6D18()
            OP_JUMP lab_6D08
        }
        case 0x10ce0ad1ce565b98:
        {
// switch_6C90_case_0x10ce0ad1ce565b98
            var_8 = 0;
            pri = fun_8930()
            OP_JUMP lab_6D08
        }
        case 0x4b682a1e635c5d07:
        {
// switch_6C90_case_0x4b682a1e635c5d07
            var_8 = 0;
            pri = fun_9918()
            OP_JUMP lab_6D08
        }
    }
}
// fun_6D18
fun_6D18() {
    pri = 0;
    return pri;
}
// fun_6D30
fun_6D30() {
    pri = 0;
    return pri;
}
// fun_6D48
fun_6D48() {
    pri = 0;
    return pri;
}
// fun_6D60
fun_6D60() {
    pri = 0;
    return pri;
}
// fun_6D78
fun_6D78() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 2825;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 1276;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_0740(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    var_104 = 170;
    pri = float(var_104)
    var_112 = pri;
    OP_PUSH3_C 4657349176133576294, 4653176749408491930, 4166911318193987639
    var_120 = 48;
    pri = fun_0740(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    var_144 = -160;
    pri = float(var_144)
    var_152 = pri;
    OP_PUSH3_C 4657349176133576294, 4653625350152624538, 5996991087849294980
    var_160 = 48;
    pri = fun_0740(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 29832;
    pri = SoundPostEvent(var_168)
    var_176 = 0;
    var_184 = 4631952216750555136;
    var_192 = 0;
    OP_PUSH5_C 4654937243446421750, 4622252589053105930, 4653872652307943916, 4657880504132582769, 4637463496794549780
    var_200 = 4652997880856885330;
    var_208 = 1;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    pri = fun_23B0()
    var_224 = 29992;
    var_232 = 8;
    var_240 = 16;
    pri = fun_0280(var_232, var_224)
    var_248 = 0;
    pri = fun_0350()
    var_256 = 50;
    var_264 = 8;
    pri = fun_0060(var_256)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 11;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 4166911318193987639;
    var_320 = 40;
    pri = fun_0988(var_312, var_304, var_296, var_288, var_280)
    var_328 = 10;
    var_336 = 8;
    pri = fun_0060(var_328)
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = -14;
    pri = float(var_368)
    var_376 = pri;
    var_384 = 5996991087849294980;
    var_392 = 40;
    pri = fun_0988(var_384, var_376, var_368, var_360, var_352)
    var_400 = 4166911318193987639;
    var_408 = 8;
    pri = fun_0A30(var_400)
    var_416 = 5996991087849294980;
    var_424 = 8;
    pri = fun_0A30(var_416)
    var_432 = 1;
    var_440 = 0;
    var_448 = 4641240890982006784;
    var_456 = 0;
    var_464 = 0;
    OP_PUSH4_C 4657907288235835392, 4653326722794520576, 4607182418800017408, 8802641224559852288
    var_472 = 72;
    pri = fun_0850(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 0;
    var_488 = 4631952216750555136;
    var_496 = 3;
    OP_PUSH5_C 4654965874729209037, 4630346402008420844, 4654063659467921162, 4659250803484047442, 4641314074475951555
    var_504 = 4652609577330419958;
    var_512 = 50;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    pri = fun_23B0()
    var_528 = 8802641224559852288;
    var_536 = 8;
    pri = fun_0A30(var_528)
    var_544 = 0;
    var_552 = 4631952216750555136;
    var_560 = 0;
    OP_PUSH5_C 4656396559259271168, 4634839446324164690, 4654394524506951516, 4658059856469305590, 4637148948508075622
    var_568 = 4652996737364792443;
    var_576 = 1;
    pri = EvCameraMove(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 0;
    pri = fun_23B0()
    var_592 = 1;
    var_600 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4657573476505642598, 4653176749408491930, 4607182418800017408
    var_608 = 4166911318193987639;
    var_616 = 64;
    pri = fun_08C8(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_624 = 4166911318193987639;
    var_632 = 8;
    pri = fun_0A30(var_624)
    var_640 = 0;
    var_648 = 1;
    var_656 = 4166911318193987639;
    var_664 = 24;
    pri = fun_6358(var_656, var_648, var_640)
    var_672 = 1;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 4166911318193987639;
    var_696 = 8;
    pri = fun_0C08(var_688)
    var_704 = 0;
    var_712 = 3;
    var_720 = 0;
    var_728 = 100;
    var_736 = -1;
    OP_PUSH2_C 4652171052113358964, 4166911318193987639
    var_744 = 56;
    pri = fun_1E68(var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_752 = 1;
    var_760 = 8;
    pri = fun_1FB0(var_752)
    var_768 = 0;
    pri = fun_2070()
    var_776 = 1;
    var_784 = 8;
    pri = fun_7510(var_776)
    return pri;
}
// fun_7510
fun_7510() {
    var_8 = 1;
    var_16 = -282799482538826992;
    var_24 = 16;
    pri = fun_07D8(var_16, var_8)
    pri = arg_0;
    OP_JZER lab_7658
    var_32 = 0;
    var_40 = 2;
    var_48 = 4166911318193987639;
    var_56 = 24;
    pri = fun_6358(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 4166911318193987639;
    var_88 = 8;
    pri = fun_0C08(var_80)
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    OP_PUSH2_C 4652174350648243597, 4166911318193987639
    var_136 = 56;
    pri = fun_1E68(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1FB0(var_144)
// lab_7658
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    OP_PUSH2_C -8780264976152743339, -8780268274687627972
    var_40 = 1;
    var_48 = 48;
    pri = fun_20A0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_8 = pri;
    var_56 = 0;
    pri = fun_2070()
    pri = var_8;
    OP_JNZ lab_7868
    var_64 = 1;
    var_72 = 6;
    var_80 = 4166911318193987639;
    var_88 = 24;
    pri = fun_1290(var_80, var_72, var_64)
    var_96 = 0;
    var_104 = 0;
    var_112 = 4166911318193987639;
    var_120 = 24;
    pri = fun_6358(var_112, var_104, var_96)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 4166911318193987639;
    var_152 = 8;
    pri = fun_0C08(var_144)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C 4652167753578474331, 4166911318193987639
    var_200 = 56;
    pri = fun_1E68(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1FB0(var_208)
    var_224 = 0;
    pri = fun_2070()
    var_232 = 30040;
    pri = SoundPostEvent(var_232)
    pri = 0;
    return pri;
// lab_7868
    var_8 = 8892309384594757773;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = 8990121772845238799;
    var_32 = 8;
    pri = fun_0518(var_24)
    var_40 = 0;
    pri = fun_0548()
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C 4621819117588971520, 4655697269864005632, 4653317926701498368, 8990121772845238799
    var_64 = 48;
    pri = fun_0740(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    OP_PUSH4_C -4597049319638433792, 4655890783910494208, 4653419081771253760, 8892309384594757773
    var_88 = 48;
    pri = fun_0740(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 0;
    var_112 = 4641240890982006784;
    var_120 = 15;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 1;
    OP_PUSH4_C 4655565328468672512, 4652526278329499648, 4611686018427387904, 8990121772845238799
    var_144 = 72;
    pri = fun_0850(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_152 = 1;
    var_160 = 0;
    var_168 = 4641240890982006784;
    var_176 = -15;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 1;
    OP_PUSH4_C 4655890783910494208, 4654606554329251840, 4611686018427387904, 8892309384594757773
    var_200 = 72;
    pri = fun_0850(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 1;
    var_216 = 4;
    var_224 = 4166911318193987639;
    var_232 = 24;
    pri = fun_1290(var_224, var_216, var_208)
    var_240 = 0;
    var_248 = 1;
    var_256 = 4166911318193987639;
    var_264 = 24;
    pri = fun_6358(var_256, var_248, var_240)
    var_272 = 1;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 4166911318193987639;
    var_296 = 8;
    pri = fun_0C08(var_288)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C 4652173251136615386, 4166911318193987639
    var_344 = 56;
    pri = fun_1E68(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 8990121772845238799;
    var_360 = 8;
    pri = fun_0A30(var_352)
    var_368 = 8892309384594757773;
    var_376 = 8;
    pri = fun_0A30(var_368)
    var_384 = 1;
    var_392 = 1;
    var_400 = -1;
    var_408 = -1;
    var_416 = 0;
    var_424 = 47;
    var_432 = 8990121772845238799;
    var_440 = 56;
    pri = fun_4020(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 1;
    var_456 = 1;
    var_464 = -1;
    var_472 = -1;
    var_480 = 0;
    var_488 = 47;
    var_496 = 8892309384594757773;
    var_504 = 56;
    pri = fun_4020(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 1;
    var_520 = 8;
    pri = fun_1FB0(var_512)
    var_528 = 0;
    pri = fun_2070()
    var_536 = 50;
    var_544 = 0;
    var_552 = 64;
    var_560 = 0;
    var_568 = 196;
    var_576 = 40;
    pri = fun_2158(var_568, var_560, var_552, var_544, var_536)
    var_584 = 0;
    pri = fun_2270()
    OP_JZER lab_7DA8
    var_592 = 8892309384594757773;
    pri = FlagSet(var_592)
    var_600 = 8990121772845238799;
    pri = FlagSet(var_600)
    var_608 = 0;
    pri = fun_2360()
// lab_7DA8
    var_8 = 1;
    var_16 = 1;
    var_24 = -180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 2587;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 1276;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_0740(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4618328827877759386, 4657573476505642598, 4653176749408491930, 4166911318193987639
    var_104 = 48;
    pri = fun_0740(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 1;
    OP_PUSH4_C -4599301119452119040, 4657349176133576294, 4653625350152624538, 5996991087849294980
    var_128 = 48;
    pri = fun_0740(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 0;
    var_144 = 4631952216750555136;
    var_152 = 0;
    OP_PUSH5_C 4656450347368101970, 4635043515682279916, 4654505619161822003, 4658068168777211576, 4637315722431776686
    var_160 = 4652971756460609372;
    var_168 = 1;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 0;
    pri = fun_23B0()
    var_184 = 1;
    var_192 = 1;
    var_200 = -1;
    var_208 = -1;
    var_216 = 0;
    var_224 = 9;
    var_232 = 8990121772845238799;
    var_240 = 56;
    pri = fun_4020(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 1;
    var_264 = -1;
    var_272 = -1;
    var_280 = 0;
    var_288 = 9;
    var_296 = 8892309384594757773;
    var_304 = 56;
    pri = fun_4020(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 10;
    var_320 = 8;
    pri = fun_0060(var_312)
    var_328 = 29992;
    var_336 = 8;
    var_344 = 16;
    pri = fun_0280(var_336, var_328)
    var_352 = 0;
    pri = fun_0350()
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C 4652169952601730753, 4166911318193987639
    var_400 = 56;
    pri = fun_1E68(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1FB0(var_408)
    var_424 = 0;
    pri = fun_2070()
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    var_456 = 877;
    pri = SoundPlayPokeVoice(var_456, var_448, var_440, var_432)
    var_464 = 1;
    var_472 = -1;
    var_480 = -1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 29;
    var_512 = 5996991087849294980;
    var_520 = 56;
    pri = fun_2440(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C 831840231489692988, 5996991087849294980
    var_568 = 56;
    pri = fun_1E68(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 5996991087849294980;
    var_584 = 8;
    pri = fun_0C08(var_576)
    var_592 = 0;
    var_600 = 8;
    pri = fun_0408(var_592)
    var_608 = 1;
    var_616 = 8;
    pri = fun_1FB0(var_608)
    var_624 = 0;
    pri = fun_2070()
    var_632 = 1;
    var_640 = 0;
    var_648 = 4641240890982006784;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH4_C 4657415146831242854, 4654210290338601370, 4607182418800017408, 4166911318193987639
    var_672 = 72;
    pri = fun_0850(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 10;
    var_688 = 8;
    pri = fun_0060(var_680)
    var_696 = 1;
    var_704 = 0;
    var_712 = 4641240890982006784;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH4_C 4657201841575454310, 4654117931361868186, 4607182418800017408, 5996991087849294980
    var_736 = 72;
    pri = fun_0850(var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_744 = 30200;
    pri = SoundPostEvent(var_744)
    var_752 = 20;
    var_760 = 8;
    pri = fun_0060(var_752)
    var_768 = 1;
    var_776 = 0;
    var_784 = 29784;
    var_792 = 30;
    var_800 = 32;
    pri = fun_02E0(var_792, var_784, var_776, var_768)
    var_808 = 0;
    pri = fun_0350()
    var_816 = 30312;
    pri = SoundPostEvent(var_816)
    var_824 = 0;
    var_832 = -282799482538826992;
    var_840 = 16;
    pri = fun_07D8(var_832, var_824)
    var_848 = 3;
    var_856 = 0;
    pri = EvCameraEnd(var_856, var_848)
    var_864 = 5996991087849294980;
    var_872 = 8;
    pri = fun_0A30(var_864)
    var_880 = 4166911318193987639;
    var_888 = 8;
    pri = fun_0A30(var_880)
    pri = 1;
    return pri;
}
// fun_8508
fun_8508() {
    pri = 0;
    return pri;
}
// fun_8520
fun_8520() {
    pri = 0;
    return pri;
}
// fun_8538
fun_8538() {
    var_8 = 8892309384594757773;
    var_16 = 8;
    pri = fun_0698(var_8)
    var_24 = 8990121772845238799;
    var_32 = 8;
    pri = fun_0698(var_24)
    var_40 = 750;
    var_48 = 8;
    pri = fun_6AF0(var_40)
    var_56 = 20;
    var_64 = 5237398558577480708;
    pri = WorkSet(var_64, var_56)
    var_72 = -6557258371771339225;
    pri = FlagSet(var_72)
    pri = 0;
    return pri;
}
// fun_8618
fun_8618() {
    var_8 = 749;
    var_16 = 8;
    pri = fun_6AF0(var_8)
    pri = 0;
    return pri;
}
// fun_8650
fun_8650() {
    var_8 = -5819972185148834558;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_8690
fun_8690() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 29784;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    var_64 = -282799482538826992;
    var_72 = 16;
    pri = fun_07D8(var_64, var_56)
    var_80 = 3;
    var_88 = 1;
    pri = EvCameraEnd(var_88, var_80)
    var_96 = 4166911318193987639;
    var_104 = 8;
    pri = fun_12F8(var_96)
    var_112 = 15;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 29992;
    var_136 = 8;
    var_144 = 16;
    pri = fun_0280(var_136, var_128)
    var_152 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_87D8
fun_87D8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6D30()
    var_16 = 0;
    pri = fun_6D48()
    var_24 = 0;
    pri = fun_6D60()
    var_32 = 0;
    pri = fun_6D78()
    OP_JZER lab_88C0
    var_40 = 0;
    pri = fun_8508()
    var_48 = 0;
    pri = fun_8538()
    var_56 = 0;
    pri = fun_8650()
    OP_JUMP lab_8908
// lab_88C0
    var_8 = 0;
    pri = fun_8520()
    var_16 = 0;
    pri = fun_8618()
    var_24 = 0;
    pri = fun_8690()
// lab_8908
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8930
fun_8930() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_67D8(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 0;
    OP_PUSH5_C 4656396559259271168, 4634839446324164690, 4654394524506951516, 4658059856469305590, 4637148948508075622
    var_80 = 4652996737364792443;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_23B0()
    var_104 = 1;
    var_112 = 1;
    OP_PUSH3_C 4657907288235835392, 4653326722794520576, 8802641224559852288
    var_120 = 40;
    pri = fun_06F0(var_112, var_104, var_96, var_88, var_80)
    var_128 = 1;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_136 = 24;
    pri = fun_0798(var_128, var_120, var_112)
    var_144 = 1;
    OP_PUSH2_C 8802641224559852288, 4166911318193987639
    var_152 = 24;
    pri = fun_0798(var_144, var_136, var_128)
    var_160 = 1;
    OP_PUSH2_C 8802641224559852288, 5996991087849294980
    var_168 = 24;
    pri = fun_0798(var_160, var_152, var_144)
    var_176 = 29992;
    var_184 = 8;
    var_192 = 16;
    pri = fun_0280(var_184, var_176)
    var_200 = 0;
    pri = fun_0350()
    var_208 = 1;
    var_216 = 8;
    pri = fun_7510(var_208)
    OP_JZER lab_8BB0
    var_224 = 0;
    pri = fun_8538()
    var_232 = 0;
    pri = fun_8650()
    OP_JUMP lab_8BD8
// lab_8BB0
    var_8 = 3;
    var_16 = 1;
    pri = EvCameraEnd(var_16, var_8)
// lab_8BD8
    pri = 0;
    return pri;
}
// fun_8BE8
fun_8BE8() {
    var_8 = 30472;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 40;
    pri = fun_67D8(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 4631952216750555136;
    var_80 = 3;
    OP_PUSH5_C 4657355597281482506, 4636878028842991616, 4652655844779716772, 4658243606852539515, 4641849228775422689
    var_88 = 4652656460506228326;
    var_96 = 15;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    OP_PUSH2_C 8802641224559852288, 4166911318193987639
    var_136 = 48;
    pri = fun_09D8(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH2_C 8802641224559852288, 5996991087849294980
    var_176 = 48;
    pri = fun_09D8(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    OP_PUSH2_C 4652168853090102542, 4166911318193987639
    var_224 = 56;
    pri = fun_1E68(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_264 = 48;
    pri = fun_09D8(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 8;
    pri = fun_1FB0(var_272)
    var_288 = 0;
    pri = fun_2070()
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_0A30(var_296)
    var_312 = 0;
    pri = fun_23B0()
    var_320 = 15;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 1;
    var_344 = 0;
    var_352 = 29784;
    var_360 = 8;
    var_368 = 32;
    pri = fun_02E0(var_360, var_352, var_344, var_336)
    var_376 = 0;
    pri = fun_0350()
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_0A30(var_384)
    var_400 = 4166911318193987639;
    var_408 = 8;
    pri = fun_0A30(var_400)
    var_416 = 5996991087849294980;
    var_424 = 8;
    pri = fun_0A30(var_416)
    var_432 = 1;
    var_440 = 1;
    OP_PUSH3_C 4657907288235835392, 4653326722794520576, 8802641224559852288
    var_448 = 40;
    pri = fun_06F0(var_440, var_432, var_424, var_416, var_408)
    var_456 = 1;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_464 = 24;
    pri = fun_0798(var_456, var_448, var_440)
    var_472 = 1;
    OP_PUSH2_C 8802641224559852288, 4166911318193987639
    var_480 = 24;
    pri = fun_0798(var_472, var_464, var_456)
    var_488 = 1;
    OP_PUSH2_C 8802641224559852288, 5996991087849294980
    var_496 = 24;
    pri = fun_0798(var_488, var_480, var_472)
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 0;
    OP_PUSH5_C 4656396559259271168, 4634839446324164690, 4654394524506951516, 4658059856469305590, 4637148948508075622
    var_528 = 4652996737364792443;
    var_536 = 1;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    pri = fun_23B0()
    var_552 = 29992;
    var_560 = 8;
    var_568 = 16;
    pri = fun_0280(var_560, var_552)
    var_576 = 0;
    pri = fun_0350()
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C 4652163355531961487, 4166911318193987639
    var_624 = 56;
    pri = fun_1E68(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_1FB0(var_632)
    var_648 = 0;
    var_656 = 8;
    pri = fun_7510(var_648)
    OP_JZER lab_9228
    var_664 = 0;
    pri = fun_8538()
    var_672 = 0;
    pri = fun_8650()
    OP_JUMP lab_9270
// lab_9228
    var_8 = 30632;
    pri = SoundPostEvent(var_8)
    var_16 = 3;
    var_24 = 1;
    pri = EvCameraEnd(var_24, var_16)
// lab_9270
    pri = 0;
    return pri;
}
// fun_9280
fun_9280() {
    var_8 = 30792;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 40;
    pri = fun_67D8(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 4631952216750555136;
    var_80 = 3;
    OP_PUSH5_C 4657383392935432684, 4636878028842991616, 4653752937481911665, 4658271468477187359, 4641844654807051141
    var_88 = 4653752937481911665;
    var_96 = 15;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    OP_PUSH2_C 8802641224559852288, 4166911318193987639
    var_136 = 48;
    pri = fun_09D8(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH2_C 8802641224559852288, 5996991087849294980
    var_176 = 48;
    pri = fun_09D8(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    OP_PUSH2_C 4652168853090102542, 4166911318193987639
    var_224 = 56;
    pri = fun_1E68(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_264 = 48;
    pri = fun_09D8(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 8;
    pri = fun_1FB0(var_272)
    var_288 = 0;
    pri = fun_2070()
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_0A30(var_296)
    var_312 = 0;
    pri = fun_23B0()
    var_320 = 15;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 1;
    var_344 = 0;
    var_352 = 29784;
    var_360 = 8;
    var_368 = 32;
    pri = fun_02E0(var_360, var_352, var_344, var_336)
    var_376 = 0;
    pri = fun_0350()
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_0A30(var_384)
    var_400 = 4166911318193987639;
    var_408 = 8;
    pri = fun_0A30(var_400)
    var_416 = 5996991087849294980;
    var_424 = 8;
    pri = fun_0A30(var_416)
    var_432 = 1;
    var_440 = 1;
    OP_PUSH3_C 4657907288235835392, 4653326722794520576, 8802641224559852288
    var_448 = 40;
    pri = fun_06F0(var_440, var_432, var_424, var_416, var_408)
    var_456 = 1;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_464 = 24;
    pri = fun_0798(var_456, var_448, var_440)
    var_472 = 1;
    OP_PUSH2_C 8802641224559852288, 4166911318193987639
    var_480 = 24;
    pri = fun_0798(var_472, var_464, var_456)
    var_488 = 1;
    OP_PUSH2_C 8802641224559852288, 5996991087849294980
    var_496 = 24;
    pri = fun_0798(var_488, var_480, var_472)
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 0;
    OP_PUSH5_C 4656396559259271168, 4634839446324164690, 4654394524506951516, 4658059856469305590, 4637148948508075622
    var_528 = 4652996737364792443;
    var_536 = 1;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    pri = fun_23B0()
    var_552 = 29992;
    var_560 = 8;
    var_568 = 16;
    pri = fun_0280(var_560, var_552)
    var_576 = 0;
    pri = fun_0350()
    var_584 = 0;
    var_592 = 3;
    var_600 = 0;
    var_608 = 100;
    var_616 = -1;
    OP_PUSH2_C 4652163355531961487, 4166911318193987639
    var_624 = 56;
    pri = fun_1E68(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_1FB0(var_632)
    var_648 = 0;
    var_656 = 8;
    pri = fun_7510(var_648)
    OP_JZER lab_98C0
    var_664 = 0;
    pri = fun_8538()
    var_672 = 0;
    pri = fun_8650()
    OP_JUMP lab_9908
// lab_98C0
    var_8 = 30952;
    pri = SoundPostEvent(var_8)
    var_16 = 3;
    var_24 = 1;
    pri = EvCameraEnd(var_24, var_16)
// lab_9908
    pri = 0;
    return pri;
}
// fun_9918
fun_9918() {
    var_8 = 0;
    pri = fun_6D48()
    var_16 = 0;
    pri = fun_8538()
    pri = 0;
    return pri;
}
