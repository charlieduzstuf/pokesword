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
    pri = arg_0;
    switch (pri) {
// switch_05E0
        case default:
        {
// switch_05E0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_05E0_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05E0_case_default
        }
        case 0x1:
        {
// switch_05E0_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05E0_case_default
        }
        case 0x2:
        {
// switch_05E0_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05E0_case_default
        }
        case 0x3:
        {
// switch_05E0_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05E0_case_default
        }
        case 0x4:
        {
// switch_05E0_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05E0_case_default
        }
        case 0x5:
        {
// switch_05E0_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05E0_case_default
        }
        case 0x6:
        {
// switch_05E0_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05E0_case_default
        }
    }
}
// fun_0678
fun_0678() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0708
fun_0708() {
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
// fun_0780
fun_0780() {
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
// fun_0840
fun_0840() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1358(var_8)
    OP_JZER lab_0960
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1388(var_24)
    OP_JNZ lab_0960
    pri = 0;
    return pri;
// lab_0960
    OP_JUMP lab_0970
// lab_0970
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09D0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0970
    pri = 0;
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A48
fun_0A48() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B08
    pri = 0;
    return pri;
// lab_0B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B48
// lab_0B48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1358(var_8)
    OP_JNZ lab_0BD0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BC0
    pri = 0;
    return pri;
// lab_0BD0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C18
    pri = 0;
    return pri;
// lab_0C18
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CC0(var_8)
    pri = 0;
    return pri;
// lab_0C78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B48
    pri = 0;
    return pri;
// lab_0BC0
    OP_JUMP lab_0C18
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D78
fun_0D78() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DD0
fun_0DD0() {
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
// fun_0E30
fun_0E30() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_11F0
        case default:
        {
// switch_11F0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_11F0_case_0x0
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
            pri = fun_0DD0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_11F0_case_default
        }
        case 0x1:
        {
// switch_11F0_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0DD0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_11F0_case_default
        }
        case 0x2:
        {
// switch_11F0_case_0x2
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
            pri = fun_0DD0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_11F0_case_default
        }
        case 0x3:
        {
// switch_11F0_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0DD0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_11F0_case_default
        }
        case 0x4:
        {
// switch_11F0_case_0x4
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
            pri = fun_0DD0(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_11F0_case_default
        }
        case 0x5:
        {
// switch_11F0_case_0x5
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
            pri = fun_0DD0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_11F0_case_default
        }
        case 0x6:
        {
// switch_11F0_case_0x6
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
            pri = fun_0DD0(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_11F0_case_default
        }
        case 0x7:
        {
// switch_11F0_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0DD0(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_11F0_case_default
        }
    }
}
// fun_12A0
fun_12A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1320
fun_1320() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1358
fun_1358() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_13B8
fun_13B8() {
    OP_JUMP lab_13D0
// lab_13D0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1460
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1450
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AC0(var_8)
    pri = 0;
    return pri;
// lab_1460
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14F0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_14E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AC0(var_8)
    pri = 0;
    return pri;
// lab_14F0
    pri = 0;
    return pri;
// lab_14E0
    OP_JUMP lab_1500
// lab_1500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13D0
    pri = 0;
    return pri;
// lab_1450
    OP_JUMP lab_1500
}
// fun_1540
fun_1540() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AC0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_13B8(var_40)
    pri = 0;
    return pri;
}
// fun_15C8
fun_15C8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1600
fun_1600() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1628
fun_1628() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1658
fun_1658() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1690
fun_1690() {
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
// switch_1CA8
        case default:
        {
// switch_1CA8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1CF0
// lab_1CF0
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
            OP_JNZ lab_1D98
            var_88 = 0;
            pri = fun_1F50()
// lab_1D98
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1CA8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1890
                case default:
                {
// switch_1890_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1908
// lab_1908
                    OP_JUMP lab_1CF0
                }
                case 0x0:
                {
// switch_1890_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1908
                }
                case 0x1:
                {
// switch_1890_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1908
                }
                case 0x2:
                {
// switch_1890_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1908
                }
                case 0x3:
                {
// switch_1890_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1908
                }
                case 0x4:
                {
// switch_1890_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1908
                }
                case 0x5:
                {
// switch_1890_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1908
                }
            }
        }
        case 0x65:
        {
// switch_1CA8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1A48
                case default:
                {
// switch_1A48_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1AC0
// lab_1AC0
                    OP_JUMP lab_1CF0
                }
                case 0x0:
                {
// switch_1A48_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1AC0
                }
                case 0x1:
                {
// switch_1A48_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1AC0
                }
                case 0x2:
                {
// switch_1A48_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1AC0
                }
                case 0x3:
                {
// switch_1A48_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1AC0
                }
                case 0x4:
                {
// switch_1A48_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1AC0
                }
                case 0x5:
                {
// switch_1A48_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1AC0
                }
            }
        }
        case 0x66:
        {
// switch_1CA8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1C00
                case default:
                {
// switch_1C00_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C78
// lab_1C78
                    OP_JUMP lab_1CF0
                }
                case 0x0:
                {
// switch_1C00_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C78
                }
                case 0x1:
                {
// switch_1C00_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C78
                }
                case 0x2:
                {
// switch_1C00_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C78
                }
                case 0x3:
                {
// switch_1C00_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C78
                }
                case 0x4:
                {
// switch_1C00_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C78
                }
                case 0x5:
                {
// switch_1C00_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C78
                }
            }
        }
    }
}
// fun_1DB0
fun_1DB0() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A88(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E58
    pri = 1;
    return pri;
// lab_1E58
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1EA0
fun_1EA0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1DB0(var_8)
    arg_2 = pri;
// lab_1EF0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1690(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F50
fun_1F50() {
    OP_JUMP lab_1F68
// lab_1F68
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1FA8
    pri = 0;
    return pri;
// lab_1FA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F68
    pri = 0;
    return pri;
}
// fun_1FE8
fun_1FE8() {
    var_8 = 0;
    pri = fun_1F50()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2098
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_2098
    pri = 0;
    return pri;
}
// fun_20A8
fun_20A8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_20D8
fun_20D8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2108
// lab_2108
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2148
    OP_JUMP lab_2178
// lab_2148
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2108
// lab_2178
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21C0
fun_21C0() {
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
// fun_2230
fun_2230() {
    OP_JUMP lab_2248
// lab_2248
    pri = EvCameraMoveWait_()
    OP_JZER lab_2280
    pri = 0;
    return pri;
// lab_2280
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2248
    pri = 0;
    return pri;
}
// fun_22C0
fun_22C0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2328(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2400()
    pri = 0;
    return pri;
}
// fun_2328
fun_2328() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2380
fun_2380() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2328(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2400()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2400
fun_2400() {
    OP_JUMP lab_2418
// lab_2418
    pri = IsEasingRunningDof_()
    OP_JZER lab_2470
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2480
// lab_2470
    pri = 0;
    return pri;
// lab_2480
    OP_JUMP lab_2418
    pri = 0;
    return pri;
}
// fun_24A0
fun_24A0() {
    pri = arg_4;
    OP_JNZ lab_24D8
    var_8 = 0;
    pri = fun_0CF8()
// lab_24D8
    pri = arg_1;
    switch (pri) {
// switch_38B0
        case default:
        {
// switch_38B0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1358(var_264)
            OP_JZER lab_3E78
            pri = arg_3;
            switch (pri) {
// switch_3E20
                case default:
                {
// switch_3E20_case_default
                    OP_JUMP lab_4130
// lab_4130
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_41A0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_41A0
                    var_8 = 0;
                    pri = fun_0D38()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3E20_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_3E20_case_default
                }
                case 0x2:
                {
// switch_3E20_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_3E20_case_default
                }
                case 0x3:
                {
// switch_3E20_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_3E20_case_default
                }
            }
// lab_3E78
            pri = arg_1;
            OP_JZER lab_3EC8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3EC8
            pri = 0;
            OP_JUMP lab_3ED0
// lab_3EC8
            pri = 1;
// lab_3ED0
            OP_JZER lab_3F38
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A88(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3F38
            pri = 1;
            OP_JUMP lab_3F40
// lab_3F38
            pri = 0;
// lab_3F40
            OP_JZER lab_3F90
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_4130
// lab_3F90
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3FF8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_4130
// lab_3FF8
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A88(var_24, var_16)
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
            var_176 = 1688;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1704;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_38B0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x1:
        {
// switch_38B0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x2:
        {
// switch_38B0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x3:
        {
// switch_38B0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x4:
        {
// switch_38B0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x5:
        {
// switch_38B0_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A48(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CC0(var_40)
            OP_JUMP switch_38B0_case_default
        }
        case 0x6:
        {
// switch_38B0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x7:
        {
// switch_38B0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x8:
        {
// switch_38B0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x9:
        {
// switch_38B0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0xa:
        {
// switch_38B0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0xb:
        {
// switch_38B0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0xc:
        {
// switch_38B0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0xd:
        {
// switch_38B0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0xe:
        {
// switch_38B0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0xf:
        {
// switch_38B0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x10:
        {
// switch_38B0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x11:
        {
// switch_38B0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x12:
        {
// switch_38B0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x13:
        {
// switch_38B0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x14:
        {
// switch_38B0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x15:
        {
// switch_38B0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x16:
        {
// switch_38B0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x17:
        {
// switch_38B0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x18:
        {
// switch_38B0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x19:
        {
// switch_38B0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x1a:
        {
// switch_38B0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x1b:
        {
// switch_38B0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x1c:
        {
// switch_38B0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x1d:
        {
// switch_38B0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x1e:
        {
// switch_38B0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x1f:
        {
// switch_38B0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x20:
        {
// switch_38B0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x21:
        {
// switch_38B0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x22:
        {
// switch_38B0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x23:
        {
// switch_38B0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x24:
        {
// switch_38B0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x25:
        {
// switch_38B0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x26:
        {
// switch_38B0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x27:
        {
// switch_38B0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x28:
        {
// switch_38B0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x29:
        {
// switch_38B0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x2a:
        {
// switch_38B0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x2b:
        {
// switch_38B0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x2c:
        {
// switch_38B0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x2d:
        {
// switch_38B0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x2e:
        {
// switch_38B0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x2f:
        {
// switch_38B0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x30:
        {
// switch_38B0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x31:
        {
// switch_38B0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x32:
        {
// switch_38B0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x33:
        {
// switch_38B0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x34:
        {
// switch_38B0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x35:
        {
// switch_38B0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x36:
        {
// switch_38B0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x37:
        {
// switch_38B0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x38:
        {
// switch_38B0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x39:
        {
// switch_38B0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x3a:
        {
// switch_38B0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x3b:
        {
// switch_38B0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x3c:
        {
// switch_38B0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x3d:
        {
// switch_38B0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
        case 0x3e:
        {
// switch_38B0_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A48(var_24, var_16, var_8)
            OP_JUMP switch_38B0_case_default
        }
    }
}
// fun_41D0
fun_41D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_43E0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 1752;
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
    var_424 = 1808;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 1824;
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
    OP_JZER lab_43C8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_43C8
    pri = 0;
    return pri;
}
// fun_43E0
fun_43E0() {
    var_8 = arg_1;
    var_16 = 1872;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A48(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4428
fun_4428() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_4528
        case default:
        {
// switch_4528_case_default
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
// switch_4528_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_4528_case_default
        }
        case 0x1:
        {
// switch_4528_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_4528_case_default
        }
        case 0x2:
        {
// switch_4528_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_4528_case_default
        }
        case 0x3:
        {
// switch_4528_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_4528_case_default
        }
    }
}
// fun_45E8
fun_45E8() {
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
    pri = fun_1EA0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1F50()
    pri = 0;
    return pri;
}
// fun_4680
fun_4680() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4428(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_45E8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_4728
fun_4728() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_4778
// lab_4778
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1976;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_47F0
    OP_JUMP lab_4820
// lab_47F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_4778
// lab_4820
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_48A8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_24A0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1628(var_56)
// lab_48A8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_4910
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12A0(var_24, var_16)
// lab_4910
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_12A0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_49D0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AC0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0840(var_88, var_80, var_72, var_64, var_56)
// lab_49D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_4A10
    pri = 0;
    return pri;
// lab_4A10
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4B58
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 2096;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A10(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_4B20
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_4B58
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08E8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08E8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AC0(var_40)
    pri = 0;
    return pri;
// lab_4B20
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12A0(var_16, var_8)
}
// fun_4BE0
fun_4BE0() {
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
    pri = fun_4680(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1FE8(var_112)
    var_128 = 0;
    pri = fun_20A8()
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
    pri = fun_4728(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_4D58
fun_4D58() {
    pri = 2232;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4DE0
// lab_4DE0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4F60
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4F50
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_4EA0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_4EA0
    pri = 0;
    OP_JUMP lab_4EA8
// lab_4F60
    pri = 0;
    return pri;
// lab_4F50
    OP_JUMP lab_4DD8
// lab_4DD8
    OP_INC_P_S -936
// lab_4EA0
    pri = 1;
// lab_4EA8
    OP_JZER lab_4F20
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4F18
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4F20
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4F18
}
// fun_4F80
fun_4F80() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5018
    var_8 = 1;
    var_16 = 0;
    var_24 = 3152;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1600()
// lab_5018
    pri = arg_4;
    OP_JZER lab_5050
    var_8 = 1;
    var_16 = 8;
    pri = fun_1658(var_8)
// lab_5050
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_50A8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_50A8
    pri = 0;
    OP_JUMP lab_50B0
// lab_50A8
    pri = 1;
// lab_50B0
    OP_JZER lab_5178
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5178
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_5150
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1540(var_32, var_24)
    OP_JUMP lab_5178
// lab_5178
    pri = arg_2;
    OP_JZER lab_5250
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_5220
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12A0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06D0(var_40)
    OP_JUMP lab_5250
// lab_5250
    pri = arg_3;
    OP_JZER lab_5288
    var_8 = 1;
    var_16 = 8;
    pri = fun_15C8(var_8)
// lab_5288
    pri = 0;
    return pri;
// lab_5220
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12A0(var_16, var_8)
// lab_5150
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1540(var_16, var_8)
}
// fun_5298
fun_5298() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4D58(var_24)
    pri = 0;
    return pri;
}
// fun_5300
fun_5300() {
    pri = g_mode;
    switch (pri) {
// switch_5410
        case default:
        {
// switch_5410_case_default
            pri = CommandNOP()
            OP_JUMP lab_5478
// lab_5478
            pri = 0;
            return pri;
        }
        case 0x85da41de35f0d924:
        {
// switch_5410_case_0x85da41de35f0d924
            var_8 = 0;
            pri = fun_78D0()
            OP_JUMP lab_5478
        }
        case 0xb86fff221aeae6de:
        {
// switch_5410_case_0xb86fff221aeae6de
            var_8 = 0;
            pri = fun_7710()
            OP_JUMP lab_5478
        }
        case 0x0:
        {
// switch_5410_case_0x0
            var_8 = 0;
            pri = fun_5488()
            OP_JUMP lab_5478
        }
        case 0x54634d1e6889d052:
        {
// switch_5410_case_0x54634d1e6889d052
            var_8 = 0;
            pri = fun_7800()
            OP_JUMP lab_5478
        }
        case 0x7a6ae7971d28e7e0:
        {
// switch_5410_case_0x7a6ae7971d28e7e0
            var_8 = 0;
            pri = fun_7848()
            OP_JUMP lab_5478
        }
    }
}
// fun_5488
fun_5488() {
    pri = 0;
    return pri;
}
// fun_54A0
fun_54A0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4F80(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_54F8
fun_54F8() {
    pri = 0;
    return pri;
}
// fun_5510
fun_5510() {
    pri = 0;
    return pri;
}
// fun_5528
fun_5528() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4658706193384577434, 4653040849771298816, 8802641224559852288
    var_24 = 48;
    pri = fun_0678(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4582834833314545664, 4658595582514823168, 4653669770422386688, -8424277323871559939
    var_48 = 48;
    pri = fun_0678(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4582834833314545664, 4657478478701002752, 4653339916934053888, 3563100693386837929
    var_72 = 48;
    pri = fun_0678(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 8;
    pri = fun_0090(var_80)
    var_96 = 0;
    var_104 = 4631952216750555136;
    var_112 = 0;
    OP_PUSH5_C 4657608243063312876, 4646902584216681185, 4651408118984516567, 4658600354395287716, 4649457585356841943
    var_120 = 4649966263416316232;
    var_128 = 1;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_2230()
    var_144 = 0;
    var_152 = 4631952216750555136;
    var_160 = 3;
    OP_PUSH5_C 4658208598402311127, 4640748661616484024, 4653283885821502423, 4659200709734285967, 4646277885690243973
    var_168 = 4652562958037402255;
    var_176 = 220;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 15;
    var_192 = 8;
    pri = fun_0090(var_184)
    var_200 = 3200;
    var_208 = 8;
    var_216 = 16;
    pri = fun_02B0(var_208, var_200)
    var_224 = 0;
    pri = fun_0380()
    var_232 = 80;
    var_240 = 8;
    pri = fun_0090(var_232)
    var_248 = 1;
    var_256 = 0;
    OP_PUSH2_C 4641240890982006784, 3563100693386837929
    var_264 = 2650;
    pri = float(var_264)
    var_272 = pri;
    OP_PUSH3_C 4653040849771298816, 4607182418800017408, 8802641224559852288
    var_280 = 64;
    pri = fun_0780(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_288 = 1;
    var_296 = 0;
    OP_PUSH2_C 4641240890982006784, 3563100693386837929
    var_304 = 2650;
    pri = float(var_304)
    var_312 = pri;
    OP_PUSH3_C 4653669770422386688, 4607182418800017408, -8424277323871559939
    var_320 = 64;
    pri = fun_0780(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_328 = 70;
    var_336 = 8;
    pri = fun_0090(var_328)
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH2_C 8802641224559852288, 3563100693386837929
    var_376 = 48;
    pri = fun_0890(var_368, var_360, var_352, var_344, var_336, var_328)
    var_384 = 3563100693386837929;
    var_392 = 8;
    pri = fun_08E8(var_384)
    var_400 = 10;
    var_408 = 8;
    pri = fun_0090(var_400)
    var_416 = 0;
    pri = fun_2230()
    var_424 = 8802641224559852288;
    var_432 = 8;
    pri = fun_08E8(var_424)
    var_440 = -8424277323871559939;
    var_448 = 8;
    pri = fun_08E8(var_440)
    var_456 = 0;
    var_464 = 4631952216750555136;
    var_472 = 0;
    OP_PUSH5_C 4658223991565099991, 4637456459920132014, 4652588158843910881, 4658297702824626094, 4637982114439139164
    var_480 = 4652444298742532669;
    var_488 = 1;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 0;
    pri = fun_2230()
    var_504 = 5;
    var_512 = 3563100693386837929;
    var_520 = 16;
    pri = fun_12E0(var_512, var_504)
    var_528 = 0;
    var_536 = 1;
    var_544 = 3563100693386837929;
    var_552 = 24;
    pri = fun_41D0(var_544, var_536, var_528)
    var_560 = 1;
    var_568 = 8;
    pri = fun_0090(var_560)
    var_576 = 3563100693386837929;
    var_584 = 8;
    pri = fun_0AC0(var_576)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C -4349744555916032997, 3563100693386837929
    var_632 = 56;
    pri = fun_1EA0(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 1;
    var_648 = 8;
    pri = fun_1FE8(var_640)
    var_656 = 0;
    pri = fun_20A8()
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C 3563100693386837929, 8802641224559852288
    var_696 = 48;
    pri = fun_0890(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 3563100693386837929, -8424277323871559939
    var_736 = 48;
    pri = fun_0890(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 8802641224559852288;
    var_752 = 8;
    pri = fun_08E8(var_744)
    var_760 = -8424277323871559939;
    var_768 = 8;
    pri = fun_08E8(var_760)
    var_776 = 0;
    var_784 = 1;
    var_792 = -8424277323871559939;
    var_800 = 24;
    pri = fun_41D0(var_792, var_784, var_776)
    var_808 = 1;
    var_816 = 8;
    pri = fun_0090(var_808)
    var_824 = -8424277323871559939;
    var_832 = 8;
    pri = fun_0AC0(var_824)
    var_840 = 3563100693386837929;
    var_848 = 8;
    pri = fun_1320(var_840)
    var_856 = 1;
    var_864 = 1;
    var_872 = -1;
    OP_PUSH2_C -8424277323871559939, 3563100693386837929
    var_880 = 40;
    pri = fun_0D78(var_872, var_864, var_856, var_848, var_840)
    var_888 = 0;
    var_896 = 3;
    var_904 = 0;
    var_912 = 100;
    var_920 = -1;
    OP_PUSH2_C -6187487968071445585, -8424277323871559939
    var_928 = 56;
    pri = fun_1EA0(var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_936 = 1;
    var_944 = 8;
    pri = fun_1FE8(var_936)
    var_952 = 0;
    pri = fun_20A8()
    var_960 = 0;
    var_968 = 3;
    var_976 = 0;
    var_984 = 100;
    var_992 = -1;
    OP_PUSH2_C -4349743456404404786, 3563100693386837929
    var_1000 = 56;
    pri = fun_1EA0(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_1FE8(var_1008)
    var_1024 = 0;
    pri = fun_20A8()
    var_1032 = -1;
    var_1040 = 3563100693386837929;
    var_1048 = 16;
    pri = fun_12A0(var_1040, var_1032)
    var_1056 = 0;
    var_1064 = 0;
    var_1072 = 3563100693386837929;
    var_1080 = 24;
    pri = fun_41D0(var_1072, var_1064, var_1056)
    var_1088 = 1;
    var_1096 = 8;
    pri = fun_0090(var_1088)
    var_1104 = 3563100693386837929;
    var_1112 = 8;
    pri = fun_0AC0(var_1104)
    var_1120 = 1;
    var_1128 = 0;
    var_1136 = 30;
    pri = float(var_1136)
    var_1144 = pri;
    var_1152 = 160;
    pri = float(var_1152)
    var_1160 = pri;
    var_1168 = 1;
    var_1176 = 2392;
    pri = float(var_1176)
    var_1184 = pri;
    OP_PUSH3_C 4652772568934121472, 4607182418800017408, 3563100693386837929
    var_1192 = 72;
    pri = fun_0708(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1200 = 3563100693386837929;
    var_1208 = 8;
    pri = fun_08E8(var_1200)
    var_1216 = 1;
    var_1224 = 1;
    var_1232 = -1;
    var_1240 = 2;
    var_1248 = 3563100693386837929;
    var_1256 = 40;
    pri = fun_0E30(var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1264 = 15;
    var_1272 = 8;
    pri = fun_0090(var_1264)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1280 = 16;
    pri = fun_22C0(var_1272, var_1264)
    var_1288 = 0;
    var_1296 = 1;
    var_1304 = 290;
    pri = float(var_1304)
    var_1312 = pri;
    var_1320 = 4602678819172646912;
    var_1328 = 32;
    pri = fun_2328(var_1320, var_1312, var_1304, var_1296)
    var_1336 = 3248;
    pri = SoundPostEvent(var_1336)
    var_1344 = 0;
    var_1352 = 4631952216750555136;
    var_1360 = 0;
    OP_PUSH5_C 4657736885923762668, 4639129124969235087, 4652956451258750730, 4657779678916315709, 4639184364433414554
    var_1368 = 4652937495678287872;
    var_1376 = 1;
    pri = EvCameraMove(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1384 = 0;
    pri = fun_2230()
    var_1392 = 0;
    var_1400 = 4631952216750555136;
    var_1408 = 3;
    OP_PUSH5_C 4657697699329348731, 4645245752135018086, 4652973779562004480, 4657740514312134328, 4645273371867107820
    var_1416 = 4652954823981541622;
    var_1424 = 100;
    pri = EvCameraMove(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = -8424277323871559939;
    var_1456 = 24;
    pri = fun_41D0(var_1448, var_1440, var_1432)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_0090(var_1464)
    var_1480 = -8424277323871559939;
    var_1488 = 8;
    pri = fun_0AC0(var_1480)
    var_1496 = 0;
    var_1504 = 3;
    var_1512 = 0;
    var_1520 = 100;
    var_1528 = -1;
    OP_PUSH2_C -6187486868559817374, -8424277323871559939
    var_1536 = 56;
    pri = fun_1EA0(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1544 = 1;
    var_1552 = 8;
    pri = fun_1FE8(var_1544)
    var_1560 = 0;
    pri = fun_20A8()
    var_1568 = 0;
    pri = fun_2230()
    var_1576 = 0;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 100;
    var_1608 = -1;
    OP_PUSH2_C -4349742356892776575, 3563100693386837929
    var_1616 = 56;
    pri = fun_1EA0(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1624 = 1;
    var_1632 = 8;
    pri = fun_1FE8(var_1624)
    var_1640 = 0;
    var_1648 = 8891414082044153657;
    var_1656 = 0;
    var_1664 = 24;
    pri = fun_20D8(var_1656, var_1648, var_1640)
    var_1672 = 0;
    var_1680 = 8891410783509269024;
    var_1688 = 1;
    var_1696 = 24;
    pri = fun_20D8(var_1688, var_1680, var_1672)
    var_1712 = 0;
    var_1720 = 0;
    var_1728 = 0;
    var_1736 = 1;
    var_1744 = 32;
    pri = fun_21C0(var_1736, var_1728, var_1720, var_1712)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_6BB0
        case default:
        {
// switch_6BB0_case_default
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_8 = 3;
            var_16 = 1;
            var_24 = 32;
            pri = fun_2380(var_16, var_8, var_0, var_-8)
            var_32 = 0;
            var_40 = 4631952216750555136;
            var_48 = 0;
            OP_PUSH5_C 4658302386744160420, 4638509880020471644, 4652659671080181432, 4658340385866016358, 4638467658773965046
            var_56 = 4652615602654140170;
            var_64 = 1;
            pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_72 = 0;
            pri = fun_2230()
            var_80 = -1;
            var_88 = 3563100693386837929;
            var_96 = 16;
            pri = fun_12A0(var_88, var_80)
            var_104 = 0;
            var_112 = 0;
            var_120 = 0;
            var_128 = 0;
            OP_PUSH2_C 3563100693386837929, 8802641224559852288
            var_136 = 48;
            pri = fun_0890(var_128, var_120, var_112, var_104, var_96, var_88)
            var_144 = 0;
            var_152 = 0;
            var_160 = 0;
            var_168 = 0;
            OP_PUSH2_C 3563100693386837929, -8424277323871559939
            var_176 = 48;
            pri = fun_0890(var_168, var_160, var_152, var_144, var_136, var_128)
            var_184 = 0;
            var_192 = 0;
            var_200 = 0;
            var_208 = 0;
            OP_PUSH2_C -8424277323871559939, 3563100693386837929
            var_216 = 48;
            pri = fun_0890(var_208, var_200, var_192, var_184, var_176, var_168)
            var_224 = 8802641224559852288;
            var_232 = 8;
            pri = fun_08E8(var_224)
            var_240 = -8424277323871559939;
            var_248 = 8;
            pri = fun_08E8(var_240)
            var_256 = 3563100693386837929;
            var_264 = 8;
            pri = fun_08E8(var_256)
            var_272 = 0;
            var_280 = 3;
            var_288 = -8424277323871559939;
            var_296 = 24;
            pri = fun_41D0(var_288, var_280, var_272)
            var_304 = 1;
            var_312 = 8;
            pri = fun_0090(var_304)
            var_320 = -8424277323871559939;
            var_328 = 8;
            pri = fun_0AC0(var_320)
            var_336 = 0;
            var_344 = 3;
            var_352 = 0;
            var_360 = 100;
            var_368 = -1;
            OP_PUSH2_C -6187485769048189163, -8424277323871559939
            var_376 = 56;
            pri = fun_1EA0(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
            var_384 = 1;
            var_392 = 8;
            pri = fun_1FE8(var_384)
            var_400 = 0;
            var_408 = 8891411883020897235;
            var_416 = 0;
            var_424 = 24;
            pri = fun_20D8(var_416, var_408, var_400)
            var_432 = 0;
            var_440 = 8891417380579038290;
            var_448 = 1;
            var_456 = 24;
            pri = fun_20D8(var_448, var_440, var_432)
            var_472 = 0;
            var_480 = 0;
            var_488 = 0;
            var_496 = 1;
            var_504 = 32;
            pri = fun_21C0(var_496, var_488, var_480, var_472)
            var_16 = pri;
            var_512 = 0;
            var_520 = 0;
            var_528 = 0;
            var_536 = 0;
            OP_PUSH2_C 8802641224559852288, 3563100693386837929
            var_544 = 48;
            pri = fun_0890(var_536, var_528, var_520, var_512, var_504, var_496)
            var_552 = 3563100693386837929;
            var_560 = 8;
            pri = fun_08E8(var_552)
            pri = var_16;
            switch (pri) {
// switch_71D8
                case default:
                {
// switch_71D8_case_default
                    var_8 = 0;
                    var_16 = 2;
                    var_24 = 3563100693386837929;
                    var_32 = 24;
                    pri = fun_41D0(var_24, var_16, var_8)
                    var_40 = 1;
                    var_48 = 8;
                    pri = fun_0090(var_40)
                    var_56 = 3563100693386837929;
                    var_64 = 8;
                    pri = fun_0AC0(var_56)
                    var_72 = 0;
                    var_80 = 3;
                    var_88 = 0;
                    var_96 = 100;
                    var_104 = -1;
                    OP_PUSH2_C -4349754451520686896, 3563100693386837929
                    var_112 = 56;
                    pri = fun_1EA0(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
                    var_120 = 1;
                    var_128 = 8;
                    pri = fun_1FE8(var_120)
                    var_136 = 0;
                    pri = fun_20A8()
                    var_144 = 0;
                    var_152 = 0;
                    var_160 = -8424277323871559939;
                    var_168 = 24;
                    pri = fun_41D0(var_160, var_152, var_144)
                    var_176 = 1;
                    var_184 = 8;
                    pri = fun_0090(var_176)
                    var_192 = -8424277323871559939;
                    var_200 = 8;
                    pri = fun_0AC0(var_192)
                    var_208 = 0;
                    var_216 = 3;
                    var_224 = 0;
                    var_232 = 100;
                    var_240 = -1;
                    OP_PUSH2_C -6187493465629586640, -8424277323871559939
                    var_248 = 56;
                    pri = fun_1EA0(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
                    var_256 = 1;
                    var_264 = 8;
                    pri = fun_1FE8(var_256)
                    var_272 = 0;
                    pri = fun_20A8()
                    var_280 = 3416;
                    pri = SoundPostEvent(var_280)
                    var_288 = 1;
                    var_296 = 0;
                    var_304 = 3152;
                    var_312 = 8;
                    var_320 = 32;
                    pri = fun_0310(var_312, var_304, var_296, var_288)
                    var_328 = 0;
                    pri = fun_0380()
                    var_336 = 3;
                    var_344 = 1;
                    pri = EvCameraEnd(var_344, var_336)
                    var_352 = 0;
                    var_360 = 0;
                    var_368 = 3563100693386837929;
                    var_376 = 24;
                    pri = fun_41D0(var_368, var_360, var_352)
                    var_384 = 1;
                    var_392 = 8;
                    pri = fun_0090(var_384)
                    var_400 = 3563100693386837929;
                    var_408 = 8;
                    pri = fun_0AC0(var_400)
                    var_416 = -8424277323871559939;
                    var_424 = 8;
                    pri = fun_0AC0(var_416)
                    var_432 = 15;
                    var_440 = 8;
                    pri = fun_0090(var_432)
                    pri = 0;
                    return pri;
                }
                case 0x0:
                {
// switch_71D8_case_0x0
                    var_8 = 0;
                    var_16 = 3;
                    var_24 = 0;
                    var_32 = 100;
                    var_40 = -1;
                    OP_PUSH2_C -4349739058357891942, 3563100693386837929
                    var_48 = 56;
                    pri = fun_1EA0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
                    var_56 = 1;
                    var_64 = 8;
                    pri = fun_1FE8(var_56)
                    var_72 = 0;
                    pri = fun_20A8()
                    OP_JUMP switch_71D8_case_default
                }
                case 0x1:
                {
// switch_71D8_case_0x1
                    var_8 = 0;
                    var_16 = 3;
                    var_24 = 0;
                    var_32 = 100;
                    var_40 = -1;
                    OP_PUSH2_C -4349737958846263731, 3563100693386837929
                    var_48 = 56;
                    pri = fun_1EA0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
                    var_56 = 1;
                    var_64 = 8;
                    pri = fun_1FE8(var_56)
                    var_72 = 0;
                    pri = fun_20A8()
                    OP_JUMP switch_71D8_case_default
                }
            }
        }
        case 0x0:
        {
// switch_6BB0_case_0x0
            var_8 = 0;
            var_16 = 300;
            var_24 = 440;
            pri = float(var_24)
            var_32 = pri;
            var_40 = 4602678819172646912;
            var_48 = 32;
            pri = fun_2328(var_40, var_32, var_24, var_16)
            var_56 = 0;
            var_64 = 4631952216750555136;
            var_72 = 0;
            OP_PUSH5_C 4657192407765687992, 4644729773318335365, 4654231928727436001, 4657215387558708511, 4644833215372276531
            var_80 = 4654302341452078776;
            var_88 = 1;
            pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_96 = 0;
            pri = fun_2230()
            var_104 = 0;
            var_112 = 4631952216750555136;
            var_120 = 3;
            OP_PUSH5_C 4657652817264702915, 4646804771662274232, 4655643877579360829, 4657675797057723433, 4646908213716215398
            var_128 = 4655714334284468716;
            var_136 = 300;
            pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_144 = 0;
            var_152 = 3;
            var_160 = 0;
            var_168 = 100;
            var_176 = -1;
            OP_PUSH2_C -4349741257381148364, 3563100693386837929
            var_184 = 56;
            pri = fun_1EA0(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
            var_192 = 1;
            var_200 = 8;
            pri = fun_1FE8(var_192)
            var_208 = 0;
            pri = fun_20A8()
            var_216 = 15;
            var_224 = 8;
            pri = fun_0090(var_216)
            OP_JUMP switch_6BB0_case_default
        }
        case 0x1:
        {
// switch_6BB0_case_0x1
            var_8 = 0;
            var_16 = 300;
            var_24 = 440;
            pri = float(var_24)
            var_32 = pri;
            var_40 = 4602678819172646912;
            var_48 = 32;
            pri = fun_2328(var_40, var_32, var_24, var_16)
            var_56 = 0;
            var_64 = 4631952216750555136;
            var_72 = 0;
            OP_PUSH5_C 4657192407765687992, 4644729773318335365, 4654231928727436001, 4657215387558708511, 4644833215372276531
            var_80 = 4654302341452078776;
            var_88 = 1;
            pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_96 = 0;
            pri = fun_2230()
            var_104 = 0;
            var_112 = 4631952216750555136;
            var_120 = 3;
            OP_PUSH5_C 4657652817264702915, 4646804771662274232, 4655643877579360829, 4657675797057723433, 4646908213716215398
            var_128 = 4655714334284468716;
            var_136 = 300;
            pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_144 = 0;
            var_152 = 3;
            var_160 = 0;
            var_168 = 100;
            var_176 = -1;
            OP_PUSH2_C -4349741257381148364, 3563100693386837929
            var_184 = 56;
            pri = fun_1EA0(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
            var_192 = 1;
            var_200 = 8;
            pri = fun_1FE8(var_192)
            var_208 = 0;
            pri = fun_20A8()
            var_216 = 0;
            var_224 = 300;
            var_232 = 440;
            pri = float(var_232)
            var_240 = pri;
            var_248 = 4607182418800017408;
            var_256 = 32;
            pri = fun_2328(var_248, var_240, var_232, var_224)
            var_264 = 0;
            var_272 = 4631952216750555136;
            var_280 = 0;
            OP_PUSH5_C 4658534295736690934, 4639032367945990799, 4653021410405719736, 4658578232221336863, 4639005275979482399
            var_288 = 4653024225155486843;
            var_296 = 1;
            pri = EvCameraMove(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
            var_304 = 0;
            pri = fun_2230()
            var_312 = 0;
            var_320 = 4631952216750555136;
            var_328 = 3;
            OP_PUSH5_C 4658523740425064284, 4639032367945990799, 4653678698456804229, 4658567676909710213, 4639005275979482399
            var_336 = 4653681513206571336;
            var_344 = 300;
            pri = EvCameraMove(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
            var_352 = 0;
            var_360 = 3;
            var_368 = 0;
            var_376 = 100;
            var_384 = -1;
            OP_PUSH2_C -4349740157869520153, 3563100693386837929
            var_392 = 56;
            pri = fun_1EA0(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_400 = 1;
            var_408 = 8;
            pri = fun_1FE8(var_400)
            var_416 = 0;
            pri = fun_20A8()
            var_424 = 15;
            var_432 = 8;
            pri = fun_0090(var_424)
            OP_JUMP switch_6BB0_case_default
        }
    }
}
// fun_75A8
fun_75A8() {
    pri = 0;
    return pri;
}
// fun_75C0
fun_75C0() {
    var_8 = 450;
    var_16 = 8;
    pri = fun_5298(var_8)
    var_24 = 1983516971041023246;
    pri = VanishFlagReset(var_24)
    var_32 = 713219082408657684;
    pri = VanishFlagReset(var_32)
    var_40 = -7024236298326424865;
    pri = VanishFlagReset(var_40)
    var_48 = 1243398226496293493;
    pri = VanishFlagReset(var_48)
    var_56 = 5;
    var_64 = 8;
    pri = fun_0438(var_56)
    pri = 0;
    return pri;
}
// fun_76B8
fun_76B8() {
    var_8 = 3200;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02B0(var_16, var_8)
    var_32 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_7710
fun_7710() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_54A0()
    var_16 = 0;
    pri = fun_54F8()
    var_24 = 0;
    pri = fun_5510()
    var_32 = 0;
    pri = fun_5528()
    var_40 = 0;
    pri = fun_75A8()
    var_48 = 0;
    pri = fun_75C0()
    var_56 = 0;
    pri = fun_76B8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7800
fun_7800() {
    var_8 = 0;
    pri = fun_54F8()
    var_16 = 0;
    pri = fun_75C0()
    pri = 0;
    return pri;
}
// fun_7848
fun_7848() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -6187492366117958429;
    var_88 = 80;
    pri = fun_4BE0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_78D0
fun_78D0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4349753352009058685;
    var_88 = 80;
    pri = fun_4BE0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
