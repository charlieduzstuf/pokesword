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
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_04A8
fun_04A8() {
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
// fun_0568
fun_0568() {
    pri = arg_0;
    switch (pri) {
// switch_0710
        case default:
        {
// switch_0710_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0710_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0710_case_default
        }
        case 0x1:
        {
// switch_0710_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0710_case_default
        }
        case 0x2:
        {
// switch_0710_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0710_case_default
        }
        case 0x3:
        {
// switch_0710_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0710_case_default
        }
        case 0x4:
        {
// switch_0710_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0710_case_default
        }
        case 0x5:
        {
// switch_0710_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0710_case_default
        }
        case 0x6:
        {
// switch_0710_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0710_case_default
        }
    }
}
// fun_07A8
fun_07A8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0810
// lab_0810
    var_8 = 0;
    pri = fun_0958()
    OP_JNZ lab_0848
    OP_JUMP lab_0878
// lab_0848
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0810
// lab_0878
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_08A8
// lab_08A8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_08E8
    pri = 0;
    return pri;
// lab_08E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08A8
    pri = 0;
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0958
fun_0958() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A30
fun_0A30() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0A70
fun_0A70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0AA8
fun_0AA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AE8
fun_0AE8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0B20
fun_0B20() {
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
// fun_0B98
fun_0B98() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BE8
fun_0BE8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C40
fun_0C40() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16A0(var_8)
    OP_JZER lab_0CB8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_16D0(var_24)
    OP_JNZ lab_0CB8
    pri = 0;
    return pri;
// lab_0CB8
    OP_JUMP lab_0CC8
// lab_0CC8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0D28
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0D28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CC8
    pri = 0;
    return pri;
}
// fun_0D68
fun_0D68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0DA0
fun_0DA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0DE0
fun_0DE0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0EA0
    pri = 0;
    return pri;
// lab_0EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0EE0
// lab_0EE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16A0(var_8)
    OP_JNZ lab_0F68
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0F58
    pri = 0;
    return pri;
// lab_0F68
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0FB0
    pri = 0;
    return pri;
// lab_0FB0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1010
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1058(var_8)
    pri = 0;
    return pri;
// lab_1010
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EE0
    pri = 0;
    return pri;
// lab_0F58
    OP_JUMP lab_0FB0
}
// fun_1058
fun_1058() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10E0
    pri = 0;
    return pri;
// lab_10E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16A0(var_8)
    OP_JZER lab_1210
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1138
    OP_ZERO_P_S 64
// lab_1210
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1248
    OP_CONST_S 64, 1
// lab_1248
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1280
    OP_CONST_S 72, 1
// lab_1280
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
// lab_1138
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1160
    OP_ZERO_P_S 72
// lab_1160
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
    OP_JUMP lab_1320
// lab_1320
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1418
fun_1418() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14B0
fun_14B0() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1568
fun_1568() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14F0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1568(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1530(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15A8(var_24)
    pri = 0;
    return pri;
}
// fun_16A0
fun_16A0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1700
fun_1700() {
    OP_JUMP lab_1718
// lab_1718
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_17A8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1798
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E58(var_8)
    pri = 0;
    return pri;
// lab_17A8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1838
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1828
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E58(var_8)
    pri = 0;
    return pri;
// lab_1838
    pri = 0;
    return pri;
// lab_1828
    OP_JUMP lab_1848
// lab_1848
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1718
    pri = 0;
    return pri;
// lab_1798
    OP_JUMP lab_1848
}
// fun_1888
fun_1888() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1700(var_40)
    pri = 0;
    return pri;
}
// fun_1910
fun_1910() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1948
fun_1948() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1970
fun_1970() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_19A8
fun_19A8() {
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
// switch_1FC0
        case default:
        {
// switch_1FC0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2008
// lab_2008
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
            OP_JNZ lab_20B0
            var_88 = 0;
            pri = fun_2268()
// lab_20B0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1FC0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1BA8
                case default:
                {
// switch_1BA8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C20
// lab_1C20
                    OP_JUMP lab_2008
                }
                case 0x0:
                {
// switch_1BA8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1C20
                }
                case 0x1:
                {
// switch_1BA8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1C20
                }
                case 0x2:
                {
// switch_1BA8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1C20
                }
                case 0x3:
                {
// switch_1BA8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C20
                }
                case 0x4:
                {
// switch_1BA8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1C20
                }
                case 0x5:
                {
// switch_1BA8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1C20
                }
            }
        }
        case 0x65:
        {
// switch_1FC0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1D60
                case default:
                {
// switch_1D60_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1DD8
// lab_1DD8
                    OP_JUMP lab_2008
                }
                case 0x0:
                {
// switch_1D60_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1DD8
                }
                case 0x1:
                {
// switch_1D60_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1DD8
                }
                case 0x2:
                {
// switch_1D60_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1DD8
                }
                case 0x3:
                {
// switch_1D60_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1DD8
                }
                case 0x4:
                {
// switch_1D60_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1DD8
                }
                case 0x5:
                {
// switch_1D60_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1DD8
                }
            }
        }
        case 0x66:
        {
// switch_1FC0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1F18
                case default:
                {
// switch_1F18_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F90
// lab_1F90
                    OP_JUMP lab_2008
                }
                case 0x0:
                {
// switch_1F18_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1F90
                }
                case 0x1:
                {
// switch_1F18_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1F90
                }
                case 0x2:
                {
// switch_1F18_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1F90
                }
                case 0x3:
                {
// switch_1F18_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F90
                }
                case 0x4:
                {
// switch_1F18_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1F90
                }
                case 0x5:
                {
// switch_1F18_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1F90
                }
            }
        }
    }
}
// fun_20C8
fun_20C8() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0E20(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2170
    pri = 1;
    return pri;
// lab_2170
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_21B8
fun_21B8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2208
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_20C8(var_8)
    arg_2 = pri;
// lab_2208
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_19A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2268
fun_2268() {
    OP_JUMP lab_2280
// lab_2280
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_22C0
    pri = 0;
    return pri;
// lab_22C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2280
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    var_8 = 0;
    pri = fun_2268()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_23B0
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_23B0
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    OP_JUMP lab_2408
// lab_2408
    pri = EvCameraMoveWait_()
    OP_JZER lab_2440
    pri = 0;
    return pri;
// lab_2440
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2408
    pri = 0;
    return pri;
}
// fun_2480
fun_2480() {
    pri = arg_6;
    OP_JNZ lab_24B8
    var_8 = 0;
    pri = fun_1330()
// lab_24B8
    pri = arg_1;
    switch (pri) {
// switch_3A20
        case default:
        {
// switch_3A20_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D70
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D70
            pri = 1;
            OP_JUMP lab_3D78
// lab_3D70
            pri = 0;
// lab_3D78
            OP_JZER lab_3ED0
            var_16 = 8368;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E20(var_24, var_16)
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
            var_64 = 8472;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3F30
// lab_3ED0
            var_8 = 64;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3F30
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3F90
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3FF0
// lab_3F90
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3FF0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3FF0
            pri = arg_2;
            OP_JZER lab_4030
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4030
            var_8 = 0;
            pri = fun_1370()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A20_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1:
        {
// switch_3A20_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x2:
        {
// switch_3A20_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x3:
        {
// switch_3A20_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x4:
        {
// switch_3A20_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x5:
        {
// switch_3A20_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x6:
        {
// switch_3A20_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x7:
        {
// switch_3A20_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x8:
        {
// switch_3A20_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x9:
        {
// switch_3A20_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xa:
        {
// switch_3A20_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xb:
        {
// switch_3A20_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xc:
        {
// switch_3A20_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xd:
        {
// switch_3A20_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xe:
        {
// switch_3A20_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xf:
        {
// switch_3A20_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x10:
        {
// switch_3A20_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x11:
        {
// switch_3A20_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x12:
        {
// switch_3A20_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x13:
        {
// switch_3A20_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x14:
        {
// switch_3A20_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x15:
        {
// switch_3A20_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x16:
        {
// switch_3A20_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x17:
        {
// switch_3A20_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x18:
        {
// switch_3A20_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x19:
        {
// switch_3A20_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1a:
        {
// switch_3A20_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D68(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6144;
            var_88 = 6136;
            var_96 = 6128;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1090(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1b:
        {
// switch_3A20_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D68(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6368;
            var_88 = 6360;
            var_96 = 6352;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1090(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1c:
        {
// switch_3A20_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D68(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6592;
            var_88 = 6584;
            var_96 = 6576;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1090(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1d:
        {
// switch_3A20_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1e:
        {
// switch_3A20_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1f:
        {
// switch_3A20_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x20:
        {
// switch_3A20_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x21:
        {
// switch_3A20_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x22:
        {
// switch_3A20_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x23:
        {
// switch_3A20_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x24:
        {
// switch_3A20_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x25:
        {
// switch_3A20_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x26:
        {
// switch_3A20_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x27:
        {
// switch_3A20_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x28:
        {
// switch_3A20_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x29:
        {
// switch_3A20_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
    }
}
// fun_4060
fun_4060() {
    pri = arg_5;
    OP_JNZ lab_4098
    var_8 = 0;
    pri = fun_1330()
// lab_4098
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_40E8
    OP_CONST_S -8, -1
// lab_40E8
    pri = arg_1;
    switch (pri) {
// switch_5BA0
        case default:
        {
// switch_5BA0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6048
            var_520 = 28232;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0E20(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6048
            pri = 1;
            OP_JUMP lab_6050
// lab_6048
            pri = 0;
// lab_6050
            OP_JZER lab_60A0
            var_8 = 64;
            var_16 = 28328;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_62F8
// lab_60A0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6108
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6108
            pri = 1;
            OP_JUMP lab_6110
// lab_6108
            pri = 0;
// lab_6110
            OP_JZER lab_6298
            var_16 = 28504;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E20(var_24, var_16)
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
            var_176 = 28608;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28624;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_62F8
// lab_6298
            var_8 = 64;
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_62F8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6368
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6368
            var_8 = 0;
            pri = fun_1370()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5BA0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1:
        {
// switch_5BA0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2:
        {
// switch_5BA0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3:
        {
// switch_5BA0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x4:
        {
// switch_5BA0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x5:
        {
// switch_5BA0_case_0x5
            var_8 = 2;
            var_16 = 18488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1058(var_40)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x6:
        {
// switch_5BA0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x7:
        {
// switch_5BA0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x8:
        {
// switch_5BA0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x9:
        {
// switch_5BA0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xa:
        {
// switch_5BA0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xb:
        {
// switch_5BA0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xc:
        {
// switch_5BA0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xd:
        {
// switch_5BA0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19136;
            var_72 = 18960;
            var_80 = 18776;
            var_88 = 18584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xe:
        {
// switch_5BA0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19792;
            var_72 = 19584;
            var_80 = 19368;
            var_88 = 19144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xf:
        {
// switch_5BA0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20184;
            var_72 = 20064;
            var_80 = 19936;
            var_88 = 19800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x10:
        {
// switch_5BA0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20528;
            var_72 = 20424;
            var_80 = 20312;
            var_88 = 20192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x11:
        {
// switch_5BA0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20872;
            var_72 = 20768;
            var_80 = 20656;
            var_88 = 20536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x12:
        {
// switch_5BA0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x13:
        {
// switch_5BA0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x14:
        {
// switch_5BA0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21432;
            var_72 = 21256;
            var_80 = 21072;
            var_88 = 20880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x15:
        {
// switch_5BA0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x16:
        {
// switch_5BA0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x17:
        {
// switch_5BA0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x18:
        {
// switch_5BA0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x19:
        {
// switch_5BA0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1a:
        {
// switch_5BA0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1b:
        {
// switch_5BA0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1c:
        {
// switch_5BA0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21824;
            var_72 = 21704;
            var_80 = 21576;
            var_88 = 21440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1d:
        {
// switch_5BA0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1e:
        {
// switch_5BA0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22288;
            var_72 = 22144;
            var_80 = 21992;
            var_88 = 21832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1f:
        {
// switch_5BA0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x20:
        {
// switch_5BA0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x21:
        {
// switch_5BA0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x22:
        {
// switch_5BA0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x23:
        {
// switch_5BA0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x24:
        {
// switch_5BA0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22656;
            var_72 = 22544;
            var_80 = 22424;
            var_88 = 22296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x25:
        {
// switch_5BA0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23024;
            var_72 = 22912;
            var_80 = 22792;
            var_88 = 22664;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x26:
        {
// switch_5BA0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x27:
        {
// switch_5BA0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x28:
        {
// switch_5BA0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x29:
        {
// switch_5BA0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23464;
            var_72 = 23328;
            var_80 = 23184;
            var_88 = 23032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2a:
        {
// switch_5BA0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23856;
            var_72 = 23736;
            var_80 = 23608;
            var_88 = 23472;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2b:
        {
// switch_5BA0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24272;
            var_72 = 24144;
            var_80 = 24008;
            var_88 = 23864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2c:
        {
// switch_5BA0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24712;
            var_72 = 24576;
            var_80 = 24432;
            var_88 = 24280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2d:
        {
// switch_5BA0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2e:
        {
// switch_5BA0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25032;
            var_72 = 24936;
            var_80 = 24832;
            var_88 = 24720;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2f:
        {
// switch_5BA0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25424;
            var_72 = 25304;
            var_80 = 25176;
            var_88 = 25040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x30:
        {
// switch_5BA0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25816;
            var_72 = 25696;
            var_80 = 25568;
            var_88 = 25432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x31:
        {
// switch_5BA0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x32:
        {
// switch_5BA0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x33:
        {
// switch_5BA0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26208;
            var_72 = 26088;
            var_80 = 25960;
            var_88 = 25824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x34:
        {
// switch_5BA0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26464;
            var_80 = 26344;
            var_88 = 26216;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x35:
        {
// switch_5BA0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27064;
            var_72 = 26912;
            var_80 = 26752;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x36:
        {
// switch_5BA0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27320;
            var_80 = 27200;
            var_88 = 27072;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x37:
        {
// switch_5BA0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x38:
        {
// switch_5BA0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27800;
            var_72 = 27688;
            var_80 = 27568;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x39:
        {
// switch_5BA0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3a:
        {
// switch_5BA0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3b:
        {
// switch_5BA0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3c:
        {
// switch_5BA0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27808;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3d:
        {
// switch_5BA0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27984;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3e:
        {
// switch_5BA0_case_0x3e
            var_8 = 4;
            var_16 = 28128;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
    }
}
// fun_6398
fun_6398() {
    pri = arg_4;
    OP_JNZ lab_63D0
    var_8 = 0;
    pri = fun_1330()
// lab_63D0
    pri = arg_1;
    switch (pri) {
// switch_77A8
        case default:
        {
// switch_77A8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29200;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_16A0(var_264)
            OP_JZER lab_7D70
            pri = arg_3;
            switch (pri) {
// switch_7D18
                case default:
                {
// switch_7D18_case_default
                    OP_JUMP lab_8028
// lab_8028
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8098
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8098
                    var_8 = 0;
                    pri = fun_1370()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7D18_case_0x1
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D18_case_default
                }
                case 0x2:
                {
// switch_7D18_case_0x2
                    var_8 = 32;
                    var_16 = 29456;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D18_case_default
                }
                case 0x3:
                {
// switch_7D18_case_0x3
                    var_8 = 32;
                    var_16 = 29256;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7D18_case_default
                }
            }
// lab_7D70
            pri = arg_1;
            OP_JZER lab_7DC0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7DC0
            pri = 0;
            OP_JUMP lab_7DC8
// lab_7DC0
            pri = 1;
// lab_7DC8
            OP_JZER lab_7E30
            var_8 = 29552;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0E20(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7E30
            pri = 1;
            OP_JUMP lab_7E38
// lab_7E30
            pri = 0;
// lab_7E38
            OP_JZER lab_7E88
            var_8 = 32;
            var_16 = 29648;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8028
// lab_7E88
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7EF0
            var_8 = 32;
            var_16 = 29808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8028
// lab_7EF0
            var_16 = 29928;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E20(var_24, var_16)
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
            var_176 = 30032;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30048;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_77A8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1:
        {
// switch_77A8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2:
        {
// switch_77A8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3:
        {
// switch_77A8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x4:
        {
// switch_77A8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x5:
        {
// switch_77A8_case_0x5
            var_8 = 1;
            var_16 = 28680;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1058(var_40)
            OP_JUMP switch_77A8_case_default
        }
        case 0x6:
        {
// switch_77A8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x7:
        {
// switch_77A8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x8:
        {
// switch_77A8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x9:
        {
// switch_77A8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xa:
        {
// switch_77A8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xb:
        {
// switch_77A8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xc:
        {
// switch_77A8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xd:
        {
// switch_77A8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xe:
        {
// switch_77A8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xf:
        {
// switch_77A8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x10:
        {
// switch_77A8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x11:
        {
// switch_77A8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x12:
        {
// switch_77A8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x13:
        {
// switch_77A8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x14:
        {
// switch_77A8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x15:
        {
// switch_77A8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x16:
        {
// switch_77A8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x17:
        {
// switch_77A8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x18:
        {
// switch_77A8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x19:
        {
// switch_77A8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1a:
        {
// switch_77A8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1b:
        {
// switch_77A8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1c:
        {
// switch_77A8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1d:
        {
// switch_77A8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1e:
        {
// switch_77A8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1f:
        {
// switch_77A8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x20:
        {
// switch_77A8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x21:
        {
// switch_77A8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x22:
        {
// switch_77A8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x23:
        {
// switch_77A8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x24:
        {
// switch_77A8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x25:
        {
// switch_77A8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x26:
        {
// switch_77A8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x27:
        {
// switch_77A8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x28:
        {
// switch_77A8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x29:
        {
// switch_77A8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2a:
        {
// switch_77A8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2b:
        {
// switch_77A8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2c:
        {
// switch_77A8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2d:
        {
// switch_77A8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2e:
        {
// switch_77A8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2f:
        {
// switch_77A8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x30:
        {
// switch_77A8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x31:
        {
// switch_77A8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x32:
        {
// switch_77A8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x33:
        {
// switch_77A8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x34:
        {
// switch_77A8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x35:
        {
// switch_77A8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x36:
        {
// switch_77A8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x37:
        {
// switch_77A8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x38:
        {
// switch_77A8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x39:
        {
// switch_77A8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3a:
        {
// switch_77A8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3b:
        {
// switch_77A8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3c:
        {
// switch_77A8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28776;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3d:
        {
// switch_77A8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28952;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3e:
        {
// switch_77A8_case_0x3e
            var_8 = 3;
            var_16 = 29096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DE0(var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
    }
}
// fun_80C8
fun_80C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_82D8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30096;
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
    var_424 = 30152;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30168;
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
    OP_JZER lab_82C0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_82C0
    pri = 0;
    return pri;
}
// fun_82D8
fun_82D8() {
    var_8 = arg_1;
    var_16 = 30216;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0DE0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8320
fun_8320() {
    pri = 30320;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_83A8
// lab_83A8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8528
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8518
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8468
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8468
    pri = 0;
    OP_JUMP lab_8470
// lab_8528
    pri = 0;
    return pri;
// lab_8518
    OP_JUMP lab_83A0
// lab_83A0
    OP_INC_P_S -936
// lab_8468
    pri = 1;
// lab_8470
    OP_JZER lab_84E8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_84E0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_84E8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_84E0
}
// fun_8548
fun_8548() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_85E0
    var_8 = 1;
    var_16 = 0;
    var_24 = 31240;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1948()
// lab_85E0
    pri = arg_4;
    OP_JZER lab_8618
    var_8 = 1;
    var_16 = 8;
    pri = fun_1970(var_8)
// lab_8618
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8670
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8670
    pri = 0;
    OP_JUMP lab_8678
// lab_8670
    pri = 1;
// lab_8678
    OP_JZER lab_8740
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8740
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8718
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1888(var_32, var_24)
    OP_JUMP lab_8740
// lab_8740
    pri = arg_2;
    OP_JZER lab_8818
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_87E8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1470(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AE8(var_40)
    OP_JUMP lab_8818
// lab_8818
    pri = arg_3;
    OP_JZER lab_8850
    var_8 = 1;
    var_16 = 8;
    pri = fun_1910(var_8)
// lab_8850
    pri = 0;
    return pri;
// lab_87E8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1470(var_16, var_8)
// lab_8718
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1888(var_16, var_8)
}
// fun_8860
fun_8860() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8320(var_24)
    pri = 0;
    return pri;
}
// fun_88C8
fun_88C8() {
    pri = g_mode;
    switch (pri) {
// switch_8988
        case default:
        {
// switch_8988_case_default
            pri = CommandNOP()
            OP_JUMP lab_89D0
// lab_89D0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8988_case_0x0
            var_8 = 0;
            pri = fun_89E0()
            OP_JUMP lab_89D0
        }
        case 0x1fa7fe2ae1fb3195:
        {
// switch_8988_case_0x1fa7fe2ae1fb3195
            var_8 = 0;
            pri = fun_BD30()
            OP_JUMP lab_89D0
        }
        case 0x469fdc277e76a139:
        {
// switch_8988_case_0x469fdc277e76a139
            var_8 = 0;
            pri = fun_BE20()
            OP_JUMP lab_89D0
        }
    }
}
// fun_89E0
fun_89E0() {
    pri = 0;
    return pri;
}
// fun_89F8
fun_89F8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8548(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8A50
fun_8A50() {
    pri = 0;
    return pri;
}
// fun_8A68
fun_8A68() {
    pri = 0;
    return pri;
}
// fun_8A80
fun_8A80() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0AA8(var_16, var_8)
    var_32 = 1;
    var_40 = 3641199730571183281;
    var_48 = 16;
    pri = fun_0AA8(var_40, var_32)
    var_56 = 1;
    var_64 = -7228191161882330812;
    var_72 = 16;
    pri = fun_0AA8(var_64, var_56)
    var_80 = 1;
    var_88 = 0;
    OP_PUSH4_C 4661570860979585024, 4615514078110652826, 4662153602142306304, 8802641224559852288
    var_96 = 48;
    pri = fun_09D8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = -90;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 8802641224559852288;
    var_136 = 24;
    pri = fun_0A30(var_128, var_120, var_112)
    var_144 = 1;
    var_152 = 0;
    var_160 = -90;
    pri = float(var_160)
    var_168 = pri;
    OP_PUSH3_C 4661499392723779584, 4662241563072528384, 3641199730571183281
    var_176 = 48;
    pri = fun_0980(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 1;
    var_192 = 1;
    var_200 = 90;
    pri = float(var_200)
    var_208 = pri;
    OP_PUSH3_C 4661537875630751744, 4661339963537752064, -7228191161882330812
    var_216 = 48;
    pri = fun_0980(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH4_C -4587338432941916160, 4661576358537723904, 4660904556933152768, -1983266781276115916
    var_240 = 48;
    pri = fun_0980(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C -4583890364477210624, 4661014508095930368, 4661568222151678362, -180382328997127853
    var_264 = 48;
    pri = fun_0980(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C -4584594051918987264, 4661317973305196544, 4661298731851710464, -180383428508756064
    var_288 = 48;
    pri = fun_0980(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    OP_PUSH4_C 4635906940173339853, 4661510387840057344, 4660812197956419584, 286406426876005471
    var_312 = 48;
    pri = fun_0980(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 1;
    OP_PUSH5_C 4599075939470750516, 4659874094635601101, 4607182418800017408, 4661683780823757619, -3563486980877746800
    var_328 = 48;
    pri = fun_09D8(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 1;
    OP_PUSH2_C 4599075939470750516, -3563486980877746800
    var_344 = 24;
    pri = fun_0A30(var_336, var_328, var_320)
    var_352 = 1;
    var_360 = 1;
    OP_PUSH4_C 4635090662740878950, 4661454092844715213, 4660804501375025152, 286416322480659370
    var_368 = 48;
    pri = fun_0980(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 1;
    var_384 = 1;
    OP_PUSH4_C 4636047677661695181, 4661686309700501504, 4660683115291318682, -4581347173169346256
    var_392 = 48;
    pri = fun_0980(var_384, var_376, var_368, var_360, var_352, var_344)
    var_400 = 1;
    var_408 = 1;
    OP_PUSH4_C 4630981128080903373, 4660916651561058304, 4661349529288913715, -1145169861890585865
    var_416 = 48;
    pri = fun_0980(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 1;
    var_432 = 1;
    OP_PUSH4_C 4635449543336185037, 4661365362256353690, 4660709943375036416, -1145170961402214076
    var_440 = 48;
    pri = fun_0980(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 1;
    var_456 = 1;
    OP_PUSH4_C 4636301005140734771, 4661600657744697754, 4660614285863419904, -5846869138903177111
    var_464 = 48;
    pri = fun_0980(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 1;
    var_480 = 1;
    OP_PUSH4_C 4634204016564240384, 4661212420188930048, 4660829790142464000, -4673309309653228490
    var_488 = 48;
    pri = fun_0980(var_480, var_472, var_464, var_456, var_448, var_440)
    var_496 = 1;
    var_504 = 1;
    OP_PUSH4_C 4633641066610819072, 4661109725802895770, 4661240677637763891, -4673308210141600279
    var_512 = 48;
    pri = fun_0980(var_504, var_496, var_488, var_480, var_472, var_464)
    var_520 = 1;
    var_528 = 1;
    OP_PUSH4_C 4659631102565862605, 4607182418800017408, 4661634962507484365, -4673311508676484912
    var_536 = 48;
    pri = fun_09D8(var_528, var_520, var_512, var_504, var_496, var_488)
    var_544 = 1;
    OP_PUSH2_C 4612586738352862003, -4673311508676484912
    var_552 = 24;
    pri = fun_0A30(var_544, var_536, var_528)
    var_560 = 1;
    var_568 = 1;
    OP_PUSH4_C 4634239200936329216, 4661307088140081562, 4660991418351747072, -5846863641345036056
    var_576 = 48;
    pri = fun_0980(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 1;
    var_592 = 1;
    OP_PUSH4_C 4632149249234252595, 4660966569388959334, 4661241007491252224, -1550675395636559681
    var_600 = 48;
    pri = fun_0980(var_592, var_584, var_576, var_568, var_560, var_552)
    var_608 = 1;
    var_616 = 1;
    OP_PUSH4_C 4658962159691523686, 4607182418800017408, 4661429683686578586, 8494466849032567951
    var_624 = 48;
    pri = fun_09D8(var_616, var_608, var_600, var_592, var_584, var_576)
    var_632 = 1;
    OP_PUSH2_C 4623395377458551194, 8494466849032567951
    var_640 = 24;
    pri = fun_0A30(var_632, var_624, var_616)
    var_648 = 1;
    var_656 = 1;
    OP_PUSH4_C 4659121588877551206, 4607182418800017408, 4661378556395887002, -9083588544024446055
    var_664 = 48;
    pri = fun_09D8(var_656, var_648, var_640, var_632, var_624, var_616)
    var_672 = 1;
    OP_PUSH2_C 4623170197477182669, -9083588544024446055
    var_680 = 24;
    pri = fun_0A30(var_672, var_664, var_656)
    var_688 = 1;
    var_696 = 1;
    OP_PUSH4_C 4636033603912859648, 4661622867879578829, 4658989427579892531, 844030868786481832
    var_704 = 48;
    pri = fun_0980(var_696, var_688, var_680, var_672, var_664, var_656)
    var_712 = 1;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 0;
    var_736 = 0;
    var_744 = 286406426876005471;
    var_752 = 24;
    pri = fun_80C8(var_744, var_736, var_728)
    var_760 = 1;
    var_768 = 3;
    var_776 = 0;
    var_784 = 2;
    var_792 = -5846869138903177111;
    var_800 = 40;
    pri = fun_6398(var_792, var_784, var_776, var_768, var_760)
    var_808 = 0;
    var_816 = 0;
    var_824 = -4673309309653228490;
    var_832 = 24;
    pri = fun_80C8(var_824, var_816, var_808)
    var_840 = 1;
    var_848 = 3;
    var_856 = 0;
    var_864 = 7;
    var_872 = -4673308210141600279;
    var_880 = 40;
    pri = fun_6398(var_872, var_864, var_856, var_848, var_840)
    var_888 = -4673308210141600279;
    var_896 = 8;
    pri = fun_0E58(var_888)
    var_904 = 0;
    var_912 = 0;
    var_920 = -4673308210141600279;
    var_928 = 24;
    pri = fun_80C8(var_920, var_912, var_904)
    var_936 = 1;
    var_944 = 3;
    var_952 = 0;
    var_960 = 1;
    var_968 = -1145169861890585865;
    var_976 = 40;
    pri = fun_6398(var_968, var_960, var_952, var_944, var_936)
    var_984 = -1145169861890585865;
    var_992 = 8;
    pri = fun_0E58(var_984)
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = -1145169861890585865;
    var_1024 = 24;
    pri = fun_80C8(var_1016, var_1008, var_1000)
    var_1032 = 1;
    var_1040 = 3;
    var_1048 = 0;
    var_1056 = 1;
    var_1064 = -1145170961402214076;
    var_1072 = 40;
    pri = fun_6398(var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1080 = 1;
    var_1088 = 3;
    var_1096 = 0;
    var_1104 = 1;
    var_1112 = 286416322480659370;
    var_1120 = 40;
    pri = fun_6398(var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1128 = 1;
    var_1136 = 3;
    var_1144 = 0;
    var_1152 = 2;
    var_1160 = -4581347173169346256;
    var_1168 = 40;
    pri = fun_6398(var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1176 = 0;
    var_1184 = 2;
    var_1192 = -1983266781276115916;
    var_1200 = 24;
    pri = fun_80C8(var_1192, var_1184, var_1176)
    var_1208 = 1;
    var_1216 = 8;
    pri = fun_0060(var_1208)
    var_1224 = 286406426876005471;
    var_1232 = 8;
    pri = fun_0E58(var_1224)
    var_1240 = 1;
    var_1248 = 8;
    pri = fun_0060(var_1240)
    var_1256 = 1;
    var_1264 = 1;
    var_1272 = -1;
    var_1280 = -1;
    var_1288 = 0;
    var_1296 = 35;
    var_1304 = 286406426876005471;
    var_1312 = 56;
    pri = fun_4060(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1320 = 1;
    var_1328 = 1;
    var_1336 = -1;
    var_1344 = -1;
    var_1352 = 0;
    var_1360 = 13;
    var_1368 = 286416322480659370;
    var_1376 = 56;
    pri = fun_4060(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 1;
    var_1392 = 1;
    var_1400 = -1;
    var_1408 = -1;
    var_1416 = 0;
    var_1424 = 15;
    var_1432 = -4581347173169346256;
    var_1440 = 56;
    pri = fun_4060(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1448 = 1;
    var_1456 = 1;
    var_1464 = -1;
    var_1472 = -1;
    var_1480 = 0;
    var_1488 = 8;
    var_1496 = -1145170961402214076;
    var_1504 = 56;
    pri = fun_4060(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1512 = 1;
    var_1520 = 1;
    var_1528 = -1;
    var_1536 = -1;
    var_1544 = 0;
    var_1552 = 7;
    var_1560 = -5846869138903177111;
    var_1568 = 56;
    pri = fun_4060(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1576 = 1;
    var_1584 = 1;
    var_1592 = -1;
    var_1600 = -1;
    var_1608 = 0;
    var_1616 = 8;
    var_1624 = -4673309309653228490;
    var_1632 = 56;
    pri = fun_4060(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1640 = 1;
    var_1648 = 1;
    var_1656 = -1;
    var_1664 = -1;
    var_1672 = 0;
    var_1680 = 11;
    var_1688 = -4673308210141600279;
    var_1696 = 56;
    pri = fun_4060(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 1;
    var_1720 = -1;
    var_1728 = -1;
    var_1736 = 0;
    var_1744 = 8;
    var_1752 = 844030868786481832;
    var_1760 = 56;
    pri = fun_4060(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1768 = 10;
    var_1776 = 8;
    pri = fun_0060(var_1768)
    var_1784 = 1;
    var_1792 = 1;
    var_1800 = -1;
    var_1808 = -1;
    var_1816 = 0;
    var_1824 = 7;
    var_1832 = -1145169861890585865;
    var_1840 = 56;
    pri = fun_4060(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1848 = 1;
    var_1856 = 1;
    var_1864 = -1;
    var_1872 = -1;
    var_1880 = 0;
    var_1888 = 8;
    var_1896 = -1550675395636559681;
    var_1904 = 56;
    pri = fun_4060(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848)
    var_1912 = 1;
    var_1920 = 1;
    var_1928 = -1;
    var_1936 = -1;
    var_1944 = 0;
    var_1952 = 7;
    var_1960 = -3563486980877746800;
    var_1968 = 56;
    pri = fun_4060(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1976 = 1;
    var_1984 = 8;
    pri = fun_0060(var_1976)
    var_1992 = 5;
    var_2000 = 286406426876005471;
    var_2008 = 16;
    pri = fun_14F0(var_2000, var_1992)
    var_2016 = 5;
    var_2024 = -3563486980877746800;
    var_2032 = 16;
    pri = fun_14F0(var_2024, var_2016)
    var_2040 = 5;
    var_2048 = 286416322480659370;
    var_2056 = 16;
    pri = fun_14F0(var_2048, var_2040)
    var_2064 = 5;
    var_2072 = -4581347173169346256;
    var_2080 = 16;
    pri = fun_14F0(var_2072, var_2064)
    var_2088 = 5;
    var_2096 = -1145169861890585865;
    var_2104 = 16;
    pri = fun_14F0(var_2096, var_2088)
    var_2112 = 6;
    var_2120 = -1145170961402214076;
    var_2128 = 16;
    pri = fun_14F0(var_2120, var_2112)
    var_2136 = 5;
    var_2144 = -5846869138903177111;
    var_2152 = 16;
    pri = fun_14F0(var_2144, var_2136)
    var_2160 = 5;
    var_2168 = -4673309309653228490;
    var_2176 = 16;
    pri = fun_14F0(var_2168, var_2160)
    var_2184 = 6;
    var_2192 = -4673308210141600279;
    var_2200 = 16;
    pri = fun_14F0(var_2192, var_2184)
    var_2208 = 5;
    var_2216 = -5846863641345036056;
    var_2224 = 16;
    pri = fun_14F0(var_2216, var_2208)
    var_2232 = 5;
    var_2240 = -1550675395636559681;
    var_2248 = 16;
    pri = fun_14F0(var_2240, var_2232)
    var_2256 = 5;
    var_2264 = -9083588544024446055;
    var_2272 = 16;
    pri = fun_14F0(var_2264, var_2256)
    var_2280 = 1;
    var_2288 = 8;
    pri = fun_0060(var_2280)
    var_2296 = 31288;
    pri = SoundPostEvent(var_2296)
    var_2304 = 1;
    var_2312 = 1;
    var_2320 = -1;
    var_2328 = -1;
    var_2336 = 0;
    var_2344 = 20;
    var_2352 = -7228191161882330812;
    var_2360 = 56;
    pri = fun_4060(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2368 = 1;
    var_2376 = 31544;
    var_2384 = 304175435543070622;
    var_2392 = 24;
    pri = fun_0DA0(var_2384, var_2376, var_2368)
    var_2400 = 0;
    var_2408 = 4631009275578574438;
    var_2416 = 0;
    OP_PUSH5_C 4661387737317978931, 4633227298395054408, 4662333702146936013, 4661722098803985613, 4638310032787007078
    var_2424 = 4661583307451211448;
    var_2432 = 1;
    pri = EvCameraMove(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2440 = 0;
    pri = fun_23F0()
    var_2448 = 0;
    var_2456 = 4631009275578574438;
    var_2464 = 0;
    OP_PUSH5_C 4661452553528436326, 4633227298395054408, 4662352833649259315, 4661585825332839055, 4638301588537705759
    var_2472 = 4661542196711448904;
    var_2480 = 240;
    pri = EvCameraMove(var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2488 = 5;
    var_2496 = 8;
    pri = fun_0060(var_2488)
    var_2504 = 31656;
    pri = SoundPostEvent(var_2504)
    var_2512 = 31928;
    var_2520 = 8;
    var_2528 = 16;
    pri = fun_0280(var_2520, var_2512)
    var_2536 = 0;
    pri = fun_0350()
    var_2544 = 0;
    var_2552 = 0;
    var_2560 = 4641240890982006784;
    var_2568 = 0;
    var_2576 = 0;
    var_2584 = 4410;
    pri = float(var_2584)
    var_2592 = pri;
    var_2600 = 4650;
    pri = float(var_2600)
    var_2608 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_2616 = 72;
    pri = fun_0B20(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2624 = 0;
    var_2632 = 0;
    var_2640 = 4641240890982006784;
    var_2648 = 0;
    var_2656 = 0;
    var_2664 = 4345;
    pri = float(var_2664)
    var_2672 = pri;
    var_2680 = 4740;
    pri = float(var_2680)
    var_2688 = pri;
    OP_PUSH2_C 4607182418800017408, 3641199730571183281
    var_2696 = 72;
    pri = fun_0B20(var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2704 = 10;
    var_2712 = 8;
    pri = fun_0060(var_2704)
    var_2720 = 3641199730571183281;
    var_2728 = 8;
    pri = fun_14B0(var_2720)
    var_2736 = 6;
    var_2744 = 4;
    var_2752 = 3641199730571183281;
    var_2760 = 24;
    pri = fun_15E0(var_2752, var_2744, var_2736)
    var_2768 = 8802641224559852288;
    var_2776 = 8;
    pri = fun_0C40(var_2768)
    var_2784 = 3641199730571183281;
    var_2792 = 8;
    pri = fun_0C40(var_2784)
    var_2800 = 31944;
    pri = SoundPostEvent(var_2800)
    var_2808 = 0;
    var_2816 = 32184;
    var_2824 = 304175435543070622;
    var_2832 = 24;
    pri = fun_0DA0(var_2824, var_2816, var_2808)
    var_2840 = 5;
    var_2848 = 5;
    var_2856 = 3641199730571183281;
    var_2864 = 24;
    pri = fun_15E0(var_2856, var_2848, var_2840)
    var_2872 = 0;
    var_2880 = 3;
    var_2888 = 3641199730571183281;
    var_2896 = 24;
    pri = fun_80C8(var_2888, var_2880, var_2872)
    var_2904 = 1;
    var_2912 = 8;
    pri = fun_0060(var_2904)
    var_2920 = 3641199730571183281;
    var_2928 = 8;
    pri = fun_0E58(var_2920)
    var_2936 = 30;
    var_2944 = 8;
    pri = fun_0060(var_2936)
    var_2952 = 0;
    var_2960 = 4631684815522680013;
    var_2968 = 0;
    OP_PUSH5_C 4661220622545673257, 4629959373915443692, 4661293894000548250, 4661782692889792348, 4637871635510780232
    var_2976 = 4661892819974430392;
    var_2984 = 1;
    pri = EvCameraMove(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2992 = 0;
    pri = fun_23F0()
    var_3000 = 0;
    var_3008 = 4631684815522680013;
    var_3016 = 2;
    OP_PUSH5_C 4661220622545673257, 4629959373915443692, 4661293894000548250, 4661724814597706220, 4637864598636362465
    var_3024 = 4661942078095354757;
    var_3032 = 360;
    pri = EvCameraMove(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960)
    var_3040 = 75;
    var_3048 = 8;
    pri = fun_0060(var_3040)
    var_3056 = 1;
    var_3064 = 3;
    var_3072 = 0;
    var_3080 = 20;
    var_3088 = -7228191161882330812;
    var_3096 = 40;
    pri = fun_6398(var_3088, var_3080, var_3072, var_3064, var_3056)
    var_3104 = 1;
    var_3112 = 1;
    var_3120 = -1;
    OP_PUSH2_C 8802641224559852288, -7228191161882330812
    var_3128 = 40;
    pri = fun_1418(var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3136 = 1;
    var_3144 = 8;
    pri = fun_0060(var_3136)
    var_3152 = -7228191161882330812;
    var_3160 = 8;
    pri = fun_0E58(var_3152)
    var_3168 = 1;
    var_3176 = 8;
    pri = fun_0060(var_3168)
    var_3184 = 1;
    var_3192 = 0;
    var_3200 = 4641240890982006784;
    var_3208 = 0;
    var_3216 = 0;
    OP_PUSH4_C 4661537875630751744, 4661592851212140544, 4607182418800017408, -7228191161882330812
    var_3224 = 72;
    pri = fun_0B20(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3232 = 1;
    var_3240 = 1;
    var_3248 = 60;
    var_3256 = 4661537875630751744;
    var_3264 = 150;
    pri = float(var_3264)
    var_3272 = pri;
    OP_PUSH2_C 4661592851212140544, 8802641224559852288
    var_3280 = 56;
    pri = fun_13B0(var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224)
    var_3288 = 0;
    var_3296 = 3;
    var_3304 = 0;
    var_3312 = 100;
    var_3320 = -1;
    OP_PUSH2_C -692699688403963797, -7228191161882330812
    var_3328 = 56;
    pri = fun_21B8(var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272)
    var_3336 = 1;
    var_3344 = 8;
    pri = fun_2300(var_3336)
    var_3352 = -7228191161882330812;
    var_3360 = 8;
    pri = fun_0C40(var_3352)
    var_3368 = 1;
    var_3376 = 1;
    var_3384 = -90;
    pri = float(var_3384)
    var_3392 = pri;
    OP_PUSH3_C 4661455412258668544, 4661922704700473344, 3641199730571183281
    var_3400 = 48;
    pri = fun_0980(var_3392, var_3384, var_3376, var_3368, var_3360, var_3352)
    var_3408 = 3641199730571183281;
    var_3416 = 8;
    pri = fun_1648(var_3408)
    var_3424 = 1;
    var_3432 = 1;
    var_3440 = -1;
    var_3448 = 4661537875630751744;
    var_3456 = 150;
    pri = float(var_3456)
    var_3464 = pri;
    OP_PUSH2_C 4661592851212140544, 3641199730571183281
    var_3472 = 56;
    pri = fun_13B0(var_3464, var_3456, var_3448, var_3440, var_3432, var_3424, var_3416)
    var_3480 = 0;
    var_3488 = 4630938906834396774;
    var_3496 = 0;
    OP_PUSH5_C 4661049912370344755, -4596663698920340193, 4661709223522824356, 4661923782221868564, 4641408368593149624
    var_3504 = 4661690542820268442;
    var_3512 = 1;
    pri = EvCameraMove(var_3512, var_3504, var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440)
    var_3520 = 0;
    pri = fun_23F0()
    var_3528 = 0;
    var_3536 = 4630938906834396774;
    var_3544 = 2;
    OP_PUSH5_C 4661052155374065418, -4596663698920340193, 4661756788395841946, 4661924914718845174, 4641408368593149624
    var_3552 = 4661738118688402309;
    var_3560 = 360;
    pri = EvCameraMove(var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496, var_3488)
    var_3568 = 0;
    var_3576 = 3;
    var_3584 = 0;
    var_3592 = 100;
    var_3600 = -1;
    OP_PUSH2_C -692698588892335586, -7228191161882330812
    var_3608 = 56;
    pri = fun_21B8(var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552)
    var_3616 = 1;
    var_3624 = 8;
    pri = fun_2300(var_3616)
    var_3632 = 1;
    var_3640 = 1;
    var_3648 = -1;
    var_3656 = -1;
    var_3664 = 0;
    var_3672 = 1;
    var_3680 = -7228191161882330812;
    var_3688 = 56;
    pri = fun_4060(var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632)
    var_3696 = 0;
    var_3704 = 3;
    var_3712 = 0;
    var_3720 = 100;
    var_3728 = -1;
    OP_PUSH2_C -692697489380707375, -7228191161882330812
    var_3736 = 56;
    pri = fun_21B8(var_3728, var_3720, var_3712, var_3704, var_3696, var_3688, var_3680)
    var_3744 = 1;
    var_3752 = 8;
    pri = fun_2300(var_3744)
    var_3760 = 1;
    var_3768 = 3;
    var_3776 = 0;
    var_3784 = 1;
    var_3792 = -7228191161882330812;
    var_3800 = 40;
    pri = fun_6398(var_3792, var_3784, var_3776, var_3768, var_3760)
    var_3808 = 0;
    var_3816 = 3;
    var_3824 = 0;
    var_3832 = 100;
    var_3840 = -1;
    OP_PUSH2_C -692696389869079164, -7228191161882330812
    var_3848 = 56;
    pri = fun_21B8(var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792)
    var_3856 = 1;
    var_3864 = 8;
    pri = fun_2300(var_3856)
    var_3872 = 0;
    pri = fun_23C0()
    var_3880 = 0;
    var_3888 = 0;
    var_3896 = 3641199730571183281;
    var_3904 = 24;
    pri = fun_80C8(var_3896, var_3888, var_3880)
    var_3912 = 3641199730571183281;
    var_3920 = 8;
    pri = fun_14B0(var_3912)
    var_3928 = 7;
    var_3936 = 2;
    var_3944 = 3641199730571183281;
    var_3952 = 24;
    pri = fun_15E0(var_3944, var_3936, var_3928)
    var_3960 = 0;
    var_3968 = 3;
    var_3976 = 0;
    var_3984 = 100;
    var_3992 = -1;
    OP_PUSH2_C -2557438214945584122, 3641199730571183281
    var_4000 = 56;
    pri = fun_21B8(var_3992, var_3984, var_3976, var_3968, var_3960, var_3952, var_3944)
    var_4008 = 1;
    var_4016 = 8;
    pri = fun_2300(var_4008)
    var_4024 = 0;
    pri = fun_23C0()
    var_4032 = 0;
    var_4040 = 2;
    var_4048 = -7228191161882330812;
    var_4056 = 24;
    pri = fun_80C8(var_4048, var_4040, var_4032)
    var_4064 = 0;
    var_4072 = 3;
    var_4080 = 0;
    var_4088 = 100;
    var_4096 = -1;
    OP_PUSH2_C -692695290357450953, -7228191161882330812
    var_4104 = 56;
    pri = fun_21B8(var_4096, var_4088, var_4080, var_4072, var_4064, var_4056, var_4048)
    var_4112 = 1;
    var_4120 = 8;
    pri = fun_2300(var_4112)
    var_4128 = 3641199730571183281;
    var_4136 = 8;
    pri = fun_14B0(var_4128)
    var_4144 = 3641199730571183281;
    var_4152 = 8;
    pri = fun_1648(var_4144)
    var_4160 = 0;
    var_4168 = 3;
    var_4176 = 0;
    var_4184 = 100;
    var_4192 = -1;
    OP_PUSH2_C -692694190845822742, -7228191161882330812
    var_4200 = 56;
    pri = fun_21B8(var_4192, var_4184, var_4176, var_4168, var_4160, var_4152, var_4144)
    var_4208 = 1;
    var_4216 = 8;
    pri = fun_2300(var_4208)
    var_4224 = 0;
    pri = fun_23C0()
    var_4232 = 1;
    var_4240 = 1;
    var_4248 = -1;
    OP_PUSH2_C 8802641224559852288, 3641199730571183281
    var_4256 = 40;
    pri = fun_1418(var_4248, var_4240, var_4232, var_4224, var_4216)
    var_4264 = 1;
    var_4272 = 0;
    var_4280 = 4641240890982006784;
    var_4288 = 20;
    pri = float(var_4288)
    var_4296 = pri;
    var_4304 = 1;
    var_4312 = 4305;
    pri = float(var_4312)
    var_4320 = pri;
    var_4328 = 4580;
    pri = float(var_4328)
    var_4336 = pri;
    OP_PUSH2_C 4607182418800017408, 3641199730571183281
    var_4344 = 72;
    pri = fun_0B20(var_4336, var_4328, var_4320, var_4312, var_4304, var_4296, var_4288, var_4280, var_4272)
    var_4352 = 45;
    var_4360 = 8;
    pri = fun_0060(var_4352)
    var_4368 = 1;
    var_4376 = 1;
    var_4384 = -1;
    OP_PUSH2_C 8802641224559852288, 3641199730571183281
    var_4392 = 40;
    pri = fun_1418(var_4384, var_4376, var_4368, var_4360, var_4352)
    var_4400 = 0;
    var_4408 = 0;
    var_4416 = 0;
    var_4424 = -120;
    pri = float(var_4424)
    var_4432 = pri;
    var_4440 = 8802641224559852288;
    var_4448 = 40;
    pri = fun_0B98(var_4440, var_4432, var_4424, var_4416, var_4408)
    var_4456 = 1;
    var_4464 = 1;
    var_4472 = -1;
    OP_PUSH2_C 3641199730571183281, 8802641224559852288
    var_4480 = 40;
    pri = fun_1418(var_4472, var_4464, var_4456, var_4448, var_4440)
    var_4488 = 3641199730571183281;
    var_4496 = 8;
    pri = fun_0C40(var_4488)
    var_4504 = 0;
    var_4512 = 3;
    var_4520 = 0;
    var_4528 = 100;
    var_4536 = -1;
    OP_PUSH2_C -2557439314457212333, 3641199730571183281
    var_4544 = 56;
    pri = fun_21B8(var_4536, var_4528, var_4520, var_4512, var_4504, var_4496, var_4488)
    var_4552 = 1;
    var_4560 = 8;
    pri = fun_2300(var_4552)
    var_4568 = 8802641224559852288;
    var_4576 = 8;
    pri = fun_0C40(var_4568)
    var_4584 = 0;
    var_4592 = 3;
    var_4600 = 0;
    var_4608 = 100;
    var_4616 = -1;
    OP_PUSH2_C -2557440413968840544, 3641199730571183281
    var_4624 = 56;
    pri = fun_21B8(var_4616, var_4608, var_4600, var_4592, var_4584, var_4576, var_4568)
    var_4632 = 1;
    var_4640 = 8;
    pri = fun_2300(var_4632)
    var_4648 = 0;
    pri = fun_23C0()
    var_4656 = 1;
    var_4664 = 1;
    var_4672 = -1;
    var_4680 = 4661537875630751744;
    var_4688 = 150;
    pri = float(var_4688)
    var_4696 = pri;
    OP_PUSH2_C 4661592851212140544, 8802641224559852288
    var_4704 = 56;
    pri = fun_13B0(var_4696, var_4688, var_4680, var_4672, var_4664, var_4656, var_4648)
    var_4712 = 0;
    var_4720 = 0;
    var_4728 = 0;
    var_4736 = 0;
    OP_PUSH2_C -7228191161882330812, 3641199730571183281
    var_4744 = 48;
    pri = fun_0BE8(var_4736, var_4728, var_4720, var_4712, var_4704, var_4696)
    var_4752 = 1;
    var_4760 = 1;
    var_4768 = -1;
    var_4776 = 4661537875630751744;
    var_4784 = 150;
    pri = float(var_4784)
    var_4792 = pri;
    OP_PUSH2_C 4661592851212140544, 3641199730571183281
    var_4800 = 56;
    pri = fun_13B0(var_4792, var_4784, var_4776, var_4768, var_4760, var_4752, var_4744)
    var_4808 = 1;
    var_4816 = -1;
    var_4824 = -1;
    var_4832 = 3;
    var_4840 = 0;
    var_4848 = 0;
    var_4856 = -7228191161882330812;
    var_4864 = 56;
    pri = fun_2480(var_4856, var_4848, var_4840, var_4832, var_4824, var_4816, var_4808)
    var_4872 = 0;
    var_4880 = 3;
    var_4888 = 0;
    var_4896 = 100;
    var_4904 = -1;
    OP_PUSH2_C -692693091334194531, -7228191161882330812
    var_4912 = 56;
    pri = fun_21B8(var_4904, var_4896, var_4888, var_4880, var_4872, var_4864, var_4856)
    var_4920 = 1;
    var_4928 = 8;
    pri = fun_2300(var_4920)
    var_4936 = 0;
    pri = fun_23C0()
    var_4944 = 3641199730571183281;
    var_4952 = 8;
    pri = fun_0C40(var_4944)
    var_4960 = 0;
    var_4968 = 0;
    var_4976 = -7228191161882330812;
    var_4984 = 24;
    pri = fun_80C8(var_4976, var_4968, var_4960)
    var_4992 = 0;
    var_5000 = 3;
    var_5008 = 3641199730571183281;
    var_5016 = 24;
    pri = fun_80C8(var_5008, var_5000, var_4992)
    var_5024 = 0;
    var_5032 = 3;
    var_5040 = 0;
    var_5048 = 100;
    var_5056 = -1;
    OP_PUSH2_C -2557432717387443067, 3641199730571183281
    var_5064 = 56;
    pri = fun_21B8(var_5056, var_5048, var_5040, var_5032, var_5024, var_5016, var_5008)
    var_5072 = 1;
    var_5080 = 8;
    pri = fun_2300(var_5072)
    var_5088 = 0;
    pri = fun_23C0()
    var_5096 = 1;
    var_5104 = 0;
    var_5112 = 31240;
    var_5120 = 8;
    var_5128 = 32;
    pri = fun_02E0(var_5120, var_5112, var_5104, var_5096)
    var_5136 = 0;
    pri = fun_0350()
    var_5144 = 0;
    var_5152 = 0;
    var_5160 = 3641199730571183281;
    var_5168 = 24;
    pri = fun_80C8(var_5160, var_5152, var_5144)
    var_5176 = -1;
    var_5184 = 8802641224559852288;
    var_5192 = 16;
    pri = fun_1470(var_5184, var_5176)
    var_5200 = -1;
    var_5208 = 3641199730571183281;
    var_5216 = 16;
    pri = fun_1470(var_5208, var_5200)
    var_5224 = 0;
    var_5232 = 8802641224559852288;
    var_5240 = 16;
    pri = fun_0AA8(var_5232, var_5224)
    var_5248 = 0;
    var_5256 = 3641199730571183281;
    var_5264 = 16;
    pri = fun_0AA8(var_5256, var_5248)
    var_5272 = 0;
    var_5280 = -7228191161882330812;
    var_5288 = 16;
    pri = fun_0AA8(var_5280, var_5272)
    var_5296 = 3;
    var_5304 = 1;
    pri = EvCameraEnd(var_5304, var_5296)
    var_5312 = 0;
    var_5320 = 0;
    var_5328 = 0;
    var_5336 = 0;
    var_5344 = 0;
    var_5352 = 5600;
    pri = float(var_5352)
    var_5360 = pri;
    var_5368 = 6500;
    pri = float(var_5368)
    var_5376 = pri;
    OP_PUSH2_C -935838431704349219, 5475743609293200544
    var_5384 = 72;
    pri = fun_0408(var_5376, var_5368, var_5360, var_5352, var_5344, var_5336, var_5328, var_5320, var_5312)
    pri = EvCameraStart()
    var_5392 = 15;
    var_5400 = 8;
    pri = fun_0060(var_5392)
    var_5408 = 0;
    var_5416 = 8802641224559852288;
    var_5424 = 16;
    pri = fun_0A70(var_5416, var_5408)
    var_5432 = 0;
    var_5440 = 4632318134220278989;
    var_5448 = 0;
    OP_PUSH5_C 4662044739496040202, 4647115801511539507, 4662760488580373545, 4663368694432394117, 4639122439938538209
    var_5456 = 4663150749237536358;
    var_5464 = 1;
    pri = EvCameraMove(var_5464, var_5456, var_5448, var_5440, var_5432, var_5424, var_5416, var_5408, var_5400, var_5392)
    var_5472 = 0;
    pri = fun_23F0()
    var_5480 = 0;
    var_5488 = 4632318134220278989;
    var_5496 = 2;
    OP_PUSH5_C 4662044739496040202, 4647115801511539507, 4662760488580373545, 4663354015952163308, 4639143902405512397
    var_5504 = 4663198039232647004;
    var_5512 = 120;
    pri = EvCameraMove(var_5512, var_5504, var_5496, var_5488, var_5480, var_5472, var_5464, var_5456, var_5448, var_5440)
    var_5520 = 32296;
    var_5528 = 8;
    var_5536 = 16;
    pri = fun_0280(var_5528, var_5520)
    var_5544 = 0;
    pri = fun_0350()
    var_5552 = 90;
    var_5560 = 8;
    pri = fun_0060(var_5552)
    var_5568 = 0;
    var_5576 = 4631952216750555136;
    var_5584 = 0;
    OP_PUSH5_C 4662903699969891369, 4648427211020220498, 4663859307515824046, 4664073250488356700, 4639705093140329267
    var_5592 = 4664526458186209690;
    var_5600 = 1;
    pri = EvCameraMove(var_5600, var_5592, var_5584, var_5576, var_5568, var_5560, var_5552, var_5544, var_5536, var_5528)
    var_5608 = 0;
    pri = fun_23F0()
    var_5616 = 0;
    var_5624 = 4630770021848370381;
    var_5632 = 3;
    OP_PUSH5_C 4662654825512944271, 4643999521675631657, 4663717305589096776, 4663888763432332165, 4639711778171026145
    var_5640 = 4664421322884361748;
    var_5648 = 120;
    pri = EvCameraMove(var_5648, var_5640, var_5632, var_5624, var_5616, var_5608, var_5600, var_5592, var_5584, var_5576)
    var_5656 = 0;
    pri = fun_23F0()
    var_5664 = 1;
    var_5672 = 0;
    var_5680 = 31240;
    var_5688 = 8;
    var_5696 = 32;
    pri = fun_02E0(var_5688, var_5680, var_5672, var_5664)
    var_5704 = 0;
    pri = fun_0350()
    var_5712 = 3;
    var_5720 = 0;
    pri = EvCameraEnd(var_5720, var_5712)
    var_5728 = 32344;
    pri = SoundPostEvent(var_5728)
    pri = 0;
    return pri;
}
// fun_BA98
fun_BA98() {
    pri = 0;
    return pri;
}
// fun_BAB0
fun_BAB0() {
    var_8 = -7228191161882330812;
    var_16 = 8;
    pri = fun_0928(var_8)
    var_24 = 3641199730571183281;
    var_32 = 8;
    pri = fun_0928(var_24)
    var_40 = -1554014642428341586;
    var_48 = 8;
    pri = fun_07A8(var_40)
    var_56 = -1995419997847866053;
    var_64 = 8;
    pri = fun_07A8(var_56)
    var_72 = -7718714376658834905;
    var_80 = 8;
    pri = fun_07A8(var_72)
    var_88 = 1560;
    var_96 = 8;
    pri = fun_8860(var_88)
    var_104 = 10;
    var_112 = -7727870117976650933;
    pri = WorkSet(var_112, var_104)
    var_120 = 1157467776379281293;
    pri = VanishFlagSet(var_120)
    var_128 = -1103613497924482127;
    pri = VanishFlagSet(var_128)
    var_136 = 4;
    var_144 = 8;
    pri = fun_0568(var_136)
    pri = 0;
    return pri;
}
// fun_BC50
fun_BC50() {
    var_8 = 0;
    pri = fun_07D8()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 2582;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 1021;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH3_C 7866785123243537653, 742287118255506116, 2282062955908320030
    var_88 = 80;
    pri = fun_04A8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BD30
fun_BD30() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_89F8()
    var_16 = 0;
    pri = fun_8A50()
    var_24 = 0;
    pri = fun_8A68()
    var_32 = 0;
    pri = fun_8A80()
    var_40 = 0;
    pri = fun_BA98()
    var_48 = 0;
    pri = fun_BAB0()
    var_56 = 0;
    pri = fun_BC50()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BE20
fun_BE20() {
    var_8 = 0;
    pri = fun_8A50()
    var_16 = 0;
    pri = fun_BAB0()
    pri = 0;
    return pri;
}
