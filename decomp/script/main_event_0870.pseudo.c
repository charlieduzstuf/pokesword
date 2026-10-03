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
    var_8 = arg_0;
    pri = SetRespawnZone(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0470
fun_0470() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = 0;
    pri = fun_05F0()
    OP_JNZ lab_04E0
    OP_JUMP lab_0510
// lab_04E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
// lab_0510
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0540
// lab_0540
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0580
    pri = 0;
    return pri;
// lab_0580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0540
    pri = 0;
    return pri;
}
// fun_05C0
fun_05C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05F0
fun_05F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0618
fun_0618() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
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
// fun_0758
fun_0758() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE8(var_8)
    OP_JZER lab_0828
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F18(var_24)
    OP_JNZ lab_0828
    pri = 0;
    return pri;
// lab_0828
    OP_JUMP lab_0838
// lab_0838
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0898
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0898
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0838
    pri = 0;
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0998
    pri = 0;
    return pri;
// lab_0998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09D8
// lab_09D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE8(var_8)
    OP_JNZ lab_0A60
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A50
    pri = 0;
    return pri;
// lab_0A60
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AA8
    pri = 0;
    return pri;
// lab_0AA8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B50(var_8)
    pri = 0;
    return pri;
// lab_0B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09D8
    pri = 0;
    return pri;
// lab_0A50
    OP_JUMP lab_0AA8
}
// fun_0B50
fun_0B50() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B88
fun_0B88() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BD8
    pri = 0;
    return pri;
// lab_0BD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE8(var_8)
    OP_JZER lab_0D08
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C30
    OP_ZERO_P_S 64
// lab_0D08
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_CONST_S 64, 1
// lab_0D40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D78
    OP_CONST_S 72, 1
// lab_0D78
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
// lab_0C30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C58
    OP_ZERO_P_S 72
// lab_0C58
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
    OP_JUMP lab_0E18
// lab_0E18
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E68
fun_0E68() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EA8
fun_0EA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE8
fun_0EE8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F48
fun_0F48() {
    OP_JUMP lab_0F60
// lab_0F60
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0FF0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0FE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    pri = 0;
    return pri;
// lab_0FF0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1080
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1070
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    pri = 0;
    return pri;
// lab_1080
    pri = 0;
    return pri;
// lab_1070
    OP_JUMP lab_1090
// lab_1090
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F60
    pri = 0;
    return pri;
// lab_0FE0
    OP_JUMP lab_1090
}
// fun_10D0
fun_10D0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0950(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F48(var_40)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1190
fun_1190() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
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
// switch_1808
        case default:
        {
// switch_1808_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1850
// lab_1850
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
            OP_JNZ lab_18F8
            var_88 = 0;
            pri = fun_1AB0()
// lab_18F8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1808_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_13F0
                case default:
                {
// switch_13F0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1468
// lab_1468
                    OP_JUMP lab_1850
                }
                case 0x0:
                {
// switch_13F0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1468
                }
                case 0x1:
                {
// switch_13F0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1468
                }
                case 0x2:
                {
// switch_13F0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1468
                }
                case 0x3:
                {
// switch_13F0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1468
                }
                case 0x4:
                {
// switch_13F0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1468
                }
                case 0x5:
                {
// switch_13F0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1468
                }
            }
        }
        case 0x65:
        {
// switch_1808_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15A8
                case default:
                {
// switch_15A8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1620
// lab_1620
                    OP_JUMP lab_1850
                }
                case 0x0:
                {
// switch_15A8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1620
                }
                case 0x1:
                {
// switch_15A8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1620
                }
                case 0x2:
                {
// switch_15A8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1620
                }
                case 0x3:
                {
// switch_15A8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1620
                }
                case 0x4:
                {
// switch_15A8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1620
                }
                case 0x5:
                {
// switch_15A8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1620
                }
            }
        }
        case 0x66:
        {
// switch_1808_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1760
                case default:
                {
// switch_1760_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17D8
// lab_17D8
                    OP_JUMP lab_1850
                }
                case 0x0:
                {
// switch_1760_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_17D8
                }
                case 0x1:
                {
// switch_1760_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_17D8
                }
                case 0x2:
                {
// switch_1760_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_17D8
                }
                case 0x3:
                {
// switch_1760_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17D8
                }
                case 0x4:
                {
// switch_1760_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_17D8
                }
                case 0x5:
                {
// switch_1760_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_17D8
                }
            }
        }
    }
}
// fun_1910
fun_1910() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0918(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_19B8
    pri = 1;
    return pri;
// lab_19B8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A00
fun_1A00() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1910(var_8)
    arg_2 = pri;
// lab_1A50
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AB0
fun_1AB0() {
    OP_JUMP lab_1AC8
// lab_1AC8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B08
    pri = 0;
    return pri;
// lab_1B08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AC8
    pri = 0;
    return pri;
}
// fun_1B48
fun_1B48() {
    var_8 = 0;
    pri = fun_1AB0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1BF8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1BF8
    pri = 0;
    return pri;
}
// fun_1C08
fun_1C08() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C38
fun_1C38() {
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
// fun_1CA0
fun_1CA0() {
    OP_JUMP lab_1CB8
// lab_1CB8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1CF0
    pri = 0;
    return pri;
// lab_1CF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CB8
    pri = 0;
    return pri;
}
// fun_1D30
fun_1D30() {
    pri = arg_5;
    OP_JNZ lab_1D68
    var_8 = 0;
    pri = fun_0E28()
// lab_1D68
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1DB8
    OP_CONST_S -8, -1
// lab_1DB8
    pri = arg_1;
    switch (pri) {
// switch_3870
        case default:
        {
// switch_3870_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3D18
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0918(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3D18
            pri = 1;
            OP_JUMP lab_3D20
// lab_3D18
            pri = 0;
// lab_3D20
            OP_JZER lab_3D70
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3FC8
// lab_3D70
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3DD8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3DD8
            pri = 1;
            OP_JUMP lab_3DE0
// lab_3DD8
            pri = 0;
// lab_3DE0
            OP_JZER lab_3F68
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0918(var_24, var_16)
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
            OP_JUMP lab_3FC8
// lab_3F68
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
// lab_3FC8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4038
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4038
            var_8 = 0;
            pri = fun_0E68()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3870_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x1:
        {
// switch_3870_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x2:
        {
// switch_3870_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x3:
        {
// switch_3870_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x4:
        {
// switch_3870_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x5:
        {
// switch_3870_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B50(var_40)
            OP_JUMP switch_3870_case_default
        }
        case 0x6:
        {
// switch_3870_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x7:
        {
// switch_3870_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x8:
        {
// switch_3870_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x9:
        {
// switch_3870_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0xa:
        {
// switch_3870_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0xb:
        {
// switch_3870_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0xc:
        {
// switch_3870_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0xd:
        {
// switch_3870_case_0xd
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0xe:
        {
// switch_3870_case_0xe
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0xf:
        {
// switch_3870_case_0xf
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x10:
        {
// switch_3870_case_0x10
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x11:
        {
// switch_3870_case_0x11
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x12:
        {
// switch_3870_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x13:
        {
// switch_3870_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x14:
        {
// switch_3870_case_0x14
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x15:
        {
// switch_3870_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x16:
        {
// switch_3870_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x17:
        {
// switch_3870_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x18:
        {
// switch_3870_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x19:
        {
// switch_3870_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x1a:
        {
// switch_3870_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x1b:
        {
// switch_3870_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x1c:
        {
// switch_3870_case_0x1c
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x1d:
        {
// switch_3870_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x1e:
        {
// switch_3870_case_0x1e
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x1f:
        {
// switch_3870_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x20:
        {
// switch_3870_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x21:
        {
// switch_3870_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x22:
        {
// switch_3870_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x23:
        {
// switch_3870_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x24:
        {
// switch_3870_case_0x24
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x25:
        {
// switch_3870_case_0x25
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x26:
        {
// switch_3870_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x27:
        {
// switch_3870_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x28:
        {
// switch_3870_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x29:
        {
// switch_3870_case_0x29
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x2a:
        {
// switch_3870_case_0x2a
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x2b:
        {
// switch_3870_case_0x2b
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x2c:
        {
// switch_3870_case_0x2c
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x2d:
        {
// switch_3870_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x2e:
        {
// switch_3870_case_0x2e
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x2f:
        {
// switch_3870_case_0x2f
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x30:
        {
// switch_3870_case_0x30
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x31:
        {
// switch_3870_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x32:
        {
// switch_3870_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x33:
        {
// switch_3870_case_0x33
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x34:
        {
// switch_3870_case_0x34
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x35:
        {
// switch_3870_case_0x35
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x36:
        {
// switch_3870_case_0x36
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x37:
        {
// switch_3870_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x38:
        {
// switch_3870_case_0x38
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
            pri = fun_0B88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3870_case_default
        }
        case 0x39:
        {
// switch_3870_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x3a:
        {
// switch_3870_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x3b:
        {
// switch_3870_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x3c:
        {
// switch_3870_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x3d:
        {
// switch_3870_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
        case 0x3e:
        {
// switch_3870_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            OP_JUMP switch_3870_case_default
        }
    }
}
// fun_4068
fun_4068() {
    pri = arg_4;
    OP_JNZ lab_40A0
    var_8 = 0;
    pri = fun_0E28()
// lab_40A0
    pri = arg_1;
    switch (pri) {
// switch_5478
        case default:
        {
// switch_5478_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0EE8(var_264)
            OP_JZER lab_5A40
            pri = arg_3;
            switch (pri) {
// switch_59E8
                case default:
                {
// switch_59E8_case_default
                    OP_JUMP lab_5CF8
// lab_5CF8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5D68
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5D68
                    var_8 = 0;
                    pri = fun_0E68()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_59E8_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59E8_case_default
                }
                case 0x2:
                {
// switch_59E8_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59E8_case_default
                }
                case 0x3:
                {
// switch_59E8_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_59E8_case_default
                }
            }
// lab_5A40
            pri = arg_1;
            OP_JZER lab_5A90
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5A90
            pri = 0;
            OP_JUMP lab_5A98
// lab_5A90
            pri = 1;
// lab_5A98
            OP_JZER lab_5B00
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0918(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5B00
            pri = 1;
            OP_JUMP lab_5B08
// lab_5B00
            pri = 0;
// lab_5B08
            OP_JZER lab_5B58
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5CF8
// lab_5B58
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5BC0
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5CF8
// lab_5BC0
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0918(var_24, var_16)
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
// switch_5478_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x1:
        {
// switch_5478_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x2:
        {
// switch_5478_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x3:
        {
// switch_5478_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x4:
        {
// switch_5478_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x5:
        {
// switch_5478_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B50(var_40)
            OP_JUMP switch_5478_case_default
        }
        case 0x6:
        {
// switch_5478_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x7:
        {
// switch_5478_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x8:
        {
// switch_5478_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x9:
        {
// switch_5478_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0xa:
        {
// switch_5478_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0xb:
        {
// switch_5478_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0xc:
        {
// switch_5478_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0xd:
        {
// switch_5478_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0xe:
        {
// switch_5478_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0xf:
        {
// switch_5478_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x10:
        {
// switch_5478_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x11:
        {
// switch_5478_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x12:
        {
// switch_5478_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x13:
        {
// switch_5478_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x14:
        {
// switch_5478_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x15:
        {
// switch_5478_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x16:
        {
// switch_5478_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x17:
        {
// switch_5478_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x18:
        {
// switch_5478_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x19:
        {
// switch_5478_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x1a:
        {
// switch_5478_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x1b:
        {
// switch_5478_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x1c:
        {
// switch_5478_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x1d:
        {
// switch_5478_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x1e:
        {
// switch_5478_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x1f:
        {
// switch_5478_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x20:
        {
// switch_5478_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x21:
        {
// switch_5478_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x22:
        {
// switch_5478_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x23:
        {
// switch_5478_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x24:
        {
// switch_5478_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x25:
        {
// switch_5478_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x26:
        {
// switch_5478_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x27:
        {
// switch_5478_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x28:
        {
// switch_5478_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x29:
        {
// switch_5478_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x2a:
        {
// switch_5478_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x2b:
        {
// switch_5478_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x2c:
        {
// switch_5478_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x2d:
        {
// switch_5478_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x2e:
        {
// switch_5478_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x2f:
        {
// switch_5478_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x30:
        {
// switch_5478_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x31:
        {
// switch_5478_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x32:
        {
// switch_5478_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x33:
        {
// switch_5478_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x34:
        {
// switch_5478_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x35:
        {
// switch_5478_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x36:
        {
// switch_5478_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x37:
        {
// switch_5478_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x38:
        {
// switch_5478_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x39:
        {
// switch_5478_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x3a:
        {
// switch_5478_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x3b:
        {
// switch_5478_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x3c:
        {
// switch_5478_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x3d:
        {
// switch_5478_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
        case 0x3e:
        {
// switch_5478_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08D8(var_24, var_16, var_8)
            OP_JUMP switch_5478_case_default
        }
    }
}
// fun_5D98
fun_5D98() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5FA8(var_16, var_8)
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
    OP_JZER lab_5F90
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_5F90
    pri = 0;
    return pri;
}
// fun_5FA8
fun_5FA8() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_08D8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5FF0
fun_5FF0() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6078
// lab_6078
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_61F8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_61E8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6138
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6138
    pri = 0;
    OP_JUMP lab_6140
// lab_61F8
    pri = 0;
    return pri;
// lab_61E8
    OP_JUMP lab_6070
// lab_6070
    OP_INC_P_S -936
// lab_6138
    pri = 1;
// lab_6140
    OP_JZER lab_61B8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_61B0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_61B8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_61B0
}
// fun_6218
fun_6218() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_62B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1190()
// lab_62B0
    pri = arg_4;
    OP_JZER lab_62E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_11B8(var_8)
// lab_62E8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6340
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6340
    pri = 0;
    OP_JUMP lab_6348
// lab_6340
    pri = 1;
// lab_6348
    OP_JZER lab_6410
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6410
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_63E8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_10D0(var_32, var_24)
    OP_JUMP lab_6410
// lab_6410
    pri = arg_2;
    OP_JZER lab_64E8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_64B8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EA8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06A8(var_40)
    OP_JUMP lab_64E8
// lab_64E8
    pri = arg_3;
    OP_JZER lab_6520
    var_8 = 1;
    var_16 = 8;
    pri = fun_1158(var_8)
// lab_6520
    pri = 0;
    return pri;
// lab_64B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EA8(var_16, var_8)
// lab_63E8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_10D0(var_16, var_8)
}
// fun_6530
fun_6530() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5FF0(var_24)
    pri = 0;
    return pri;
}
// fun_6598
fun_6598() {
    pri = g_mode;
    switch (pri) {
// switch_6658
        case default:
        {
// switch_6658_case_default
            pri = CommandNOP()
            OP_JUMP lab_66A0
// lab_66A0
            pri = 0;
            return pri;
        }
        case 0xbd463b1ea4368a55:
        {
// switch_6658_case_0xbd463b1ea4368a55
            var_8 = 0;
            pri = fun_7AB0()
            OP_JUMP lab_66A0
        }
        case 0x0:
        {
// switch_6658_case_0x0
            var_8 = 0;
            pri = fun_66B0()
            OP_JUMP lab_66A0
        }
        case 0x4f860521df37f9c9:
        {
// switch_6658_case_0x4f860521df37f9c9
            var_8 = 0;
            pri = fun_79C0()
            OP_JUMP lab_66A0
        }
    }
}
// fun_66B0
fun_66B0() {
    pri = 0;
    return pri;
}
// fun_66C8
fun_66C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6218(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6720
fun_6720() {
    pri = 0;
    return pri;
}
// fun_6738
fun_6738() {
    pri = 0;
    return pri;
}
// fun_6750
fun_6750() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4660135118696035123, 4654227882524645786, 8802641224559852288
    var_24 = 48;
    pri = fun_0618(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4596120452215288627, 4658822301812470579, 4654445585826945434, 4985763535029371052
    var_48 = 48;
    pri = fun_0618(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    var_72 = 0;
    OP_PUSH3_C 4658776122324103987, 4653938491064215142, 3896444167467819354
    var_80 = 48;
    pri = fun_0618(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 0;
    var_112 = 3;
    var_120 = 3896444167467819354;
    var_128 = 24;
    pri = fun_5D98(var_120, var_112, var_104)
    var_136 = 1;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 3896444167467819354;
    var_160 = 8;
    pri = fun_0950(var_152)
    var_168 = 0;
    var_176 = 4633444034127121613;
    var_184 = 0;
    OP_PUSH5_C 4660084871014645760, 4637848413825201603, 4652428905579743805, 4660283794658342994, 4638288922163753779
    var_192 = 4652129662495128289;
    var_200 = 1;
    pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 0;
    pri = fun_1CA0()
    var_216 = 0;
    var_224 = 4633444034127121613;
    var_232 = 3;
    OP_PUSH5_C 4660382244929494057, 4637848413825201603, 4653357465139633193, 4660581190563423846, 4638288922163753779
    var_240 = 4653102642324779827;
    var_248 = 150;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = 0;
    var_272 = 4641240890982006784;
    var_280 = 0;
    var_288 = 0;
    OP_PUSH4_C 4659319281068225331, 4654227882524645786, 4607182418800017408, 8802641224559852288
    var_296 = 72;
    pri = fun_06E0(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 15;
    var_312 = 8;
    pri = fun_0060(var_304)
    var_320 = 23448;
    var_328 = 8;
    var_336 = 16;
    pri = fun_0280(var_328, var_320)
    var_344 = 0;
    pri = fun_0350()
    var_352 = 0;
    pri = fun_1CA0()
    var_360 = 0;
    var_368 = 4633444034127121613;
    var_376 = 3;
    OP_PUSH5_C 4659208098452424622, 4635657834818950922, 4653789881072604938, 4659340039847757742, 4635233511291559608
    var_384 = 4653397355421488906;
    var_392 = 1;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 20;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 8802641224559852288;
    var_424 = 8;
    pri = fun_07B0(var_416)
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    var_456 = 0;
    OP_PUSH2_C 4985763535029371052, 8802641224559852288
    var_464 = 48;
    pri = fun_0758(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    OP_PUSH2_C 8802641224559852288, 3896444167467819354
    var_504 = 48;
    pri = fun_0758(var_496, var_488, var_480, var_472, var_464, var_456)
    var_512 = 0;
    pri = fun_1CA0()
    var_520 = 0;
    var_528 = 3;
    var_536 = 0;
    var_544 = 100;
    var_552 = -1;
    OP_PUSH2_C 739555912998014899, 4985763535029371052
    var_560 = 56;
    pri = fun_1A00(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 1;
    var_576 = 8;
    pri = fun_1B48(var_568)
    var_584 = 0;
    pri = fun_1C08()
    var_592 = 8802641224559852288;
    var_600 = 8;
    pri = fun_07B0(var_592)
    var_608 = 4985763535029371052;
    var_616 = 8;
    pri = fun_07B0(var_608)
    var_624 = 3896444167467819354;
    var_632 = 8;
    pri = fun_07B0(var_624)
    var_640 = 1;
    var_648 = 0;
    var_656 = 4641240890982006784;
    var_664 = 0;
    var_672 = 0;
    OP_PUSH4_C 4659031209021748019, 4654265265919990170, 4607182418800017408, 4985763535029371052
    var_680 = 72;
    pri = fun_06E0(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = 4985763535029371052;
    var_696 = 8;
    pri = fun_07B0(var_688)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 4985763535029371052, 8802641224559852288
    var_736 = 48;
    pri = fun_0758(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 8802641224559852288;
    var_752 = 8;
    pri = fun_07B0(var_744)
    var_760 = 0;
    var_768 = 3;
    var_776 = 0;
    var_784 = 100;
    var_792 = -1;
    OP_PUSH2_C 739557012509643110, 4985763535029371052
    var_800 = 56;
    pri = fun_1A00(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 1;
    var_816 = 8;
    pri = fun_1B48(var_808)
    var_824 = 0;
    pri = fun_1C08()
    var_832 = 1;
    var_840 = 0;
    var_848 = 23400;
    var_856 = 8;
    var_864 = 32;
    pri = fun_02E0(var_856, var_848, var_840, var_832)
    var_872 = 0;
    pri = fun_0350()
    var_880 = 23496;
    pri = SoundPostEvent(var_880)
    var_888 = 0;
    var_896 = 1;
    var_904 = 1;
    var_912 = 0;
    var_920 = 0;
    var_928 = 0;
    var_936 = 23656;
    var_944 = 56;
    pri = fun_1C38(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 1;
    var_960 = 1;
    OP_PUSH4_C -4606957238818648883, 4658914660789203763, 4654145199250237030, 3896444167467819354
    var_968 = 48;
    pri = fun_0618(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 0;
    var_984 = 3;
    var_992 = 3896444167467819354;
    var_1000 = 24;
    pri = fun_5D98(var_992, var_984, var_976)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 3896444167467819354;
    var_1032 = 8;
    pri = fun_0950(var_1024)
    var_1040 = 1;
    var_1048 = 1;
    var_1056 = -1;
    var_1064 = -1;
    var_1072 = 0;
    var_1080 = 2;
    var_1088 = 4985763535029371052;
    var_1096 = 56;
    pri = fun_1D30(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 0;
    var_1112 = 4633444034127121613;
    var_1120 = 3;
    OP_PUSH5_C 4659208098452424622, 4635657834818950922, 4653789881072604938, 4659340039847757742, 4635233511291559608
    var_1128 = 4653397355421488906;
    var_1136 = 1;
    pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 0;
    pri = fun_1CA0()
    var_1152 = 23448;
    var_1160 = 8;
    var_1168 = 16;
    pri = fun_0280(var_1160, var_1152)
    var_1176 = 0;
    pri = fun_0350()
    var_1184 = 0;
    var_1192 = 3;
    var_1200 = 0;
    var_1208 = 100;
    var_1216 = -1;
    OP_PUSH2_C 739558112021271321, 4985763535029371052
    var_1224 = 56;
    pri = fun_1A00(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_1B48(var_1232)
    var_1248 = 0;
    pri = fun_1C08()
    var_1256 = 0;
    var_1264 = 3;
    var_1272 = 0;
    var_1280 = 100;
    var_1288 = -1;
    OP_PUSH2_C 739559211532899532, 4985763535029371052
    var_1296 = 56;
    pri = fun_1A00(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 8;
    pri = fun_1B48(var_1304)
    var_1320 = 0;
    pri = fun_1C08()
    var_1328 = 1;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 2;
    var_1360 = 4985763535029371052;
    var_1368 = 40;
    pri = fun_4068(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = 4985763535029371052;
    var_1384 = 8;
    pri = fun_0950(var_1376)
    var_1392 = 1;
    var_1400 = 1;
    var_1408 = -1;
    var_1416 = -1;
    var_1424 = 0;
    var_1432 = 32;
    var_1440 = 3896444167467819354;
    var_1448 = 56;
    pri = fun_1D30(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1456 = 60;
    var_1464 = 8;
    pri = fun_0060(var_1456)
    var_1472 = 1;
    var_1480 = 3;
    var_1488 = 0;
    var_1496 = 32;
    var_1504 = 3896444167467819354;
    var_1512 = 40;
    pri = fun_4068(var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1520 = 0;
    var_1528 = 1;
    var_1536 = 4985763535029371052;
    var_1544 = 24;
    pri = fun_5D98(var_1536, var_1528, var_1520)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_0060(var_1552)
    var_1568 = 4985763535029371052;
    var_1576 = 8;
    pri = fun_0950(var_1568)
    var_1584 = 0;
    var_1592 = 3;
    var_1600 = 0;
    var_1608 = 100;
    var_1616 = -1;
    OP_PUSH2_C 739560311044527743, 4985763535029371052
    var_1624 = 56;
    pri = fun_1A00(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1632 = 1;
    var_1640 = 8;
    pri = fun_1B48(var_1632)
    var_1648 = 0;
    pri = fun_1C08()
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C 739561410556155954, 4985763535029371052
    var_1696 = 56;
    pri = fun_1A00(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_1B48(var_1704)
    var_1720 = 0;
    pri = fun_1C08()
    var_1728 = 1;
    var_1736 = 0;
    var_1744 = 23400;
    var_1752 = 8;
    var_1760 = 32;
    pri = fun_02E0(var_1752, var_1744, var_1736, var_1728)
    var_1768 = 0;
    pri = fun_0350()
    var_1776 = 23696;
    pri = SoundPostEvent(var_1776)
    var_1784 = 1;
    var_1792 = 1;
    var_1800 = 0;
    pri = float(var_1800)
    var_1808 = pri;
    OP_PUSH3_C 4659319281068225331, 4654227882524645786, 8802641224559852288
    var_1816 = 48;
    pri = fun_0618(var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1824 = 3;
    var_1832 = 1;
    pri = EvCameraEnd(var_1832, var_1824)
    var_1840 = 0;
    var_1848 = 4985763535029371052;
    var_1856 = 16;
    pri = fun_0670(var_1848, var_1840)
    var_1864 = 0;
    var_1872 = 3896444167467819354;
    var_1880 = 16;
    pri = fun_0670(var_1872, var_1864)
    var_1888 = 30;
    var_1896 = 8;
    pri = fun_0060(var_1888)
    pri = 0;
    return pri;
}
// fun_7770
fun_7770() {
    pri = 0;
    return pri;
}
// fun_7788
fun_7788() {
    var_8 = 4985763535029371052;
    var_16 = 8;
    pri = fun_05C0(var_8)
    var_24 = 3896444167467819354;
    var_32 = 8;
    pri = fun_05C0(var_24)
    var_40 = 880;
    var_48 = 8;
    pri = fun_6530(var_40)
    var_56 = 7099240262869383700;
    var_64 = 8;
    pri = fun_0440(var_56)
    var_72 = 3469112159760161694;
    pri = VanishFlagSet(var_72)
    var_80 = 3728213071223358512;
    pri = VanishFlagReset(var_80)
    var_88 = 7116314638901664256;
    pri = VanishFlagReset(var_88)
    var_96 = 279354136510782265;
    pri = VanishFlagReset(var_96)
    var_104 = 577590369271743373;
    pri = VanishFlagReset(var_104)
    var_112 = -352066330549648574;
    pri = FlagReset(var_112)
    var_120 = 6576512089252531967;
    var_128 = 8;
    pri = fun_0408(var_120)
    pri = 0;
    return pri;
}
// fun_7950
fun_7950() {
    var_8 = 0;
    pri = fun_0470()
    var_16 = 23448;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_79C0
fun_79C0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_66C8()
    var_16 = 0;
    pri = fun_6720()
    var_24 = 0;
    pri = fun_6738()
    var_32 = 0;
    pri = fun_6750()
    var_40 = 0;
    pri = fun_7770()
    var_48 = 0;
    pri = fun_7788()
    var_56 = 0;
    pri = fun_7950()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7AB0
fun_7AB0() {
    var_8 = 0;
    pri = fun_6720()
    var_16 = 0;
    pri = fun_7788()
    pri = 0;
    return pri;
}
