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
// fun_02F0
fun_02F0() {
    OP_JUMP lab_0308
// lab_0308
    pri = FadeWait_()
    OP_JZER lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0400
fun_0400() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
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
// fun_04B0
fun_04B0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0500
fun_0500() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    OP_JZER lab_0578
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0CC0(var_24)
    OP_JNZ lab_0578
    pri = 0;
    return pri;
// lab_0578
    OP_JUMP lab_0588
// lab_0588
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_05E8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0588
    pri = 0;
    return pri;
}
// fun_0628
fun_0628() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_06E8
    pri = 0;
    return pri;
// lab_06E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0728
// lab_0728
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    OP_JNZ lab_07B0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_07A0
    pri = 0;
    return pri;
// lab_07B0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_07F8
    pri = 0;
    return pri;
// lab_07F8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0858
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08A0(var_8)
    pri = 0;
    return pri;
// lab_0858
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0728
    pri = 0;
    return pri;
// lab_07A0
    OP_JUMP lab_07F8
}
// fun_08A0
fun_08A0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0928
    pri = 0;
    return pri;
// lab_0928
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    OP_JZER lab_0A58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0980
    OP_ZERO_P_S 64
// lab_0A58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A90
    OP_CONST_S 64, 1
// lab_0A90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AC8
    OP_CONST_S 72, 1
// lab_0AC8
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
// lab_0980
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09A8
    OP_ZERO_P_S 72
// lab_09A8
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
    OP_JUMP lab_0B68
// lab_0B68
    pri = 0;
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BB8
fun_0BB8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0CF0
fun_0CF0() {
    OP_JUMP lab_0D08
// lab_0D08
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0D98
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0D88
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06A0(var_8)
    pri = 0;
    return pri;
// lab_0D98
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E28
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0E18
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06A0(var_8)
    pri = 0;
    return pri;
// lab_0E28
    pri = 0;
    return pri;
// lab_0E18
    OP_JUMP lab_0E38
// lab_0E38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D08
    pri = 0;
    return pri;
// lab_0D88
    OP_JUMP lab_0E38
}
// fun_0E78
fun_0E78() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0CF0(var_40)
    pri = 0;
    return pri;
}
// fun_0F00
fun_0F00() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
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
// switch_15B0
        case default:
        {
// switch_15B0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_15F8
// lab_15F8
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
            OP_JNZ lab_16A0
            var_88 = 0;
            pri = fun_1858()
// lab_16A0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_15B0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1198
                case default:
                {
// switch_1198_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1210
// lab_1210
                    OP_JUMP lab_15F8
                }
                case 0x0:
                {
// switch_1198_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1210
                }
                case 0x1:
                {
// switch_1198_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1210
                }
                case 0x2:
                {
// switch_1198_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1210
                }
                case 0x3:
                {
// switch_1198_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1210
                }
                case 0x4:
                {
// switch_1198_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1210
                }
                case 0x5:
                {
// switch_1198_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1210
                }
            }
        }
        case 0x65:
        {
// switch_15B0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1350
                case default:
                {
// switch_1350_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_13C8
// lab_13C8
                    OP_JUMP lab_15F8
                }
                case 0x0:
                {
// switch_1350_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_13C8
                }
                case 0x1:
                {
// switch_1350_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_13C8
                }
                case 0x2:
                {
// switch_1350_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_13C8
                }
                case 0x3:
                {
// switch_1350_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_13C8
                }
                case 0x4:
                {
// switch_1350_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_13C8
                }
                case 0x5:
                {
// switch_1350_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_13C8
                }
            }
        }
        case 0x66:
        {
// switch_15B0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1508
                case default:
                {
// switch_1508_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1580
// lab_1580
                    OP_JUMP lab_15F8
                }
                case 0x0:
                {
// switch_1508_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1580
                }
                case 0x1:
                {
// switch_1508_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1580
                }
                case 0x2:
                {
// switch_1508_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1580
                }
                case 0x3:
                {
// switch_1508_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1580
                }
                case 0x4:
                {
// switch_1508_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1580
                }
                case 0x5:
                {
// switch_1508_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1580
                }
            }
        }
    }
}
// fun_16B8
fun_16B8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0668(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1760
    pri = 1;
    return pri;
// lab_1760
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_17A8
fun_17A8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_17F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16B8(var_8)
    arg_2 = pri;
// lab_17F8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0F98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1858
fun_1858() {
    OP_JUMP lab_1870
// lab_1870
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18B0
    pri = 0;
    return pri;
// lab_18B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1870
    pri = 0;
    return pri;
}
// fun_18F0
fun_18F0() {
    var_8 = 0;
    pri = fun_1858()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_19A0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_19A0
    pri = 0;
    return pri;
}
// fun_19B0
fun_19B0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_19E0
fun_19E0() {
    OP_JUMP lab_19F8
// lab_19F8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1A30
    pri = 0;
    return pri;
// lab_1A30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_19F8
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    pri = arg_5;
    OP_JNZ lab_1AA8
    var_8 = 0;
    pri = fun_0B78()
// lab_1AA8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1AF8
    OP_CONST_S -8, -1
// lab_1AF8
    pri = arg_1;
    switch (pri) {
// switch_35B0
        case default:
        {
// switch_35B0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3A58
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0668(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3A58
            pri = 1;
            OP_JUMP lab_3A60
// lab_3A58
            pri = 0;
// lab_3A60
            OP_JZER lab_3AB0
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3D08
// lab_3AB0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B18
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B18
            pri = 1;
            OP_JUMP lab_3B20
// lab_3B18
            pri = 0;
// lab_3B20
            OP_JZER lab_3CA8
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0668(var_24, var_16)
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
            OP_JUMP lab_3D08
// lab_3CA8
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_3D08
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3D78
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3D78
            var_8 = 0;
            pri = fun_0BB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_35B0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x1:
        {
// switch_35B0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x2:
        {
// switch_35B0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x3:
        {
// switch_35B0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x4:
        {
// switch_35B0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x5:
        {
// switch_35B0_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0628(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_08A0(var_40)
            OP_JUMP switch_35B0_case_default
        }
        case 0x6:
        {
// switch_35B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x7:
        {
// switch_35B0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x8:
        {
// switch_35B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x9:
        {
// switch_35B0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0xa:
        {
// switch_35B0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0xb:
        {
// switch_35B0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0xc:
        {
// switch_35B0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0xd:
        {
// switch_35B0_case_0xd
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0xe:
        {
// switch_35B0_case_0xe
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0xf:
        {
// switch_35B0_case_0xf
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x10:
        {
// switch_35B0_case_0x10
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x11:
        {
// switch_35B0_case_0x11
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x12:
        {
// switch_35B0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x13:
        {
// switch_35B0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x14:
        {
// switch_35B0_case_0x14
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x15:
        {
// switch_35B0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x16:
        {
// switch_35B0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x17:
        {
// switch_35B0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x18:
        {
// switch_35B0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x19:
        {
// switch_35B0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x1a:
        {
// switch_35B0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x1b:
        {
// switch_35B0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x1c:
        {
// switch_35B0_case_0x1c
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x1d:
        {
// switch_35B0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x1e:
        {
// switch_35B0_case_0x1e
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x1f:
        {
// switch_35B0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x20:
        {
// switch_35B0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x21:
        {
// switch_35B0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x22:
        {
// switch_35B0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x23:
        {
// switch_35B0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x24:
        {
// switch_35B0_case_0x24
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x25:
        {
// switch_35B0_case_0x25
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x26:
        {
// switch_35B0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x27:
        {
// switch_35B0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x28:
        {
// switch_35B0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x29:
        {
// switch_35B0_case_0x29
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x2a:
        {
// switch_35B0_case_0x2a
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x2b:
        {
// switch_35B0_case_0x2b
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x2c:
        {
// switch_35B0_case_0x2c
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x2d:
        {
// switch_35B0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x2e:
        {
// switch_35B0_case_0x2e
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x2f:
        {
// switch_35B0_case_0x2f
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x30:
        {
// switch_35B0_case_0x30
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x31:
        {
// switch_35B0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x32:
        {
// switch_35B0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x33:
        {
// switch_35B0_case_0x33
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x34:
        {
// switch_35B0_case_0x34
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x35:
        {
// switch_35B0_case_0x35
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x36:
        {
// switch_35B0_case_0x36
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x37:
        {
// switch_35B0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x38:
        {
// switch_35B0_case_0x38
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
            pri = fun_08D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35B0_case_default
        }
        case 0x39:
        {
// switch_35B0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x3a:
        {
// switch_35B0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x3b:
        {
// switch_35B0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x3c:
        {
// switch_35B0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x3d:
        {
// switch_35B0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
        case 0x3e:
        {
// switch_35B0_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0628(var_24, var_16, var_8)
            OP_JUMP switch_35B0_case_default
        }
    }
}
// fun_3DA8
fun_3DA8() {
    pri = arg_4;
    OP_JNZ lab_3DE0
    var_8 = 0;
    pri = fun_0B78()
// lab_3DE0
    pri = arg_1;
    switch (pri) {
// switch_51B8
        case default:
        {
// switch_51B8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0C90(var_264)
            OP_JZER lab_5780
            pri = arg_3;
            switch (pri) {
// switch_5728
                case default:
                {
// switch_5728_case_default
                    OP_JUMP lab_5A38
// lab_5A38
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5AA8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5AA8
                    var_8 = 0;
                    pri = fun_0BB8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5728_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5728_case_default
                }
                case 0x2:
                {
// switch_5728_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5728_case_default
                }
                case 0x3:
                {
// switch_5728_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5728_case_default
                }
            }
// lab_5780
            pri = arg_1;
            OP_JZER lab_57D0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_57D0
            pri = 0;
            OP_JUMP lab_57D8
// lab_57D0
            pri = 1;
// lab_57D8
            OP_JZER lab_5840
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0668(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5840
            pri = 1;
            OP_JUMP lab_5848
// lab_5840
            pri = 0;
// lab_5848
            OP_JZER lab_5898
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5A38
// lab_5898
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5900
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5A38
// lab_5900
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0668(var_24, var_16)
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
// switch_51B8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x1:
        {
// switch_51B8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x2:
        {
// switch_51B8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x3:
        {
// switch_51B8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x4:
        {
// switch_51B8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x5:
        {
// switch_51B8_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0628(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_08A0(var_40)
            OP_JUMP switch_51B8_case_default
        }
        case 0x6:
        {
// switch_51B8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x7:
        {
// switch_51B8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x8:
        {
// switch_51B8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x9:
        {
// switch_51B8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0xa:
        {
// switch_51B8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0xb:
        {
// switch_51B8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0xc:
        {
// switch_51B8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0xd:
        {
// switch_51B8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0xe:
        {
// switch_51B8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0xf:
        {
// switch_51B8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x10:
        {
// switch_51B8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x11:
        {
// switch_51B8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x12:
        {
// switch_51B8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x13:
        {
// switch_51B8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x14:
        {
// switch_51B8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x15:
        {
// switch_51B8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x16:
        {
// switch_51B8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x17:
        {
// switch_51B8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x18:
        {
// switch_51B8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x19:
        {
// switch_51B8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x1a:
        {
// switch_51B8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x1b:
        {
// switch_51B8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x1c:
        {
// switch_51B8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x1d:
        {
// switch_51B8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x1e:
        {
// switch_51B8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x1f:
        {
// switch_51B8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x20:
        {
// switch_51B8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x21:
        {
// switch_51B8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x22:
        {
// switch_51B8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x23:
        {
// switch_51B8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x24:
        {
// switch_51B8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x25:
        {
// switch_51B8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x26:
        {
// switch_51B8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x27:
        {
// switch_51B8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x28:
        {
// switch_51B8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x29:
        {
// switch_51B8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x2a:
        {
// switch_51B8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x2b:
        {
// switch_51B8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x2c:
        {
// switch_51B8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x2d:
        {
// switch_51B8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x2e:
        {
// switch_51B8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x2f:
        {
// switch_51B8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x30:
        {
// switch_51B8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x31:
        {
// switch_51B8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x32:
        {
// switch_51B8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x33:
        {
// switch_51B8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x34:
        {
// switch_51B8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x35:
        {
// switch_51B8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x36:
        {
// switch_51B8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x37:
        {
// switch_51B8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x38:
        {
// switch_51B8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x39:
        {
// switch_51B8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x3a:
        {
// switch_51B8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x3b:
        {
// switch_51B8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x3c:
        {
// switch_51B8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x3d:
        {
// switch_51B8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
        case 0x3e:
        {
// switch_51B8_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0628(var_24, var_16, var_8)
            OP_JUMP switch_51B8_case_default
        }
    }
}
// fun_5AD8
fun_5AD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5CE8(var_16, var_8)
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
    OP_JZER lab_5CD0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_5CD0
    pri = 0;
    return pri;
}
// fun_5CE8
fun_5CE8() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0628(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5D30
fun_5D30() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5DB8
// lab_5DB8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5F38
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5F28
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5E78
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5E78
    pri = 0;
    OP_JUMP lab_5E80
// lab_5F38
    pri = 0;
    return pri;
// lab_5F28
    OP_JUMP lab_5DB0
// lab_5DB0
    OP_INC_P_S -936
// lab_5E78
    pri = 1;
// lab_5E80
    OP_JZER lab_5EF8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5EF0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5EF8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5EF0
}
// fun_5F58
fun_5F58() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5FF0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_0F38()
// lab_5FF0
    pri = arg_4;
    OP_JZER lab_6028
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F60(var_8)
// lab_6028
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6080
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6080
    pri = 0;
    OP_JUMP lab_6088
// lab_6080
    pri = 1;
// lab_6088
    OP_JZER lab_6150
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6150
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_6128
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0E78(var_32, var_24)
    OP_JUMP lab_6150
// lab_6150
    pri = arg_2;
    OP_JZER lab_6228
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_61F8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C50(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0400(var_40)
    OP_JUMP lab_6228
// lab_6228
    pri = arg_3;
    OP_JZER lab_6260
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F00(var_8)
// lab_6260
    pri = 0;
    return pri;
// lab_61F8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C50(var_16, var_8)
// lab_6128
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0E78(var_16, var_8)
}
// fun_6270
fun_6270() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5D30(var_24)
    pri = 0;
    return pri;
}
// fun_62D8
fun_62D8() {
    pri = g_mode;
    switch (pri) {
// switch_6398
        case default:
        {
// switch_6398_case_default
            pri = CommandNOP()
            OP_JUMP lab_63E0
// lab_63E0
            pri = 0;
            return pri;
        }
        case 0xc49f5f1ea800de06:
        {
// switch_6398_case_0xc49f5f1ea800de06
            var_8 = 0;
            pri = fun_6D10()
            OP_JUMP lab_63E0
        }
        case 0x0:
        {
// switch_6398_case_0x0
            var_8 = 0;
            pri = fun_63F0()
            OP_JUMP lab_63E0
        }
        case 0x58ad4121e48ad27a:
        {
// switch_6398_case_0x58ad4121e48ad27a
            var_8 = 0;
            pri = fun_6C20()
            OP_JUMP lab_63E0
        }
    }
}
// fun_63F0
fun_63F0() {
    pri = 0;
    return pri;
}
// fun_6408
fun_6408() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5F58(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6460
fun_6460() {
    pri = 0;
    return pri;
}
// fun_6478
fun_6478() {
    pri = 0;
    return pri;
}
// fun_6490
fun_6490() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4630207071894949069;
    var_40 = 0;
    OP_PUSH5_C 4652441396031835341, 4639267751395265085, 4655386020112414802, 4652460747436484198, 4639345508857581404
    var_48 = 4655175793489184031;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_19E0()
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C -4585642546207234458, 7664219872515097466
    var_96 = 40;
    pri = fun_04B0(var_88, var_80, var_72, var_64, var_56)
    var_104 = 7664219872515097466;
    var_112 = 8;
    pri = fun_0500(var_104)
    var_120 = 0;
    var_128 = 1;
    var_136 = 7664219872515097466;
    var_144 = 24;
    pri = fun_5AD8(var_136, var_128, var_120)
    var_152 = 1;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 7664219872515097466;
    var_176 = 8;
    pri = fun_06A0(var_168)
    var_184 = 15;
    var_192 = 8;
    pri = fun_0060(var_184)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4636301005140734771, 4650885806980857856, 4654723542366447206, 8802641224559852288
    var_216 = 48;
    pri = fun_03A8(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 0;
    var_240 = 4641240890982006784;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH4_C 4651580698329612288, 4655106172412913254, 4607182418800017408, 8802641224559852288
    var_264 = 72;
    pri = fun_0438(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 0;
    var_280 = 4630207071894949069;
    var_288 = 3;
    OP_PUSH5_C 4651912223075619308, 4637305870807591813, 4655344106729163981, 4652088056975133245, 4638012372999135560
    var_296 = 4654388675105091748;
    var_304 = 15;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 15;
    var_320 = 8;
    pri = fun_0060(var_312)
    var_328 = 1;
    var_336 = 1;
    var_344 = 30;
    OP_PUSH2_C 7664219872515097466, 8802641224559852288
    var_352 = 40;
    pri = fun_0BF8(var_344, var_336, var_328, var_320, var_312)
    var_360 = 8802641224559852288;
    var_368 = 8;
    pri = fun_0500(var_360)
    var_376 = 0;
    pri = fun_19E0()
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C 1653313023641043170, 7664219872515097466
    var_424 = 56;
    pri = fun_17A8(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_18F0(var_432)
    var_448 = 1;
    var_456 = 1;
    var_464 = -1;
    var_472 = -1;
    var_480 = 0;
    var_488 = 8;
    var_496 = 7664219872515097466;
    var_504 = 56;
    pri = fun_1A70(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C 1653311924129414959, 7664219872515097466
    var_552 = 56;
    pri = fun_17A8(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_18F0(var_560)
    var_576 = 0;
    pri = fun_19B0()
    var_584 = 1;
    var_592 = 3;
    var_600 = 0;
    var_608 = 8;
    var_616 = 7664219872515097466;
    var_624 = 40;
    pri = fun_3DA8(var_616, var_608, var_600, var_592, var_584)
    var_632 = 7664219872515097466;
    var_640 = 8;
    pri = fun_06A0(var_632)
    var_648 = -1;
    var_656 = 8802641224559852288;
    var_664 = 16;
    pri = fun_0C50(var_656, var_648)
    var_672 = 3;
    var_680 = 1;
    pri = EvCameraEnd(var_680, var_672)
    pri = 0;
    return pri;
}
// fun_6A98
fun_6A98() {
    pri = 0;
    return pri;
}
// fun_6AB0
fun_6AB0() {
    var_8 = 910;
    var_16 = 8;
    pri = fun_6270(var_8)
    var_24 = 20;
    var_32 = -2203346105920404122;
    pri = WorkSet(var_32, var_24)
    var_40 = 1590452028359343224;
    pri = VanishFlagSet(var_40)
    var_48 = 1590455326894227857;
    pri = VanishFlagSet(var_48)
    var_56 = -1822231575082135099;
    pri = VanishFlagReset(var_56)
    var_64 = -1822226077523994044;
    pri = VanishFlagReset(var_64)
    var_72 = 6905620846586353737;
    pri = VanishFlagReset(var_72)
    var_80 = -1490277263018139948;
    pri = FlagReset(var_80)
    pri = 0;
    return pri;
}
// fun_6C08
fun_6C08() {
    pri = 0;
    return pri;
}
// fun_6C20
fun_6C20() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6408()
    var_16 = 0;
    pri = fun_6460()
    var_24 = 0;
    pri = fun_6478()
    var_32 = 0;
    pri = fun_6490()
    var_40 = 0;
    pri = fun_6A98()
    var_48 = 0;
    pri = fun_6AB0()
    var_56 = 0;
    pri = fun_6C08()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6D10
fun_6D10() {
    var_8 = 0;
    pri = fun_6460()
    var_16 = 0;
    pri = fun_6AB0()
    pri = 0;
    return pri;
}
