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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0198
fun_0198() {
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
// fun_0208
fun_0208() {
    OP_JUMP lab_0220
// lab_0220
    pri = FadeWait_()
    OP_JZER lab_0258
    pri = 0;
    return pri;
// lab_0258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0220
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_02C0
fun_02C0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0308
// lab_0308
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0348
    OP_JUMP lab_03B8
// lab_0348
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0388
    OP_JUMP lab_03B8
// lab_0388
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
// lab_03B8
    pri = 0;
    return pri;
}
// fun_03D0
fun_03D0() {
    pri = arg_0;
    switch (pri) {
// switch_0578
        case default:
        {
// switch_0578_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0578_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x1:
        {
// switch_0578_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x2:
        {
// switch_0578_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x3:
        {
// switch_0578_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x4:
        {
// switch_0578_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x5:
        {
// switch_0578_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x6:
        {
// switch_0578_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
    }
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
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0760
    pri = 0;
    return pri;
// lab_0760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07A0
// lab_07A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0990(var_8)
    OP_JNZ lab_0828
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0818
    pri = 0;
    return pri;
// lab_0828
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0870
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_08D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
// lab_0818
    OP_JUMP lab_0870
}
// fun_0918
fun_0918() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    OP_JUMP lab_09D8
// lab_09D8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0A68
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0A58
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    pri = 0;
    return pri;
// lab_0A68
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AF8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0AE8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    pri = 0;
    return pri;
// lab_0AF8
    pri = 0;
    return pri;
// lab_0AE8
    OP_JUMP lab_0B08
// lab_0B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09D8
    pri = 0;
    return pri;
// lab_0A58
    OP_JUMP lab_0B08
}
// fun_0B48
fun_0B48() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09C0(var_40)
    pri = 0;
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0C08
fun_0C08() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
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
// switch_1280
        case default:
        {
// switch_1280_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_12C8
// lab_12C8
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
            OP_JNZ lab_1370
            var_88 = 0;
            pri = fun_15E0()
// lab_1370
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1280_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E68
                case default:
                {
// switch_0E68_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EE0
// lab_0EE0
                    OP_JUMP lab_12C8
                }
                case 0x0:
                {
// switch_0E68_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0EE0
                }
                case 0x1:
                {
// switch_0E68_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0EE0
                }
                case 0x2:
                {
// switch_0E68_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0EE0
                }
                case 0x3:
                {
// switch_0E68_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0EE0
                }
                case 0x4:
                {
// switch_0E68_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0EE0
                }
                case 0x5:
                {
// switch_0E68_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0EE0
                }
            }
        }
        case 0x65:
        {
// switch_1280_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1020
                case default:
                {
// switch_1020_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1098
// lab_1098
                    OP_JUMP lab_12C8
                }
                case 0x0:
                {
// switch_1020_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1098
                }
                case 0x1:
                {
// switch_1020_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1098
                }
                case 0x2:
                {
// switch_1020_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1098
                }
                case 0x3:
                {
// switch_1020_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1098
                }
                case 0x4:
                {
// switch_1020_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1098
                }
                case 0x5:
                {
// switch_1020_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1098
                }
            }
        }
        case 0x66:
        {
// switch_1280_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_11D8
                case default:
                {
// switch_11D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1250
// lab_1250
                    OP_JUMP lab_12C8
                }
                case 0x0:
                {
// switch_11D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1250
                }
                case 0x1:
                {
// switch_11D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1250
                }
                case 0x2:
                {
// switch_11D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1250
                }
                case 0x3:
                {
// switch_11D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1250
                }
                case 0x4:
                {
// switch_11D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1250
                }
                case 0x5:
                {
// switch_11D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1250
                }
            }
        }
    }
}
// fun_1388
fun_1388() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0C68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_06E0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1498
    pri = 1;
    return pri;
// lab_1498
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_14E0
fun_14E0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1530
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13F0(var_8)
    arg_2 = pri;
// lab_1530
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0C68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1388(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    OP_JUMP lab_15F8
// lab_15F8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1638
    pri = 0;
    return pri;
// lab_1638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15F8
    pri = 0;
    return pri;
}
// fun_1678
fun_1678() {
    var_8 = 0;
    pri = fun_15E0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1728
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1728
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17B8
fun_17B8() {
    OP_JUMP lab_17D0
// lab_17D0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1808
    pri = 0;
    return pri;
// lab_1808
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17D0
    pri = 0;
    return pri;
}
// fun_1848
fun_1848() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_18B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_1988()
    pri = 0;
    return pri;
}
// fun_18B0
fun_18B0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1908
fun_1908() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_18B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_1988()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_1988
fun_1988() {
    OP_JUMP lab_19A0
// lab_19A0
    pri = IsEasingRunningDof_()
    OP_JZER lab_19F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A08
// lab_19F8
    pri = 0;
    return pri;
// lab_1A08
    OP_JUMP lab_19A0
    pri = 0;
    return pri;
}
// fun_1A28
fun_1A28() {
    pri = 336;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1AB0
// lab_1AB0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1C30
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1C20
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1B70
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1B70
    pri = 0;
    OP_JUMP lab_1B78
// lab_1C30
    pri = 0;
    return pri;
// lab_1C20
    OP_JUMP lab_1AA8
// lab_1AA8
    OP_INC_P_S -936
// lab_1B70
    pri = 1;
// lab_1B78
    OP_JZER lab_1BF0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_1BE8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_1BF0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_1BE8
}
// fun_1C50
fun_1C50() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_1C88
fun_1C88() {
    var_8 = 0;
    pri = fun_1C50()
    switch (pri) {
// switch_1D38
        case default:
        {
// switch_1D38_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_1D80
// lab_1D80
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_1D38_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_1D80
        }
        case 0x1:
        {
// switch_1D38_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_1D80
        }
        case 0x2:
        {
// switch_1D38_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_1D80
        }
    }
}
// fun_1D90
fun_1D90() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1E28
    var_8 = 1;
    var_16 = 0;
    var_24 = 1256;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0C08()
// lab_1E28
    pri = arg_4;
    OP_JZER lab_1E60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C30(var_8)
// lab_1E60
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1EB8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1EB8
    pri = 0;
    OP_JUMP lab_1EC0
// lab_1EB8
    pri = 1;
// lab_1EC0
    OP_JZER lab_1F88
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1F88
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1F60
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0B48(var_32, var_24)
    OP_JUMP lab_1F88
// lab_1F88
    pri = arg_2;
    OP_JZER lab_2060
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_2030
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0950(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06A8(var_40)
    OP_JUMP lab_2060
// lab_2060
    pri = arg_3;
    OP_JZER lab_2098
    var_8 = 1;
    var_16 = 8;
    pri = fun_0BD0(var_8)
// lab_2098
    pri = 0;
    return pri;
// lab_2030
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0950(var_16, var_8)
// lab_1F60
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0B48(var_16, var_8)
}
// fun_20A8
fun_20A8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1A28(var_24)
    pri = 0;
    return pri;
}
// fun_2110
fun_2110() {
    pri = g_mode;
    switch (pri) {
// switch_21D0
        case default:
        {
// switch_21D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_2218
// lab_2218
            pri = 0;
            return pri;
        }
        case 0x9d1f76220b11c219:
        {
// switch_21D0_case_0x9d1f76220b11c219
            var_8 = 0;
            pri = fun_3210()
            OP_JUMP lab_2218
        }
        case 0x0:
        {
// switch_21D0_case_0x0
            var_8 = 0;
            pri = fun_2228()
            OP_JUMP lab_2218
        }
        case 0x7fc02c1e811d1fed:
        {
// switch_21D0_case_0x7fc02c1e811d1fed
            var_8 = 0;
            pri = fun_3300()
            OP_JUMP lab_2218
        }
    }
}
// fun_2228
fun_2228() {
    pri = 0;
    return pri;
}
// fun_2240
fun_2240() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1D90(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2298
fun_2298() {
    pri = 0;
    return pri;
}
// fun_22B0
fun_22B0() {
    pri = 0;
    return pri;
}
// fun_22C8
fun_22C8() {
    pri = EvCameraStart()
    var_8 = 2;
    var_16 = 8;
    pri = fun_03D0(var_8)
    var_24 = 1;
    var_32 = 8802641224559852288;
    var_40 = 16;
    pri = fun_0668(var_32, var_24)
    var_48 = 1;
    var_56 = -1655053127185566619;
    var_64 = 16;
    pri = fun_0668(var_56, var_48)
    var_72 = 1;
    var_80 = -2409953949732425464;
    var_88 = 16;
    pri = fun_0668(var_80, var_72)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C 4640185359819341824, 4677459546171296973, 4672286536377145754, 8802641224559852288
    var_112 = 48;
    pri = fun_0610(var_104, var_96, var_88, var_80, var_72, var_64)
    OP_PUSH2_C -1655053127185566619, 1820662325319012619
    pri = SetBamiriInfoToChara(var_112, var_104)
    OP_PUSH2_C -2409953949732425464, 7896309497983890666
    pri = SetBamiriInfoToChara(var_112, var_104)
    var_120 = 1;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 30;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 1304;
    pri = SoundPostEvent(var_152)
    var_160 = 0;
    var_168 = 8;
    pri = fun_02C0(var_160)
    var_184 = 816;
    var_192 = 813;
    var_200 = 810;
    var_208 = 24;
    pri = fun_1C88(var_200, var_192, var_184)
    var_8 = pri;
    var_224 = 813;
    var_232 = 810;
    var_240 = 816;
    var_248 = 24;
    pri = fun_1C88(var_240, var_232, var_224)
    var_16 = pri;
    var_256 = 0;
    var_264 = 4630235219392620134;
    var_272 = 0;
    OP_PUSH5_C 4677417334545517117, 4655517653644492145, 4672367449437833789, 4677419328784731996, 4655523107222165914
    var_280 = 4672363694605624934;
    var_288 = 1;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 0;
    pri = fun_17B8()
    var_304 = 0;
    var_312 = 4630235219392620134;
    var_320 = 0;
    OP_PUSH5_C 4677417334545517117, 4655517653644492145, 4672367449437833789, 4677419216084790149, 4655523107222165914
    var_328 = 4672363466456962171;
    var_336 = 180;
    pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_344 = 16;
    pri = fun_1848(var_336, var_328)
    var_352 = 0;
    var_360 = 1;
    var_368 = 305;
    pri = float(var_368)
    var_376 = pri;
    var_384 = 4608083138725491507;
    var_392 = 32;
    pri = fun_18B0(var_384, var_376, var_368, var_360)
    var_400 = 1480;
    var_408 = 30;
    var_416 = 16;
    pri = fun_0138(var_408, var_400)
    var_424 = 0;
    pri = fun_0208()
    var_432 = 3;
    var_440 = 0;
    var_448 = -5809142390183038616;
    var_456 = 24;
    pri = fun_1590(var_448, var_440, var_432)
    var_464 = 1;
    var_472 = 8;
    pri = fun_1678(var_464)
    var_480 = 0;
    pri = fun_1738()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_488 = 3;
    var_496 = 1;
    var_504 = 32;
    pri = fun_1908(var_496, var_488, var_480, var_472)
    var_512 = 0;
    var_520 = 4631684815522680013;
    var_528 = 0;
    OP_PUSH5_C 4677520903043295478, 4653043884423391478, 4672262036509299835, 4677523359077394022, 4653076957733154980
    var_536 = 4672260717095346504;
    var_544 = 1;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 1528;
    pri = SoundPostEvent(var_552)
    var_560 = 0;
    var_568 = 3;
    var_576 = 0;
    var_584 = 100;
    var_592 = -1;
    OP_PUSH2_C 8352996592018040623, -2409953949732425464
    var_600 = 56;
    pri = fun_14E0(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_608 = 1;
    var_616 = 8;
    pri = fun_1678(var_608)
    var_624 = 0;
    pri = fun_1738()
    var_632 = 0;
    var_640 = 4629953744415909478;
    var_648 = 0;
    OP_PUSH5_C 4677435982262724198, 4652469719451366851, 4672278056393716531, 4677434010013741875, 4652505519549967237
    var_656 = 4672274977761158758;
    var_664 = 1;
    pri = EvCameraMove(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_672 = 0;
    pri = fun_17B8()
    var_680 = 0;
    var_688 = 4629953744415909478;
    var_696 = 2;
    OP_PUSH5_C 4677437195848683356, 4652469103724855296, 4672275296619530813, 4677435113648538255, 4652504903823455683
    var_704 = 4672272523101449748;
    var_712 = 180;
    pri = EvCameraMove(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_720 = var_8;
    var_728 = 1;
    var_736 = 16;
    pri = fun_1768(var_728, var_720)
    var_744 = 0;
    var_752 = 3;
    var_760 = 0;
    var_768 = 100;
    var_776 = -1;
    OP_PUSH2_C 2287169514515653338, -1655053127185566619
    var_784 = 56;
    pri = fun_14E0(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_792 = 1;
    var_800 = 8;
    pri = fun_1678(var_792)
    var_808 = 0;
    pri = fun_1738()
    var_816 = 0;
    var_824 = 4629953744415909478;
    var_832 = 0;
    OP_PUSH5_C 4677483629599113871, 4651892783710040228, 4672302960332085658, 4677486360511119360, 4651879061804925583
    var_840 = 4672303166490515866;
    var_848 = 1;
    pri = EvCameraMove(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_856 = 0;
    pri = fun_17B8()
    var_864 = 0;
    var_872 = 4630192998146113536;
    var_880 = 2;
    OP_PUSH5_C 4677478453648126116, 4651918820145385964, 4672302567256678728, 4677481184560131604, 4651905098240271319
    var_888 = 4672302773415108936;
    var_896 = 180;
    pri = EvCameraMove(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_904 = 0;
    var_912 = 3;
    var_920 = 0;
    var_928 = 100;
    var_936 = -1;
    OP_PUSH2_C 8352997691529668834, -2409953949732425464
    var_944 = 56;
    pri = fun_14E0(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 1;
    var_960 = 8;
    pri = fun_1678(var_952)
    var_968 = 0;
    pri = fun_1738()
    var_976 = 0;
    var_984 = 4629447089457830298;
    var_992 = 0;
    OP_PUSH5_C 4677443361360136110, 4652255138762090086, 4672276802950460867, 4677444631296066191, 4652248145868137431
    var_1000 = 4672271965099298652;
    var_1008 = 1;
    pri = EvCameraMove(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 0;
    pri = fun_17B8()
    var_1024 = 0;
    var_1032 = 4629447089457830298;
    var_1040 = 2;
    OP_PUSH5_C 4677442885821357097, 4652255138762090086, 4672276731482205061, 4677444471866880164, 4652248145868137431
    var_1048 = 4672272283957670707;
    var_1056 = 180;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 0;
    var_1072 = 3;
    var_1080 = 0;
    var_1088 = 100;
    var_1096 = -1;
    OP_PUSH2_C 8352998791041297045, -2409953949732425464
    var_1104 = 56;
    pri = fun_14E0(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1112 = 1;
    var_1120 = 8;
    pri = fun_1678(var_1112)
    var_1128 = 0;
    pri = fun_1738()
    var_1136 = 0;
    var_1144 = 4630333735634468864;
    var_1152 = 0;
    OP_PUSH5_C 4677433660918800056, 4652702903877385585, 4672220277057676902, 4677433075428858266, 4652741738628078633
    var_1160 = 4672215505177212355;
    var_1168 = 1;
    pri = EvCameraMove(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1176 = 0;
    pri = fun_17B8()
    var_1184 = 0;
    var_1192 = 4630333735634468864;
    var_1200 = 2;
    OP_PUSH5_C 4677432970975253627, 4652702903877385585, 4672221184154769818, 4677432149090311864, 4652741738628078633
    var_1208 = 4672216549713258742;
    var_1216 = 180;
    pri = EvCameraMove(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 0;
    var_1232 = 3;
    var_1240 = 0;
    var_1248 = 100;
    var_1256 = -1;
    OP_PUSH2_C 2287168415004025127, -1655053127185566619
    var_1264 = 56;
    pri = fun_14E0(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 1;
    var_1280 = 8;
    pri = fun_1678(var_1272)
    var_1288 = 0;
    pri = fun_1738()
    var_1296 = 0;
    var_1304 = 3;
    var_1312 = 0;
    var_1320 = 100;
    var_1328 = -1;
    OP_PUSH2_C 2287167315492396916, -1655053127185566619
    var_1336 = 56;
    pri = fun_14E0(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 1;
    var_1352 = 8;
    pri = fun_1678(var_1344)
    var_1360 = 0;
    pri = fun_1738()
    var_1368 = 3;
    var_1376 = 6000;
    pri = EvCameraEnd(var_1376, var_1368)
    var_1384 = 0;
    var_1392 = 8802641224559852288;
    var_1400 = 16;
    pri = fun_0668(var_1392, var_1384)
    var_1408 = 0;
    var_1416 = -1655053127185566619;
    var_1424 = 16;
    pri = fun_0668(var_1416, var_1408)
    var_1432 = 0;
    var_1440 = -2409953949732425464;
    var_1448 = 16;
    pri = fun_0668(var_1440, var_1432)
    pri = 0;
    return pri;
}
// fun_3138
fun_3138() {
    pri = 0;
    return pri;
}
// fun_3150
fun_3150() {
    var_8 = 110;
    var_16 = 8;
    pri = fun_20A8(var_8)
    var_24 = 7958203305269363613;
    pri = FlagSet(var_24)
    var_32 = 2;
    var_40 = 8;
    pri = fun_03D0(var_32)
    pri = 0;
    return pri;
}
// fun_31D0
fun_31D0() {
    var_8 = -7125697218890202608;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_3210
fun_3210() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_2240()
    var_16 = 0;
    pri = fun_2298()
    var_24 = 0;
    pri = fun_22B0()
    var_32 = 0;
    pri = fun_22C8()
    var_40 = 0;
    pri = fun_3138()
    var_48 = 0;
    pri = fun_3150()
    var_56 = 0;
    pri = fun_31D0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_3300
fun_3300() {
    var_8 = 0;
    pri = fun_2298()
    var_16 = 0;
    pri = fun_3150()
    pri = 0;
    return pri;
}
