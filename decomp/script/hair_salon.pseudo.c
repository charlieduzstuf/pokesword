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
    pri = arg_0;
    OP_JZER lab_02F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03D0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0440()
// lab_02F0
    pri = CallReloadPlayer()
    pri = arg_1;
    OP_JZER lab_0360
    var_8 = 80;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0370(var_16, var_8)
    var_32 = 0;
    pri = fun_0440()
// lab_0360
    pri = 0;
    return pri;
}
// fun_0370
fun_0370() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03D0
fun_03D0() {
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
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = FadeWait_()
    OP_JZER lab_0490
    pri = 0;
    return pri;
// lab_0490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0458
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0500
fun_0500() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0548
// lab_0548
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0588
    OP_JUMP lab_05F8
// lab_0588
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05C8
    OP_JUMP lab_05F8
// lab_05C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0548
// lab_05F8
    pri = 0;
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveDynamicCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveStaticCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06E8
fun_06E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0728
fun_0728() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JZER lab_07F0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E88(var_24)
    OP_JNZ lab_07F0
    pri = 0;
    return pri;
// lab_07F0
    OP_JUMP lab_0800
// lab_0800
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0860
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0860
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0800
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09D8
    pri = 0;
    return pri;
// lab_09D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A18
// lab_0A18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JNZ lab_0AA0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A90
    pri = 0;
    return pri;
// lab_0AA0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AE8
    pri = 0;
    return pri;
// lab_0AE8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B90(var_8)
    pri = 0;
    return pri;
// lab_0B48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A18
    pri = 0;
    return pri;
// lab_0A90
    OP_JUMP lab_0AE8
}
// fun_0B90
fun_0B90() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BC8
fun_0BC8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C08
fun_0C08() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CA0
fun_0CA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CE0
fun_0CE0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0D08
// lab_0D08
    var_8 = arg_0;
    pri = IsFinishFieldObjectLookAt_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D58
    pri = 0;
    return pri;
// lab_0D58
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D98
    pri = 0;
    return pri;
// lab_0D98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D08
    pri = 0;
    return pri;
}
// fun_0DE0
fun_0DE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E88
fun_0E88() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0EE8
fun_0EE8() {
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
// switch_1500
        case default:
        {
// switch_1500_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1548
// lab_1548
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
            OP_JNZ lab_15F0
            var_88 = 0;
            pri = fun_1860()
// lab_15F0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1500_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_10E8
                case default:
                {
// switch_10E8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1160
// lab_1160
                    OP_JUMP lab_1548
                }
                case 0x0:
                {
// switch_10E8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1160
                }
                case 0x1:
                {
// switch_10E8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1160
                }
                case 0x2:
                {
// switch_10E8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1160
                }
                case 0x3:
                {
// switch_10E8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1160
                }
                case 0x4:
                {
// switch_10E8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1160
                }
                case 0x5:
                {
// switch_10E8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1160
                }
            }
        }
        case 0x65:
        {
// switch_1500_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_12A0
                case default:
                {
// switch_12A0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1318
// lab_1318
                    OP_JUMP lab_1548
                }
                case 0x0:
                {
// switch_12A0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1318
                }
                case 0x1:
                {
// switch_12A0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1318
                }
                case 0x2:
                {
// switch_12A0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1318
                }
                case 0x3:
                {
// switch_12A0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1318
                }
                case 0x4:
                {
// switch_12A0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1318
                }
                case 0x5:
                {
// switch_12A0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1318
                }
            }
        }
        case 0x66:
        {
// switch_1500_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1458
                case default:
                {
// switch_1458_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14D0
// lab_14D0
                    OP_JUMP lab_1548
                }
                case 0x0:
                {
// switch_1458_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_14D0
                }
                case 0x1:
                {
// switch_1458_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_14D0
                }
                case 0x2:
                {
// switch_1458_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_14D0
                }
                case 0x3:
                {
// switch_1458_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14D0
                }
                case 0x4:
                {
// switch_1458_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_14D0
                }
                case 0x5:
                {
// switch_1458_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_14D0
                }
            }
        }
    }
}
// fun_1608
fun_1608() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0EE8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    pri = 128;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 208;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0958(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1718
    pri = 1;
    return pri;
// lab_1718
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1760
fun_1760() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_17B0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1670(var_8)
    arg_2 = pri;
// lab_17B0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0EE8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1810
fun_1810() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1608(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1860
fun_1860() {
    OP_JUMP lab_1878
// lab_1878
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18B8
    pri = 0;
    return pri;
// lab_18B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1878
    pri = 0;
    return pri;
}
// fun_18F8
fun_18F8() {
    var_8 = 0;
    pri = fun_1860()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_19A8
    var_32 = 256;
    pri = SoundPostEvent(var_32)
// lab_19A8
    pri = 0;
    return pri;
}
// fun_19B8
fun_19B8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_19E8
fun_19E8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1A18
// lab_1A18
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A58
    OP_JUMP lab_1A88
// lab_1A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A18
// lab_1A88
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
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
// fun_1B40
fun_1B40() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1BB8()
    return pri;
}
// fun_1BB8
fun_1BB8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1BF8
fun_1BF8() {
    OP_JUMP lab_1C10
// lab_1C10
    pri = EvCameraMoveWait_()
    OP_JZER lab_1C48
    pri = 0;
    return pri;
// lab_1C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C10
    pri = 0;
    return pri;
}
// fun_1C88
fun_1C88() {
    var_8 = arg_0;
    pri = ConsumePocketMoney_(var_8)
    return pri;
}
// fun_1CB8
fun_1CB8() {
    pri = GetPocketMoney_()
    return pri;
}
// fun_1CE0
fun_1CE0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D70(var_8)
    var_24 = arg_0;
    pri = OpenWalletWindow_(var_24)
    pri = 0;
    return pri;
}
// fun_1D38
fun_1D38() {
    var_8 = 0;
    pri = CloseWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_1D70
fun_1D70() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_1DA8
fun_1DA8() {
    pri = arg_4;
    OP_JNZ lab_1DE0
    var_8 = 0;
    pri = fun_0BC8()
// lab_1DE0
    pri = arg_1;
    switch (pri) {
// switch_31B8
        case default:
        {
// switch_31B8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 952;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E58(var_264)
            OP_JZER lab_3780
            pri = arg_3;
            switch (pri) {
// switch_3728
                case default:
                {
// switch_3728_case_default
                    OP_JUMP lab_3A38
// lab_3A38
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3AA8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3AA8
                    var_8 = 0;
                    pri = fun_0C08()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3728_case_0x1
                    var_8 = 32;
                    var_16 = 1104;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3728_case_default
                }
                case 0x2:
                {
// switch_3728_case_0x2
                    var_8 = 32;
                    var_16 = 1208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3728_case_default
                }
                case 0x3:
                {
// switch_3728_case_0x3
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3728_case_default
                }
            }
// lab_3780
            pri = arg_1;
            OP_JZER lab_37D0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_37D0
            pri = 0;
            OP_JUMP lab_37D8
// lab_37D0
            pri = 1;
// lab_37D8
            OP_JZER lab_3840
            var_8 = 1304;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0958(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3840
            pri = 1;
            OP_JUMP lab_3848
// lab_3840
            pri = 0;
// lab_3848
            OP_JZER lab_3898
            var_8 = 32;
            var_16 = 1400;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3A38
// lab_3898
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3900
            var_8 = 32;
            var_16 = 1560;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3A38
// lab_3900
            var_16 = 1680;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0958(var_24, var_16)
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
            var_176 = 1784;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1800;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_31B8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x1:
        {
// switch_31B8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x2:
        {
// switch_31B8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x3:
        {
// switch_31B8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x4:
        {
// switch_31B8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x5:
        {
// switch_31B8_case_0x5
            var_8 = 1;
            var_16 = 432;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0918(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B90(var_40)
            OP_JUMP switch_31B8_case_default
        }
        case 0x6:
        {
// switch_31B8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x7:
        {
// switch_31B8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x8:
        {
// switch_31B8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x9:
        {
// switch_31B8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0xa:
        {
// switch_31B8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0xb:
        {
// switch_31B8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0xc:
        {
// switch_31B8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0xd:
        {
// switch_31B8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0xe:
        {
// switch_31B8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0xf:
        {
// switch_31B8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x10:
        {
// switch_31B8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x11:
        {
// switch_31B8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x12:
        {
// switch_31B8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x13:
        {
// switch_31B8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x14:
        {
// switch_31B8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x15:
        {
// switch_31B8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x16:
        {
// switch_31B8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x17:
        {
// switch_31B8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x18:
        {
// switch_31B8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x19:
        {
// switch_31B8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x1a:
        {
// switch_31B8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x1b:
        {
// switch_31B8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x1c:
        {
// switch_31B8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x1d:
        {
// switch_31B8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x1e:
        {
// switch_31B8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x1f:
        {
// switch_31B8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x20:
        {
// switch_31B8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x21:
        {
// switch_31B8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x22:
        {
// switch_31B8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x23:
        {
// switch_31B8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x24:
        {
// switch_31B8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x25:
        {
// switch_31B8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x26:
        {
// switch_31B8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x27:
        {
// switch_31B8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x28:
        {
// switch_31B8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x29:
        {
// switch_31B8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x2a:
        {
// switch_31B8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x2b:
        {
// switch_31B8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x2c:
        {
// switch_31B8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x2d:
        {
// switch_31B8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x2e:
        {
// switch_31B8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x2f:
        {
// switch_31B8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x30:
        {
// switch_31B8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x31:
        {
// switch_31B8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x32:
        {
// switch_31B8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x33:
        {
// switch_31B8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x34:
        {
// switch_31B8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x35:
        {
// switch_31B8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x36:
        {
// switch_31B8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x37:
        {
// switch_31B8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x38:
        {
// switch_31B8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x39:
        {
// switch_31B8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x3a:
        {
// switch_31B8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x3b:
        {
// switch_31B8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x3c:
        {
// switch_31B8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x3d:
        {
// switch_31B8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
        case 0x3e:
        {
// switch_31B8_case_0x3e
            var_8 = 3;
            var_16 = 848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0918(var_24, var_16, var_8)
            OP_JUMP switch_31B8_case_default
        }
    }
}
// fun_3AD8
fun_3AD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3CE8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 1848;
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
    var_424 = 1904;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 1920;
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
    OP_JZER lab_3CD0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3CD0
    pri = 0;
    return pri;
}
// fun_3CE8
fun_3CE8() {
    var_8 = arg_1;
    var_16 = 1968;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0918(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3D30
fun_3D30() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3E30
        case default:
        {
// switch_3E30_case_default
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
// switch_3E30_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3E30_case_default
        }
        case 0x1:
        {
// switch_3E30_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3E30_case_default
        }
        case 0x2:
        {
// switch_3E30_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3E30_case_default
        }
        case 0x3:
        {
// switch_3E30_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3E30_case_default
        }
    }
}
// fun_3EF0
fun_3EF0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3F40
// lab_3F40
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 2072;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3FB8
    OP_JUMP lab_3FE8
// lab_3FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3F40
// lab_3FE8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_4070
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1DA8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0EB8(var_56)
// lab_4070
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_40D8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CA0(var_24, var_16)
// lab_40D8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0CA0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_4198
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0990(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0728(var_88, var_80, var_72, var_64, var_56)
// lab_4198
    pri = IsPlayerRideBicycle()
    OP_JZER lab_41D8
    pri = 0;
    return pri;
// lab_41D8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4320
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 2192;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_08A0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_42E8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_4320
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0778(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0778(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0990(var_40)
    pri = 0;
    return pri;
// lab_42E8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CA0(var_16, var_8)
}
// fun_43A8
fun_43A8() {
    pri = g_mode;
    switch (pri) {
// switch_4440
        case default:
        {
// switch_4440_case_default
            pri = CommandNOP()
            OP_JUMP lab_4478
// lab_4478
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4440_case_0x0
            var_8 = 0;
            pri = fun_4488()
            OP_JUMP lab_4478
        }
        case 0x1180b6dbf4d57be1:
        {
// switch_4440_case_0x1180b6dbf4d57be1
            var_8 = 0;
            pri = fun_44A0()
            OP_JUMP lab_4478
        }
    }
}
// fun_4488
fun_4488() {
    pri = 0;
    return pri;
}
// fun_44A0
fun_44A0() {
    pri = PlayerGetZoneID()
    var_8 = pri;
    OP_ZERO_P_S -16
    pri = var_8;
    OP_EQ_C_PRI -7010196735300122920
    OP_JZER lab_4520
    OP_CONST_S -16, 2911297555628436054
// lab_4520
    pri = var_8;
    OP_EQ_C_PRI -8832434792532981598
    OP_JZER lab_4560
    OP_CONST_S -16, -7478315012171402957
// lab_4560
    pri = var_16;
    OP_JZER lab_45A0
    var_8 = 1;
    var_16 = var_16;
    var_24 = 16;
    pri = fun_06E8(var_16, var_8)
// lab_45A0
    pri = GetTargetFieldObjectID()
    var_24 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 1;
    var_56 = var_24;
    var_64 = 48;
    pri = fun_3D30(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 5;
    var_80 = var_24;
    var_88 = 16;
    pri = fun_0DE0(var_80, var_72)
    var_96 = 9010327285021969031;
    pri = FlagGet(var_96)
    OP_JNZ lab_46D8
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    var_144 = 2055511006346577300;
    var_152 = var_24;
    var_160 = 56;
    pri = fun_1760(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    OP_JUMP lab_4730
// lab_46D8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2052677564881245228;
    var_56 = var_24;
    var_64 = 56;
    pri = fun_1760(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_4730
    var_8 = 0;
    var_16 = 8;
    pri = fun_1CE0(var_8)
    OP_CONST_S -32, 3000
    OP_CONST_S -40, 1000
    var_40 = 1;
    var_48 = 4;
    var_56 = var_32;
    var_64 = 0;
    pri = WordSetNumber(var_64, var_56, var_48, var_40)
    var_72 = 0;
    var_80 = -1171048738297576899;
    var_88 = 0;
    var_96 = 24;
    pri = fun_19E8(var_88, var_80, var_72)
    var_104 = 1;
    var_112 = 4;
    var_120 = var_40;
    var_128 = 0;
    pri = WordSetNumber(var_128, var_120, var_112, var_104)
    var_136 = 0;
    var_144 = -1171052036832461532;
    var_152 = 1;
    var_160 = 24;
    pri = fun_19E8(var_152, var_144, var_136)
    var_168 = 0;
    var_176 = -1171054235855717954;
    var_184 = 2;
    var_192 = 24;
    pri = fun_19E8(var_184, var_176, var_168)
    var_208 = 0;
    var_216 = 1;
    var_224 = 0;
    var_232 = 1;
    var_240 = 32;
    pri = fun_1AD0(var_232, var_224, var_216, var_208)
    var_48 = pri;
    pri = var_48;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4960
    var_248 = 0;
    pri = fun_1D38()
    var_256 = var_24;
    var_264 = 8;
    pri = fun_5FD8(var_256)
    pri = 0;
    return pri;
// lab_4960
    OP_ZERO_P_S -56
    pri = var_48;
    OP_JNZ lab_49A8
    pri = var_32;
    var_56 = pri;
    OP_JUMP lab_49D8
// lab_49A8
    pri = var_48;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_49D8
    pri = var_40;
    var_56 = pri;
// lab_49D8
    var_8 = 0;
    pri = fun_1CB8()
    OP_LOAD_P_S_ALT -56
    OP_JSGEQ lab_4AD0
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 2055507707811692667;
    var_64 = var_24;
    var_72 = 56;
    pri = fun_1760(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_18F8(var_80)
    var_96 = 0;
    pri = fun_1D38()
    var_104 = var_24;
    var_112 = 8;
    pri = fun_5FD8(var_104)
    pri = 0;
    return pri;
// lab_4AD0
    var_8 = var_56;
    var_16 = 8;
    pri = fun_1C88(var_8)
    var_24 = 0;
    var_32 = 8;
    pri = fun_1D70(var_24)
    var_40 = 2328;
    pri = SoundPostEvent(var_40)
    var_48 = 10;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 0;
    var_72 = 8;
    pri = fun_0500(var_64)
    var_80 = 0;
    pri = fun_1D38()
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = 2055509906834949089;
    var_136 = var_24;
    var_144 = 56;
    pri = fun_1760(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_18F8(var_152)
    var_168 = 0;
    pri = fun_19B8()
    var_176 = 1;
    var_184 = 0;
    var_192 = 32;
    var_200 = 8;
    var_208 = 32;
    pri = fun_03D0(var_200, var_192, var_184, var_176)
    var_216 = 0;
    pri = fun_0440()
    var_232 = 10;
    pri = GetPlayerDressupParts(var_232)
    var_64 = pri;
    var_248 = 7;
    pri = GetPlayerDressupParts(var_248)
    var_72 = pri;
    var_264 = 6;
    pri = GetPlayerDressupParts(var_264)
    var_80 = pri;
    var_272 = 10;
    pri = SetPlayerNoDressupParts(var_272)
    var_280 = 7;
    pri = SetPlayerNoDressupParts(var_280)
    var_288 = 6;
    pri = SetPlayerNoDressupParts(var_288)
    var_296 = 0;
    var_304 = 0;
    var_312 = 16;
    pri = fun_0280(var_304, var_296)
    var_320 = 0;
    var_328 = 8802641224559852288;
    var_336 = 16;
    pri = fun_0668(var_328, var_320)
    var_344 = 0;
    var_352 = 8802641224559852288;
    var_360 = 16;
    pri = fun_06A8(var_352, var_344)
    var_368 = 1;
    var_376 = 8;
    pri = fun_0060(var_368)
    var_384 = 1;
    var_392 = 1;
    var_400 = 268;
    pri = float(var_400)
    var_408 = pri;
    var_416 = 1223;
    pri = float(var_416)
    var_424 = pri;
    var_432 = 517;
    pri = float(var_432)
    var_440 = pri;
    var_448 = 8802641224559852288;
    var_456 = 48;
    pri = fun_0610(var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = var_24;
    pri = GetFieldObjectPositionX_(var_472)
    var_88 = pri;
    var_488 = var_24;
    pri = GetFieldObjectPositionZ_(var_488)
    var_96 = pri;
    var_496 = 1;
    var_504 = 1;
    var_512 = 250;
    pri = float(var_512)
    var_520 = pri;
    var_528 = 1264;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 626;
    pri = float(var_544)
    var_552 = pri;
    var_560 = var_24;
    var_568 = 48;
    pri = fun_0610(var_560, var_552, var_544, var_536, var_528, var_520)
    var_576 = 1;
    var_584 = 1;
    var_592 = var_24;
    var_600 = 24;
    pri = fun_3AD8(var_592, var_584, var_576)
    var_608 = 1;
    var_616 = var_24;
    var_624 = 16;
    pri = fun_0CA0(var_616, var_608)
    var_632 = var_24;
    var_640 = 8;
    pri = fun_0CE0(var_632)
    var_648 = 0;
    var_656 = -4616189618054758400;
    var_664 = 3;
    OP_PUSH5_C 4653094330016873841, 4635462913397578793, 4649185170355944161, 4653446305679157494, 4637896968258684191
    var_672 = 4646364967011163832;
    var_680 = 1;
    pri = EvCameraMove(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = 0;
    pri = fun_1BF8()
    var_696 = 1;
    var_704 = 2520;
    var_712 = 8802641224559852288;
    var_720 = 24;
    pri = fun_08D8(var_712, var_704, var_696)
    var_728 = 2592;
    var_736 = 8802641224559852288;
    pri = WaitAnimationState_(var_736, var_728)
    var_744 = 80;
    var_752 = 8;
    var_760 = 16;
    pri = fun_0370(var_752, var_744)
    var_768 = 0;
    pri = fun_0440()
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    var_816 = 2054518147346491992;
    var_824 = var_24;
    var_832 = 56;
    pri = fun_1760(var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_840 = 1;
    var_848 = 8;
    pri = fun_18F8(var_840)
    var_856 = 0;
    pri = fun_19B8()
    pri = var_48;
    OP_JNZ lab_5268
    var_864 = 0;
    pri = CallHairSalon(var_864)
    var_872 = 46;
    var_880 = 8;
    pri = fun_04D0(var_872)
    OP_JUMP lab_5288
// lab_5268
    var_8 = 1;
    pri = CallHairSalon(var_8)
// lab_5288
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03D0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0440()
    var_56 = 0;
    var_64 = -4616189618054758400;
    var_72 = 3;
    var_80 = 1222;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 97;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 507;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 1222;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 97;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 487;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 1;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    pri = fun_1BF8()
    var_192 = 0;
    var_200 = 0;
    var_208 = 16;
    pri = fun_0280(var_200, var_192)
    var_216 = 1;
    var_224 = 2752;
    var_232 = 8802641224559852288;
    var_240 = 24;
    pri = fun_08D8(var_232, var_224, var_216)
    var_248 = 2824;
    var_256 = 8802641224559852288;
    pri = WaitAnimationState_(var_256, var_248)
    pri = var_48;
    OP_JNZ lab_54F8
    var_264 = 2984;
    pri = SoundPostEvent(var_264)
    OP_JUMP lab_5518
// lab_54F8
    var_8 = 3160;
    pri = SoundPostEvent(var_8)
// lab_5518
    var_8 = 0;
    var_16 = 8;
    pri = fun_0500(var_8)
    var_24 = 80;
    var_32 = 30;
    var_40 = 16;
    pri = fun_0370(var_32, var_24)
    var_48 = 0;
    pri = fun_0440()
    pri = var_48;
    OP_JNZ lab_5610
    var_56 = 0;
    var_64 = -4616189618054758400;
    var_72 = 3;
    OP_PUSH5_C 4653223632584300298, 4636804845349046845, 4647849747513312543, 4653314496225219707, 4636996248333210092
    var_80 = 4647558069068696125;
    var_88 = 150;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_5610
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2053678120462728013;
    var_56 = var_24;
    var_64 = 56;
    pri = fun_1760(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_18F8(var_72)
    pri = var_72;
    var_96 = pri;
    var_104 = 3320;
    pri = GetFnvHash64(var_104)
    OP_POP_ALT 
    OP_NEQ 
    var_104 = pri;
    pri = var_48;
    OP_JNZ lab_5A20
    pri = var_104;
    OP_JZER lab_5A10
    pri = IsCanWearHat()
    OP_JZER lab_5998
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    var_152 = 2052679763904501650;
    var_160 = var_24;
    var_168 = 56;
    pri = fun_1760(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 0;
    var_184 = -5186995451944658310;
    var_192 = 1;
    var_200 = 24;
    pri = fun_19E8(var_192, var_184, var_176)
    var_208 = 0;
    var_216 = -5186996551456286521;
    var_224 = 0;
    var_232 = 24;
    pri = fun_19E8(var_224, var_216, var_208)
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 1;
    var_280 = 32;
    pri = fun_1AD0(var_272, var_264, var_256, var_248)
    var_112 = pri;
    pri = var_112;
    OP_JZER lab_5908
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    var_328 = 2052680863416129861;
    var_336 = var_24;
    var_344 = 56;
    pri = fun_1760(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 1;
    var_360 = 8;
    pri = fun_18F8(var_352)
    var_368 = var_72;
    var_376 = 7;
    pri = SetPlayerDressupPartsHash(var_376, var_368)
    OP_JUMP lab_5980
// lab_5A20
    var_8 = var_72;
    var_16 = 7;
    pri = SetPlayerDressupPartsHash(var_16, var_8)
// lab_5A10
    OP_JUMP lab_5A48
// lab_5A48
    var_8 = 0;
    pri = fun_19B8()
    var_16 = 1;
    var_24 = 0;
    var_32 = 32;
    var_40 = 8;
    var_48 = 32;
    pri = fun_03D0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0440()
    var_64 = var_64;
    var_72 = 10;
    pri = SetPlayerDressupPartsHash(var_72, var_64)
    var_80 = var_80;
    var_88 = 6;
    pri = SetPlayerDressupPartsHash(var_88, var_80)
    var_96 = 0;
    var_104 = 0;
    var_112 = 16;
    pri = fun_0280(var_104, var_96)
    var_120 = 1;
    var_128 = 8802641224559852288;
    var_136 = 16;
    pri = fun_0668(var_128, var_120)
    var_144 = 1;
    var_152 = 8802641224559852288;
    var_160 = 16;
    pri = fun_06A8(var_152, var_144)
    var_168 = 1;
    var_176 = 1;
    var_184 = 180;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 1492;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 1130;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 8802641224559852288;
    var_240 = 48;
    pri = fun_0610(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 1;
    var_256 = 1;
    var_264 = 0;
    pri = float(var_264)
    var_272 = pri;
    var_280 = var_96;
    var_288 = var_88;
    var_296 = var_24;
    var_304 = 48;
    pri = fun_0610(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 1;
    var_320 = 0;
    var_328 = var_24;
    var_336 = 24;
    pri = fun_3AD8(var_328, var_320, var_312)
    var_344 = 1;
    var_352 = 1;
    var_360 = 1;
    var_368 = var_24;
    var_376 = 8802641224559852288;
    var_384 = 40;
    pri = fun_0C48(var_376, var_368, var_360, var_352, var_344)
    var_392 = 1;
    var_400 = 1;
    var_408 = 1;
    var_416 = 8802641224559852288;
    var_424 = var_24;
    var_432 = 40;
    pri = fun_0C48(var_424, var_416, var_408, var_400, var_392)
    var_440 = 8802641224559852288;
    var_448 = 8;
    pri = fun_0CE0(var_440)
    var_456 = var_24;
    var_464 = 8;
    pri = fun_0CE0(var_456)
    var_472 = 3;
    var_480 = 1;
    pri = EvCameraEnd(var_480, var_472)
    var_488 = 1;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 80;
    var_512 = 8;
    var_520 = 16;
    pri = fun_0370(var_512, var_504)
    var_528 = 0;
    pri = fun_0440()
    var_536 = 3;
    var_544 = 0;
    var_552 = 2052674266346360595;
    var_560 = 24;
    pri = fun_1810(var_552, var_544, var_536)
    var_568 = 0;
    var_576 = 0;
    var_584 = 1;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    var_616 = 48;
    pri = fun_1B40(var_608, var_600, var_592, var_584, var_576, var_568)
    OP_JZER lab_5F18
    pri = UpdateCardData()
    var_624 = 3360;
    pri = SoundPostEvent(var_624)
    var_632 = 0;
    var_640 = 8;
    pri = fun_0500(var_632)
// lab_5F18
    var_8 = 0;
    pri = fun_19B8()
    var_16 = var_24;
    var_24 = 8;
    pri = fun_5FD8(var_16)
    pri = var_16;
    OP_JZER lab_5F90
    var_32 = 0;
    var_40 = var_16;
    var_48 = 16;
    pri = fun_06E8(var_40, var_32)
// lab_5F90
    var_8 = 0;
    var_16 = 0;
    var_24 = 3536;
    pri = PokeMemoryCheckParty(var_24, var_16, var_8)
    pri = 0;
    return pri;
// lab_5998
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2052678664392873439;
    var_56 = var_24;
    var_64 = 56;
    pri = fun_1760(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_18F8(var_72)
// lab_5908
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2052673166834732384;
    var_56 = var_24;
    var_64 = 56;
    pri = fun_1760(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_18F8(var_72)
// lab_5980
    OP_JUMP lab_5A10
}
// fun_5FD8
fun_5FD8() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2055513205369833722;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1760(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_18F8(var_72)
    var_88 = 0;
    pri = fun_19B8()
    var_96 = arg_0;
    var_104 = 8;
    pri = fun_0E20(var_96)
    var_112 = -1;
    var_120 = 0;
    var_128 = 0;
    var_136 = arg_0;
    var_144 = 32;
    pri = fun_3EF0(var_136, var_128, var_120, var_112)
    pri = 0;
    return pri;
}
