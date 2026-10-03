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
// fun_0320
fun_0320() {
    OP_JUMP lab_0338
// lab_0338
    pri = FadeWait_()
    OP_JZER lab_0370
    pri = 0;
    return pri;
// lab_0370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0338
    pri = 0;
    return pri;
}
// fun_03B0
fun_03B0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03D8
fun_03D8() {
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_0498
fun_0498() {
    pri = arg_0;
    switch (pri) {
// switch_0640
        case default:
        {
// switch_0640_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0640_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0640_case_default
        }
        case 0x1:
        {
// switch_0640_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0640_case_default
        }
        case 0x2:
        {
// switch_0640_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0640_case_default
        }
        case 0x3:
        {
// switch_0640_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0640_case_default
        }
        case 0x4:
        {
// switch_0640_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0640_case_default
        }
        case 0x5:
        {
// switch_0640_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0640_case_default
        }
        case 0x6:
        {
// switch_0640_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0640_case_default
        }
    }
}
// fun_06D8
fun_06D8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0760
fun_0760() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0798
fun_0798() {
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
// fun_0810
fun_0810() {
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
// fun_08D0
fun_08D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1588(var_8)
    OP_JZER lab_09A0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15B8(var_24)
    OP_JNZ lab_09A0
    pri = 0;
    return pri;
// lab_09A0
    OP_JUMP lab_09B0
// lab_09B0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A10
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09B0
    pri = 0;
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B10
    pri = 0;
    return pri;
// lab_0B10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B50
// lab_0B50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1588(var_8)
    OP_JNZ lab_0BD8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BC8
    pri = 0;
    return pri;
// lab_0BD8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C20
    pri = 0;
    return pri;
// lab_0C20
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CC8(var_8)
    pri = 0;
    return pri;
// lab_0C80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B50
    pri = 0;
    return pri;
// lab_0BC8
    OP_JUMP lab_0C20
}
// fun_0CC8
fun_0CC8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D50
    pri = 0;
    return pri;
// lab_0D50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1588(var_8)
    OP_JZER lab_0E80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DA8
    OP_ZERO_P_S 64
// lab_0E80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB8
    OP_CONST_S 64, 1
// lab_0EB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF0
    OP_CONST_S 72, 1
// lab_0EF0
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
// lab_0DA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DD0
    OP_ZERO_P_S 72
// lab_0DD0
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
    OP_JUMP lab_0F90
// lab_0F90
    pri = 0;
    return pri;
}
// fun_0FA0
fun_0FA0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE0
fun_0FE0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1020
fun_1020() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
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
// fun_10D8
fun_10D8() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1498
        case default:
        {
// switch_1498_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1498_case_0x0
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
            pri = fun_1078(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1498_case_default
        }
        case 0x1:
        {
// switch_1498_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1078(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1498_case_default
        }
        case 0x2:
        {
// switch_1498_case_0x2
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
            pri = fun_1078(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1498_case_default
        }
        case 0x3:
        {
// switch_1498_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1078(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1498_case_default
        }
        case 0x4:
        {
// switch_1498_case_0x4
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
            pri = fun_1078(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1498_case_default
        }
        case 0x5:
        {
// switch_1498_case_0x5
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
            pri = fun_1078(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1498_case_default
        }
        case 0x6:
        {
// switch_1498_case_0x6
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
            pri = fun_1078(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1498_case_default
        }
        case 0x7:
        {
// switch_1498_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1078(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1498_case_default
        }
    }
}
// fun_1548
fun_1548() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1588
fun_1588() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_15B8
fun_15B8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_15E8
fun_15E8() {
    OP_JUMP lab_1600
// lab_1600
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1690
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1680
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AC8(var_8)
    pri = 0;
    return pri;
// lab_1690
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1720
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1710
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AC8(var_8)
    pri = 0;
    return pri;
// lab_1720
    pri = 0;
    return pri;
// lab_1710
    OP_JUMP lab_1730
// lab_1730
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1600
    pri = 0;
    return pri;
// lab_1680
    OP_JUMP lab_1730
}
// fun_1770
fun_1770() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_15E8(var_40)
    pri = 0;
    return pri;
}
// fun_17F8
fun_17F8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1830
fun_1830() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1858
fun_1858() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
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
// switch_1EA8
        case default:
        {
// switch_1EA8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1EF0
// lab_1EF0
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
            OP_JNZ lab_1F98
            var_88 = 0;
            pri = fun_2150()
// lab_1F98
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1EA8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A90
                case default:
                {
// switch_1A90_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B08
// lab_1B08
                    OP_JUMP lab_1EF0
                }
                case 0x0:
                {
// switch_1A90_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B08
                }
                case 0x1:
                {
// switch_1A90_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B08
                }
                case 0x2:
                {
// switch_1A90_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B08
                }
                case 0x3:
                {
// switch_1A90_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B08
                }
                case 0x4:
                {
// switch_1A90_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B08
                }
                case 0x5:
                {
// switch_1A90_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B08
                }
            }
        }
        case 0x65:
        {
// switch_1EA8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1C48
                case default:
                {
// switch_1C48_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CC0
// lab_1CC0
                    OP_JUMP lab_1EF0
                }
                case 0x0:
                {
// switch_1C48_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1CC0
                }
                case 0x1:
                {
// switch_1C48_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1CC0
                }
                case 0x2:
                {
// switch_1C48_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1CC0
                }
                case 0x3:
                {
// switch_1C48_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CC0
                }
                case 0x4:
                {
// switch_1C48_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1CC0
                }
                case 0x5:
                {
// switch_1C48_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1CC0
                }
            }
        }
        case 0x66:
        {
// switch_1EA8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E00
                case default:
                {
// switch_1E00_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E78
// lab_1E78
                    OP_JUMP lab_1EF0
                }
                case 0x0:
                {
// switch_1E00_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E78
                }
                case 0x1:
                {
// switch_1E00_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E78
                }
                case 0x2:
                {
// switch_1E00_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E78
                }
                case 0x3:
                {
// switch_1E00_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E78
                }
                case 0x4:
                {
// switch_1E00_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E78
                }
                case 0x5:
                {
// switch_1E00_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E78
                }
            }
        }
    }
}
// fun_1FB0
fun_1FB0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A90(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2058
    pri = 1;
    return pri;
// lab_2058
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_20A0
fun_20A0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_20F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1FB0(var_8)
    arg_2 = pri;
// lab_20F0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1890(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    OP_JUMP lab_2168
// lab_2168
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21A8
    pri = 0;
    return pri;
// lab_21A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2168
    pri = 0;
    return pri;
}
// fun_21E8
fun_21E8() {
    var_8 = 0;
    pri = fun_2150()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2298
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2298
    pri = 0;
    return pri;
}
// fun_22A8
fun_22A8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_22D8
fun_22D8() {
    OP_JUMP lab_22F0
// lab_22F0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2328
    pri = 0;
    return pri;
// lab_2328
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22F0
    pri = 0;
    return pri;
}
// fun_2368
fun_2368() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_23D0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_24A8()
    pri = 0;
    return pri;
}
// fun_23D0
fun_23D0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2428
fun_2428() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_23D0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_24A8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_24A8
fun_24A8() {
    OP_JUMP lab_24C0
// lab_24C0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2518
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2528
// lab_2518
    pri = 0;
    return pri;
// lab_2528
    OP_JUMP lab_24C0
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    pri = arg_5;
    OP_JNZ lab_2580
    var_8 = 0;
    pri = fun_0FA0()
// lab_2580
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_25D0
    OP_CONST_S -8, -1
// lab_25D0
    pri = arg_1;
    switch (pri) {
// switch_4088
        case default:
        {
// switch_4088_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4530
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A90(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4530
            pri = 1;
            OP_JUMP lab_4538
// lab_4530
            pri = 0;
// lab_4538
            OP_JZER lab_4588
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_47E0
// lab_4588
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_45F0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_45F0
            pri = 1;
            OP_JUMP lab_45F8
// lab_45F0
            pri = 0;
// lab_45F8
            OP_JZER lab_4780
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A90(var_24, var_16)
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
            OP_JUMP lab_47E0
// lab_4780
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
// lab_47E0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4850
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4850
            var_8 = 0;
            pri = fun_0FE0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4088_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x1:
        {
// switch_4088_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x2:
        {
// switch_4088_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x3:
        {
// switch_4088_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x4:
        {
// switch_4088_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x5:
        {
// switch_4088_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A50(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CC8(var_40)
            OP_JUMP switch_4088_case_default
        }
        case 0x6:
        {
// switch_4088_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x7:
        {
// switch_4088_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x8:
        {
// switch_4088_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x9:
        {
// switch_4088_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0xa:
        {
// switch_4088_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0xb:
        {
// switch_4088_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0xc:
        {
// switch_4088_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0xd:
        {
// switch_4088_case_0xd
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0xe:
        {
// switch_4088_case_0xe
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0xf:
        {
// switch_4088_case_0xf
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x10:
        {
// switch_4088_case_0x10
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x11:
        {
// switch_4088_case_0x11
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x12:
        {
// switch_4088_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x13:
        {
// switch_4088_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x14:
        {
// switch_4088_case_0x14
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x15:
        {
// switch_4088_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x16:
        {
// switch_4088_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x17:
        {
// switch_4088_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x18:
        {
// switch_4088_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x19:
        {
// switch_4088_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x1a:
        {
// switch_4088_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x1b:
        {
// switch_4088_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x1c:
        {
// switch_4088_case_0x1c
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x1d:
        {
// switch_4088_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x1e:
        {
// switch_4088_case_0x1e
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x1f:
        {
// switch_4088_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x20:
        {
// switch_4088_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x21:
        {
// switch_4088_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x22:
        {
// switch_4088_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x23:
        {
// switch_4088_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x24:
        {
// switch_4088_case_0x24
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x25:
        {
// switch_4088_case_0x25
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x26:
        {
// switch_4088_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x27:
        {
// switch_4088_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x28:
        {
// switch_4088_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x29:
        {
// switch_4088_case_0x29
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x2a:
        {
// switch_4088_case_0x2a
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x2b:
        {
// switch_4088_case_0x2b
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x2c:
        {
// switch_4088_case_0x2c
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x2d:
        {
// switch_4088_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x2e:
        {
// switch_4088_case_0x2e
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x2f:
        {
// switch_4088_case_0x2f
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x30:
        {
// switch_4088_case_0x30
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x31:
        {
// switch_4088_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x32:
        {
// switch_4088_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x33:
        {
// switch_4088_case_0x33
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x34:
        {
// switch_4088_case_0x34
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x35:
        {
// switch_4088_case_0x35
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x36:
        {
// switch_4088_case_0x36
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x37:
        {
// switch_4088_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x38:
        {
// switch_4088_case_0x38
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
            pri = fun_0D00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4088_case_default
        }
        case 0x39:
        {
// switch_4088_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x3a:
        {
// switch_4088_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x3b:
        {
// switch_4088_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x3c:
        {
// switch_4088_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x3d:
        {
// switch_4088_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
        case 0x3e:
        {
// switch_4088_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A50(var_24, var_16, var_8)
            OP_JUMP switch_4088_case_default
        }
    }
}
// fun_4880
fun_4880() {
    pri = arg_4;
    OP_JNZ lab_48B8
    var_8 = 0;
    pri = fun_0FA0()
// lab_48B8
    pri = arg_1;
    switch (pri) {
// switch_5C90
        case default:
        {
// switch_5C90_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1588(var_264)
            OP_JZER lab_6258
            pri = arg_3;
            switch (pri) {
// switch_6200
                case default:
                {
// switch_6200_case_default
                    OP_JUMP lab_6510
// lab_6510
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6580
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6580
                    var_8 = 0;
                    pri = fun_0FE0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6200_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6200_case_default
                }
                case 0x2:
                {
// switch_6200_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6200_case_default
                }
                case 0x3:
                {
// switch_6200_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6200_case_default
                }
            }
// lab_6258
            pri = arg_1;
            OP_JZER lab_62A8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_62A8
            pri = 0;
            OP_JUMP lab_62B0
// lab_62A8
            pri = 1;
// lab_62B0
            OP_JZER lab_6318
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A90(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6318
            pri = 1;
            OP_JUMP lab_6320
// lab_6318
            pri = 0;
// lab_6320
            OP_JZER lab_6370
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6510
// lab_6370
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_63D8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6510
// lab_63D8
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A90(var_24, var_16)
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
// switch_5C90_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x1:
        {
// switch_5C90_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x2:
        {
// switch_5C90_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x3:
        {
// switch_5C90_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x4:
        {
// switch_5C90_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x5:
        {
// switch_5C90_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A50(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CC8(var_40)
            OP_JUMP switch_5C90_case_default
        }
        case 0x6:
        {
// switch_5C90_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x7:
        {
// switch_5C90_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x8:
        {
// switch_5C90_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x9:
        {
// switch_5C90_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0xa:
        {
// switch_5C90_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0xb:
        {
// switch_5C90_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0xc:
        {
// switch_5C90_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0xd:
        {
// switch_5C90_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0xe:
        {
// switch_5C90_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0xf:
        {
// switch_5C90_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x10:
        {
// switch_5C90_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x11:
        {
// switch_5C90_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x12:
        {
// switch_5C90_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x13:
        {
// switch_5C90_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x14:
        {
// switch_5C90_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x15:
        {
// switch_5C90_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x16:
        {
// switch_5C90_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x17:
        {
// switch_5C90_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x18:
        {
// switch_5C90_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x19:
        {
// switch_5C90_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x1a:
        {
// switch_5C90_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x1b:
        {
// switch_5C90_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x1c:
        {
// switch_5C90_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x1d:
        {
// switch_5C90_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x1e:
        {
// switch_5C90_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x1f:
        {
// switch_5C90_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x20:
        {
// switch_5C90_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x21:
        {
// switch_5C90_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x22:
        {
// switch_5C90_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x23:
        {
// switch_5C90_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x24:
        {
// switch_5C90_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x25:
        {
// switch_5C90_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x26:
        {
// switch_5C90_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x27:
        {
// switch_5C90_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x28:
        {
// switch_5C90_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x29:
        {
// switch_5C90_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x2a:
        {
// switch_5C90_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x2b:
        {
// switch_5C90_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x2c:
        {
// switch_5C90_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x2d:
        {
// switch_5C90_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x2e:
        {
// switch_5C90_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x2f:
        {
// switch_5C90_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x30:
        {
// switch_5C90_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x31:
        {
// switch_5C90_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x32:
        {
// switch_5C90_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x33:
        {
// switch_5C90_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x34:
        {
// switch_5C90_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x35:
        {
// switch_5C90_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x36:
        {
// switch_5C90_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x37:
        {
// switch_5C90_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x38:
        {
// switch_5C90_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x39:
        {
// switch_5C90_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x3a:
        {
// switch_5C90_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x3b:
        {
// switch_5C90_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x3c:
        {
// switch_5C90_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x3d:
        {
// switch_5C90_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
        case 0x3e:
        {
// switch_5C90_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A50(var_24, var_16, var_8)
            OP_JUMP switch_5C90_case_default
        }
    }
}
// fun_65B0
fun_65B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_67C0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22256;
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
    var_424 = 22312;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22328;
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
    OP_JZER lab_67A8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_67A8
    pri = 0;
    return pri;
}
// fun_67C0
fun_67C0() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A50(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6808
fun_6808() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6890
// lab_6890
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6A10
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6A00
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6950
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6950
    pri = 0;
    OP_JUMP lab_6958
// lab_6A10
    pri = 0;
    return pri;
// lab_6A00
    OP_JUMP lab_6888
// lab_6888
    OP_INC_P_S -936
// lab_6950
    pri = 1;
// lab_6958
    OP_JZER lab_69D0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_69C8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_69D0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_69C8
}
// fun_6A30
fun_6A30() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6AC8
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0320()
    var_56 = 0;
    pri = fun_1830()
// lab_6AC8
    pri = arg_4;
    OP_JZER lab_6B00
    var_8 = 1;
    var_16 = 8;
    pri = fun_1858(var_8)
// lab_6B00
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6B58
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6B58
    pri = 0;
    OP_JUMP lab_6B60
// lab_6B58
    pri = 1;
// lab_6B60
    OP_JZER lab_6C28
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6C28
    var_16 = 0;
    pri = fun_03B0()
    OP_JZER lab_6C00
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1770(var_32, var_24)
    OP_JUMP lab_6C28
// lab_6C28
    pri = arg_2;
    OP_JZER lab_6D00
    var_8 = 0;
    pri = fun_03B0()
    OP_JZER lab_6CD0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1548(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0760(var_40)
    OP_JUMP lab_6D00
// lab_6D00
    pri = arg_3;
    OP_JZER lab_6D38
    var_8 = 1;
    var_16 = 8;
    pri = fun_17F8(var_8)
// lab_6D38
    pri = 0;
    return pri;
// lab_6CD0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1548(var_16, var_8)
// lab_6C00
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1770(var_16, var_8)
}
// fun_6D48
fun_6D48() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6808(var_24)
    pri = 0;
    return pri;
}
// fun_6DB0
fun_6DB0() {
    pri = g_mode;
    switch (pri) {
// switch_6E70
        case default:
        {
// switch_6E70_case_default
            pri = CommandNOP()
            OP_JUMP lab_6EB8
// lab_6EB8
            pri = 0;
            return pri;
        }
        case 0x84148f21fd273337:
        {
// switch_6E70_case_0x84148f21fd273337
            var_8 = 0;
            pri = fun_83C8()
            OP_JUMP lab_6EB8
        }
        case 0x0:
        {
// switch_6E70_case_0x0
            var_8 = 0;
            pri = fun_6EC8()
            OP_JUMP lab_6EB8
        }
        case 0x669a151e731b77c3:
        {
// switch_6E70_case_0x669a151e731b77c3
            var_8 = 0;
            pri = fun_84D0()
            OP_JUMP lab_6EB8
        }
    }
}
// fun_6EC8
fun_6EC8() {
    pri = 0;
    return pri;
}
// fun_6EE0
fun_6EE0() {
    pri = 0;
    return pri;
}
// fun_6EF8
fun_6EF8() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6A30(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6F50
fun_6F50() {
    pri = 0;
    return pri;
}
// fun_6F68
fun_6F68() {
    pri = 0;
    return pri;
}
// fun_6F80
fun_6F80() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 1;
    var_32 = 1;
    var_40 = -1;
    OP_PUSH2_C -1772686665497876459, -3470649453704576271
    var_48 = 40;
    pri = fun_1020(var_40, var_32, var_24, var_16, var_8)
    var_56 = 1;
    var_64 = 1;
    var_72 = -1;
    OP_PUSH2_C -3470649453704576271, -1772686665497876459
    var_80 = 40;
    pri = fun_1020(var_72, var_64, var_56, var_48, var_40)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    OP_PUSH2_C 8802641224559852288, 702631533266588014
    var_120 = 48;
    pri = fun_08D0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH2_C 7544367218349509092, 702631533266588014
    var_168 = 56;
    pri = fun_20A0(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 702631533266588014;
    var_184 = 8;
    pri = fun_0928(var_176)
    var_192 = 1;
    var_200 = 8;
    pri = fun_21E8(var_192)
    var_208 = 0;
    pri = fun_22A8()
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 0;
    OP_PUSH5_C 4673047370935776051, -4567791139301453988, 4675487669648537682, 4673057346255019049, -4567810182842847068
    var_240 = 4675489981371735081;
    var_248 = 1;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = 1;
    var_272 = 180;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 26900;
    pri = float(var_288)
    var_296 = pri;
    var_304 = 38108;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 8802641224559852288;
    var_328 = 48;
    pri = fun_0708(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 1;
    var_344 = 1;
    var_352 = 180;
    pri = float(var_352)
    var_360 = pri;
    var_368 = 26900;
    pri = float(var_368)
    var_376 = pri;
    var_384 = 38020;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 702631533266588014;
    var_408 = 48;
    pri = fun_0708(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = -1;
    var_424 = 702631533266588014;
    var_432 = 16;
    pri = fun_1548(var_424, var_416)
    var_440 = 23448;
    pri = SoundPostEvent(var_440)
    var_448 = 15;
    var_456 = 8;
    pri = fun_0090(var_448)
    var_464 = 0;
    var_472 = 1;
    var_480 = -3470649453704576271;
    var_488 = 24;
    pri = fun_65B0(var_480, var_472, var_464)
    var_496 = 1;
    var_504 = 8;
    pri = fun_0090(var_496)
    var_512 = -3470649453704576271;
    var_520 = 8;
    pri = fun_0AC8(var_512)
    var_528 = 15;
    var_536 = 8;
    pri = fun_0090(var_528)
    var_544 = 0;
    var_552 = 3;
    var_560 = 0;
    var_568 = 100;
    var_576 = -1;
    OP_PUSH2_C -2919212698926961463, -3470649453704576271
    var_584 = 56;
    pri = fun_20A0(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_21E8(var_592)
    var_608 = 0;
    pri = fun_22A8()
    var_616 = 0;
    var_624 = 3;
    var_632 = 0;
    var_640 = 100;
    var_648 = -1;
    OP_PUSH2_C 4656039948150080817, -1772686665497876459
    var_656 = 56;
    pri = fun_20A0(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 1;
    var_672 = 8;
    pri = fun_21E8(var_664)
    var_680 = 0;
    pri = fun_22A8()
    var_688 = 1;
    var_696 = 1;
    var_704 = -1;
    var_712 = 1;
    var_720 = -1772686665497876459;
    var_728 = 40;
    pri = fun_10D8(var_720, var_712, var_704, var_696, var_688)
    var_736 = 15;
    var_744 = 8;
    pri = fun_0090(var_736)
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    var_776 = 0;
    OP_PUSH2_C 8802641224559852288, -1772686665497876459
    var_784 = 48;
    pri = fun_08D0(var_776, var_768, var_760, var_752, var_744, var_736)
    var_792 = 10;
    var_800 = 8;
    pri = fun_0090(var_792)
    var_808 = 0;
    var_816 = 0;
    var_824 = -3470649453704576271;
    var_832 = 24;
    pri = fun_65B0(var_824, var_816, var_808)
    var_840 = 1;
    var_848 = 8;
    pri = fun_0090(var_840)
    var_856 = -3470649453704576271;
    var_864 = 8;
    pri = fun_0AC8(var_856)
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    var_896 = 0;
    OP_PUSH2_C 8802641224559852288, -3470649453704576271
    var_904 = 48;
    pri = fun_08D0(var_896, var_888, var_880, var_872, var_864, var_856)
    var_912 = -1;
    var_920 = -1772686665497876459;
    var_928 = 16;
    pri = fun_1548(var_920, var_912)
    var_936 = -1;
    var_944 = -3470649453704576271;
    var_952 = 16;
    pri = fun_1548(var_944, var_936)
    var_960 = 0;
    var_968 = 4631952216750555136;
    var_976 = 3;
    OP_PUSH5_C 4673064660756122829, -4567699791875418358, 4675469740737057260, 4673122745206639165, -4567810534686567956
    var_984 = 4675483198759381238;
    var_992 = 50;
    pri = EvCameraMove(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 5;
    var_1008 = 8;
    pri = fun_0090(var_1000)
    var_1016 = -1772686665497876459;
    var_1024 = 8;
    pri = fun_0928(var_1016)
    var_1032 = -3470649453704576271;
    var_1040 = 8;
    pri = fun_0928(var_1032)
    var_1048 = 1;
    var_1056 = 0;
    OP_PUSH2_C 4641240890982006784, -1772686665497876459
    var_1064 = 26752;
    pri = float(var_1064)
    var_1072 = pri;
    var_1080 = 38108;
    pri = float(var_1080)
    var_1088 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1096 = 64;
    pri = fun_0810(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1104 = 1;
    var_1112 = 0;
    OP_PUSH2_C 4641240890982006784, -1772686665497876459
    var_1120 = 26776;
    pri = float(var_1120)
    var_1128 = pri;
    var_1136 = 38020;
    pri = float(var_1136)
    var_1144 = pri;
    OP_PUSH2_C 4607182418800017408, 702631533266588014
    var_1152 = 64;
    pri = fun_0810(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1160 = 0;
    pri = fun_22D8()
    var_1168 = 8802641224559852288;
    var_1176 = 8;
    pri = fun_0928(var_1168)
    var_1184 = 702631533266588014;
    var_1192 = 8;
    pri = fun_0928(var_1184)
    var_1200 = 0;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 100;
    var_1232 = -1;
    OP_PUSH2_C 4656036649615196184, -1772686665497876459
    var_1240 = 56;
    pri = fun_20A0(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1248 = 1;
    var_1256 = 8;
    pri = fun_21E8(var_1248)
    var_1264 = 0;
    pri = fun_22A8()
    var_1272 = 1;
    var_1280 = 0;
    var_1288 = 30;
    pri = float(var_1288)
    var_1296 = pri;
    var_1304 = 0;
    pri = float(var_1304)
    var_1312 = pri;
    var_1320 = 1;
    var_1328 = 26541;
    pri = float(var_1328)
    var_1336 = pri;
    var_1344 = 38125;
    pri = float(var_1344)
    var_1352 = pri;
    OP_PUSH2_C 4607182418800017408, -1772686665497876459
    var_1360 = 72;
    pri = fun_0798(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1368 = -1772686665497876459;
    var_1376 = 8;
    pri = fun_0928(var_1368)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1384 = 16;
    pri = fun_2368(var_1376, var_1368)
    var_1392 = 3;
    var_1400 = 1;
    OP_PUSH2_C 4640229269915708686, 4612415601567021924
    var_1408 = 32;
    pri = fun_23D0(var_1400, var_1392, var_1384, var_1376)
    var_1416 = 0;
    var_1424 = 4628912287002080051;
    var_1432 = 0;
    OP_PUSH5_C 4673013195365605704, -4567819418740520387, 4675469336666534052, 4673071279816122040, -4567930161551669985
    var_1440 = 4675482794688858030;
    var_1448 = 1;
    pri = EvCameraMove(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1456 = 0;
    pri = fun_22D8()
    var_1464 = 1;
    var_1472 = 1;
    var_1480 = -1;
    var_1488 = -1;
    var_1496 = 0;
    var_1504 = 8;
    var_1512 = -1772686665497876459;
    var_1520 = 56;
    pri = fun_2548(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 0;
    OP_PUSH2_C -1772686665497876459, 8802641224559852288
    var_1560 = 48;
    pri = fun_08D0(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1568 = 0;
    var_1576 = 0;
    var_1584 = 0;
    var_1592 = 0;
    OP_PUSH2_C -1772686665497876459, 702631533266588014
    var_1600 = 48;
    pri = fun_08D0(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1608 = 8802641224559852288;
    var_1616 = 8;
    pri = fun_0928(var_1608)
    var_1624 = 702631533266588014;
    var_1632 = 8;
    pri = fun_0928(var_1624)
    var_1640 = 0;
    var_1648 = 3;
    var_1656 = 0;
    var_1664 = 100;
    var_1672 = -1;
    OP_PUSH2_C 4656037749126824395, -1772686665497876459
    var_1680 = 56;
    pri = fun_20A0(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_21E8(var_1688)
    var_1704 = 0;
    pri = fun_22A8()
    var_1712 = 1;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 8;
    var_1744 = -1772686665497876459;
    var_1752 = 40;
    pri = fun_4880(var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1760 = -1772686665497876459;
    var_1768 = 8;
    pri = fun_0AC8(var_1760)
    var_1776 = 1;
    var_1784 = 0;
    var_1792 = 30;
    pri = float(var_1792)
    var_1800 = pri;
    var_1808 = 0;
    pri = float(var_1808)
    var_1816 = pri;
    var_1824 = 0;
    var_1832 = 26300;
    pri = float(var_1832)
    var_1840 = pri;
    var_1848 = 38125;
    pri = float(var_1848)
    var_1856 = pri;
    OP_PUSH2_C 4607182418800017408, -1772686665497876459
    var_1864 = 72;
    pri = fun_0798(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1872 = 15;
    var_1880 = 8;
    pri = fun_0090(var_1872)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1888 = 3;
    var_1896 = 1;
    var_1904 = 32;
    pri = fun_2428(var_1896, var_1888, var_1880, var_1872)
    var_1912 = 0;
    var_1920 = 4631952216750555136;
    var_1928 = 3;
    OP_PUSH5_C 4673064660756122829, -4567699791875418358, 4675469740737057260, 4673122745206639165, -4567810534686567956
    var_1936 = 4675483198759381238;
    var_1944 = 1;
    pri = EvCameraMove(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1952 = 30;
    var_1960 = 8;
    pri = fun_0090(var_1952)
    var_1968 = 1;
    var_1976 = 0;
    var_1984 = 23608;
    var_1992 = 8;
    var_2000 = 32;
    pri = fun_02B0(var_1992, var_1984, var_1976, var_1968)
    var_2008 = 0;
    pri = fun_0320()
    var_2016 = -1772686665497876459;
    var_2024 = 8;
    pri = fun_0928(var_2016)
    var_2032 = 3;
    var_2040 = 1;
    pri = EvCameraEnd(var_2040, var_2032)
    pri = 0;
    return pri;
}
// fun_81A0
fun_81A0() {
    pri = 0;
    return pri;
}
// fun_81B8
fun_81B8() {
    var_8 = 702631533266588014;
    var_16 = 8;
    pri = fun_06D8(var_8)
    var_24 = -3470649453704576271;
    var_32 = 8;
    pri = fun_06D8(var_24)
    var_40 = -1772686665497876459;
    var_48 = 8;
    pri = fun_06D8(var_40)
    var_56 = 271;
    var_64 = 8;
    pri = fun_6D48(var_56)
    var_72 = 5804806806352038632;
    pri = VanishFlagReset(var_72)
    var_80 = -7688158225218808343;
    pri = VanishFlagReset(var_80)
    var_88 = -4015134941316681380;
    pri = VanishFlagReset(var_88)
    var_96 = 4;
    var_104 = 8;
    pri = fun_0498(var_96)
    pri = 0;
    return pri;
}
// fun_8300
fun_8300() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 0;
    var_48 = 742;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 1785;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C -3946011152843352966, 1320682236707923903, -8929355884536581756
    var_80 = 80;
    pri = fun_03D8(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_83C8
fun_83C8() {
    var_8 = 0;
    pri = fun_6EE0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_6EF8()
    var_24 = 0;
    pri = fun_6F50()
    var_32 = 0;
    pri = fun_6F68()
    var_40 = 0;
    pri = fun_6F80()
    var_48 = 0;
    pri = fun_81A0()
    var_56 = 0;
    pri = fun_81B8()
    var_64 = 0;
    pri = fun_8300()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_84D0
fun_84D0() {
    var_8 = 0;
    pri = fun_6F50()
    var_16 = 0;
    pri = fun_81B8()
    pri = 0;
    return pri;
}
