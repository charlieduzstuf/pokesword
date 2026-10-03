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
// fun_04C8
fun_04C8() {
    pri = arg_0;
    switch (pri) {
// switch_0670
        case default:
        {
// switch_0670_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0670_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0670_case_default
        }
        case 0x1:
        {
// switch_0670_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0670_case_default
        }
        case 0x2:
        {
// switch_0670_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0670_case_default
        }
        case 0x3:
        {
// switch_0670_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0670_case_default
        }
        case 0x4:
        {
// switch_0670_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0670_case_default
        }
        case 0x5:
        {
// switch_0670_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0670_case_default
        }
        case 0x6:
        {
// switch_0670_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0670_case_default
        }
    }
}
// fun_0708
fun_0708() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0770
// lab_0770
    var_8 = 0;
    pri = fun_08B8()
    OP_JNZ lab_07A8
    OP_JUMP lab_07D8
// lab_07A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0770
// lab_07D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0808
// lab_0808
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0848
    pri = 0;
    return pri;
// lab_0848
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0808
    pri = 0;
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09B0
fun_09B0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09E8
fun_09E8() {
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
// fun_0A60
fun_0A60() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B60
fun_0B60() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15A8(var_8)
    OP_JZER lab_0BD8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15D8(var_24)
    OP_JNZ lab_0BD8
    pri = 0;
    return pri;
// lab_0BD8
    OP_JUMP lab_0BE8
// lab_0BE8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C48
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BE8
    pri = 0;
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D80
    pri = 0;
    return pri;
// lab_0D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DC0
// lab_0DC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15A8(var_8)
    OP_JNZ lab_0E48
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E38
    pri = 0;
    return pri;
// lab_0E48
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E90
    pri = 0;
    return pri;
// lab_0E90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1060(var_8)
    pri = 0;
    return pri;
// lab_0EF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DC0
    pri = 0;
    return pri;
// lab_0E38
    OP_JUMP lab_0E90
}
// fun_0F38
fun_0F38() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0F80
// lab_0F80
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FD8
    pri = 0;
    return pri;
// lab_0FD8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1018
    pri = 0;
    return pri;
// lab_1018
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F80
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10E8
    pri = 0;
    return pri;
// lab_10E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15A8(var_8)
    OP_JZER lab_1218
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1140
    OP_ZERO_P_S 64
// lab_1218
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1250
    OP_CONST_S 64, 1
// lab_1250
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1288
    OP_CONST_S 72, 1
// lab_1288
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
// lab_1140
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1168
    OP_ZERO_P_S 72
// lab_1168
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
    OP_JUMP lab_1328
// lab_1328
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B8
fun_13B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F8
fun_13F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1438
fun_1438() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14B0
fun_14B0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_13F8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1470(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1438(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14B0(var_24)
    pri = 0;
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_15D8
fun_15D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1608
fun_1608() {
    OP_JUMP lab_1620
// lab_1620
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_16B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_16A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D38(var_8)
    pri = 0;
    return pri;
// lab_16B0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1740
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1730
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D38(var_8)
    pri = 0;
    return pri;
// lab_1740
    pri = 0;
    return pri;
// lab_1730
    OP_JUMP lab_1750
// lab_1750
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1620
    pri = 0;
    return pri;
// lab_16A0
    OP_JUMP lab_1750
}
// fun_1790
fun_1790() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D38(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1608(var_40)
    pri = 0;
    return pri;
}
// fun_1818
fun_1818() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1878
fun_1878() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_18B0
fun_18B0() {
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
// switch_1EC8
        case default:
        {
// switch_1EC8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1F10
// lab_1F10
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
            OP_JNZ lab_1FB8
            var_88 = 0;
            pri = fun_2170()
// lab_1FB8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1EC8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1AB0
                case default:
                {
// switch_1AB0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B28
// lab_1B28
                    OP_JUMP lab_1F10
                }
                case 0x0:
                {
// switch_1AB0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B28
                }
                case 0x1:
                {
// switch_1AB0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B28
                }
                case 0x2:
                {
// switch_1AB0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B28
                }
                case 0x3:
                {
// switch_1AB0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B28
                }
                case 0x4:
                {
// switch_1AB0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B28
                }
                case 0x5:
                {
// switch_1AB0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B28
                }
            }
        }
        case 0x65:
        {
// switch_1EC8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1C68
                case default:
                {
// switch_1C68_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CE0
// lab_1CE0
                    OP_JUMP lab_1F10
                }
                case 0x0:
                {
// switch_1C68_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1CE0
                }
                case 0x1:
                {
// switch_1C68_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1CE0
                }
                case 0x2:
                {
// switch_1C68_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1CE0
                }
                case 0x3:
                {
// switch_1C68_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CE0
                }
                case 0x4:
                {
// switch_1C68_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1CE0
                }
                case 0x5:
                {
// switch_1C68_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1CE0
                }
            }
        }
        case 0x66:
        {
// switch_1EC8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E20
                case default:
                {
// switch_1E20_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E98
// lab_1E98
                    OP_JUMP lab_1F10
                }
                case 0x0:
                {
// switch_1E20_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E98
                }
                case 0x1:
                {
// switch_1E20_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E98
                }
                case 0x2:
                {
// switch_1E20_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E98
                }
                case 0x3:
                {
// switch_1E20_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E98
                }
                case 0x4:
                {
// switch_1E20_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E98
                }
                case 0x5:
                {
// switch_1E20_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E98
                }
            }
        }
    }
}
// fun_1FD0
fun_1FD0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D00(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2078
    pri = 1;
    return pri;
// lab_2078
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_20C0
fun_20C0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2110
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    arg_2 = pri;
// lab_2110
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_18B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2170
fun_2170() {
    OP_JUMP lab_2188
// lab_2188
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21C8
    pri = 0;
    return pri;
// lab_21C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2188
    pri = 0;
    return pri;
}
// fun_2208
fun_2208() {
    var_8 = 0;
    pri = fun_2170()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_22B8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_22B8
    pri = 0;
    return pri;
}
// fun_22C8
fun_22C8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_22F8
fun_22F8() {
    OP_JUMP lab_2310
// lab_2310
    pri = EvCameraMoveWait_()
    OP_JZER lab_2348
    pri = 0;
    return pri;
// lab_2348
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2310
    pri = 0;
    return pri;
}
// fun_2388
fun_2388() {
    pri = arg_6;
    OP_JNZ lab_23C0
    var_8 = 0;
    pri = fun_1338()
// lab_23C0
    pri = arg_1;
    switch (pri) {
// switch_3928
        case default:
        {
// switch_3928_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C78
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C78
            pri = 1;
            OP_JUMP lab_3C80
// lab_3C78
            pri = 0;
// lab_3C80
            OP_JZER lab_3DD8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D00(var_24, var_16)
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
            OP_JUMP lab_3E38
// lab_3DD8
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
// lab_3E38
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E98
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3EF8
// lab_3E98
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3EF8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3EF8
            pri = arg_2;
            OP_JZER lab_3F38
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F38
            var_8 = 0;
            pri = fun_1378()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3928_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x1:
        {
// switch_3928_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x2:
        {
// switch_3928_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x3:
        {
// switch_3928_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x4:
        {
// switch_3928_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x5:
        {
// switch_3928_case_0x5
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0x6:
        {
// switch_3928_case_0x6
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0x7:
        {
// switch_3928_case_0x7
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0x8:
        {
// switch_3928_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x9:
        {
// switch_3928_case_0x9
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0xa:
        {
// switch_3928_case_0xa
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0xb:
        {
// switch_3928_case_0xb
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0xc:
        {
// switch_3928_case_0xc
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0xd:
        {
// switch_3928_case_0xd
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0xe:
        {
// switch_3928_case_0xe
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0xf:
        {
// switch_3928_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x10:
        {
// switch_3928_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x11:
        {
// switch_3928_case_0x11
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0x12:
        {
// switch_3928_case_0x12
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0x13:
        {
// switch_3928_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x14:
        {
// switch_3928_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x15:
        {
// switch_3928_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x16:
        {
// switch_3928_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x17:
        {
// switch_3928_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x18:
        {
// switch_3928_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x19:
        {
// switch_3928_case_0x19
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3928_case_default
        }
        case 0x1a:
        {
// switch_3928_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C88(var_48, var_40)
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
            pri = fun_1098(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3928_case_default
        }
        case 0x1b:
        {
// switch_3928_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C88(var_48, var_40)
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
            pri = fun_1098(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3928_case_default
        }
        case 0x1c:
        {
// switch_3928_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C88(var_48, var_40)
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
            pri = fun_1098(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3928_case_default
        }
        case 0x1d:
        {
// switch_3928_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x1e:
        {
// switch_3928_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x1f:
        {
// switch_3928_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x20:
        {
// switch_3928_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x21:
        {
// switch_3928_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x22:
        {
// switch_3928_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x23:
        {
// switch_3928_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x24:
        {
// switch_3928_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x25:
        {
// switch_3928_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x26:
        {
// switch_3928_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x27:
        {
// switch_3928_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x28:
        {
// switch_3928_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
        case 0x29:
        {
// switch_3928_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3928_case_default
        }
    }
}
// fun_3F68
fun_3F68() {
    pri = arg_5;
    OP_JNZ lab_3FA0
    var_8 = 0;
    pri = fun_1338()
// lab_3FA0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3FF0
    OP_CONST_S -8, -1
// lab_3FF0
    pri = arg_1;
    switch (pri) {
// switch_5AA8
        case default:
        {
// switch_5AA8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F50
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0D00(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F50
            pri = 1;
            OP_JUMP lab_5F58
// lab_5F50
            pri = 0;
// lab_5F58
            OP_JZER lab_5FA8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6200
// lab_5FA8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6010
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6010
            pri = 1;
            OP_JUMP lab_6018
// lab_6010
            pri = 0;
// lab_6018
            OP_JZER lab_61A0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D00(var_24, var_16)
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
            OP_JUMP lab_6200
// lab_61A0
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
// lab_6200
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6270
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6270
            var_8 = 0;
            pri = fun_1378()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5AA8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x1:
        {
// switch_5AA8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x2:
        {
// switch_5AA8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x3:
        {
// switch_5AA8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x4:
        {
// switch_5AA8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x5:
        {
// switch_5AA8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1060(var_40)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x6:
        {
// switch_5AA8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x7:
        {
// switch_5AA8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x8:
        {
// switch_5AA8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x9:
        {
// switch_5AA8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0xa:
        {
// switch_5AA8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0xb:
        {
// switch_5AA8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0xc:
        {
// switch_5AA8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0xd:
        {
// switch_5AA8_case_0xd
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0xe:
        {
// switch_5AA8_case_0xe
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0xf:
        {
// switch_5AA8_case_0xf
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x10:
        {
// switch_5AA8_case_0x10
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x11:
        {
// switch_5AA8_case_0x11
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x12:
        {
// switch_5AA8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x13:
        {
// switch_5AA8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x14:
        {
// switch_5AA8_case_0x14
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x15:
        {
// switch_5AA8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x16:
        {
// switch_5AA8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x17:
        {
// switch_5AA8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x18:
        {
// switch_5AA8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x19:
        {
// switch_5AA8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x1a:
        {
// switch_5AA8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x1b:
        {
// switch_5AA8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x1c:
        {
// switch_5AA8_case_0x1c
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x1d:
        {
// switch_5AA8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x1e:
        {
// switch_5AA8_case_0x1e
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x1f:
        {
// switch_5AA8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x20:
        {
// switch_5AA8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x21:
        {
// switch_5AA8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x22:
        {
// switch_5AA8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x23:
        {
// switch_5AA8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x24:
        {
// switch_5AA8_case_0x24
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x25:
        {
// switch_5AA8_case_0x25
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x26:
        {
// switch_5AA8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x27:
        {
// switch_5AA8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x28:
        {
// switch_5AA8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x29:
        {
// switch_5AA8_case_0x29
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x2a:
        {
// switch_5AA8_case_0x2a
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x2b:
        {
// switch_5AA8_case_0x2b
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x2c:
        {
// switch_5AA8_case_0x2c
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x2d:
        {
// switch_5AA8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x2e:
        {
// switch_5AA8_case_0x2e
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x2f:
        {
// switch_5AA8_case_0x2f
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x30:
        {
// switch_5AA8_case_0x30
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x31:
        {
// switch_5AA8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x32:
        {
// switch_5AA8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x33:
        {
// switch_5AA8_case_0x33
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x34:
        {
// switch_5AA8_case_0x34
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x35:
        {
// switch_5AA8_case_0x35
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x36:
        {
// switch_5AA8_case_0x36
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x37:
        {
// switch_5AA8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x38:
        {
// switch_5AA8_case_0x38
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
            pri = fun_1098(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x39:
        {
// switch_5AA8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x3a:
        {
// switch_5AA8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x3b:
        {
// switch_5AA8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x3c:
        {
// switch_5AA8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x3d:
        {
// switch_5AA8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
        case 0x3e:
        {
// switch_5AA8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC0(var_24, var_16, var_8)
            OP_JUMP switch_5AA8_case_default
        }
    }
}
// fun_62A0
fun_62A0() {
    pri = arg_4;
    OP_JNZ lab_62D8
    var_8 = 0;
    pri = fun_1338()
// lab_62D8
    pri = arg_1;
    switch (pri) {
// switch_76B0
        case default:
        {
// switch_76B0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_15A8(var_264)
            OP_JZER lab_7C78
            pri = arg_3;
            switch (pri) {
// switch_7C20
                case default:
                {
// switch_7C20_case_default
                    OP_JUMP lab_7F30
// lab_7F30
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7FA0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7FA0
                    var_8 = 0;
                    pri = fun_1378()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7C20_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C20_case_default
                }
                case 0x2:
                {
// switch_7C20_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C20_case_default
                }
                case 0x3:
                {
// switch_7C20_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C20_case_default
                }
            }
// lab_7C78
            pri = arg_1;
            OP_JZER lab_7CC8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7CC8
            pri = 0;
            OP_JUMP lab_7CD0
// lab_7CC8
            pri = 1;
// lab_7CD0
            OP_JZER lab_7D38
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D00(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7D38
            pri = 1;
            OP_JUMP lab_7D40
// lab_7D38
            pri = 0;
// lab_7D40
            OP_JZER lab_7D90
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7F30
// lab_7D90
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7DF8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7F30
// lab_7DF8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D00(var_24, var_16)
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
// switch_76B0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x1:
        {
// switch_76B0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x2:
        {
// switch_76B0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x3:
        {
// switch_76B0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x4:
        {
// switch_76B0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x5:
        {
// switch_76B0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1060(var_40)
            OP_JUMP switch_76B0_case_default
        }
        case 0x6:
        {
// switch_76B0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x7:
        {
// switch_76B0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x8:
        {
// switch_76B0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x9:
        {
// switch_76B0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0xa:
        {
// switch_76B0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0xb:
        {
// switch_76B0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0xc:
        {
// switch_76B0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0xd:
        {
// switch_76B0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0xe:
        {
// switch_76B0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0xf:
        {
// switch_76B0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x10:
        {
// switch_76B0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x11:
        {
// switch_76B0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x12:
        {
// switch_76B0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x13:
        {
// switch_76B0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x14:
        {
// switch_76B0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x15:
        {
// switch_76B0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x16:
        {
// switch_76B0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x17:
        {
// switch_76B0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x18:
        {
// switch_76B0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x19:
        {
// switch_76B0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x1a:
        {
// switch_76B0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x1b:
        {
// switch_76B0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x1c:
        {
// switch_76B0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x1d:
        {
// switch_76B0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x1e:
        {
// switch_76B0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x1f:
        {
// switch_76B0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x20:
        {
// switch_76B0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x21:
        {
// switch_76B0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x22:
        {
// switch_76B0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x23:
        {
// switch_76B0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x24:
        {
// switch_76B0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x25:
        {
// switch_76B0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x26:
        {
// switch_76B0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x27:
        {
// switch_76B0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x28:
        {
// switch_76B0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x29:
        {
// switch_76B0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x2a:
        {
// switch_76B0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x2b:
        {
// switch_76B0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x2c:
        {
// switch_76B0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x2d:
        {
// switch_76B0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x2e:
        {
// switch_76B0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x2f:
        {
// switch_76B0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x30:
        {
// switch_76B0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x31:
        {
// switch_76B0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x32:
        {
// switch_76B0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x33:
        {
// switch_76B0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x34:
        {
// switch_76B0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x35:
        {
// switch_76B0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x36:
        {
// switch_76B0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x37:
        {
// switch_76B0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x38:
        {
// switch_76B0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x39:
        {
// switch_76B0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x3a:
        {
// switch_76B0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x3b:
        {
// switch_76B0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x3c:
        {
// switch_76B0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x3d:
        {
// switch_76B0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
        case 0x3e:
        {
// switch_76B0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CC0(var_24, var_16, var_8)
            OP_JUMP switch_76B0_case_default
        }
    }
}
// fun_7FD0
fun_7FD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_81E0(var_16, var_8)
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
    OP_JZER lab_81C8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_81C8
    pri = 0;
    return pri;
}
// fun_81E0
fun_81E0() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0CC0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8228
fun_8228() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_82B0
// lab_82B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8430
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8420
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8370
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8370
    pri = 0;
    OP_JUMP lab_8378
// lab_8430
    pri = 0;
    return pri;
// lab_8420
    OP_JUMP lab_82A8
// lab_82A8
    OP_INC_P_S -936
// lab_8370
    pri = 1;
// lab_8378
    OP_JZER lab_83F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_83E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_83F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_83E8
}
// fun_8450
fun_8450() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_84E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1850()
// lab_84E8
    pri = arg_4;
    OP_JZER lab_8520
    var_8 = 1;
    var_16 = 8;
    pri = fun_1878(var_8)
// lab_8520
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8578
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8578
    pri = 0;
    OP_JUMP lab_8580
// lab_8578
    pri = 1;
// lab_8580
    OP_JZER lab_8648
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8648
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8620
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1790(var_32, var_24)
    OP_JUMP lab_8648
// lab_8648
    pri = arg_2;
    OP_JZER lab_8720
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_86F0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13B8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09B0(var_40)
    OP_JUMP lab_8720
// lab_8720
    pri = arg_3;
    OP_JZER lab_8758
    var_8 = 1;
    var_16 = 8;
    pri = fun_1818(var_8)
// lab_8758
    pri = 0;
    return pri;
// lab_86F0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13B8(var_16, var_8)
// lab_8620
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1790(var_16, var_8)
}
// fun_8768
fun_8768() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8228(var_24)
    pri = 0;
    return pri;
}
// fun_87D0
fun_87D0() {
    pri = g_mode;
    switch (pri) {
// switch_8890
        case default:
        {
// switch_8890_case_default
            pri = CommandNOP()
            OP_JUMP lab_88D8
// lab_88D8
            pri = 0;
            return pri;
        }
        case 0xbd353d1ea4281a88:
        {
// switch_8890_case_0xbd353d1ea4281a88
            var_8 = 0;
            pri = fun_B468()
            OP_JUMP lab_88D8
        }
        case 0x0:
        {
// switch_8890_case_0x0
            var_8 = 0;
            pri = fun_88E8()
            OP_JUMP lab_88D8
        }
        case 0x4f901721df406ce4:
        {
// switch_8890_case_0x4f901721df406ce4
            var_8 = 0;
            pri = fun_B360()
            OP_JUMP lab_88D8
        }
    }
}
// fun_88E8
fun_88E8() {
    pri = 0;
    return pri;
}
// fun_8900
fun_8900() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4595726387247893709, 4670644305809899520, 4674366400060037530, 8802641224559852288
    var_24 = 48;
    pri = fun_08E0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 10;
    var_40 = 8;
    pri = fun_0060(var_32)
    pri = 0;
    return pri;
}
// fun_8988
fun_8988() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8450(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_89E0
fun_89E0() {
    var_8 = -1701854585655222088;
    var_16 = 8;
    pri = fun_0708(var_8)
    var_24 = 3215614591933677749;
    var_32 = 8;
    pri = fun_0708(var_24)
    var_40 = -884363338698514034;
    var_48 = 8;
    pri = fun_0708(var_40)
    pri = 0;
    return pri;
}
// fun_8A70
fun_8A70() {
    var_8 = 0;
    pri = fun_0738()
    pri = 0;
    return pri;
}
// fun_8AA0
fun_8AA0() {
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0970(var_16, var_8)
    var_32 = 1;
    var_40 = 3275595920700649692;
    var_48 = 16;
    pri = fun_0970(var_40, var_32)
    pri = EvCameraStart()
    var_56 = 1;
    var_64 = 1;
    var_72 = 0;
    OP_PUSH3_C 4671364211048185856, 4674823274629169152, -1701854585655222088
    var_80 = 48;
    pri = fun_08E0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4634569934033964237, 4670687186763382784, 4674211946164125696, 3215614591933677749
    var_104 = 48;
    pri = fun_08E0(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 1;
    OP_PUSH4_C 4634978072750194688, 4670624514600599552, 4674187482030407680, -884363338698514034
    var_128 = 48;
    pri = fun_08E0(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 1;
    var_160 = 1;
    var_168 = 0;
    OP_PUSH3_C 4664594517955969024, 4674332892443181056, 8802641224559852288
    var_176 = 48;
    pri = fun_08E0(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 1;
    var_192 = 1;
    OP_PUSH4_C 4640537203540230144, 4665210244467523584, 4674330143664111616, 3275595920700649692
    var_200 = 48;
    pri = fun_08E0(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 5;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 1;
    var_232 = 0;
    var_240 = 4641240890982006784;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH4_C 4664748449583857664, 4674332892443181056, 4607182418800017408, 8802641224559852288
    var_264 = 72;
    pri = fun_09E8(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 0;
    var_280 = 4629813006927554150;
    var_288 = 0;
    OP_PUSH5_C 4665437920340287160, 4657046326650821673, 4674295660230685491, 4665786509506757263, 4657125095663835546
    var_296 = 4674256830977550582;
    var_304 = 1;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 0;
    pri = fun_22F8()
    var_320 = 0;
    var_328 = 4629813006927554150;
    var_336 = 0;
    OP_PUSH5_C 4665464341604702618, 4657046326650821673, 4674312977538822963, 4665811616854777528, 4657125337556393656
    var_344 = 4674296740500859781;
    var_352 = 520;
    pri = EvCameraMove(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 31240;
    var_368 = 8;
    var_376 = 16;
    pri = fun_0280(var_368, var_360)
    var_384 = 0;
    pri = fun_0350()
    var_392 = 8802641224559852288;
    var_400 = 8;
    pri = fun_0B60(var_392)
    var_408 = 1;
    var_416 = -1;
    var_424 = -1;
    var_432 = 3;
    var_440 = 0;
    var_448 = 0;
    var_456 = 3275595920700649692;
    var_464 = 56;
    pri = fun_2388(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 3275595920700649692;
    var_480 = 8;
    pri = fun_0D38(var_472)
    var_488 = 1;
    var_496 = 0;
    var_504 = 60;
    pri = float(var_504)
    var_512 = pri;
    var_520 = 0;
    var_528 = 0;
    OP_PUSH4_C 4665733612002344960, 4674330143664111616, 4611686018427387904, 3275595920700649692
    var_536 = 72;
    pri = fun_09E8(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 15;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 1;
    var_568 = 0;
    var_576 = 30;
    var_584 = 120;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_592 = 48;
    pri = fun_0A60(var_584, var_576, var_568, var_560, var_552, var_544)
    var_600 = 60;
    var_608 = 8;
    pri = fun_0060(var_600)
    var_616 = 1;
    var_624 = 0;
    var_632 = 31288;
    var_640 = 8;
    var_648 = 32;
    pri = fun_02E0(var_640, var_632, var_624, var_616)
    var_656 = 0;
    pri = fun_0350()
    var_664 = 8802641224559852288;
    var_672 = 8;
    pri = fun_0B60(var_664)
    var_680 = 3275595920700649692;
    var_688 = 8;
    pri = fun_0B60(var_680)
    var_696 = 1;
    var_704 = 1;
    var_712 = 0;
    OP_PUSH3_C 4670407910809927680, 4674366400060037530, 8802641224559852288
    var_720 = 48;
    pri = fun_08E0(var_712, var_704, var_696, var_688, var_680, var_672)
    var_728 = 1;
    var_736 = 1;
    var_744 = 0;
    OP_PUSH3_C 4670551122199445504, 4674330143664111616, 3275595920700649692
    var_752 = 48;
    pri = fun_08E0(var_744, var_736, var_728, var_720, var_712, var_704)
    var_760 = 5;
    var_768 = 8;
    pri = fun_0060(var_760)
    var_776 = 1;
    var_784 = 0;
    var_792 = 100;
    pri = float(var_792)
    var_800 = pri;
    var_808 = 0;
    var_816 = 0;
    OP_PUSH4_C 4670708627240124416, 4674366400060037530, 4611686018427387904, 8802641224559852288
    var_824 = 72;
    pri = fun_09E8(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 1;
    var_840 = 0;
    var_848 = 100;
    pri = float(var_848)
    var_856 = pri;
    var_864 = 0;
    var_872 = 0;
    OP_PUSH4_C 4670771024525000704, 4674330143664111616, 4611686018427387904, 3275595920700649692
    var_880 = 72;
    pri = fun_09E8(var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_888 = 0;
    var_896 = -1701854585655222088;
    var_904 = 16;
    pri = fun_0938(var_896, var_888)
    var_912 = 0;
    var_920 = 3215614591933677749;
    var_928 = 16;
    pri = fun_0938(var_920, var_912)
    var_936 = 0;
    var_944 = -884363338698514034;
    var_952 = 16;
    pri = fun_0938(var_944, var_936)
    var_960 = 5;
    var_968 = 8;
    pri = fun_0060(var_960)
    var_976 = 0;
    var_984 = 4630333735634468864;
    var_992 = 0;
    OP_PUSH5_C 4670810455760751821, 4648304065717909586, 4674321545483182408, 4670919153480273756, 4647912287734700442
    var_1000 = 4674314975901206446;
    var_1008 = 1;
    pri = EvCameraMove(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 0;
    pri = fun_22F8()
    var_1024 = 0;
    var_1032 = 4630333735634468864;
    var_1040 = 0;
    OP_PUSH5_C 4670810895565402931, 4648304065717909586, 4674328783018472243, 4670919593284924867, 4647912815500281774
    var_1048 = 4674322213436496282;
    var_1056 = 120;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 31240;
    var_1072 = 8;
    var_1080 = 16;
    pri = fun_0280(var_1072, var_1064)
    var_1088 = 0;
    pri = fun_0350()
    var_1096 = 3275595920700649692;
    var_1104 = 8;
    pri = fun_0B60(var_1096)
    var_1112 = 0;
    var_1120 = 4628658959523040461;
    var_1128 = 3;
    OP_PUSH5_C 4670739795645992796, 4648611137325314867, 4674345404885505147, 4670793215418428293, 4648681066264841421
    var_1136 = 4674250192676097884;
    var_1144 = 1;
    pri = EvCameraMove(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1152 = 0;
    pri = fun_22F8()
    var_1160 = 1;
    var_1168 = -1701854585655222088;
    var_1176 = 16;
    pri = fun_0938(var_1168, var_1160)
    var_1184 = 1;
    var_1192 = 3215614591933677749;
    var_1200 = 16;
    pri = fun_0938(var_1192, var_1184)
    var_1208 = 1;
    var_1216 = -884363338698514034;
    var_1224 = 16;
    pri = fun_0938(var_1216, var_1208)
    var_1232 = 1;
    var_1240 = 1;
    var_1248 = 0;
    pri = float(var_1248)
    var_1256 = pri;
    OP_PUSH3_C 4670628088013389824, 4674322172204810240, -1701854585655222088
    var_1264 = 48;
    pri = fun_08E0(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1272 = 20;
    var_1280 = 8;
    pri = fun_0060(var_1272)
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    OP_PUSH2_C 4639668149549635994, 3275595920700649692
    var_1312 = 40;
    pri = fun_0AB8(var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1320 = 8802641224559852288;
    var_1328 = 8;
    pri = fun_0B60(var_1320)
    var_1336 = -1;
    var_1344 = 3275595920700649692;
    var_1352 = 16;
    pri = fun_13B8(var_1344, var_1336)
    var_1360 = 3275595920700649692;
    var_1368 = 8;
    pri = fun_0B60(var_1360)
    var_1376 = 0;
    var_1384 = 0;
    var_1392 = 0;
    var_1400 = 0;
    OP_PUSH2_C 3275595920700649692, 8802641224559852288
    var_1408 = 48;
    pri = fun_0B08(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1416 = 1;
    var_1424 = 1;
    var_1432 = -1;
    var_1440 = -1;
    var_1448 = 0;
    var_1456 = 22;
    var_1464 = 3275595920700649692;
    var_1472 = 56;
    pri = fun_3F68(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH2_C -4226397209767255291, 3275595920700649692
    var_1520 = 56;
    pri = fun_20C0(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_2208(var_1528)
    var_1544 = 0;
    pri = fun_22C8()
    var_1552 = 8802641224559852288;
    var_1560 = 8;
    pri = fun_0B60(var_1552)
    var_1568 = 1;
    var_1576 = 0;
    var_1584 = 4641240890982006784;
    var_1592 = 0;
    var_1600 = 0;
    OP_PUSH4_C 4670756428508141978, 4674355157553643520, 4607182418800017408, 8802641224559852288
    var_1608 = 72;
    pri = fun_09E8(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1616 = 1;
    var_1624 = 3;
    var_1632 = 0;
    var_1640 = 22;
    var_1648 = 3275595920700649692;
    var_1656 = 40;
    pri = fun_62A0(var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1664 = 30;
    var_1672 = 8;
    pri = fun_0060(var_1664)
    var_1680 = 3275595920700649692;
    var_1688 = 8;
    pri = fun_0D38(var_1680)
    var_1696 = 0;
    var_1704 = 0;
    var_1712 = 0;
    var_1720 = 180;
    pri = float(var_1720)
    var_1728 = pri;
    var_1736 = 3275595920700649692;
    var_1744 = 40;
    pri = fun_0AB8(var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1752 = 3275595920700649692;
    var_1760 = 8;
    pri = fun_0B60(var_1752)
    var_1768 = 0;
    var_1776 = 3;
    var_1784 = 0;
    var_1792 = 100;
    var_1800 = -1;
    OP_PUSH2_C -4226400508302139924, 3275595920700649692
    var_1808 = 56;
    pri = fun_20C0(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1816 = 1;
    var_1824 = 8;
    pri = fun_2208(var_1816)
    var_1832 = 0;
    pri = fun_22C8()
    var_1840 = 8802641224559852288;
    var_1848 = 8;
    pri = fun_0B60(var_1840)
    var_1856 = 0;
    var_1864 = 0;
    var_1872 = 0;
    var_1880 = -170;
    pri = float(var_1880)
    var_1888 = pri;
    var_1896 = 8802641224559852288;
    var_1904 = 40;
    pri = fun_0AB8(var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1912 = 1;
    var_1920 = 0;
    var_1928 = 4641240890982006784;
    var_1936 = 0;
    var_1944 = 0;
    OP_PUSH4_C 4670713025286635520, 4674322172204810240, 4611686018427387904, -1701854585655222088
    var_1952 = 72;
    pri = fun_09E8(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1960 = 1;
    var_1968 = 0;
    var_1976 = 4641240890982006784;
    var_1984 = 0;
    var_1992 = 0;
    OP_PUSH4_C 4670758380141281280, 4674330143664111616, 4607182418800017408, 3275595920700649692
    var_2000 = 72;
    pri = fun_09E8(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
    var_2008 = 15;
    var_2016 = 8;
    pri = fun_0060(var_2008)
    var_2024 = 0;
    var_2032 = 4631952216750555136;
    var_2040 = 0;
    OP_PUSH5_C 4670731843428144906, 4648409882716966748, 4674340393861261558, 4670788987796219494, 4648674205312284099
    var_2048 = 4674300838930452316;
    var_2056 = 1;
    pri = EvCameraMove(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984)
    var_2064 = 0;
    pri = fun_22F8()
    var_2072 = 8802641224559852288;
    var_2080 = 8;
    pri = fun_0B60(var_2072)
    var_2088 = 8802641224559852288;
    var_2096 = 8;
    pri = fun_0B60(var_2088)
    var_2104 = 3275595920700649692;
    var_2112 = 8;
    pri = fun_0B60(var_2104)
    var_2120 = 0;
    var_2128 = 1;
    var_2136 = 3275595920700649692;
    var_2144 = 24;
    pri = fun_7FD0(var_2136, var_2128, var_2120)
    var_2152 = 1;
    var_2160 = 8;
    pri = fun_0060(var_2152)
    var_2168 = 3275595920700649692;
    var_2176 = 8;
    pri = fun_0D38(var_2168)
    var_2184 = 0;
    var_2192 = 3;
    var_2200 = 0;
    var_2208 = 100;
    var_2216 = -1;
    OP_PUSH2_C -4226399408790511713, 3275595920700649692
    var_2224 = 56;
    pri = fun_20C0(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2232 = 1;
    var_2240 = 8;
    pri = fun_2208(var_2232)
    var_2248 = 0;
    pri = fun_22C8()
    var_2256 = 0;
    var_2264 = 4631952216750555136;
    var_2272 = 0;
    OP_PUSH5_C 4670695268173846938, 4648625035152289956, 4674332334441029960, 4670737000137679176, 4648834734009939395
    var_2280 = 4674313378860567101;
    var_2288 = 1;
    pri = EvCameraMove(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2296 = 0;
    pri = fun_22F8()
    var_2304 = -1701854585655222088;
    var_2312 = 8;
    pri = fun_0B60(var_2304)
    var_2320 = 0;
    var_2328 = 1;
    var_2336 = -1701854585655222088;
    var_2344 = 24;
    pri = fun_7FD0(var_2336, var_2328, var_2320)
    var_2352 = 1;
    var_2360 = 8;
    pri = fun_0060(var_2352)
    var_2368 = -1701854585655222088;
    var_2376 = 8;
    pri = fun_0D38(var_2368)
    var_2384 = 0;
    var_2392 = 3;
    var_2400 = 0;
    var_2408 = 100;
    var_2416 = -1;
    OP_PUSH2_C -4987691079259660849, -1701854585655222088
    var_2424 = 56;
    pri = fun_20C0(var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368)
    var_2432 = 1;
    var_2440 = 8;
    pri = fun_2208(var_2432)
    var_2448 = 0;
    pri = fun_22C8()
    var_2456 = 1;
    var_2464 = 0;
    var_2472 = 4641240890982006784;
    var_2480 = -16;
    pri = float(var_2480)
    var_2488 = pri;
    var_2496 = 1;
    OP_PUSH4_C 4670699281391288320, 4674341688536203264, 4611686018427387904, 3215614591933677749
    var_2504 = 72;
    pri = fun_09E8(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2512 = 1;
    var_2520 = 0;
    OP_PUSH2_C 4641240890982006784, 4627589354611539968
    var_2528 = 1;
    OP_PUSH4_C 4670693234077335552, 4674297982948999168, 4611686018427387904, -884363338698514034
    var_2536 = 72;
    pri = fun_09E8(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2544 = 0;
    var_2552 = 4631952216750555136;
    var_2560 = 3;
    OP_PUSH5_C 4670687208753615340, 4647883436549587599, 4674355091582945853, 4670797091196916204, 4648653006728100577
    var_2568 = 4674288881741500252;
    var_2576 = 1;
    pri = EvCameraMove(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2584 = 50;
    var_2592 = 8;
    pri = fun_0060(var_2584)
    var_2600 = 0;
    var_2608 = 3;
    var_2616 = 0;
    var_2624 = 100;
    var_2632 = -1;
    OP_PUSH2_C -1925784340844818406, 3215614591933677749
    var_2640 = 56;
    pri = fun_20C0(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584)
    var_2648 = 3215614591933677749;
    var_2656 = 8;
    pri = fun_0B60(var_2648)
    var_2664 = -884363338698514034;
    var_2672 = 8;
    pri = fun_0B60(var_2664)
    var_2680 = 0;
    var_2688 = 1;
    var_2696 = 3215614591933677749;
    var_2704 = 24;
    pri = fun_7FD0(var_2696, var_2688, var_2680)
    var_2712 = 1;
    var_2720 = 8;
    pri = fun_0060(var_2712)
    var_2728 = 1;
    var_2736 = 8;
    pri = fun_2208(var_2728)
    var_2744 = 0;
    pri = fun_22C8()
    var_2752 = 3215614591933677749;
    var_2760 = 8;
    pri = fun_0D38(var_2752)
    var_2768 = 0;
    var_2776 = 3;
    var_2784 = 0;
    var_2792 = 100;
    var_2800 = -1;
    OP_PUSH2_C -1925785440356446617, 3215614591933677749
    var_2808 = 56;
    pri = fun_20C0(var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2816 = 1;
    var_2824 = 8;
    pri = fun_2208(var_2816)
    var_2832 = 0;
    pri = fun_22C8()
    var_2840 = 0;
    var_2848 = 2;
    var_2856 = -884363338698514034;
    var_2864 = 24;
    pri = fun_7FD0(var_2856, var_2848, var_2840)
    var_2872 = 1;
    var_2880 = 8;
    pri = fun_0060(var_2872)
    var_2888 = -884363338698514034;
    var_2896 = 8;
    pri = fun_0D38(var_2888)
    var_2904 = 0;
    var_2912 = 3;
    var_2920 = 0;
    var_2928 = 100;
    var_2936 = -1;
    OP_PUSH2_C -7838377213777949683, -884363338698514034
    var_2944 = 56;
    pri = fun_20C0(var_2936, var_2928, var_2920, var_2912, var_2904, var_2896, var_2888)
    var_2952 = 1;
    var_2960 = 8;
    pri = fun_2208(var_2952)
    var_2968 = 0;
    pri = fun_22C8()
    var_2976 = 0;
    var_2984 = 0;
    var_2992 = -1701854585655222088;
    var_3000 = 24;
    pri = fun_7FD0(var_2992, var_2984, var_2976)
    var_3008 = 1;
    var_3016 = 8;
    pri = fun_0060(var_3008)
    var_3024 = -1701854585655222088;
    var_3032 = 8;
    pri = fun_0D38(var_3024)
    var_3040 = 0;
    var_3048 = 3;
    var_3056 = 0;
    var_3064 = 100;
    var_3072 = -1;
    OP_PUSH2_C -4987689979748032638, -1701854585655222088
    var_3080 = 56;
    pri = fun_20C0(var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024)
    var_3088 = 1;
    var_3096 = 8;
    pri = fun_2208(var_3088)
    var_3104 = 0;
    pri = fun_22C8()
    var_3112 = 0;
    var_3120 = 2;
    var_3128 = -1701854585655222088;
    var_3136 = 24;
    pri = fun_7FD0(var_3128, var_3120, var_3112)
    var_3144 = 1;
    var_3152 = 8;
    pri = fun_0060(var_3144)
    var_3160 = -1701854585655222088;
    var_3168 = 8;
    pri = fun_0D38(var_3160)
    var_3176 = 0;
    pri = fun_22F8()
    var_3184 = 0;
    var_3192 = 4629897449420567347;
    var_3200 = 0;
    OP_PUSH5_C 4670618544252460728, 4648844673595054490, 4674370528726199828, 4670767011307559322, 4648370036415576146
    var_3208 = 4674285250604349522;
    var_3216 = 1;
    pri = EvCameraMove(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144)
    var_3224 = 0;
    pri = fun_22F8()
    var_3232 = 8;
    var_3240 = -1701854585655222088;
    var_3248 = 16;
    pri = fun_13F8(var_3240, var_3232)
    var_3256 = -1701854585655222088;
    var_3264 = 8;
    pri = fun_14B0(var_3256)
    var_3272 = 30;
    var_3280 = 8;
    pri = fun_0060(var_3272)
    var_3288 = 6;
    var_3296 = 4;
    var_3304 = -1701854585655222088;
    var_3312 = 24;
    pri = fun_14E8(var_3304, var_3296, var_3288)
    var_3320 = 0;
    var_3328 = 4629897449420567347;
    var_3336 = 3;
    OP_PUSH5_C 4670603370991997420, 4648989105442479145, 4674379638180035953, 4670751862786107638, 4648514556223931023
    var_3344 = 4674294379299639132;
    var_3352 = 5;
    pri = EvCameraMove(var_3352, var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288, var_3280)
    var_3360 = 0;
    pri = fun_22F8()
    var_3368 = 0;
    var_3376 = 3;
    var_3384 = 0;
    var_3392 = 100;
    var_3400 = -1;
    OP_PUSH2_C -4987688880236404427, -1701854585655222088
    var_3408 = 56;
    pri = fun_20C0(var_3400, var_3392, var_3384, var_3376, var_3368, var_3360, var_3352)
    var_3416 = 1;
    var_3424 = 8;
    pri = fun_2208(var_3416)
    var_3432 = 0;
    pri = fun_22C8()
    var_3440 = 0;
    pri = fun_22F8()
    var_3448 = 30;
    var_3456 = 8;
    pri = fun_0060(var_3448)
    var_3464 = -1701854585655222088;
    var_3472 = 8;
    pri = fun_1550(var_3464)
    var_3480 = 0;
    var_3488 = 4631952216750555136;
    var_3496 = 0;
    OP_PUSH5_C 4670703250628264591, 4648190596117923103, 4674341806733703250, 4670794493600695583, 4648639460744846377
    var_3504 = 4674301435415510385;
    var_3512 = 1;
    pri = EvCameraMove(var_3512, var_3504, var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440)
    var_3520 = 0;
    pri = fun_22F8()
    var_3528 = 0;
    var_3536 = 0;
    var_3544 = -1701854585655222088;
    var_3552 = 24;
    pri = fun_7FD0(var_3544, var_3536, var_3528)
    var_3560 = 1;
    var_3568 = 8;
    pri = fun_0060(var_3560)
    var_3576 = -1701854585655222088;
    var_3584 = 8;
    pri = fun_0D38(var_3576)
    var_3592 = 0;
    var_3600 = 3;
    var_3608 = 0;
    var_3616 = 100;
    var_3624 = -1;
    OP_PUSH2_C -4987696576817801904, -1701854585655222088
    var_3632 = 56;
    pri = fun_20C0(var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576)
    var_3640 = 1;
    var_3648 = 8;
    pri = fun_2208(var_3640)
    var_3656 = 0;
    pri = fun_22C8()
    var_3664 = 1;
    var_3672 = 1;
    var_3680 = -1;
    var_3688 = -1;
    var_3696 = 0;
    var_3704 = 22;
    var_3712 = 3275595920700649692;
    var_3720 = 56;
    pri = fun_3F68(var_3712, var_3704, var_3696, var_3688, var_3680, var_3672, var_3664)
    var_3728 = 0;
    var_3736 = 3;
    var_3744 = 0;
    var_3752 = 100;
    var_3760 = -1;
    OP_PUSH2_C -4226402707325396346, 3275595920700649692
    var_3768 = 56;
    pri = fun_20C0(var_3760, var_3752, var_3744, var_3736, var_3728, var_3720, var_3712)
    var_3776 = 31352;
    var_3784 = 3275595920700649692;
    var_3792 = 16;
    pri = fun_0F38(var_3784, var_3776)
    var_3800 = 1;
    var_3808 = 8;
    pri = fun_2208(var_3800)
    var_3816 = 0;
    pri = fun_22C8()
    var_3824 = 1;
    var_3832 = 3;
    var_3840 = 0;
    var_3848 = 22;
    var_3856 = 3275595920700649692;
    var_3864 = 40;
    pri = fun_62A0(var_3856, var_3848, var_3840, var_3832, var_3824)
    var_3872 = 3275595920700649692;
    var_3880 = 8;
    pri = fun_0D38(var_3872)
    var_3888 = 0;
    var_3896 = 0;
    var_3904 = 0;
    var_3912 = 0;
    OP_PUSH2_C 3275595920700649692, 8802641224559852288
    var_3920 = 48;
    pri = fun_0B08(var_3912, var_3904, var_3896, var_3888, var_3880, var_3872)
    var_3928 = 0;
    var_3936 = 0;
    var_3944 = 0;
    var_3952 = 0;
    OP_PUSH2_C 8802641224559852288, 3275595920700649692
    var_3960 = 48;
    pri = fun_0B08(var_3952, var_3944, var_3936, var_3928, var_3920, var_3912)
    var_3968 = 8802641224559852288;
    var_3976 = 8;
    pri = fun_0B60(var_3968)
    var_3984 = 3275595920700649692;
    var_3992 = 8;
    pri = fun_0B60(var_3984)
    var_4000 = 0;
    var_4008 = 3;
    var_4016 = 0;
    var_4024 = 100;
    var_4032 = -1;
    OP_PUSH2_C -4987694377794545482, 3275595920700649692
    var_4040 = 56;
    pri = fun_20C0(var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984)
    var_4048 = 1;
    var_4056 = 8;
    pri = fun_2208(var_4048)
    var_4064 = 0;
    pri = fun_22C8()
    var_4072 = 1;
    var_4080 = 0;
    var_4088 = 30;
    pri = float(var_4088)
    var_4096 = pri;
    var_4104 = 0;
    pri = float(var_4104)
    var_4112 = pri;
    var_4120 = 0;
    var_4128 = 18600;
    pri = float(var_4128)
    var_4136 = pri;
    OP_PUSH3_C 4674330143664111616, 4611686018427387904, 3275595920700649692
    var_4144 = 72;
    pri = fun_09E8(var_4136, var_4128, var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072)
    var_4152 = 10;
    var_4160 = 8;
    pri = fun_0060(var_4152)
    var_4168 = 1;
    var_4176 = 0;
    var_4184 = 30;
    pri = float(var_4184)
    var_4192 = pri;
    var_4200 = 0;
    pri = float(var_4200)
    var_4208 = pri;
    var_4216 = 0;
    var_4224 = 18600;
    pri = float(var_4224)
    var_4232 = pri;
    OP_PUSH3_C 4674366400060037530, 4607182418800017408, 8802641224559852288
    var_4240 = 72;
    pri = fun_09E8(var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184, var_4176, var_4168)
    var_4248 = 60;
    var_4256 = 8;
    pri = fun_0060(var_4248)
    var_4264 = 1;
    var_4272 = 0;
    var_4280 = 31192;
    var_4288 = 8;
    var_4296 = 32;
    pri = fun_02E0(var_4288, var_4280, var_4272, var_4264)
    var_4304 = 0;
    pri = fun_0350()
    var_4312 = 3;
    var_4320 = 1;
    pri = EvCameraEnd(var_4320, var_4312)
    var_4328 = 8802641224559852288;
    var_4336 = 8;
    pri = fun_0B60(var_4328)
    var_4344 = 3275595920700649692;
    var_4352 = 8;
    pri = fun_0B60(var_4344)
    var_4360 = 0;
    var_4368 = 3275595920700649692;
    var_4376 = 16;
    pri = fun_0938(var_4368, var_4360)
    pri = 0;
    return pri;
}
// fun_B138
fun_B138() {
    pri = 0;
    return pri;
}
// fun_B150
fun_B150() {
    var_8 = 3275595920700649692;
    var_16 = 8;
    pri = fun_0888(var_8)
    var_24 = -1701854585655222088;
    var_32 = 8;
    pri = fun_0888(var_24)
    var_40 = 3215614591933677749;
    var_48 = 8;
    pri = fun_0888(var_40)
    var_56 = -884363338698514034;
    var_64 = 8;
    pri = fun_0888(var_56)
    var_72 = 825;
    var_80 = 8;
    pri = fun_8768(var_72)
    var_88 = -7408722731584171860;
    pri = VanishFlagReset(var_88)
    var_96 = -6352432447319980419;
    pri = VanishFlagReset(var_96)
    var_104 = 2;
    var_112 = 8;
    pri = fun_04C8(var_104)
    pri = 0;
    return pri;
}
// fun_B298
fun_B298() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 85869;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 37908;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 8603979141477584215, 6287735723334650320, 5733104461354657739
    var_80 = 80;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_B360
fun_B360() {
    var_8 = 0;
    pri = fun_8900()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8988()
    var_24 = 0;
    pri = fun_89E0()
    var_32 = 0;
    pri = fun_8A70()
    var_40 = 0;
    pri = fun_8AA0()
    var_48 = 0;
    pri = fun_B138()
    var_56 = 0;
    pri = fun_B150()
    var_64 = 0;
    pri = fun_B298()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B468
fun_B468() {
    var_8 = 0;
    pri = fun_89E0()
    var_16 = 0;
    pri = fun_B150()
    pri = 0;
    return pri;
}
