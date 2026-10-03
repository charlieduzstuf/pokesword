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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0648
fun_0648() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0680
fun_0680() {
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
// fun_0740
fun_0740() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15E0(var_8)
    OP_JZER lab_0860
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1610(var_24)
    OP_JNZ lab_0860
    pri = 0;
    return pri;
// lab_0860
    OP_JUMP lab_0870
// lab_0870
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08D0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0870
    pri = 0;
    return pri;
}
// fun_0910
fun_0910() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09D0
    pri = 0;
    return pri;
// lab_09D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A10
// lab_0A10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15E0(var_8)
    OP_JNZ lab_0A98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A88
    pri = 0;
    return pri;
// lab_0A98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AE0
    pri = 0;
    return pri;
// lab_0AE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B88(var_8)
    pri = 0;
    return pri;
// lab_0B40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A10
    pri = 0;
    return pri;
// lab_0A88
    OP_JUMP lab_0AE0
}
// fun_0B88
fun_0B88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BC0
fun_0BC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C10
    pri = 0;
    return pri;
// lab_0C10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15E0(var_8)
    OP_JZER lab_0D40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C68
    OP_ZERO_P_S 64
// lab_0D40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D78
    OP_CONST_S 64, 1
// lab_0D78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB0
    OP_CONST_S 72, 1
// lab_0DB0
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
// lab_0C68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C90
    OP_ZERO_P_S 72
// lab_0C90
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
    OP_JUMP lab_0E50
// lab_0E50
    pri = 0;
    return pri;
}
// fun_0E60
fun_0E60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
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
// fun_0F40
fun_0F40() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1300
        case default:
        {
// switch_1300_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1300_case_0x0
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
            pri = fun_0EE0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1300_case_default
        }
        case 0x1:
        {
// switch_1300_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0EE0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1300_case_default
        }
        case 0x2:
        {
// switch_1300_case_0x2
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
            pri = fun_0EE0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1300_case_default
        }
        case 0x3:
        {
// switch_1300_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0EE0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1300_case_default
        }
        case 0x4:
        {
// switch_1300_case_0x4
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
            pri = fun_0EE0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1300_case_default
        }
        case 0x5:
        {
// switch_1300_case_0x5
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
            pri = fun_0EE0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1300_case_default
        }
        case 0x6:
        {
// switch_1300_case_0x6
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
            pri = fun_0EE0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1300_case_default
        }
        case 0x7:
        {
// switch_1300_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0EE0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1300_case_default
        }
    }
}
// fun_13B0
fun_13B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1430
fun_1430() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_14A8
fun_14A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1430(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_14A8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1588
fun_1588() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1470(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14E8(var_24)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1610
fun_1610() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1640
fun_1640() {
    OP_JUMP lab_1658
// lab_1658
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_16E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_16D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_16E8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1778
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1768
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    pri = 0;
    return pri;
// lab_1778
    pri = 0;
    return pri;
// lab_1768
    OP_JUMP lab_1788
// lab_1788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1658
    pri = 0;
    return pri;
// lab_16D8
    OP_JUMP lab_1788
}
// fun_17C8
fun_17C8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0988(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1640(var_40)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1888
fun_1888() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_18B0
fun_18B0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_18E8
fun_18E8() {
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
// switch_1F00
        case default:
        {
// switch_1F00_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1F48
// lab_1F48
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
            OP_JNZ lab_1FF0
            var_88 = 0;
            pri = fun_21A8()
// lab_1FF0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1F00_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1AE8
                case default:
                {
// switch_1AE8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B60
// lab_1B60
                    OP_JUMP lab_1F48
                }
                case 0x0:
                {
// switch_1AE8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B60
                }
                case 0x1:
                {
// switch_1AE8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B60
                }
                case 0x2:
                {
// switch_1AE8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B60
                }
                case 0x3:
                {
// switch_1AE8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B60
                }
                case 0x4:
                {
// switch_1AE8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B60
                }
                case 0x5:
                {
// switch_1AE8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B60
                }
            }
        }
        case 0x65:
        {
// switch_1F00_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1CA0
                case default:
                {
// switch_1CA0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D18
// lab_1D18
                    OP_JUMP lab_1F48
                }
                case 0x0:
                {
// switch_1CA0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1D18
                }
                case 0x1:
                {
// switch_1CA0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1D18
                }
                case 0x2:
                {
// switch_1CA0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1D18
                }
                case 0x3:
                {
// switch_1CA0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D18
                }
                case 0x4:
                {
// switch_1CA0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1D18
                }
                case 0x5:
                {
// switch_1CA0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1D18
                }
            }
        }
        case 0x66:
        {
// switch_1F00_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E58
                case default:
                {
// switch_1E58_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1ED0
// lab_1ED0
                    OP_JUMP lab_1F48
                }
                case 0x0:
                {
// switch_1E58_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1ED0
                }
                case 0x1:
                {
// switch_1E58_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1ED0
                }
                case 0x2:
                {
// switch_1E58_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1ED0
                }
                case 0x3:
                {
// switch_1E58_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1ED0
                }
                case 0x4:
                {
// switch_1E58_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1ED0
                }
                case 0x5:
                {
// switch_1E58_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1ED0
                }
            }
        }
    }
}
// fun_2008
fun_2008() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0950(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_20B0
    pri = 1;
    return pri;
// lab_20B0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_20F8
fun_20F8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2148
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2008(var_8)
    arg_2 = pri;
// lab_2148
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_18E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21A8
fun_21A8() {
    OP_JUMP lab_21C0
// lab_21C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2200
    pri = 0;
    return pri;
// lab_2200
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21C0
    pri = 0;
    return pri;
}
// fun_2240
fun_2240() {
    var_8 = 0;
    pri = fun_21A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_22F0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_22F0
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2330
fun_2330() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2360
// lab_2360
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_23A0
    OP_JUMP lab_23D0
// lab_23A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2360
// lab_23D0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2418
fun_2418() {
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
// fun_2488
fun_2488() {
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
// fun_24F0
fun_24F0() {
    OP_JUMP lab_2508
// lab_2508
    pri = EvCameraMoveWait_()
    OP_JZER lab_2540
    pri = 0;
    return pri;
// lab_2540
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2508
    pri = 0;
    return pri;
}
// fun_2580
fun_2580() {
    pri = arg_5;
    OP_JNZ lab_25B8
    var_8 = 0;
    pri = fun_0E60()
// lab_25B8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2608
    OP_CONST_S -8, -1
// lab_2608
    pri = arg_1;
    switch (pri) {
// switch_40C0
        case default:
        {
// switch_40C0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4568
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0950(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4568
            pri = 1;
            OP_JUMP lab_4570
// lab_4568
            pri = 0;
// lab_4570
            OP_JZER lab_45C0
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_4818
// lab_45C0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4628
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4628
            pri = 1;
            OP_JUMP lab_4630
// lab_4628
            pri = 0;
// lab_4630
            OP_JZER lab_47B8
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0950(var_24, var_16)
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4818
// lab_47B8
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_4818
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4888
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4888
            var_8 = 0;
            pri = fun_0EA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_40C0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x1:
        {
// switch_40C0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x2:
        {
// switch_40C0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x3:
        {
// switch_40C0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x4:
        {
// switch_40C0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x5:
        {
// switch_40C0_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B88(var_40)
            OP_JUMP switch_40C0_case_default
        }
        case 0x6:
        {
// switch_40C0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x7:
        {
// switch_40C0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x8:
        {
// switch_40C0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x9:
        {
// switch_40C0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0xa:
        {
// switch_40C0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0xb:
        {
// switch_40C0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0xc:
        {
// switch_40C0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0xd:
        {
// switch_40C0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0xe:
        {
// switch_40C0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0xf:
        {
// switch_40C0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x10:
        {
// switch_40C0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x11:
        {
// switch_40C0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x12:
        {
// switch_40C0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x13:
        {
// switch_40C0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x14:
        {
// switch_40C0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x15:
        {
// switch_40C0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x16:
        {
// switch_40C0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x17:
        {
// switch_40C0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x18:
        {
// switch_40C0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x19:
        {
// switch_40C0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x1a:
        {
// switch_40C0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x1b:
        {
// switch_40C0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x1c:
        {
// switch_40C0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x1d:
        {
// switch_40C0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x1e:
        {
// switch_40C0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x1f:
        {
// switch_40C0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x20:
        {
// switch_40C0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x21:
        {
// switch_40C0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x22:
        {
// switch_40C0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x23:
        {
// switch_40C0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x24:
        {
// switch_40C0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x25:
        {
// switch_40C0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x26:
        {
// switch_40C0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x27:
        {
// switch_40C0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x28:
        {
// switch_40C0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x29:
        {
// switch_40C0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x2a:
        {
// switch_40C0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x2b:
        {
// switch_40C0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x2c:
        {
// switch_40C0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x2d:
        {
// switch_40C0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x2e:
        {
// switch_40C0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x2f:
        {
// switch_40C0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x30:
        {
// switch_40C0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x31:
        {
// switch_40C0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x32:
        {
// switch_40C0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x33:
        {
// switch_40C0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x34:
        {
// switch_40C0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x35:
        {
// switch_40C0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x36:
        {
// switch_40C0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x37:
        {
// switch_40C0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x38:
        {
// switch_40C0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40C0_case_default
        }
        case 0x39:
        {
// switch_40C0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x3a:
        {
// switch_40C0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x3b:
        {
// switch_40C0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x3c:
        {
// switch_40C0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x3d:
        {
// switch_40C0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
        case 0x3e:
        {
// switch_40C0_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            OP_JUMP switch_40C0_case_default
        }
    }
}
// fun_48B8
fun_48B8() {
    pri = arg_4;
    OP_JNZ lab_48F0
    var_8 = 0;
    pri = fun_0E60()
// lab_48F0
    pri = arg_1;
    switch (pri) {
// switch_5CC8
        case default:
        {
// switch_5CC8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_15E0(var_264)
            OP_JZER lab_6290
            pri = arg_3;
            switch (pri) {
// switch_6238
                case default:
                {
// switch_6238_case_default
                    OP_JUMP lab_6548
// lab_6548
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_65B8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_65B8
                    var_8 = 0;
                    pri = fun_0EA0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6238_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6238_case_default
                }
                case 0x2:
                {
// switch_6238_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6238_case_default
                }
                case 0x3:
                {
// switch_6238_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6238_case_default
                }
            }
// lab_6290
            pri = arg_1;
            OP_JZER lab_62E0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_62E0
            pri = 0;
            OP_JUMP lab_62E8
// lab_62E0
            pri = 1;
// lab_62E8
            OP_JZER lab_6350
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0950(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6350
            pri = 1;
            OP_JUMP lab_6358
// lab_6350
            pri = 0;
// lab_6358
            OP_JZER lab_63A8
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6548
// lab_63A8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6410
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6548
// lab_6410
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0950(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5CC8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x1:
        {
// switch_5CC8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x2:
        {
// switch_5CC8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x3:
        {
// switch_5CC8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x4:
        {
// switch_5CC8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x5:
        {
// switch_5CC8_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B88(var_40)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x6:
        {
// switch_5CC8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x7:
        {
// switch_5CC8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x8:
        {
// switch_5CC8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x9:
        {
// switch_5CC8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0xa:
        {
// switch_5CC8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0xb:
        {
// switch_5CC8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0xc:
        {
// switch_5CC8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0xd:
        {
// switch_5CC8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0xe:
        {
// switch_5CC8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0xf:
        {
// switch_5CC8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x10:
        {
// switch_5CC8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x11:
        {
// switch_5CC8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x12:
        {
// switch_5CC8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x13:
        {
// switch_5CC8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x14:
        {
// switch_5CC8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x15:
        {
// switch_5CC8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x16:
        {
// switch_5CC8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x17:
        {
// switch_5CC8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x18:
        {
// switch_5CC8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x19:
        {
// switch_5CC8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x1a:
        {
// switch_5CC8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x1b:
        {
// switch_5CC8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x1c:
        {
// switch_5CC8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x1d:
        {
// switch_5CC8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x1e:
        {
// switch_5CC8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x1f:
        {
// switch_5CC8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x20:
        {
// switch_5CC8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x21:
        {
// switch_5CC8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x22:
        {
// switch_5CC8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x23:
        {
// switch_5CC8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x24:
        {
// switch_5CC8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x25:
        {
// switch_5CC8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x26:
        {
// switch_5CC8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x27:
        {
// switch_5CC8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x28:
        {
// switch_5CC8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x29:
        {
// switch_5CC8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x2a:
        {
// switch_5CC8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x2b:
        {
// switch_5CC8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x2c:
        {
// switch_5CC8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x2d:
        {
// switch_5CC8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x2e:
        {
// switch_5CC8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x2f:
        {
// switch_5CC8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x30:
        {
// switch_5CC8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x31:
        {
// switch_5CC8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x32:
        {
// switch_5CC8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x33:
        {
// switch_5CC8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x34:
        {
// switch_5CC8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x35:
        {
// switch_5CC8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x36:
        {
// switch_5CC8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x37:
        {
// switch_5CC8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x38:
        {
// switch_5CC8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x39:
        {
// switch_5CC8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x3a:
        {
// switch_5CC8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x3b:
        {
// switch_5CC8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x3c:
        {
// switch_5CC8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x3d:
        {
// switch_5CC8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
        case 0x3e:
        {
// switch_5CC8_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0910(var_24, var_16, var_8)
            OP_JUMP switch_5CC8_case_default
        }
    }
}
// fun_65E8
fun_65E8() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6670
// lab_6670
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_67F0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_67E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6730
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6730
    pri = 0;
    OP_JUMP lab_6738
// lab_67F0
    pri = 0;
    return pri;
// lab_67E0
    OP_JUMP lab_6668
// lab_6668
    OP_INC_P_S -936
// lab_6730
    pri = 1;
// lab_6738
    OP_JZER lab_67B0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_67A8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_67B0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_67A8
}
// fun_6810
fun_6810() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_68A8
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1888()
// lab_68A8
    pri = arg_4;
    OP_JZER lab_68E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_18B0(var_8)
// lab_68E0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6938
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6938
    pri = 0;
    OP_JUMP lab_6940
// lab_6938
    pri = 1;
// lab_6940
    OP_JZER lab_6A08
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6A08
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_69E0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_17C8(var_32, var_24)
    OP_JUMP lab_6A08
// lab_6A08
    pri = arg_2;
    OP_JZER lab_6AE0
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_6AB0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0648(var_40)
    OP_JUMP lab_6AE0
// lab_6AE0
    pri = arg_3;
    OP_JZER lab_6B18
    var_8 = 1;
    var_16 = 8;
    pri = fun_1850(var_8)
// lab_6B18
    pri = 0;
    return pri;
// lab_6AB0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13B0(var_16, var_8)
// lab_69E0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_17C8(var_16, var_8)
}
// fun_6B28
fun_6B28() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_65E8(var_24)
    pri = 0;
    return pri;
}
// fun_6B90
fun_6B90() {
    pri = g_mode;
    switch (pri) {
// switch_6C78
        case default:
        {
// switch_6C78_case_default
            pri = CommandNOP()
            OP_JUMP lab_6CD0
// lab_6CD0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6C78_case_0x0
            var_8 = 0;
            pri = fun_6CE0()
            OP_JUMP lab_6CD0
        }
        case 0x16aa0517fcfeae71:
        {
// switch_6C78_case_0x16aa0517fcfeae71
            var_8 = 0;
            pri = fun_8CF8()
            OP_JUMP lab_6CD0
        }
        case 0x2ca0fdc57c24b149:
        {
// switch_6C78_case_0x2ca0fdc57c24b149
            var_8 = 0;
            pri = fun_8D40()
            OP_JUMP lab_6CD0
        }
        case 0x34096f1b86f386fd:
        {
// switch_6C78_case_0x34096f1b86f386fd
            var_8 = 0;
            pri = fun_8C08()
            OP_JUMP lab_6CD0
        }
    }
}
// fun_6CE0
fun_6CE0() {
    pri = 0;
    return pri;
}
// fun_6CF8
fun_6CF8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_6810(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6D50
fun_6D50() {
    pri = 0;
    return pri;
}
// fun_6D68
fun_6D68() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_6D98
fun_6D98() {
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0608(var_16, var_8)
    var_32 = 1;
    var_40 = -3181508942575245480;
    var_48 = 16;
    pri = fun_0608(var_40, var_32)
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 0;
    OP_PUSH5_C 4661342987194728448, 4634692375648833372, 4658813021934332150, 4661599888086558310, 4638444437088386417
    var_80 = 4659113980257086996;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_24F0()
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4640537203540230144, 4661428694126113587, 4658797232947357286, 8802641224559852288
    var_120 = 48;
    pri = fun_05B0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0090(var_128)
    var_144 = 1;
    var_152 = 0;
    OP_PUSH5_C 4641240890982006784, -3181508942575245480, 4661264866893574963, 4658793274705497293, 4607182418800017408
    var_160 = 8802641224559852288;
    var_168 = 64;
    pri = fun_0680(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_176 = 23224;
    var_184 = 8;
    var_192 = 16;
    pri = fun_02B0(var_184, var_176)
    var_200 = 0;
    pri = fun_0380()
    var_208 = 0;
    var_216 = 4631952216750555136;
    var_224 = 3;
    OP_PUSH5_C 4661294421766129582, 4636474112251411825, 4658929262303620628, 4661388517971234652, 4637990558688440484
    var_232 = 4659078158168254054;
    var_240 = 75;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 10;
    var_256 = 8;
    pri = fun_0090(var_248)
    var_264 = 20;
    var_272 = 8;
    pri = fun_0090(var_264)
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_312 = 48;
    pri = fun_0790(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 7;
    var_328 = 4;
    var_336 = -3181508942575245480;
    var_344 = 24;
    pri = fun_1520(var_336, var_328, var_320)
    var_352 = 0;
    var_360 = 3;
    var_368 = 0;
    var_376 = 100;
    var_384 = -1;
    OP_PUSH2_C -4308342157621750008, -3181508942575245480
    var_392 = 56;
    pri = fun_20F8(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = -3181508942575245480;
    var_408 = 8;
    pri = fun_07E8(var_400)
    var_416 = 1;
    var_424 = 8;
    pri = fun_2240(var_416)
    var_432 = 8802641224559852288;
    var_440 = 8;
    pri = fun_07E8(var_432)
    var_448 = 0;
    var_456 = -3658194422649057152;
    var_464 = 0;
    var_472 = 24;
    pri = fun_2330(var_464, var_456, var_448)
    var_480 = 0;
    var_488 = -3658191124114172519;
    var_496 = 1;
    var_504 = 24;
    pri = fun_2330(var_496, var_488, var_480)
    var_520 = 0;
    var_528 = 0;
    var_536 = 0;
    var_544 = 1;
    var_552 = 32;
    pri = fun_2418(var_544, var_536, var_528, var_520)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_78A8
        case default:
        {
// switch_78A8_case_default
            var_8 = 1;
            var_16 = 8;
            pri = fun_2240(var_8)
            var_24 = 0;
            pri = fun_2300()
            var_32 = 1;
            var_40 = 3;
            var_48 = 0;
            var_56 = 3;
            var_64 = -3181508942575245480;
            var_72 = 40;
            pri = fun_48B8(var_64, var_56, var_48, var_40, var_32)
            var_80 = -3181508942575245480;
            var_88 = 8;
            pri = fun_0988(var_80)
            var_96 = 5;
            var_104 = -3181508942575245480;
            var_112 = 16;
            pri = fun_1430(var_104, var_96)
            var_120 = 0;
            var_128 = 4631952216750555136;
            var_136 = 0;
            OP_PUSH5_C 4660863743061529723, 4638366327782349210, 4658787909088753746, 4661106911053128663, 4638844835242757325
            var_144 = 4658805061470147052;
            var_152 = 1;
            pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_160 = 0;
            pri = fun_24F0()
            var_168 = 0;
            var_176 = 0;
            var_184 = 0;
            var_192 = 0;
            OP_PUSH2_C 8802641224559852288, -3181508942575245480
            var_200 = 48;
            pri = fun_0790(var_192, var_184, var_176, var_168, var_160, var_152)
            var_208 = 0;
            var_216 = 3;
            var_224 = 0;
            var_232 = 100;
            var_240 = -1;
            OP_PUSH2_C -4308336660063608953, -3181508942575245480
            var_248 = 56;
            pri = fun_20F8(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
            var_256 = -3181508942575245480;
            var_264 = 8;
            pri = fun_07E8(var_256)
            var_272 = 1;
            var_280 = 8;
            pri = fun_2240(var_272)
            var_288 = 0;
            pri = fun_2300()
            var_296 = 0;
            var_304 = 3;
            var_312 = 0;
            var_320 = 100;
            var_328 = -1;
            OP_PUSH2_C -4308337759575237164, -3181508942575245480
            var_336 = 56;
            pri = fun_20F8(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
            var_344 = 1;
            var_352 = 8;
            pri = fun_2240(var_344)
            var_360 = 0;
            pri = fun_2300()
            var_368 = -3181508942575245480;
            var_376 = 8;
            pri = fun_1588(var_368)
            var_384 = 0;
            var_392 = 1;
            var_400 = 60;
            var_408 = 3;
            var_416 = -3181508942575245480;
            var_424 = 40;
            pri = fun_0F40(var_416, var_408, var_400, var_392, var_384)
            var_432 = 0;
            var_440 = 3;
            var_448 = 0;
            var_456 = 100;
            var_464 = -1;
            OP_PUSH2_C -4308334461040352531, -3181508942575245480
            var_472 = 56;
            pri = fun_20F8(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
            var_480 = 1;
            var_488 = 8;
            pri = fun_2240(var_480)
            var_496 = 0;
            pri = fun_2300()
            var_504 = 8;
            var_512 = -3181508942575245480;
            var_520 = 16;
            pri = fun_1430(var_512, var_504)
            var_528 = 0;
            var_536 = 4631952216750555136;
            var_544 = 3;
            OP_PUSH5_C 4661294421766129582, 4636474112251411825, 4658929262303620628, 4661388517971234652, 4637990558688440484
            var_552 = 4659078158168254054;
            var_560 = 1;
            pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
            var_568 = 0;
            pri = fun_24F0()
            var_576 = 0;
            var_584 = 3;
            var_592 = 0;
            var_600 = 100;
            var_608 = -1;
            OP_PUSH2_C -4308335560551980742, -3181508942575245480
            var_616 = 56;
            pri = fun_20F8(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
            var_624 = 1;
            var_632 = 8;
            pri = fun_2240(var_624)
            var_640 = 0;
            pri = fun_2300()
            var_648 = -3181508942575245480;
            var_656 = 8;
            pri = fun_1588(var_648)
            var_664 = 15;
            var_672 = -3181508942575245480;
            var_680 = 16;
            pri = fun_13F0(var_672, var_664)
            var_688 = -1;
            var_696 = -3181508942575245480;
            var_704 = 16;
            pri = fun_13B0(var_696, var_688)
            var_712 = 0;
            var_720 = 3;
            var_728 = 0;
            var_736 = 100;
            var_744 = -1;
            OP_PUSH2_C -4308349854203147485, -3181508942575245480
            var_752 = 56;
            pri = fun_20F8(var_744, var_736, var_728, var_720, var_712, var_704, var_696)
            var_760 = 1;
            var_768 = 8;
            pri = fun_2240(var_760)
            var_776 = 0;
            pri = fun_2300()
            var_784 = 0;
            var_792 = 0;
            var_800 = 0;
            var_808 = 180;
            pri = float(var_808)
            var_816 = pri;
            var_824 = -3181508942575245480;
            var_832 = 40;
            pri = fun_0740(var_824, var_816, var_808, var_800, var_792)
            var_840 = -3181508942575245480;
            var_848 = 8;
            pri = fun_07E8(var_840)
            var_856 = 0;
            var_864 = 4629137466983448576;
            var_872 = 0;
            OP_PUSH5_C 4660827459177813115, 4636073714097040916, 4658960268531523912, 4660634340955510538, 4636623293989068472
            var_880 = 4659109186386389893;
            var_888 = 1;
            pri = EvCameraMove(var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
            var_896 = 0;
            pri = fun_24F0()
            var_904 = 0;
            var_912 = 4629137466983448576;
            var_920 = 3;
            OP_PUSH5_C 4660831967175486996, 4636073714097040916, 4658965634148267459, 4660644324521090744, 4636623293989068472
            var_928 = 4659121368975225651;
            var_936 = 200;
            pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
            var_944 = 7;
            var_952 = -3181508942575245480;
            var_960 = 16;
            pri = fun_1430(var_952, var_944)
            var_968 = 0;
            var_976 = 3;
            var_984 = 0;
            var_992 = 100;
            var_1000 = -1;
            OP_PUSH2_C -4309332817598578894, -3181508942575245480
            var_1008 = 56;
            pri = fun_20F8(var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
            var_1016 = 1;
            var_1024 = 8;
            pri = fun_2240(var_1016)
            var_1032 = 0;
            var_1040 = -3658192223625800730;
            var_1048 = 0;
            var_1056 = 24;
            pri = fun_2330(var_1048, var_1040, var_1032)
            var_1064 = 0;
            var_1072 = -3658188925090916097;
            var_1080 = 1;
            var_1088 = 24;
            pri = fun_2330(var_1080, var_1072, var_1064)
            var_1096 = 0;
            var_1104 = 0;
            var_1112 = 0;
            var_1120 = 1;
            var_1128 = 32;
            pri = fun_2418(var_1120, var_1112, var_1104, var_1096)
            var_8 = pri;
            pri = var_8;
            switch (pri) {
// switch_8600
                case default:
                {
// switch_8600_case_default
                    var_8 = 1;
                    var_16 = 8;
                    pri = fun_2240(var_8)
                    var_24 = 0;
                    pri = fun_2300()
                    var_32 = -3181508942575245480;
                    var_40 = 8;
                    pri = fun_1588(var_32)
                    var_48 = 1;
                    var_56 = 1;
                    var_64 = -1;
                    var_72 = -1;
                    var_80 = 0;
                    var_88 = 23;
                    var_96 = -3181508942575245480;
                    var_104 = 56;
                    pri = fun_2580(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
                    var_112 = 0;
                    var_120 = 3;
                    var_128 = 0;
                    var_136 = 100;
                    var_144 = -1;
                    OP_PUSH2_C -4309333917110207105, -3181508942575245480
                    var_152 = 56;
                    pri = fun_20F8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
                    var_160 = 1;
                    var_168 = 8;
                    pri = fun_2240(var_160)
                    var_176 = 0;
                    pri = fun_2300()
                    var_184 = 3;
                    var_192 = 30;
                    pri = EvCameraEnd(var_192, var_184)
                    var_200 = 0;
                    var_208 = 8802641224559852288;
                    var_216 = 16;
                    pri = fun_0608(var_208, var_200)
                    var_224 = 0;
                    var_232 = -3181508942575245480;
                    var_240 = 16;
                    pri = fun_0608(var_232, var_224)
                    var_248 = 15;
                    var_256 = 8;
                    pri = fun_0090(var_248)
                    var_264 = 1;
                    var_272 = 3;
                    var_280 = 0;
                    var_288 = 23;
                    var_296 = -3181508942575245480;
                    var_304 = 40;
                    pri = fun_48B8(var_296, var_288, var_280, var_272, var_264)
                    var_312 = -3181508942575245480;
                    var_320 = 8;
                    pri = fun_0988(var_312)
                    var_328 = 0;
                    pri = fun_24F0()
                    pri = 0;
                    return pri;
                }
                case 0x0:
                {
// switch_8600_case_0x0
                    var_8 = 5;
                    var_16 = 5;
                    var_24 = -3181508942575245480;
                    var_32 = 24;
                    pri = fun_1520(var_24, var_16, var_8)
                    var_40 = 0;
                    var_48 = 4631952216750555136;
                    var_56 = 3;
                    OP_PUSH5_C 4661294421766129582, 4636474112251411825, 4658929262303620628, 4661388517971234652, 4637990558688440484
                    var_64 = 4659078158168254054;
                    var_72 = 1;
                    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
                    var_80 = 0;
                    pri = fun_24F0()
                    var_88 = 0;
                    var_96 = 0;
                    var_104 = 0;
                    var_112 = 0;
                    pri = float(var_112)
                    var_120 = pri;
                    var_128 = -3181508942575245480;
                    var_136 = 40;
                    pri = fun_0740(var_128, var_120, var_112, var_104, var_96)
                    var_144 = 0;
                    var_152 = 3;
                    var_160 = 0;
                    var_168 = 100;
                    var_176 = -1;
                    OP_PUSH2_C -4309331718086950683, -3181508942575245480
                    var_184 = 56;
                    pri = fun_20F8(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
                    var_192 = -3181508942575245480;
                    var_200 = 8;
                    pri = fun_07E8(var_192)
                    OP_JUMP switch_8600_case_default
                }
                case 0x1:
                {
// switch_8600_case_0x1
                    var_8 = 5;
                    var_16 = 5;
                    var_24 = -3181508942575245480;
                    var_32 = 24;
                    pri = fun_1520(var_24, var_16, var_8)
                    var_40 = 0;
                    var_48 = 4631952216750555136;
                    var_56 = 3;
                    OP_PUSH5_C 4661294421766129582, 4636474112251411825, 4658929262303620628, 4661388517971234652, 4637990558688440484
                    var_64 = 4659078158168254054;
                    var_72 = 1;
                    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
                    var_80 = 0;
                    pri = fun_24F0()
                    var_88 = 0;
                    var_96 = 0;
                    var_104 = 0;
                    var_112 = 0;
                    pri = float(var_112)
                    var_120 = pri;
                    var_128 = -3181508942575245480;
                    var_136 = 40;
                    pri = fun_0740(var_128, var_120, var_112, var_104, var_96)
                    var_144 = 0;
                    var_152 = 3;
                    var_160 = 0;
                    var_168 = 100;
                    var_176 = -1;
                    OP_PUSH2_C -4309335016621835316, -3181508942575245480
                    var_184 = 56;
                    pri = fun_20F8(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
                    var_192 = -3181508942575245480;
                    var_200 = 8;
                    pri = fun_07E8(var_192)
                    OP_JUMP switch_8600_case_default
                }
            }
        }
        case 0x0:
        {
// switch_78A8_case_0x0
            var_8 = -3181508942575245480;
            var_16 = 8;
            pri = fun_1588(var_8)
            var_24 = 0;
            var_32 = 4631952216750555136;
            var_40 = 0;
            OP_PUSH5_C 4661652466732598559, 4639403563071527977, 4659962099546288292, 4661719481966311506, 4639978475711459492
            var_48 = 4660163442115566633;
            var_56 = 1;
            pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
            var_64 = 0;
            pri = fun_24F0()
            var_72 = 0;
            var_80 = 4631952216750555136;
            var_88 = 3;
            OP_PUSH5_C 4661612730382370734, 4639403563071527977, 4660014128436514652, 4661677062807711908, 4639978475711459492
            var_96 = 4660218945462536765;
            var_104 = 150;
            pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            var_120 = 0;
            var_128 = 0;
            OP_PUSH2_C 4634872519633928192, -3181508942575245480
            var_136 = 40;
            pri = fun_0740(var_128, var_120, var_112, var_104, var_96)
            var_144 = -3181508942575245480;
            var_152 = 8;
            pri = fun_07E8(var_144)
            var_160 = 1;
            var_168 = 1;
            var_176 = -1;
            var_184 = -1;
            var_192 = 0;
            var_200 = 3;
            var_208 = -3181508942575245480;
            var_216 = 56;
            pri = fun_2580(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_224 = 0;
            var_232 = 3;
            var_240 = 0;
            var_248 = 100;
            var_256 = -1;
            OP_PUSH2_C -4308338859086865375, -3181508942575245480
            var_264 = 56;
            pri = fun_20F8(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
            var_272 = 1;
            var_280 = 8;
            pri = fun_2240(var_272)
            var_288 = 0;
            pri = fun_2300()
            var_296 = 0;
            var_304 = 3;
            var_312 = 0;
            var_320 = 100;
            var_328 = -1;
            OP_PUSH2_C -4309337215645091738, -3181508942575245480
            var_336 = 56;
            pri = fun_20F8(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
            OP_JUMP switch_78A8_case_default
        }
        case 0x1:
        {
// switch_78A8_case_0x1
            var_8 = -3181508942575245480;
            var_16 = 8;
            pri = fun_1588(var_8)
            var_24 = 0;
            var_32 = 4631952216750555136;
            var_40 = 0;
            OP_PUSH5_C 4661652466732598559, 4639403563071527977, 4659962099546288292, 4661719481966311506, 4639978475711459492
            var_48 = 4660163442115566633;
            var_56 = 1;
            pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
            var_64 = 0;
            pri = fun_24F0()
            var_72 = 0;
            var_80 = 4631952216750555136;
            var_88 = 3;
            OP_PUSH5_C 4661612730382370734, 4639403563071527977, 4660014128436514652, 4661677062807711908, 4639978475711459492
            var_96 = 4660218945462536765;
            var_104 = 150;
            pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            var_120 = 0;
            var_128 = 0;
            OP_PUSH2_C 4634872519633928192, -3181508942575245480
            var_136 = 40;
            pri = fun_0740(var_128, var_120, var_112, var_104, var_96)
            var_144 = -3181508942575245480;
            var_152 = 8;
            pri = fun_07E8(var_144)
            var_160 = 1;
            var_168 = 1;
            var_176 = -1;
            var_184 = -1;
            var_192 = 0;
            var_200 = 3;
            var_208 = -3181508942575245480;
            var_216 = 56;
            pri = fun_2580(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_224 = 0;
            var_232 = 3;
            var_240 = 0;
            var_248 = 100;
            var_256 = -1;
            OP_PUSH2_C -4308339958598493586, -3181508942575245480
            var_264 = 56;
            pri = fun_20F8(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
            var_272 = 1;
            var_280 = 8;
            pri = fun_2240(var_272)
            var_288 = 0;
            pri = fun_2300()
            var_296 = 0;
            var_304 = 3;
            var_312 = 0;
            var_320 = 100;
            var_328 = -1;
            OP_PUSH2_C -4309336116133463527, -3181508942575245480
            var_336 = 56;
            pri = fun_20F8(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
            OP_JUMP switch_78A8_case_default
        }
    }
}
// fun_88C8
fun_88C8() {
    pri = 0;
    return pri;
}
// fun_88E0
fun_88E0() {
    var_8 = 3010;
    var_16 = 8;
    pri = fun_6B28(var_8)
    var_24 = -1180051137964617721;
    pri = VanishFlagSet(var_24)
    var_32 = 3891752725908598821;
    pri = VanishFlagSet(var_32)
    var_40 = -2880323008892522216;
    pri = VanishFlagSet(var_40)
    var_48 = -2880319710357637583;
    pri = VanishFlagSet(var_48)
    var_56 = 3891749427373714188;
    pri = VanishFlagSet(var_56)
    var_64 = 3891750526885342399;
    pri = VanishFlagSet(var_64)
    var_72 = 3891747228350457766;
    pri = VanishFlagSet(var_72)
    var_80 = -2880320809869265794;
    pri = VanishFlagSet(var_80)
    var_88 = -2880318610846009372;
    pri = VanishFlagSet(var_88)
    var_96 = -2880315312311124739;
    pri = VanishFlagSet(var_96)
    var_104 = 3891748327862085977;
    pri = VanishFlagSet(var_104)
    var_112 = 1451426230526205437;
    pri = VanishFlagSet(var_112)
    var_120 = 5853608284009014273;
    pri = VanishFlagSet(var_120)
    var_128 = 1451246788605109846;
    pri = VanishFlagSet(var_128)
    var_136 = 1451425131014577226;
    pri = VanishFlagSet(var_136)
    var_144 = -4275866473915358187;
    pri = VanishFlagSet(var_144)
    var_152 = -5812486224133171736;
    pri = FlagSet(var_152)
    pri = 0;
    return pri;
}
// fun_8BC0
fun_8BC0() {
    OP_PUSH2_C -3181508942575245480, 4782707823477480862
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_8C08
fun_8C08() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6CF8()
    var_16 = 0;
    pri = fun_6D50()
    var_24 = 0;
    pri = fun_6D68()
    var_32 = 0;
    pri = fun_6D98()
    var_40 = 0;
    pri = fun_88C8()
    var_48 = 0;
    pri = fun_88E0()
    var_56 = 0;
    pri = fun_8BC0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8CF8
fun_8CF8() {
    var_8 = 0;
    pri = fun_6D50()
    var_16 = 0;
    pri = fun_88E0()
    pri = 0;
    return pri;
}
// fun_8D40
fun_8D40() {
    var_8 = 0;
    pri = fun_8E00()
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 23272;
    var_72 = 56;
    pri = fun_2488(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 23224;
    var_88 = 8;
    var_96 = 16;
    pri = fun_02B0(var_88, var_80)
    var_104 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_8E00
fun_8E00() {
    var_8 = 3822075576610749444;
    pri = FlagReset(var_8)
    var_16 = 2;
    var_24 = 7281706755392414581;
    pri = WorkSet(var_24, var_16)
    var_32 = 0;
    pri = SetPlayerUniform(var_32)
    pri = 0;
    return pri;
}
