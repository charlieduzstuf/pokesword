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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_03D8
fun_03D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0418
fun_0418() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0458
fun_0458() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0490
fun_0490() {
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
// fun_0508
fun_0508() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0560
fun_0560() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    OP_JZER lab_05D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D00(var_24)
    OP_JNZ lab_05D8
    pri = 0;
    return pri;
// lab_05D8
    OP_JUMP lab_05E8
// lab_05E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0648
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0648
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05E8
    pri = 0;
    return pri;
}
// fun_0688
fun_0688() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0700
fun_0700() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0780
    pri = 0;
    return pri;
// lab_0780
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07C0
// lab_07C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    OP_JNZ lab_0848
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0838
    pri = 0;
    return pri;
// lab_0848
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0890
    pri = 0;
    return pri;
// lab_0890
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0938(var_8)
    pri = 0;
    return pri;
// lab_08F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07C0
    pri = 0;
    return pri;
// lab_0838
    OP_JUMP lab_0890
}
// fun_0938
fun_0938() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09C0
    pri = 0;
    return pri;
// lab_09C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD0(var_8)
    OP_JZER lab_0AF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A18
    OP_ZERO_P_S 64
// lab_0AF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B28
    OP_CONST_S 64, 1
// lab_0B28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B60
    OP_CONST_S 72, 1
// lab_0B60
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
// lab_0A18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A40
    OP_ZERO_P_S 72
// lab_0A40
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
    OP_JUMP lab_0C00
// lab_0C00
    pri = 0;
    return pri;
}
// fun_0C10
fun_0C10() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CD0
fun_0CD0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D30
fun_0D30() {
    OP_JUMP lab_0D48
// lab_0D48
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0DD8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0DC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0738(var_8)
    pri = 0;
    return pri;
// lab_0DD8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E68
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0E58
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0738(var_8)
    pri = 0;
    return pri;
// lab_0E68
    pri = 0;
    return pri;
// lab_0E58
    OP_JUMP lab_0E78
// lab_0E78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D48
    pri = 0;
    return pri;
// lab_0DC8
    OP_JUMP lab_0E78
}
// fun_0EB8
fun_0EB8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0738(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D30(var_40)
    pri = 0;
    return pri;
}
// fun_0F40
fun_0F40() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0FA0
fun_0FA0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
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
// switch_15F0
        case default:
        {
// switch_15F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1638
// lab_1638
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
            OP_JNZ lab_16E0
            var_88 = 0;
            pri = fun_1898()
// lab_16E0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_15F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_11D8
                case default:
                {
// switch_11D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1250
// lab_1250
                    OP_JUMP lab_1638
                }
                case 0x0:
                {
// switch_11D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1250
                }
                case 0x1:
                {
// switch_11D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1250
                }
                case 0x2:
                {
// switch_11D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1250
                }
                case 0x3:
                {
// switch_11D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1250
                }
                case 0x4:
                {
// switch_11D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1250
                }
                case 0x5:
                {
// switch_11D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1250
                }
            }
        }
        case 0x65:
        {
// switch_15F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1390
                case default:
                {
// switch_1390_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1408
// lab_1408
                    OP_JUMP lab_1638
                }
                case 0x0:
                {
// switch_1390_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1408
                }
                case 0x1:
                {
// switch_1390_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1408
                }
                case 0x2:
                {
// switch_1390_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1408
                }
                case 0x3:
                {
// switch_1390_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1408
                }
                case 0x4:
                {
// switch_1390_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1408
                }
                case 0x5:
                {
// switch_1390_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1408
                }
            }
        }
        case 0x66:
        {
// switch_15F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1548
                case default:
                {
// switch_1548_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_15C0
// lab_15C0
                    OP_JUMP lab_1638
                }
                case 0x0:
                {
// switch_1548_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_15C0
                }
                case 0x1:
                {
// switch_1548_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_15C0
                }
                case 0x2:
                {
// switch_1548_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_15C0
                }
                case 0x3:
                {
// switch_1548_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_15C0
                }
                case 0x4:
                {
// switch_1548_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_15C0
                }
                case 0x5:
                {
// switch_1548_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_15C0
                }
            }
        }
    }
}
// fun_16F8
fun_16F8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0700(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_17A0
    pri = 1;
    return pri;
// lab_17A0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_17E8
fun_17E8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1838
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16F8(var_8)
    arg_2 = pri;
// lab_1838
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0FD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1898
fun_1898() {
    OP_JUMP lab_18B0
// lab_18B0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18F0
    pri = 0;
    return pri;
// lab_18F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18B0
    pri = 0;
    return pri;
}
// fun_1930
fun_1930() {
    var_8 = 0;
    pri = fun_1898()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_19E0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_19E0
    pri = 0;
    return pri;
}
// fun_19F0
fun_19F0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A20
fun_1A20() {
    OP_JUMP lab_1A38
// lab_1A38
    pri = EvCameraMoveWait_()
    OP_JZER lab_1A70
    pri = 0;
    return pri;
// lab_1A70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A38
    pri = 0;
    return pri;
}
// fun_1AB0
fun_1AB0() {
    pri = arg_6;
    OP_JNZ lab_1AE8
    var_8 = 0;
    pri = fun_0C10()
// lab_1AE8
    pri = arg_1;
    switch (pri) {
// switch_3050
        case default:
        {
// switch_3050_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_33A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_33A0
            pri = 1;
            OP_JUMP lab_33A8
// lab_33A0
            pri = 0;
// lab_33A8
            OP_JZER lab_3500
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0700(var_24, var_16)
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
            OP_JUMP lab_3560
// lab_3500
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_3560
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_35C0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3620
// lab_35C0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3620
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3620
            pri = arg_2;
            OP_JZER lab_3660
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3660
            var_8 = 0;
            pri = fun_0C50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3050_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x1:
        {
// switch_3050_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x2:
        {
// switch_3050_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x3:
        {
// switch_3050_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x4:
        {
// switch_3050_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x5:
        {
// switch_3050_case_0x5
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0x6:
        {
// switch_3050_case_0x6
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0x7:
        {
// switch_3050_case_0x7
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0x8:
        {
// switch_3050_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x9:
        {
// switch_3050_case_0x9
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0xa:
        {
// switch_3050_case_0xa
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0xb:
        {
// switch_3050_case_0xb
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0xc:
        {
// switch_3050_case_0xc
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0xd:
        {
// switch_3050_case_0xd
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0xe:
        {
// switch_3050_case_0xe
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0xf:
        {
// switch_3050_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x10:
        {
// switch_3050_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x11:
        {
// switch_3050_case_0x11
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0x12:
        {
// switch_3050_case_0x12
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0x13:
        {
// switch_3050_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x14:
        {
// switch_3050_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x15:
        {
// switch_3050_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x16:
        {
// switch_3050_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x17:
        {
// switch_3050_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x18:
        {
// switch_3050_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x19:
        {
// switch_3050_case_0x19
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
            pri = fun_0970(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3050_case_default
        }
        case 0x1a:
        {
// switch_3050_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0688(var_48, var_40)
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
            pri = fun_0970(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3050_case_default
        }
        case 0x1b:
        {
// switch_3050_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0688(var_48, var_40)
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
            pri = fun_0970(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3050_case_default
        }
        case 0x1c:
        {
// switch_3050_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0688(var_48, var_40)
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
            pri = fun_0970(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3050_case_default
        }
        case 0x1d:
        {
// switch_3050_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x1e:
        {
// switch_3050_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x1f:
        {
// switch_3050_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x20:
        {
// switch_3050_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x21:
        {
// switch_3050_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x22:
        {
// switch_3050_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x23:
        {
// switch_3050_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x24:
        {
// switch_3050_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x25:
        {
// switch_3050_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x26:
        {
// switch_3050_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x27:
        {
// switch_3050_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x28:
        {
// switch_3050_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
        case 0x29:
        {
// switch_3050_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3050_case_default
        }
    }
}
// fun_3690
fun_3690() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_38A0(var_16, var_8)
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
    OP_JZER lab_3888
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3888
    pri = 0;
    return pri;
}
// fun_38A0
fun_38A0() {
    var_8 = arg_1;
    var_16 = 8560;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_06C0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_38E8
fun_38E8() {
    pri = 8664;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3970
// lab_3970
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3AF0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3AE0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3A30
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3A30
    pri = 0;
    OP_JUMP lab_3A38
// lab_3AF0
    pri = 0;
    return pri;
// lab_3AE0
    OP_JUMP lab_3968
// lab_3968
    OP_INC_P_S -936
// lab_3A30
    pri = 1;
// lab_3A38
    OP_JZER lab_3AB0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3AA8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3AB0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3AA8
}
// fun_3B10
fun_3B10() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3BA8
    var_8 = 1;
    var_16 = 0;
    var_24 = 9584;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_0F78()
// lab_3BA8
    pri = arg_4;
    OP_JZER lab_3BE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0FA0(var_8)
// lab_3BE0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3C38
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3C38
    pri = 0;
    OP_JUMP lab_3C40
// lab_3C38
    pri = 1;
// lab_3C40
    OP_JZER lab_3D08
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_3D08
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_3CE0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0EB8(var_32, var_24)
    OP_JUMP lab_3D08
// lab_3D08
    pri = arg_2;
    OP_JZER lab_3DE0
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_3DB0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C90(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0458(var_40)
    OP_JUMP lab_3DE0
// lab_3DE0
    pri = arg_3;
    OP_JZER lab_3E18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F40(var_8)
// lab_3E18
    pri = 0;
    return pri;
// lab_3DB0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C90(var_16, var_8)
// lab_3CE0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0EB8(var_16, var_8)
}
// fun_3E28
fun_3E28() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_38E8(var_24)
    pri = 0;
    return pri;
}
// fun_3E90
fun_3E90() {
    pri = g_mode;
    switch (pri) {
// switch_3F78
        case default:
        {
// switch_3F78_case_default
            pri = CommandNOP()
            OP_JUMP lab_3FD0
// lab_3FD0
            pri = 0;
            return pri;
        }
        case 0x9472d52206274d05:
        {
// switch_3F78_case_0x9472d52206274d05
            var_8 = 0;
            pri = fun_52F8()
            OP_JUMP lab_3FD0
        }
        case 0xaa648accfbfdc42b:
        {
// switch_3F78_case_0xaa648accfbfdc42b
            var_8 = 0;
            pri = fun_5430()
            OP_JUMP lab_3FD0
        }
        case 0x0:
        {
// switch_3F78_case_0x0
            var_8 = 0;
            pri = fun_3FE0()
            OP_JUMP lab_3FD0
        }
        case 0x76a66b1e7bd5a299:
        {
// switch_3F78_case_0x76a66b1e7bd5a299
            var_8 = 0;
            pri = fun_53E8()
            OP_JUMP lab_3FD0
        }
    }
}
// fun_3FE0
fun_3FE0() {
    pri = 0;
    return pri;
}
// fun_3FF8
fun_3FF8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3B10(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4050
fun_4050() {
    pri = 0;
    return pri;
}
// fun_4068
fun_4068() {
    pri = 0;
    return pri;
}
// fun_4080
fun_4080() {
    pri = EvCameraStart()
    var_8 = 0;
    pri = float(var_8)
    var_16 = pri;
    var_24 = 4631952216750555136;
    var_32 = 3;
    OP_PUSH5_C 4677687755307200020, 4654299482721846559, 4671108646062983741, 4677762346176028344, 4655214100474295747
    var_40 = 4671118129350773309;
    var_48 = 90;
    pri = EvCameraMove(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_56 = 8802641224559852288;
    var_64 = 8;
    pri = fun_0560(var_56)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_104 = 48;
    pri = fun_0508(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_144 = 48;
    pri = fun_0508(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = -55;
    pri = float(var_160)
    var_168 = pri;
    var_176 = -8487459874493061259;
    var_184 = 24;
    pri = fun_03D8(var_176, var_168, var_160)
    var_192 = 8802641224559852288;
    var_200 = 8;
    pri = fun_0560(var_192)
    var_208 = -1655053127185566619;
    var_216 = 8;
    pri = fun_0560(var_208)
    var_224 = 1;
    var_232 = 1214016743080096326;
    var_240 = 16;
    pri = fun_0418(var_232, var_224)
    var_248 = 1;
    var_256 = 1169377006106690087;
    var_264 = 16;
    pri = fun_0418(var_256, var_248)
    var_272 = 5;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 0;
    var_296 = 2;
    var_304 = -1655053127185566619;
    var_312 = 24;
    pri = fun_3690(var_304, var_296, var_288)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C 1706400031438111114, -1655053127185566619
    var_360 = 56;
    pri = fun_17E8(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1930(var_368)
    var_384 = -1655053127185566619;
    var_392 = 8;
    pri = fun_0738(var_384)
    pri = MsgWinClose()
    var_400 = 0;
    var_408 = 0;
    var_416 = -1655053127185566619;
    var_424 = 24;
    pri = fun_3690(var_416, var_408, var_400)
    var_432 = -1655053127185566619;
    var_440 = 8;
    pri = fun_0738(var_432)
    var_448 = 15;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    OP_PUSH2_C -8487459874493061259, -1655053127185566619
    var_496 = 48;
    pri = fun_0508(var_488, var_480, var_472, var_464, var_456, var_448)
    OP_PUSH2_C -4617991057905706598, 4631952216750555136
    var_504 = 3;
    OP_PUSH5_C 4677734059865014272, 4654229861645575782, 4671060740341361541, 4677782507096113152, 4655284425238008300
    var_512 = 4671169685450999726;
    var_520 = 90;
    pri = EvCameraMove(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_528 = 15;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    var_568 = 0;
    OP_PUSH2_C -8487459874493061259, 5388264540081088874
    var_576 = 48;
    pri = fun_0508(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 1;
    var_592 = -1;
    var_600 = -1;
    var_608 = 3;
    var_616 = 0;
    var_624 = 34;
    var_632 = -8487459874493061259;
    var_640 = 56;
    pri = fun_1AB0(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 25;
    var_656 = 8;
    pri = fun_0060(var_648)
    var_664 = 9632;
    pri = SoundPostEvent(var_664)
    var_672 = -8487459874493061259;
    var_680 = 8;
    pri = fun_0738(var_672)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C 1706395633391598270, -1655053127185566619
    var_728 = 56;
    pri = fun_17E8(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_1930(var_736)
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    var_776 = 0;
    OP_PUSH2_C -8487459874493061259, 8802641224559852288
    var_784 = 48;
    pri = fun_0508(var_776, var_768, var_760, var_752, var_744, var_736)
    var_792 = 0;
    pri = fun_19F0()
    var_800 = 5388264540081088874;
    var_808 = 8;
    pri = fun_0560(var_800)
    var_816 = 8802641224559852288;
    var_824 = 8;
    pri = fun_0560(var_816)
    var_832 = 1;
    var_840 = -1;
    var_848 = -1;
    var_856 = 3;
    var_864 = 0;
    var_872 = 34;
    var_880 = -8487459874493061259;
    var_888 = 56;
    pri = fun_1AB0(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 25;
    var_904 = 8;
    pri = fun_0060(var_896)
    var_912 = 9832;
    pri = SoundPostEvent(var_912)
    var_920 = -8487459874493061259;
    var_928 = 8;
    pri = fun_0738(var_920)
    var_936 = 1;
    var_944 = -1;
    var_952 = -1;
    var_960 = 3;
    var_968 = 0;
    var_976 = 34;
    var_984 = -8487459874493061259;
    var_992 = 56;
    pri = fun_1AB0(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 15;
    var_1008 = 8;
    pri = fun_0060(var_1000)
    var_1016 = 0;
    var_1024 = 3;
    var_1032 = -1655053127185566619;
    var_1040 = 24;
    pri = fun_3690(var_1032, var_1024, var_1016)
    var_1048 = 10;
    var_1056 = 8;
    pri = fun_0060(var_1048)
    var_1064 = 10032;
    pri = SoundPostEvent(var_1064)
    var_1072 = 30;
    var_1080 = 8;
    pri = fun_0060(var_1072)
    var_1088 = 0;
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 100;
    var_1120 = -1;
    OP_PUSH2_C 1706398931926482903, -1655053127185566619
    var_1128 = 56;
    pri = fun_17E8(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1136 = 1;
    var_1144 = 8;
    pri = fun_1930(var_1136)
    var_1152 = 0;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 100;
    var_1184 = -1;
    OP_PUSH2_C 1706397832414854692, -1655053127185566619
    var_1192 = 56;
    pri = fun_17E8(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 1;
    var_1208 = 8;
    pri = fun_1930(var_1200)
    var_1216 = 0;
    pri = fun_19F0()
    var_1224 = -8487459874493061259;
    var_1232 = 8;
    pri = fun_0738(var_1224)
    var_1240 = 0;
    pri = fun_1A20()
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 0;
    var_1272 = 831;
    pri = SoundPlayPokeVoice(var_1272, var_1264, var_1256, var_1248)
    var_1280 = 0;
    var_1288 = 3;
    var_1296 = 0;
    var_1304 = 100;
    var_1312 = -1;
    OP_PUSH2_C -6174753097188864723, -8487459874493061259
    var_1320 = 56;
    pri = fun_17E8(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1328 = 1;
    var_1336 = 8;
    pri = fun_1930(var_1328)
    var_1344 = 0;
    pri = fun_19F0()
    OP_PUSH2_C -4617991057905706598, 4631952216750555136
    var_1352 = 3;
    OP_PUSH5_C 4677711383812080927, 4654516174473448653, 4671111650478506639, 4677785974680909251, 4655430968147758285
    var_1360 = 4671121133766296207;
    var_1368 = 90;
    pri = EvCameraMove(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 1;
    var_1384 = -1;
    var_1392 = -1;
    var_1400 = 3;
    var_1408 = 0;
    var_1416 = 34;
    var_1424 = -8487459874493061259;
    var_1432 = 56;
    pri = fun_1AB0(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1440 = 0;
    var_1448 = 0;
    var_1456 = -1655053127185566619;
    var_1464 = 24;
    pri = fun_3690(var_1456, var_1448, var_1440)
    var_1472 = 25;
    var_1480 = 8;
    pri = fun_0060(var_1472)
    var_1488 = 10232;
    pri = SoundPostEvent(var_1488)
    var_1496 = 15;
    var_1504 = 8;
    pri = fun_0060(var_1496)
    var_1512 = -1655053127185566619;
    var_1520 = 8;
    pri = fun_0738(var_1512)
    var_1528 = -1655053127185566619;
    var_1536 = 8;
    pri = fun_0560(var_1528)
    var_1544 = 0;
    var_1552 = 0;
    var_1560 = 0;
    var_1568 = 0;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_1576 = 48;
    pri = fun_0508(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1584 = 0;
    var_1592 = 0;
    var_1600 = 0;
    var_1608 = 0;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_1616 = 48;
    pri = fun_0508(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1624 = 0;
    var_1632 = 0;
    var_1640 = 0;
    var_1648 = 0;
    OP_PUSH2_C 8802641224559852288, 5388264540081088874
    var_1656 = 48;
    pri = fun_0508(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1664 = -1655053127185566619;
    var_1672 = 8;
    pri = fun_0560(var_1664)
    var_1680 = 0;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 100;
    var_1712 = -1;
    OP_PUSH2_C 1706396732903226481, -1655053127185566619
    var_1720 = 56;
    pri = fun_17E8(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 1;
    var_1736 = 8;
    pri = fun_1930(var_1728)
    var_1744 = 0;
    pri = fun_19F0()
    var_1752 = 5388264540081088874;
    var_1760 = 8;
    pri = fun_0560(var_1752)
    var_1768 = 1;
    var_1776 = 0;
    var_1784 = 100;
    pri = float(var_1784)
    var_1792 = pri;
    var_1800 = 0;
    var_1808 = 0;
    var_1816 = 54428;
    pri = float(var_1816)
    var_1824 = pri;
    var_1832 = 20187;
    pri = float(var_1832)
    var_1840 = pri;
    OP_PUSH2_C 4611686018427387904, -1655053127185566619
    var_1848 = 72;
    pri = fun_0490(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 15;
    var_1864 = 8;
    pri = fun_0060(var_1856)
    var_1872 = 1;
    var_1880 = 0;
    var_1888 = 100;
    pri = float(var_1888)
    var_1896 = pri;
    var_1904 = 0;
    var_1912 = 0;
    OP_PUSH4_C 4677708118262546432, 4671281747676102656, 4607182418800017408, 5388264540081088874
    var_1920 = 72;
    pri = fun_0490(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848)
    var_1928 = -1655053127185566619;
    var_1936 = 8;
    pri = fun_0560(var_1928)
    var_1944 = 5388264540081088874;
    var_1952 = 8;
    pri = fun_0560(var_1944)
    var_1960 = 3;
    var_1968 = 30;
    pri = EvCameraEnd(var_1968, var_1960)
    var_1976 = 0;
    var_1984 = 1214016743080096326;
    var_1992 = 16;
    pri = fun_0418(var_1984, var_1976)
    var_2000 = 0;
    var_2008 = 1169377006106690087;
    var_2016 = 16;
    pri = fun_0418(var_2008, var_2000)
    var_2024 = 8802641224559852288;
    var_2032 = 8;
    pri = fun_0560(var_2024)
    pri = 0;
    return pri;
}
// fun_51C0
fun_51C0() {
    pri = 0;
    return pri;
}
// fun_51D8
fun_51D8() {
    var_8 = -1655053127185566619;
    var_16 = 8;
    pri = fun_03A8(var_8)
    var_24 = 5388264540081088874;
    var_32 = 8;
    pri = fun_03A8(var_24)
    var_40 = 40;
    var_48 = 8;
    pri = fun_3E28(var_40)
    var_56 = 10;
    var_64 = -7486538135553164029;
    pri = WorkSet(var_64, var_56)
    var_72 = 51229971475200296;
    pri = VanishFlagReset(var_72)
    var_80 = -4200946985965466213;
    pri = VanishFlagReset(var_80)
    pri = 0;
    return pri;
}
// fun_52E0
fun_52E0() {
    pri = 0;
    return pri;
}
// fun_52F8
fun_52F8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_3FF8()
    var_16 = 0;
    pri = fun_4050()
    var_24 = 0;
    pri = fun_4068()
    var_32 = 0;
    pri = fun_4080()
    var_40 = 0;
    pri = fun_51C0()
    var_48 = 0;
    pri = fun_51D8()
    var_56 = 0;
    pri = fun_52E0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_53E8
fun_53E8() {
    var_8 = 0;
    pri = fun_4050()
    var_16 = 0;
    pri = fun_51D8()
    pri = 0;
    return pri;
}
// fun_5430
fun_5430() {
    var_8 = 1;
    var_16 = 0;
    pri = GetTargetFieldObjectID()
    var_24 = pri;
    pri = SoundPlayPokeVoiceFromObject(var_24, var_16, var_8)
    var_32 = 0;
    var_40 = 3;
    var_48 = 0;
    var_56 = 100;
    var_64 = -1;
    OP_PUSH2_C -6174753097188864723, -8487459874493061259
    var_72 = 56;
    pri = fun_17E8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1930(var_80)
    var_96 = 0;
    pri = fun_19F0()
    pri = 0;
    return pri;
}
