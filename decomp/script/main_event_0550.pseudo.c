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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_02F0
fun_02F0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0328
// lab_0328
    var_8 = 0;
    pri = fun_0470()
    OP_JNZ lab_0360
    OP_JUMP lab_0390
// lab_0360
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0328
// lab_0390
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_03C0
// lab_03C0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0400
    pri = 0;
    return pri;
// lab_0400
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0470
fun_0470() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0498
fun_0498() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04F0
fun_04F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0528
fun_0528() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0568
fun_0568() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_05A0
fun_05A0() {
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
// fun_0618
fun_0618() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C88(var_8)
    OP_JZER lab_06E0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0CB8(var_24)
    OP_JNZ lab_06E0
    pri = 0;
    return pri;
// lab_06E0
    OP_JUMP lab_06F0
// lab_06F0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0750
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0750
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06F0
    pri = 0;
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0850
    pri = 0;
    return pri;
// lab_0850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0890
// lab_0890
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C88(var_8)
    OP_JNZ lab_0918
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0908
    pri = 0;
    return pri;
// lab_0918
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0960
    pri = 0;
    return pri;
// lab_0960
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A08(var_8)
    pri = 0;
    return pri;
// lab_09C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0890
    pri = 0;
    return pri;
// lab_0908
    OP_JUMP lab_0960
}
// fun_0A08
fun_0A08() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A40
fun_0A40() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A98
fun_0A98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B90
fun_0B90() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0AD8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0B50(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B18(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B90(var_24)
    pri = 0;
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0CE8
fun_0CE8() {
    OP_JUMP lab_0D00
// lab_0D00
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0D90
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0D80
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0808(var_8)
    pri = 0;
    return pri;
// lab_0D90
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E20
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0E10
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0808(var_8)
    pri = 0;
    return pri;
// lab_0E20
    pri = 0;
    return pri;
// lab_0E10
    OP_JUMP lab_0E30
// lab_0E30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D00
    pri = 0;
    return pri;
// lab_0D80
    OP_JUMP lab_0E30
}
// fun_0E70
fun_0E70() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0808(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0CE8(var_40)
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0F30
fun_0F30() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0F90
fun_0F90() {
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
// switch_15A8
        case default:
        {
// switch_15A8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_15F0
// lab_15F0
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
            OP_JNZ lab_1698
            var_88 = 0;
            pri = fun_1908()
// lab_1698
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_15A8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1190
                case default:
                {
// switch_1190_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1208
// lab_1208
                    OP_JUMP lab_15F0
                }
                case 0x0:
                {
// switch_1190_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1208
                }
                case 0x1:
                {
// switch_1190_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1208
                }
                case 0x2:
                {
// switch_1190_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1208
                }
                case 0x3:
                {
// switch_1190_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1208
                }
                case 0x4:
                {
// switch_1190_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1208
                }
                case 0x5:
                {
// switch_1190_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1208
                }
            }
        }
        case 0x65:
        {
// switch_15A8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1348
                case default:
                {
// switch_1348_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_13C0
// lab_13C0
                    OP_JUMP lab_15F0
                }
                case 0x0:
                {
// switch_1348_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_13C0
                }
                case 0x1:
                {
// switch_1348_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_13C0
                }
                case 0x2:
                {
// switch_1348_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_13C0
                }
                case 0x3:
                {
// switch_1348_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_13C0
                }
                case 0x4:
                {
// switch_1348_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_13C0
                }
                case 0x5:
                {
// switch_1348_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_13C0
                }
            }
        }
        case 0x66:
        {
// switch_15A8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1500
                case default:
                {
// switch_1500_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1578
// lab_1578
                    OP_JUMP lab_15F0
                }
                case 0x0:
                {
// switch_1500_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1578
                }
                case 0x1:
                {
// switch_1500_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1578
                }
                case 0x2:
                {
// switch_1500_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1578
                }
                case 0x3:
                {
// switch_1500_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1578
                }
                case 0x4:
                {
// switch_1500_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1578
                }
                case 0x5:
                {
// switch_1500_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1578
                }
            }
        }
    }
}
// fun_16B0
fun_16B0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0F90(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1718
fun_1718() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_07D0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_17C0
    pri = 1;
    return pri;
// lab_17C0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1808
fun_1808() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1858
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1718(var_8)
    arg_2 = pri;
// lab_1858
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0F90(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_16B0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1908
fun_1908() {
    OP_JUMP lab_1920
// lab_1920
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1960
    pri = 0;
    return pri;
// lab_1960
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1920
    pri = 0;
    return pri;
}
// fun_19A0
fun_19A0() {
    var_8 = 0;
    pri = fun_1908()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A50
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1A50
    pri = 0;
    return pri;
}
// fun_1A60
fun_1A60() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A90
fun_1A90() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1AC0
// lab_1AC0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B00
    OP_JUMP lab_1B30
// lab_1B00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AC0
// lab_1B30
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B78
fun_1B78() {
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
// fun_1BE8
fun_1BE8() {
    OP_JUMP lab_1C00
// lab_1C00
    pri = EvCameraMoveWait_()
    OP_JZER lab_1C38
    pri = 0;
    return pri;
// lab_1C38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C00
    pri = 0;
    return pri;
}
// fun_1C78
fun_1C78() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1E88(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 336;
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
    var_424 = 392;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 408;
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
    OP_JZER lab_1E70
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_1E70
    pri = 0;
    return pri;
}
// fun_1E88
fun_1E88() {
    var_8 = arg_1;
    var_16 = 456;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0790(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1ED0
fun_1ED0() {
    pri = 560;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_1F58
// lab_1F58
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_20D8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_20C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_2018
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_2018
    pri = 0;
    OP_JUMP lab_2020
// lab_20D8
    pri = 0;
    return pri;
// lab_20C8
    OP_JUMP lab_1F50
// lab_1F50
    OP_INC_P_S -936
// lab_2018
    pri = 1;
// lab_2020
    OP_JZER lab_2098
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_2090
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_2098
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_2090
}
// fun_20F8
fun_20F8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_2190
    var_8 = 1;
    var_16 = 0;
    var_24 = 1480;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0F30()
// lab_2190
    pri = arg_4;
    OP_JZER lab_21C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F58(var_8)
// lab_21C8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_2220
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_2220
    pri = 0;
    OP_JUMP lab_2228
// lab_2220
    pri = 1;
// lab_2228
    OP_JZER lab_22F0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_22F0
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_22C8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0E70(var_32, var_24)
    OP_JUMP lab_22F0
// lab_22F0
    pri = arg_2;
    OP_JZER lab_23C8
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_2398
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0A98(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0568(var_40)
    OP_JUMP lab_23C8
// lab_23C8
    pri = arg_3;
    OP_JZER lab_2400
    var_8 = 1;
    var_16 = 8;
    pri = fun_0EF8(var_8)
// lab_2400
    pri = 0;
    return pri;
// lab_2398
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0A98(var_16, var_8)
// lab_22C8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0E70(var_16, var_8)
}
// fun_2410
fun_2410() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1ED0(var_24)
    pri = 0;
    return pri;
}
// fun_2478
fun_2478() {
    pri = g_mode;
    switch (pri) {
// switch_2538
        case default:
        {
// switch_2538_case_default
            pri = CommandNOP()
            OP_JUMP lab_2580
// lab_2580
            pri = 0;
            return pri;
        }
        case 0xbfb4a4221ea3b9b8:
        {
// switch_2538_case_0xbfb4a4221ea3b9b8
            var_8 = 0;
            pri = fun_41F8()
            OP_JUMP lab_2580
        }
        case 0x0:
        {
// switch_2538_case_0x0
            var_8 = 0;
            pri = fun_2590()
            OP_JUMP lab_2580
        }
        case 0x5d91721e6de2a09c:
        {
// switch_2538_case_0x5d91721e6de2a09c
            var_8 = 0;
            pri = fun_4300()
            OP_JUMP lab_2580
        }
    }
}
// fun_2590
fun_2590() {
    pri = 0;
    return pri;
}
// fun_25A8
fun_25A8() {
    pri = 0;
    return pri;
}
// fun_25C0
fun_25C0() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_20F8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2618
fun_2618() {
    var_8 = 2149647299146444625;
    var_16 = 8;
    pri = fun_02C0(var_8)
    pri = 0;
    return pri;
}
// fun_2658
fun_2658() {
    var_8 = 0;
    pri = fun_02F0()
    pri = 0;
    return pri;
}
// fun_2688
fun_2688() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0528(var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587971751639515136, 4667181668816125952, 4667606080304447488, 2149647299146444625
    var_48 = 48;
    pri = fun_0498(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C 8927517690453293048, 2149647299146444625
    var_112 = 56;
    pri = fun_1808(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_19A0(var_120)
    var_136 = 0;
    pri = fun_1A60()
    var_144 = 0;
    var_152 = 1;
    var_160 = 0;
    var_168 = 831;
    pri = SoundPlayPokeVoice(var_168, var_160, var_152, var_144)
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = 1323168639326853441;
    var_208 = 32;
    pri = fun_16B0(var_200, var_192, var_184, var_176)
    var_216 = 1;
    var_224 = 8;
    pri = fun_19A0(var_216)
    var_232 = 20;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 8367471676757782360;
    var_256 = 8;
    pri = fun_02C0(var_248)
    var_264 = 0;
    pri = fun_02F0()
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C -4587099179211712102, 4667236644397514752, 4666903492374298624, 8367471676757782360
    var_288 = 48;
    pri = fun_0498(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 8367471676757782360;
    var_304 = 8;
    pri = fun_0A08(var_296)
    var_312 = 1;
    var_320 = 0;
    var_328 = 30;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 0;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 0;
    OP_PUSH4_C 4667236644397514752, 4666424105304588288, 4607182418800017408, 8367471676757782360
    var_368 = 72;
    pri = fun_05A0(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 76;
    pri = float(var_400)
    var_408 = pri;
    var_416 = 8802641224559852288;
    var_424 = 40;
    pri = fun_0618(var_416, var_408, var_400, var_392, var_384)
    var_432 = 8802641224559852288;
    var_440 = 8;
    pri = fun_0668(var_432)
    var_448 = 1;
    var_456 = 0;
    var_464 = 30;
    pri = float(var_464)
    var_472 = pri;
    var_480 = -100;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 1;
    OP_PUSH4_C 4667283923397509120, 4666614320816193536, 4611686018427387904, 2149647299146444625
    var_504 = 72;
    pri = fun_05A0(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 15;
    var_520 = 8;
    pri = fun_0060(var_512)
    var_528 = 0;
    pri = fun_1A60()
    var_536 = 10;
    var_544 = 8;
    pri = fun_0060(var_536)
    var_552 = 0;
    var_560 = 8802641224559852288;
    var_568 = 16;
    pri = fun_04F0(var_560, var_552)
    var_576 = 1;
    var_584 = 8;
    pri = fun_0F58(var_576)
    var_592 = 0;
    var_600 = 4629939670667073946;
    var_608 = 0;
    OP_PUSH5_C 4667243191989258158, 4646513972826960036, 4666287771360302203, 4667243939657165046, 4646551444183234642
    var_616 = 4666276864204954665;
    var_624 = 1;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    pri = fun_1BE8()
    var_640 = 0;
    var_648 = 4629939670667073946;
    var_656 = 3;
    OP_PUSH5_C 4667237232636235612, 4646215785273507185, 4666374566808198840, 4667237980304142500, 4646253256629781791
    var_664 = 4666363659652851302;
    var_672 = 63;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 0;
    pri = fun_1BE8()
    var_688 = 0;
    pri = fun_1A60()
    var_696 = 1;
    var_704 = 0;
    var_712 = 1528;
    var_720 = 2;
    var_728 = 32;
    pri = fun_0198(var_720, var_712, var_704, var_696)
    var_736 = 1576;
    pri = SoundPostEvent(var_736)
    OP_PUSH2_C 4630727800601863782, 4629939670667073946
    var_744 = 3;
    OP_PUSH5_C 4667244956705420739, 4646368309526512271, 4666322658864251535, 4667245704373327626, 4646351772871630520
    var_752 = 4666311702230880748;
    var_760 = 3;
    pri = EvCameraMove(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 0;
    pri = fun_0208()
    var_776 = 1712;
    var_784 = 1;
    var_792 = 16;
    pri = fun_0138(var_784, var_776)
    var_800 = 0;
    pri = fun_1BE8()
    var_808 = 1;
    var_816 = 1;
    OP_PUSH4_C 4637729490647541350, 4667402670653308928, 4666167204412758426, 8802641224559852288
    var_824 = 48;
    pri = fun_0498(var_816, var_808, var_800, var_792, var_784, var_776)
    var_832 = 3;
    var_840 = 0;
    var_848 = 8927520988988177681;
    var_856 = 24;
    pri = fun_18B8(var_848, var_840, var_832)
    var_864 = 1;
    var_872 = 8;
    pri = fun_19A0(var_864)
    var_880 = 0;
    pri = fun_1A60()
    var_888 = 30;
    var_896 = 8;
    pri = fun_0060(var_888)
    var_904 = 1;
    var_912 = 0;
    var_920 = 1480;
    var_928 = 8;
    var_936 = 32;
    pri = fun_0198(var_928, var_920, var_912, var_904)
    var_944 = 0;
    pri = fun_0208()
    var_952 = 8367471676757782360;
    var_960 = 8;
    pri = fun_0668(var_952)
    var_968 = 2149647299146444625;
    var_976 = 8;
    pri = fun_0668(var_968)
    var_984 = 1;
    var_992 = 1;
    OP_PUSH4_C 4637729490647541350, 4667183483010311782, 4666279189672047411, 8802641224559852288
    var_1000 = 48;
    pri = fun_0498(var_992, var_984, var_976, var_968, var_960, var_952)
    var_1008 = 1;
    var_1016 = 1;
    OP_PUSH4_C -4589491716513752678, 4667149233223106560, 4666429602862727168, 2149647299146444625
    var_1024 = 48;
    pri = fun_0498(var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1032 = 1;
    var_1040 = 1;
    OP_PUSH4_C -4588323595360403456, 4667175621502173184, 4666352637048782848, 8367471676757782360
    var_1048 = 48;
    pri = fun_0498(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1056 = 1;
    var_1064 = 8802641224559852288;
    var_1072 = 16;
    pri = fun_04F0(var_1064, var_1056)
    var_1080 = 0;
    var_1088 = 4628715254518382592;
    var_1096 = 0;
    OP_PUSH5_C 4667040645454747402, 4646676700547870884, 4666414545050984776, 4667368772709824594, 4646305857266054595
    var_1104 = 4666218562600891843;
    var_1112 = 1;
    pri = EvCameraMove(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 0;
    pri = fun_1BE8()
    var_1128 = 0;
    var_1136 = 4628715254518382592;
    var_1144 = 3;
    OP_PUSH5_C 4667035708647538688, 4646676700547870884, 4666405759953078845, 4667378563860869939, 4646304273969310597
    var_1152 = 4666236874967052452;
    var_1160 = 210;
    pri = EvCameraMove(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1168 = 30;
    var_1176 = 8;
    pri = fun_0060(var_1168)
    var_1184 = 1760;
    var_1192 = 8;
    var_1200 = 16;
    pri = fun_0138(var_1192, var_1184)
    var_1208 = 0;
    pri = fun_0208()
    var_1216 = 8802641224559852288;
    var_1224 = 8;
    pri = fun_0808(var_1216)
    var_1232 = 30;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 0;
    var_1256 = 3;
    var_1264 = 0;
    var_1272 = 100;
    var_1280 = -1;
    OP_PUSH2_C -8899902550322517651, 2149647299146444625
    var_1288 = 56;
    pri = fun_1808(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1296 = 1;
    var_1304 = 8;
    pri = fun_19A0(var_1296)
    var_1312 = 0;
    pri = fun_1A60()
    var_1320 = 0;
    var_1328 = 2;
    var_1336 = 2149647299146444625;
    var_1344 = 24;
    pri = fun_1C78(var_1336, var_1328, var_1320)
    var_1352 = 1;
    var_1360 = 8;
    pri = fun_0060(var_1352)
    var_1368 = 2149647299146444625;
    var_1376 = 8;
    pri = fun_0808(var_1368)
    var_1384 = 0;
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = 100;
    var_1416 = -1;
    OP_PUSH2_C -8899905848857402284, 2149647299146444625
    var_1424 = 56;
    pri = fun_1808(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1432 = 1;
    var_1440 = 8;
    pri = fun_19A0(var_1432)
    var_1448 = 0;
    var_1456 = 8763710866764506307;
    var_1464 = 0;
    var_1472 = 24;
    pri = fun_1A90(var_1464, var_1456, var_1448)
    var_1480 = 0;
    var_1488 = 8763711966276134518;
    var_1496 = 1;
    var_1504 = 24;
    pri = fun_1A90(var_1496, var_1488, var_1480)
    var_1520 = 0;
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 1;
    var_1552 = 32;
    pri = fun_1B78(var_1544, var_1536, var_1528, var_1520)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_3640
        case default:
        {
// switch_3640_case_default
            var_8 = 0;
            var_16 = 0;
            var_24 = 2149647299146444625;
            var_32 = 24;
            pri = fun_1C78(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = 2149647299146444625;
            var_64 = 8;
            pri = fun_0808(var_56)
            var_72 = 0;
            var_80 = 4628715254518382592;
            var_88 = 0;
            OP_PUSH5_C 4667083097598695834, 4646987906318996603, 4666480449777953669, 4667229338142748180, 4647284686497565901
            var_96 = 4666344440189597778;
            var_104 = 1;
            pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            pri = fun_1BE8()
            var_120 = 0;
            var_128 = 4628715254518382592;
            var_136 = 3;
            OP_PUSH5_C 4667082998642649334, 4647082552279915561, 4666480543236442030, 4667215467803563786, 4647351360882674237
            var_144 = 4666357337460991590;
            var_152 = 60;
            pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_160 = 15;
            var_168 = 8;
            pri = fun_0060(var_160)
            var_176 = 5;
            var_184 = 5;
            var_192 = 2149647299146444625;
            var_200 = 24;
            pri = fun_0BC8(var_192, var_184, var_176)
            var_208 = 0;
            var_216 = 3;
            var_224 = 0;
            var_232 = 100;
            var_240 = -1;
            OP_PUSH2_C -8899906948369030495, 2149647299146444625
            var_248 = 56;
            pri = fun_1808(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
            var_256 = 1;
            var_264 = 8;
            pri = fun_19A0(var_256)
            var_272 = 0;
            pri = fun_1A60()
            var_280 = 0;
            var_288 = 4628715254518382592;
            var_296 = 0;
            OP_PUSH5_C 4667035708647538688, 4646676700547870884, 4666405759953078845, 4667378563860869939, 4646304273969310597
            var_304 = 4666236874967052452;
            var_312 = 1;
            pri = EvCameraMove(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
            var_320 = 0;
            pri = fun_1BE8()
            var_328 = 0;
            var_336 = 1;
            var_344 = 2149647299146444625;
            var_352 = 24;
            pri = fun_1C78(var_344, var_336, var_328)
            var_360 = 1;
            var_368 = 8;
            pri = fun_0060(var_360)
            var_376 = 2149647299146444625;
            var_384 = 8;
            pri = fun_0808(var_376)
            var_392 = 2;
            var_400 = 2;
            var_408 = 2149647299146444625;
            var_416 = 24;
            pri = fun_0BC8(var_408, var_400, var_392)
            var_424 = 0;
            var_432 = 3;
            var_440 = 0;
            var_448 = 100;
            var_456 = -1;
            OP_PUSH2_C -8899910246903915128, 2149647299146444625
            var_464 = 56;
            pri = fun_1808(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
            var_472 = 1;
            var_480 = 8;
            pri = fun_19A0(var_472)
            var_488 = 0;
            pri = fun_1A60()
            var_496 = 0;
            var_504 = 0;
            var_512 = 2149647299146444625;
            var_520 = 24;
            pri = fun_1C78(var_512, var_504, var_496)
            var_528 = 1;
            var_536 = 8;
            pri = fun_0060(var_528)
            var_544 = 2149647299146444625;
            var_552 = 8;
            pri = fun_0808(var_544)
            var_560 = 1;
            var_568 = 1;
            var_576 = 50;
            OP_PUSH2_C 8367471676757782360, 2149647299146444625
            var_584 = 40;
            pri = fun_0A40(var_576, var_568, var_560, var_552, var_544)
            var_592 = 2149647299146444625;
            var_600 = 8;
            pri = fun_0C30(var_592)
            var_608 = 0;
            var_616 = 3;
            var_624 = 0;
            var_632 = 100;
            var_640 = -1;
            OP_PUSH2_C -8899909147392286917, 2149647299146444625
            var_648 = 56;
            pri = fun_1808(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
            var_656 = 1;
            var_664 = 8;
            pri = fun_19A0(var_656)
            var_672 = 0;
            pri = fun_1A60()
            var_680 = 0;
            var_688 = 0;
            var_696 = 0;
            var_704 = 831;
            pri = SoundPlayPokeVoice(var_704, var_696, var_688, var_680)
            var_712 = 0;
            var_720 = 3;
            var_728 = 0;
            var_736 = 100;
            var_744 = -1;
            OP_PUSH2_C 1323165340791968808, 8367471676757782360
            var_752 = 56;
            pri = fun_1808(var_744, var_736, var_728, var_720, var_712, var_704, var_696)
            var_760 = 1;
            var_768 = 8;
            pri = fun_19A0(var_760)
            var_776 = 0;
            pri = fun_1A60()
            var_784 = -1;
            var_792 = 2149647299146444625;
            var_800 = 16;
            pri = fun_0A98(var_792, var_784)
            var_808 = 1;
            var_816 = 0;
            var_824 = 4641240890982006784;
            var_832 = 0;
            var_840 = 0;
            OP_PUSH4_C 4666869407513837568, 4666518663304577024, 4607182418800017408, 2149647299146444625
            var_848 = 72;
            pri = fun_05A0(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776)
            var_856 = 1;
            var_864 = 0;
            var_872 = 300;
            pri = float(var_872)
            var_880 = pri;
            var_888 = 0;
            pri = float(var_888)
            var_896 = pri;
            var_904 = 0;
            OP_PUSH4_C 4667087660571951104, 4666378475572035584, 4602678819172646912, 8367471676757782360
            var_912 = 72;
            pri = fun_05A0(var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840)
            var_920 = 120;
            var_928 = 8;
            pri = fun_0060(var_920)
            var_936 = 1;
            var_944 = 0;
            var_952 = 1480;
            var_960 = 8;
            var_968 = 32;
            pri = fun_0198(var_960, var_952, var_944, var_936)
            var_976 = 0;
            pri = fun_0208()
            var_984 = 3;
            var_992 = 1;
            pri = EvCameraEnd(var_992, var_984)
            var_1000 = 0;
            var_1008 = 8802641224559852288;
            var_1016 = 16;
            pri = fun_0528(var_1008, var_1000)
            var_1024 = 1;
            var_1032 = 1;
            OP_PUSH4_C 4639428895819431936, 4667090370868113572, 4666377106680059003, 8802641224559852288
            var_1040 = 48;
            pri = fun_0498(var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
            var_1048 = 2149647299146444625;
            var_1056 = 8;
            pri = fun_0668(var_1048)
            var_1064 = 8367471676757782360;
            var_1072 = 8;
            pri = fun_0668(var_1064)
            var_1080 = 0;
            var_1088 = 2149647299146444625;
            var_1096 = 16;
            pri = fun_04F0(var_1088, var_1080)
            var_1104 = 0;
            var_1112 = 8367471676757782360;
            var_1120 = 16;
            pri = fun_04F0(var_1112, var_1104)
            var_1128 = 15;
            var_1136 = 8;
            pri = fun_0060(var_1128)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3640_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -8899904749345774073, 2149647299146444625
            var_48 = 56;
            pri = fun_1808(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_19A0(var_56)
            var_72 = 0;
            pri = fun_1A60()
            OP_JUMP switch_3640_case_default
        }
        case 0x1:
        {
// switch_3640_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -8899908047880658706, 2149647299146444625
            var_48 = 56;
            pri = fun_1808(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_19A0(var_56)
            var_72 = 0;
            pri = fun_1A60()
            OP_JUMP switch_3640_case_default
        }
    }
}
// fun_4068
fun_4068() {
    pri = 0;
    return pri;
}
// fun_4080
fun_4080() {
    var_8 = 7983844220748856187;
    var_16 = 8;
    pri = fun_02C0(var_8)
    var_24 = 8367471676757782360;
    var_32 = 8;
    pri = fun_0440(var_24)
    var_40 = 2149647299146444625;
    var_48 = 8;
    pri = fun_0440(var_40)
    var_56 = 560;
    var_64 = 8;
    pri = fun_2410(var_56)
    var_72 = 10;
    var_80 = 1053005715797944393;
    pri = WorkSet(var_80, var_72)
    var_88 = 6184071265140786515;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_4188
fun_4188() {
    var_8 = 0;
    pri = fun_02F0()
    var_16 = 1760;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    var_40 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_41F8
fun_41F8() {
    var_8 = 0;
    pri = fun_25A8()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_25C0()
    var_24 = 0;
    pri = fun_2618()
    var_32 = 0;
    pri = fun_2658()
    var_40 = 0;
    pri = fun_2688()
    var_48 = 0;
    pri = fun_4068()
    var_56 = 0;
    pri = fun_4080()
    var_64 = 0;
    pri = fun_4188()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_4300
fun_4300() {
    var_8 = 0;
    pri = fun_2618()
    var_16 = 0;
    pri = fun_4080()
    pri = 0;
    return pri;
}
