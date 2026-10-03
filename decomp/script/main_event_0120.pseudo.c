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
    pri = arg_0;
    switch (pri) {
// switch_05B0
        case default:
        {
// switch_05B0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_05B0_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x1:
        {
// switch_05B0_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x2:
        {
// switch_05B0_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x3:
        {
// switch_05B0_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x4:
        {
// switch_05B0_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x5:
        {
// switch_05B0_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x6:
        {
// switch_05B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
    }
}
// fun_0648
fun_0648() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_06B0
// lab_06B0
    var_8 = 0;
    pri = fun_07F8()
    OP_JNZ lab_06E8
    OP_JUMP lab_0718
// lab_06E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06B0
// lab_0718
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0748
// lab_0748
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0788
    pri = 0;
    return pri;
// lab_0788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0748
    pri = 0;
    return pri;
}
// fun_07C8
fun_07C8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_07F8
fun_07F8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0858
fun_0858() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08A8
fun_08A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1128(var_8)
    OP_JZER lab_0978
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1158(var_24)
    OP_JNZ lab_0978
    pri = 0;
    return pri;
// lab_0978
    OP_JUMP lab_0988
// lab_0988
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09E8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0988
    pri = 0;
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B20
    pri = 0;
    return pri;
// lab_0B20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B60
// lab_0B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1128(var_8)
    OP_JNZ lab_0BE8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BD8
    pri = 0;
    return pri;
// lab_0BE8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C30
    pri = 0;
    return pri;
// lab_0C30
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD8(var_8)
    pri = 0;
    return pri;
// lab_0C90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B60
    pri = 0;
    return pri;
// lab_0BD8
    OP_JUMP lab_0C30
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D60
    pri = 0;
    return pri;
// lab_0D60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1128(var_8)
    OP_JZER lab_0E90
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB8
    OP_ZERO_P_S 64
// lab_0E90
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC8
    OP_CONST_S 64, 1
// lab_0EC8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F00
    OP_CONST_S 72, 1
// lab_0F00
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
// lab_0DB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DE0
    OP_ZERO_P_S 72
// lab_0DE0
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
    OP_JUMP lab_0FA0
// lab_0FA0
    pri = 0;
    return pri;
}
// fun_0FB0
fun_0FB0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF0
fun_0FF0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1030
fun_1030() {
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
// fun_1090
fun_1090() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1188
fun_1188() {
    OP_JUMP lab_11A0
// lab_11A0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1230
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1220
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    pri = 0;
    return pri;
// lab_1230
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12C0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_12B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    pri = 0;
    return pri;
// lab_12C0
    pri = 0;
    return pri;
// lab_12B0
    OP_JUMP lab_12D0
// lab_12D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11A0
    pri = 0;
    return pri;
// lab_1220
    OP_JUMP lab_12D0
}
// fun_1310
fun_1310() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1188(var_40)
    pri = 0;
    return pri;
}
// fun_1398
fun_1398() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_13D0
fun_13D0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_13F8
fun_13F8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1428
fun_1428() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1460
fun_1460() {
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
// switch_1A78
        case default:
        {
// switch_1A78_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AC0
// lab_1AC0
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
            OP_JNZ lab_1B68
            var_88 = 0;
            pri = fun_1D20()
// lab_1B68
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A78_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1660
                case default:
                {
// switch_1660_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16D8
// lab_16D8
                    OP_JUMP lab_1AC0
                }
                case 0x0:
                {
// switch_1660_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_16D8
                }
                case 0x1:
                {
// switch_1660_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_16D8
                }
                case 0x2:
                {
// switch_1660_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_16D8
                }
                case 0x3:
                {
// switch_1660_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16D8
                }
                case 0x4:
                {
// switch_1660_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_16D8
                }
                case 0x5:
                {
// switch_1660_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_16D8
                }
            }
        }
        case 0x65:
        {
// switch_1A78_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1818
                case default:
                {
// switch_1818_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1890
// lab_1890
                    OP_JUMP lab_1AC0
                }
                case 0x0:
                {
// switch_1818_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1890
                }
                case 0x1:
                {
// switch_1818_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1890
                }
                case 0x2:
                {
// switch_1818_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1890
                }
                case 0x3:
                {
// switch_1818_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1890
                }
                case 0x4:
                {
// switch_1818_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1890
                }
                case 0x5:
                {
// switch_1818_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1890
                }
            }
        }
        case 0x66:
        {
// switch_1A78_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19D0
                case default:
                {
// switch_19D0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A48
// lab_1A48
                    OP_JUMP lab_1AC0
                }
                case 0x0:
                {
// switch_19D0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A48
                }
                case 0x1:
                {
// switch_19D0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A48
                }
                case 0x2:
                {
// switch_19D0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A48
                }
                case 0x3:
                {
// switch_19D0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A48
                }
                case 0x4:
                {
// switch_19D0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A48
                }
                case 0x5:
                {
// switch_19D0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A48
                }
            }
        }
    }
}
// fun_1B80
fun_1B80() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AA0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C28
    pri = 1;
    return pri;
// lab_1C28
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C70
fun_1C70() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1CC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B80(var_8)
    arg_2 = pri;
// lab_1CC0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1460(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D20
fun_1D20() {
    OP_JUMP lab_1D38
// lab_1D38
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D78
    pri = 0;
    return pri;
// lab_1D78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D38
    pri = 0;
    return pri;
}
// fun_1DB8
fun_1DB8() {
    var_8 = 0;
    pri = fun_1D20()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1E68
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1E68
    pri = 0;
    return pri;
}
// fun_1E78
fun_1E78() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
    OP_JUMP lab_1EC0
// lab_1EC0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1EF8
    pri = 0;
    return pri;
// lab_1EF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1EC0
    pri = 0;
    return pri;
}
// fun_1F38
fun_1F38() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_1F38(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2010()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2010
fun_2010() {
    OP_JUMP lab_2028
// lab_2028
    pri = IsEasingRunningDof_()
    OP_JZER lab_2080
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2090
// lab_2080
    pri = 0;
    return pri;
// lab_2090
    OP_JUMP lab_2028
    pri = 0;
    return pri;
}
// fun_20B0
fun_20B0() {
    pri = arg_6;
    OP_JNZ lab_20E8
    var_8 = 0;
    pri = fun_0FB0()
// lab_20E8
    pri = arg_1;
    switch (pri) {
// switch_3650
        case default:
        {
// switch_3650_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_39A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_39A0
            pri = 1;
            OP_JUMP lab_39A8
// lab_39A0
            pri = 0;
// lab_39A8
            OP_JZER lab_3B00
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA0(var_24, var_16)
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
            OP_JUMP lab_3B60
// lab_3B00
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
// lab_3B60
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3BC0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3C20
// lab_3BC0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3C20
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3C20
            pri = arg_2;
            OP_JZER lab_3C60
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3C60
            var_8 = 0;
            pri = fun_0FF0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3650_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x1:
        {
// switch_3650_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x2:
        {
// switch_3650_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x3:
        {
// switch_3650_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x4:
        {
// switch_3650_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x5:
        {
// switch_3650_case_0x5
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0x6:
        {
// switch_3650_case_0x6
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0x7:
        {
// switch_3650_case_0x7
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0x8:
        {
// switch_3650_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x9:
        {
// switch_3650_case_0x9
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0xa:
        {
// switch_3650_case_0xa
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0xb:
        {
// switch_3650_case_0xb
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0xc:
        {
// switch_3650_case_0xc
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0xd:
        {
// switch_3650_case_0xd
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0xe:
        {
// switch_3650_case_0xe
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0xf:
        {
// switch_3650_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x10:
        {
// switch_3650_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x11:
        {
// switch_3650_case_0x11
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0x12:
        {
// switch_3650_case_0x12
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0x13:
        {
// switch_3650_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x14:
        {
// switch_3650_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x15:
        {
// switch_3650_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x16:
        {
// switch_3650_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x17:
        {
// switch_3650_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x18:
        {
// switch_3650_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x19:
        {
// switch_3650_case_0x19
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3650_case_default
        }
        case 0x1a:
        {
// switch_3650_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0D10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3650_case_default
        }
        case 0x1b:
        {
// switch_3650_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0D10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3650_case_default
        }
        case 0x1c:
        {
// switch_3650_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0D10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3650_case_default
        }
        case 0x1d:
        {
// switch_3650_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x1e:
        {
// switch_3650_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x1f:
        {
// switch_3650_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x20:
        {
// switch_3650_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x21:
        {
// switch_3650_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x22:
        {
// switch_3650_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x23:
        {
// switch_3650_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x24:
        {
// switch_3650_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x25:
        {
// switch_3650_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x26:
        {
// switch_3650_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x27:
        {
// switch_3650_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x28:
        {
// switch_3650_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
        case 0x29:
        {
// switch_3650_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3650_case_default
        }
    }
}
// fun_3C90
fun_3C90() {
    pri = arg_5;
    OP_JNZ lab_3CC8
    var_8 = 0;
    pri = fun_0FB0()
// lab_3CC8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3D18
    OP_CONST_S -8, -1
// lab_3D18
    pri = arg_1;
    switch (pri) {
// switch_57D0
        case default:
        {
// switch_57D0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5C78
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AA0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5C78
            pri = 1;
            OP_JUMP lab_5C80
// lab_5C78
            pri = 0;
// lab_5C80
            OP_JZER lab_5CD0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5F28
// lab_5CD0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5D38
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5D38
            pri = 1;
            OP_JUMP lab_5D40
// lab_5D38
            pri = 0;
// lab_5D40
            OP_JZER lab_5EC8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA0(var_24, var_16)
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
            var_176 = 28560;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28576;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5F28
// lab_5EC8
            var_8 = 64;
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_5F28
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5F98
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5F98
            var_8 = 0;
            pri = fun_0FF0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_57D0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x1:
        {
// switch_57D0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x2:
        {
// switch_57D0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x3:
        {
// switch_57D0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x4:
        {
// switch_57D0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x5:
        {
// switch_57D0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD8(var_40)
            OP_JUMP switch_57D0_case_default
        }
        case 0x6:
        {
// switch_57D0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x7:
        {
// switch_57D0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x8:
        {
// switch_57D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x9:
        {
// switch_57D0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0xa:
        {
// switch_57D0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0xb:
        {
// switch_57D0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0xc:
        {
// switch_57D0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0xd:
        {
// switch_57D0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0xe:
        {
// switch_57D0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0xf:
        {
// switch_57D0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x10:
        {
// switch_57D0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x11:
        {
// switch_57D0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x12:
        {
// switch_57D0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x13:
        {
// switch_57D0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x14:
        {
// switch_57D0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x15:
        {
// switch_57D0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x16:
        {
// switch_57D0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x17:
        {
// switch_57D0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x18:
        {
// switch_57D0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x19:
        {
// switch_57D0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x1a:
        {
// switch_57D0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x1b:
        {
// switch_57D0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x1c:
        {
// switch_57D0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x1d:
        {
// switch_57D0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x1e:
        {
// switch_57D0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x1f:
        {
// switch_57D0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x20:
        {
// switch_57D0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x21:
        {
// switch_57D0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x22:
        {
// switch_57D0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x23:
        {
// switch_57D0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x24:
        {
// switch_57D0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x25:
        {
// switch_57D0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x26:
        {
// switch_57D0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x27:
        {
// switch_57D0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x28:
        {
// switch_57D0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x29:
        {
// switch_57D0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x2a:
        {
// switch_57D0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x2b:
        {
// switch_57D0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x2c:
        {
// switch_57D0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x2d:
        {
// switch_57D0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x2e:
        {
// switch_57D0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x2f:
        {
// switch_57D0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x30:
        {
// switch_57D0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x31:
        {
// switch_57D0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x32:
        {
// switch_57D0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x33:
        {
// switch_57D0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x34:
        {
// switch_57D0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x35:
        {
// switch_57D0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x36:
        {
// switch_57D0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x37:
        {
// switch_57D0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x38:
        {
// switch_57D0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_57D0_case_default
        }
        case 0x39:
        {
// switch_57D0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x3a:
        {
// switch_57D0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x3b:
        {
// switch_57D0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x3c:
        {
// switch_57D0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x3d:
        {
// switch_57D0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
        case 0x3e:
        {
// switch_57D0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            OP_JUMP switch_57D0_case_default
        }
    }
}
// fun_5FC8
fun_5FC8() {
    pri = arg_4;
    OP_JNZ lab_6000
    var_8 = 0;
    pri = fun_0FB0()
// lab_6000
    pri = arg_1;
    switch (pri) {
// switch_73D8
        case default:
        {
// switch_73D8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1128(var_264)
            OP_JZER lab_79A0
            pri = arg_3;
            switch (pri) {
// switch_7948
                case default:
                {
// switch_7948_case_default
                    OP_JUMP lab_7C58
// lab_7C58
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7CC8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7CC8
                    var_8 = 0;
                    pri = fun_0FF0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7948_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7948_case_default
                }
                case 0x2:
                {
// switch_7948_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7948_case_default
                }
                case 0x3:
                {
// switch_7948_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7948_case_default
                }
            }
// lab_79A0
            pri = arg_1;
            OP_JZER lab_79F0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_79F0
            pri = 0;
            OP_JUMP lab_79F8
// lab_79F0
            pri = 1;
// lab_79F8
            OP_JZER lab_7A60
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AA0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7A60
            pri = 1;
            OP_JUMP lab_7A68
// lab_7A60
            pri = 0;
// lab_7A68
            OP_JZER lab_7AB8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7C58
// lab_7AB8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7B20
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7C58
// lab_7B20
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA0(var_24, var_16)
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
            var_176 = 29984;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30000;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_73D8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x1:
        {
// switch_73D8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x2:
        {
// switch_73D8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x3:
        {
// switch_73D8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x4:
        {
// switch_73D8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x5:
        {
// switch_73D8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD8(var_40)
            OP_JUMP switch_73D8_case_default
        }
        case 0x6:
        {
// switch_73D8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x7:
        {
// switch_73D8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x8:
        {
// switch_73D8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x9:
        {
// switch_73D8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0xa:
        {
// switch_73D8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0xb:
        {
// switch_73D8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0xc:
        {
// switch_73D8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0xd:
        {
// switch_73D8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0xe:
        {
// switch_73D8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0xf:
        {
// switch_73D8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x10:
        {
// switch_73D8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x11:
        {
// switch_73D8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x12:
        {
// switch_73D8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x13:
        {
// switch_73D8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x14:
        {
// switch_73D8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x15:
        {
// switch_73D8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x16:
        {
// switch_73D8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x17:
        {
// switch_73D8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x18:
        {
// switch_73D8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x19:
        {
// switch_73D8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x1a:
        {
// switch_73D8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x1b:
        {
// switch_73D8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x1c:
        {
// switch_73D8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x1d:
        {
// switch_73D8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x1e:
        {
// switch_73D8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x1f:
        {
// switch_73D8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x20:
        {
// switch_73D8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x21:
        {
// switch_73D8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x22:
        {
// switch_73D8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x23:
        {
// switch_73D8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x24:
        {
// switch_73D8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x25:
        {
// switch_73D8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x26:
        {
// switch_73D8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x27:
        {
// switch_73D8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x28:
        {
// switch_73D8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x29:
        {
// switch_73D8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x2a:
        {
// switch_73D8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x2b:
        {
// switch_73D8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x2c:
        {
// switch_73D8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x2d:
        {
// switch_73D8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x2e:
        {
// switch_73D8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x2f:
        {
// switch_73D8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x30:
        {
// switch_73D8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x31:
        {
// switch_73D8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x32:
        {
// switch_73D8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x33:
        {
// switch_73D8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x34:
        {
// switch_73D8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x35:
        {
// switch_73D8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x36:
        {
// switch_73D8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x37:
        {
// switch_73D8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x38:
        {
// switch_73D8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x39:
        {
// switch_73D8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x3a:
        {
// switch_73D8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x3b:
        {
// switch_73D8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x3c:
        {
// switch_73D8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x3d:
        {
// switch_73D8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
        case 0x3e:
        {
// switch_73D8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            OP_JUMP switch_73D8_case_default
        }
    }
}
// fun_7CF8
fun_7CF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7F08(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_7EF0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_7EF0
    pri = 0;
    return pri;
}
// fun_7F08
fun_7F08() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A60(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7F50
fun_7F50() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8050
        case default:
        {
// switch_8050_case_default
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
// switch_8050_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8050_case_default
        }
        case 0x1:
        {
// switch_8050_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8050_case_default
        }
        case 0x2:
        {
// switch_8050_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8050_case_default
        }
        case 0x3:
        {
// switch_8050_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8050_case_default
        }
    }
}
// fun_8110
fun_8110() {
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
    pri = fun_1C70(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1D20()
    pri = 0;
    return pri;
}
// fun_81A8
fun_81A8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7F50(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8110(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8250
fun_8250() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_82A0
// lab_82A0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8318
    OP_JUMP lab_8348
// lab_8318
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_82A0
// lab_8348
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_83D0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5FC8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_13F8(var_56)
// lab_83D0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8438
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1090(var_24, var_16)
// lab_8438
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1090(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_84F8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AD8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0858(var_88, var_80, var_72, var_64, var_56)
// lab_84F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8538
    pri = 0;
    return pri;
// lab_8538
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8680
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A28(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8648
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8680
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0900(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0900(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AD8(var_40)
    pri = 0;
    return pri;
// lab_8648
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1090(var_16, var_8)
}
// fun_8708
fun_8708() {
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
    pri = fun_81A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1DB8(var_112)
    var_128 = 0;
    pri = fun_1E78()
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
    pri = fun_8250(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8880
fun_8880() {
    pri = 30528;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8908
// lab_8908
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8A88
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8A78
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_89C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_89C8
    pri = 0;
    OP_JUMP lab_89D0
// lab_8A88
    pri = 0;
    return pri;
// lab_8A78
    OP_JUMP lab_8900
// lab_8900
    OP_INC_P_S -936
// lab_89C8
    pri = 1;
// lab_89D0
    OP_JZER lab_8A48
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8A40
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8A48
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8A40
}
// fun_8AA8
fun_8AA8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8B40
    var_8 = 1;
    var_16 = 0;
    var_24 = 31448;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_13D0()
// lab_8B40
    pri = arg_4;
    OP_JZER lab_8B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_1428(var_8)
// lab_8B78
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8BD0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8BD0
    pri = 0;
    OP_JUMP lab_8BD8
// lab_8BD0
    pri = 1;
// lab_8BD8
    OP_JZER lab_8CA0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8CA0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8C78
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1310(var_32, var_24)
    OP_JUMP lab_8CA0
// lab_8CA0
    pri = arg_2;
    OP_JZER lab_8D78
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8D48
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1090(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0820(var_40)
    OP_JUMP lab_8D78
// lab_8D78
    pri = arg_3;
    OP_JZER lab_8DB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1398(var_8)
// lab_8DB0
    pri = 0;
    return pri;
// lab_8D48
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1090(var_16, var_8)
// lab_8C78
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1310(var_16, var_8)
}
// fun_8DC0
fun_8DC0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8880(var_24)
    pri = 0;
    return pri;
}
// fun_8E28
fun_8E28() {
    pri = g_mode;
    switch (pri) {
// switch_8F10
        case default:
        {
// switch_8F10_case_default
            pri = CommandNOP()
            OP_JUMP lab_8F68
// lab_8F68
            pri = 0;
            return pri;
        }
        case 0x9d2682220b17f52b:
        {
// switch_8F10_case_0x9d2682220b17f52b
            var_8 = 0;
            pri = fun_A778()
            OP_JUMP lab_8F68
        }
        case 0xcd598b5189e97897:
        {
// switch_8F10_case_0xcd598b5189e97897
            var_8 = 0;
            pri = fun_A8B0()
            OP_JUMP lab_8F68
        }
        case 0x0:
        {
// switch_8F10_case_0x0
            var_8 = 0;
            pri = fun_8F78()
            OP_JUMP lab_8F68
        }
        case 0x7fc7181e81231c9f:
        {
// switch_8F10_case_0x7fc7181e81231c9f
            var_8 = 0;
            pri = fun_A868()
            OP_JUMP lab_8F68
        }
    }
}
// fun_8F78
fun_8F78() {
    pri = 0;
    return pri;
}
// fun_8F90
fun_8F90() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8AA8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8FE8
fun_8FE8() {
    pri = 0;
    return pri;
}
// fun_9000
fun_9000() {
    pri = 0;
    return pri;
}
// fun_9018
fun_9018() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 450;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 4609434218613702656;
    var_64 = 32;
    pri = fun_1F38(var_56, var_48, var_40, var_32)
    pri = EvCameraStart()
    var_72 = 0;
    var_80 = 4629897449420567347;
    var_88 = 0;
    OP_PUSH5_C 4677431794497811907, 4651573397572403855, 4672202550181458084, 4677372211962702725, 4652754536943425946
    var_96 = 4672101914630946816;
    var_104 = 1;
    pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C -2409953949732425464, -1655053127185566619
    var_144 = 48;
    pri = fun_08A8(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 5;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    OP_PUSH2_C -1655053127185566619, -2409953949732425464
    var_200 = 48;
    pri = fun_08A8(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 100;
    var_240 = -1;
    OP_PUSH2_C 2661068269316865044, -1655053127185566619
    var_248 = 56;
    pri = fun_1C70(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = -2409953949732425464;
    var_264 = 8;
    pri = fun_0900(var_256)
    var_272 = -1655053127185566619;
    var_280 = 8;
    pri = fun_0900(var_272)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1DB8(var_288)
    var_304 = 0;
    pri = fun_1E78()
    var_312 = 0;
    var_320 = 1;
    var_328 = 305;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 4611686018427387904;
    var_352 = 32;
    pri = fun_1F38(var_344, var_336, var_328, var_320)
    var_360 = 0;
    var_368 = 2;
    var_376 = -2409953949732425464;
    var_384 = 24;
    pri = fun_7CF8(var_376, var_368, var_360)
    var_392 = 0;
    var_400 = 4629897449420567347;
    var_408 = 0;
    OP_PUSH5_C 4677369468681191424, 4652045395923975537, 4672173597291519672, 4677448750341501747, 4652204605207677501
    var_416 = 4672218487602502697;
    var_424 = 1;
    pri = EvCameraMove(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 0;
    var_440 = 3;
    var_448 = 0;
    var_456 = 100;
    var_464 = -1;
    OP_PUSH2_C 2920488183255289657, -2409953949732425464
    var_472 = 56;
    pri = fun_1C70(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 1;
    var_488 = 8;
    pri = fun_1DB8(var_480)
    var_496 = 0;
    pri = fun_1E78()
    var_504 = 31496;
    pri = SoundPostEvent(var_504)
    var_512 = 0;
    var_520 = 1;
    var_528 = 200;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 4616752568008179712;
    var_552 = 32;
    pri = fun_1F38(var_544, var_536, var_528, var_520)
    var_560 = 0;
    var_568 = 4627870829588250624;
    var_576 = 0;
    OP_PUSH5_C 4677342409700031857, 4652305452414177116, 4672151502605359514, 4677421691360342180, 4652385101036493210
    var_584 = 4672196390167563469;
    var_592 = 1;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 0;
    var_608 = 3;
    var_616 = 0;
    var_624 = 100;
    var_632 = -1;
    OP_PUSH2_C 2920484884720405024, -2409953949732425464
    var_640 = 56;
    pri = fun_1C70(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 1;
    var_656 = 8;
    pri = fun_1DB8(var_648)
    var_664 = 0;
    pri = fun_1E78()
    var_672 = 0;
    var_680 = 1;
    var_688 = 230;
    pri = float(var_688)
    var_696 = pri;
    var_704 = 4612361558371493478;
    var_712 = 32;
    pri = fun_1F38(var_704, var_696, var_688, var_680)
    var_720 = 1;
    pri = SetCascadeShadowMapLevel(var_720)
    var_728 = 0;
    var_736 = 4628968581997422182;
    var_744 = 0;
    OP_PUSH5_C 4677400704432147005, 4652262835343484518, 4672158187636056392, 4677440875089467802, 4652284737615109816
    var_752 = 4672155034786463744;
    var_760 = 1;
    pri = EvCameraMove(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 0;
    pri = fun_1EA8()
    var_776 = 0;
    var_784 = 4628968581997422182;
    var_792 = 2;
    OP_PUSH5_C 4677400734668716769, 4652262835343484518, 4672157269543847199, 4677440806369991066, 4652284781595574927
    var_800 = 4672150845647161917;
    var_808 = 180;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 1;
    var_824 = 0;
    var_832 = 15;
    var_840 = 10;
    pri = float(var_840)
    var_848 = pri;
    var_856 = -30;
    pri = float(var_856)
    var_864 = pri;
    var_872 = -2409953949732425464;
    var_880 = 48;
    pri = fun_1030(var_872, var_864, var_856, var_848, var_840, var_832)
    var_888 = 0;
    var_896 = 10;
    OP_PUSH3_C -4624296097384025292, 4604480259023595111, -2409953949732425464
    var_904 = 40;
    pri = fun_10D0(var_896, var_888, var_880, var_872, var_864)
    var_912 = 0;
    var_920 = 3;
    var_928 = 2;
    var_936 = 100;
    var_944 = -1;
    OP_PUSH2_C 2920492581301802501, -2409953949732425464
    var_952 = 56;
    pri = fun_1C70(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 0;
    var_968 = 0;
    var_976 = -2409953949732425464;
    var_984 = 24;
    pri = fun_7CF8(var_976, var_968, var_960)
    var_992 = -2409953949732425464;
    var_1000 = 8;
    pri = fun_0AD8(var_992)
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 0;
    OP_PUSH2_C 8802641224559852288, -2409953949732425464
    var_1040 = 48;
    pri = fun_08A8(var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1048 = 10;
    var_1056 = -2409953949732425464;
    var_1064 = 16;
    pri = fun_1090(var_1056, var_1048)
    var_1072 = 0;
    var_1080 = 10;
    var_1088 = -4624296097384025292;
    var_1096 = 0;
    var_1104 = -2409953949732425464;
    var_1112 = 40;
    pri = fun_10D0(var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1120 = -2409953949732425464;
    var_1128 = 8;
    pri = fun_0900(var_1120)
    var_1136 = 0;
    pri = fun_1D20()
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_1DB8(var_1144)
    var_1160 = 0;
    pri = fun_1E78()
    var_1168 = 0;
    var_1176 = 1;
    var_1184 = 550;
    pri = float(var_1184)
    var_1192 = pri;
    var_1200 = 4605380978949069210;
    var_1208 = 32;
    pri = fun_1F38(var_1200, var_1192, var_1184, var_1176)
    var_1216 = 2;
    pri = SetCascadeShadowMapLevel(var_1216)
    var_1224 = 1;
    var_1232 = 1;
    var_1240 = -1;
    var_1248 = -1;
    var_1256 = 0;
    var_1264 = 1;
    var_1272 = -2409953949732425464;
    var_1280 = 56;
    pri = fun_3C90(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1288 = 0;
    var_1296 = 4630010039411251610;
    var_1304 = 0;
    OP_PUSH5_C 4677409165174122742, 4651700413155644539, 4672180557200123494, 4677478592461469123, 4653157090140587295
    var_1312 = 4672132780671117558;
    var_1320 = 1;
    pri = EvCameraMove(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1328 = 0;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 100;
    var_1360 = -1;
    OP_PUSH2_C 2920485984232033235, -2409953949732425464
    var_1368 = 56;
    pri = fun_1C70(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1376 = 1;
    var_1384 = 8;
    pri = fun_1DB8(var_1376)
    var_1392 = 0;
    pri = fun_1E78()
    var_1400 = 1;
    var_1408 = 3;
    var_1416 = 0;
    var_1424 = 1;
    var_1432 = -2409953949732425464;
    var_1440 = 40;
    pri = fun_5FC8(var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1448 = 0;
    var_1456 = 0;
    var_1464 = 0;
    var_1472 = 0;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_1480 = 48;
    pri = fun_08A8(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1488 = -1655053127185566619;
    var_1496 = 8;
    pri = fun_0900(var_1488)
    var_1504 = 1;
    var_1512 = 1;
    var_1520 = -1;
    var_1528 = -1;
    var_1536 = 0;
    var_1544 = 8;
    var_1552 = -1655053127185566619;
    var_1560 = 56;
    pri = fun_3C90(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1568 = 1;
    var_1576 = 0;
    var_1584 = 15;
    var_1592 = 10;
    pri = float(var_1592)
    var_1600 = pri;
    var_1608 = 30;
    pri = float(var_1608)
    var_1616 = pri;
    var_1624 = -2409953949732425464;
    var_1632 = 48;
    pri = fun_1030(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1640 = 0;
    var_1648 = 10;
    OP_PUSH3_C -4624296097384025292, -4618891777831180697, -2409953949732425464
    var_1656 = 40;
    pri = fun_10D0(var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1664 = 1;
    var_1672 = 0;
    var_1680 = 15;
    var_1688 = 0;
    pri = float(var_1688)
    var_1696 = pri;
    var_1704 = -30;
    pri = float(var_1704)
    var_1712 = pri;
    var_1720 = 8802641224559852288;
    var_1728 = 48;
    pri = fun_1030(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1736 = 0;
    var_1744 = 3;
    var_1752 = 0;
    var_1760 = 100;
    var_1768 = -1;
    OP_PUSH2_C 2661071567851749677, -1655053127185566619
    var_1776 = 56;
    pri = fun_1C70(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1784 = -2409953949732425464;
    var_1792 = 8;
    pri = fun_0AD8(var_1784)
    var_1800 = 10;
    var_1808 = -2409953949732425464;
    var_1816 = 16;
    pri = fun_1090(var_1808, var_1800)
    var_1824 = 0;
    var_1832 = 10;
    var_1840 = -4624296097384025292;
    var_1848 = 0;
    var_1856 = -2409953949732425464;
    var_1864 = 40;
    pri = fun_10D0(var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1872 = 0;
    var_1880 = 0;
    var_1888 = 0;
    var_1896 = 0;
    OP_PUSH2_C -1655053127185566619, -2409953949732425464
    var_1904 = 48;
    pri = fun_08A8(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1912 = -2409953949732425464;
    var_1920 = 8;
    pri = fun_0900(var_1912)
    var_1928 = 1;
    var_1936 = 8;
    pri = fun_1DB8(var_1928)
    var_1944 = 0;
    pri = fun_1E78()
    var_1952 = 1;
    var_1960 = 3;
    var_1968 = 0;
    var_1976 = 8;
    var_1984 = -1655053127185566619;
    var_1992 = 40;
    pri = fun_5FC8(var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2000 = 1;
    var_2008 = -1;
    var_2016 = -1;
    var_2024 = 3;
    var_2032 = 0;
    var_2040 = 0;
    var_2048 = -2409953949732425464;
    var_2056 = 56;
    pri = fun_20B0(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2064 = 0;
    var_2072 = 3;
    var_2080 = 0;
    var_2088 = 100;
    var_2096 = -1;
    OP_PUSH2_C 2920491481790174290, -2409953949732425464
    var_2104 = 56;
    pri = fun_1C70(var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2112 = -1655053127185566619;
    var_2120 = 8;
    pri = fun_0AD8(var_2112)
    var_2128 = 1;
    var_2136 = 8;
    pri = fun_1DB8(var_2128)
    var_2144 = 0;
    pri = fun_1E78()
    var_2152 = 0;
    var_2160 = 0;
    var_2168 = 0;
    var_2176 = 0;
    OP_PUSH2_C -2409953949732425464, -1655053127185566619
    var_2184 = 48;
    pri = fun_08A8(var_2176, var_2168, var_2160, var_2152, var_2144, var_2136)
    var_2192 = 0;
    var_2200 = 3;
    var_2208 = 0;
    var_2216 = 100;
    var_2224 = -1;
    OP_PUSH2_C 2661070468340121466, -1655053127185566619
    var_2232 = 56;
    pri = fun_1C70(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2240 = -1655053127185566619;
    var_2248 = 8;
    pri = fun_0900(var_2240)
    var_2256 = 1;
    var_2264 = 8;
    pri = fun_1DB8(var_2256)
    var_2272 = 0;
    var_2280 = 0;
    var_2288 = 0;
    var_2296 = 0;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_2304 = 48;
    pri = fun_08A8(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2312 = 0;
    var_2320 = 3;
    var_2328 = 0;
    var_2336 = 100;
    var_2344 = -1;
    OP_PUSH2_C 2661064970781980411, -1655053127185566619
    var_2352 = 56;
    pri = fun_1C70(var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2360 = -1655053127185566619;
    var_2368 = 8;
    pri = fun_0900(var_2360)
    var_2376 = 1;
    var_2384 = 8;
    pri = fun_1DB8(var_2376)
    var_2392 = 0;
    pri = fun_1E78()
    var_2400 = 1;
    var_2408 = 0;
    var_2416 = 31448;
    var_2424 = 8;
    var_2432 = 32;
    pri = fun_02E0(var_2424, var_2416, var_2408, var_2400)
    var_2440 = 0;
    pri = fun_0350()
    var_2448 = 31656;
    pri = SoundPostEvent(var_2448)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2456 = 3;
    var_2464 = 1;
    var_2472 = 32;
    pri = fun_1F90(var_2464, var_2456, var_2448, var_2440)
    var_2480 = 8;
    var_2488 = 1;
    var_2496 = 0;
    var_2504 = 0;
    var_2512 = -2409953949732425464;
    var_2520 = 40;
    pri = fun_10D0(var_2512, var_2504, var_2496, var_2488, var_2480)
    var_2528 = -1;
    var_2536 = 8802641224559852288;
    var_2544 = 16;
    pri = fun_1090(var_2536, var_2528)
    var_2552 = 3;
    var_2560 = 1;
    pri = EvCameraEnd(var_2560, var_2552)
    pri = 0;
    return pri;
}
// fun_A548
fun_A548() {
    pri = 0;
    return pri;
}
// fun_A560
fun_A560() {
    var_8 = -2409953949732425464;
    var_16 = 8;
    pri = fun_07C8(var_8)
    var_24 = -8487459874493061259;
    var_32 = 8;
    pri = fun_07C8(var_24)
    var_40 = -5634459638772040499;
    var_48 = 8;
    pri = fun_0648(var_40)
    var_56 = 7750031198002937679;
    var_64 = 8;
    pri = fun_07C8(var_56)
    var_72 = 130;
    var_80 = 8;
    pri = fun_8DC0(var_72)
    var_88 = 10;
    var_96 = -7486538135553164029;
    pri = WorkSet(var_96, var_88)
    var_104 = 20;
    var_112 = 1035182135066420537;
    pri = WorkSet(var_112, var_104)
    var_120 = 3;
    var_128 = 8;
    pri = fun_0408(var_120)
    pri = 0;
    return pri;
}
// fun_A6B8
fun_A6B8() {
    var_8 = 0;
    pri = fun_0678()
    OP_PUSH2_C -1655053127185566619, 1820661225807384408
    pri = SetBamiriInfoToChara(var_8, var_0)
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 31816;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0280(var_40, var_32)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_A778
fun_A778() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8F90()
    var_16 = 0;
    pri = fun_8FE8()
    var_24 = 0;
    pri = fun_9000()
    var_32 = 0;
    pri = fun_9018()
    var_40 = 0;
    pri = fun_A548()
    var_48 = 0;
    pri = fun_A560()
    var_56 = 0;
    pri = fun_A6B8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A868
fun_A868() {
    var_8 = 0;
    pri = fun_8FE8()
    var_16 = 0;
    pri = fun_A560()
    pri = 0;
    return pri;
}
// fun_A8B0
fun_A8B0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4541763725310747568;
    var_88 = 80;
    pri = fun_8708(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
