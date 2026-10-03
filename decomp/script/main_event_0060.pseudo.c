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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_04F8
fun_04F8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0530
// lab_0530
    var_8 = 0;
    pri = fun_0678()
    OP_JNZ lab_0568
    OP_JUMP lab_0598
// lab_0568
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0530
// lab_0598
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05C8
// lab_05C8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0608
    pri = 0;
    return pri;
// lab_0608
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05C8
    pri = 0;
    return pri;
}
// fun_0648
fun_0648() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0678
fun_0678() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07A8
fun_07A8() {
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
// fun_0820
fun_0820() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1520(var_8)
    OP_JZER lab_0998
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1550(var_24)
    OP_JNZ lab_0998
    pri = 0;
    return pri;
// lab_0998
    OP_JUMP lab_09A8
// lab_09A8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A08
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09A8
    pri = 0;
    return pri;
}
// fun_0A48
fun_0A48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B40
    pri = 0;
    return pri;
// lab_0B40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B80
// lab_0B80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1520(var_8)
    OP_JNZ lab_0C08
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BF8
    pri = 0;
    return pri;
// lab_0C08
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C50
    pri = 0;
    return pri;
// lab_0C50
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E20(var_8)
    pri = 0;
    return pri;
// lab_0CB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B80
    pri = 0;
    return pri;
// lab_0BF8
    OP_JUMP lab_0C50
}
// fun_0CF8
fun_0CF8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D40
// lab_0D40
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D98
    pri = 0;
    return pri;
// lab_0D98
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DD8
    pri = 0;
    return pri;
// lab_0DD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D40
    pri = 0;
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0EA8
    pri = 0;
    return pri;
// lab_0EA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1520(var_8)
    OP_JZER lab_0FD8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F00
    OP_ZERO_P_S 64
// lab_0FD8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1010
    OP_CONST_S 64, 1
// lab_1010
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1048
    OP_CONST_S 72, 1
// lab_1048
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
// lab_0F00
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F28
    OP_ZERO_P_S 72
// lab_0F28
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
    OP_JUMP lab_10E8
// lab_10E8
    pri = 0;
    return pri;
}
// fun_10F8
fun_10F8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1138
fun_1138() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
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
// fun_11E0
fun_11E0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
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
// fun_1298
fun_1298() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D8
fun_12D8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1460
fun_1460() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1370(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_13E8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_14C8
fun_14C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13B0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1428(var_24)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1550
fun_1550() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1580
fun_1580() {
    OP_JUMP lab_1598
// lab_1598
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1628
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1618
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AF8(var_8)
    pri = 0;
    return pri;
// lab_1628
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16B8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_16A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AF8(var_8)
    pri = 0;
    return pri;
// lab_16B8
    pri = 0;
    return pri;
// lab_16A8
    OP_JUMP lab_16C8
// lab_16C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1598
    pri = 0;
    return pri;
// lab_1618
    OP_JUMP lab_16C8
}
// fun_1708
fun_1708() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AF8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1580(var_40)
    pri = 0;
    return pri;
}
// fun_1790
fun_1790() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_17F0
fun_17F0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1828
fun_1828() {
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
// switch_1E40
        case default:
        {
// switch_1E40_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E88
// lab_1E88
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
            OP_JNZ lab_1F30
            var_88 = 0;
            pri = fun_20E8()
// lab_1F30
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E40_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A28
                case default:
                {
// switch_1A28_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AA0
// lab_1AA0
                    OP_JUMP lab_1E88
                }
                case 0x0:
                {
// switch_1A28_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1AA0
                }
                case 0x1:
                {
// switch_1A28_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1AA0
                }
                case 0x2:
                {
// switch_1A28_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1AA0
                }
                case 0x3:
                {
// switch_1A28_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AA0
                }
                case 0x4:
                {
// switch_1A28_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1AA0
                }
                case 0x5:
                {
// switch_1A28_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1AA0
                }
            }
        }
        case 0x65:
        {
// switch_1E40_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BE0
                case default:
                {
// switch_1BE0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C58
// lab_1C58
                    OP_JUMP lab_1E88
                }
                case 0x0:
                {
// switch_1BE0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C58
                }
                case 0x1:
                {
// switch_1BE0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C58
                }
                case 0x2:
                {
// switch_1BE0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C58
                }
                case 0x3:
                {
// switch_1BE0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C58
                }
                case 0x4:
                {
// switch_1BE0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C58
                }
                case 0x5:
                {
// switch_1BE0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C58
                }
            }
        }
        case 0x66:
        {
// switch_1E40_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D98
                case default:
                {
// switch_1D98_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E10
// lab_1E10
                    OP_JUMP lab_1E88
                }
                case 0x0:
                {
// switch_1D98_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E10
                }
                case 0x1:
                {
// switch_1D98_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E10
                }
                case 0x2:
                {
// switch_1D98_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E10
                }
                case 0x3:
                {
// switch_1D98_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E10
                }
                case 0x4:
                {
// switch_1D98_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E10
                }
                case 0x5:
                {
// switch_1D98_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E10
                }
            }
        }
    }
}
// fun_1F48
fun_1F48() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AC0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FF0
    pri = 1;
    return pri;
// lab_1FF0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2038
fun_2038() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2088
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F48(var_8)
    arg_2 = pri;
// lab_2088
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1828(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    OP_JUMP lab_2100
// lab_2100
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2140
    pri = 0;
    return pri;
// lab_2140
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2100
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
    var_8 = 0;
    pri = fun_20E8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2230
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_2230
    pri = 0;
    return pri;
}
// fun_2240
fun_2240() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2270
fun_2270() {
    OP_JUMP lab_2288
// lab_2288
    pri = EvCameraMoveWait_()
    OP_JZER lab_22C0
    pri = 0;
    return pri;
// lab_22C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2288
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    pri = arg_6;
    OP_JNZ lab_2338
    var_8 = 0;
    pri = fun_10F8()
// lab_2338
    pri = arg_1;
    switch (pri) {
// switch_38A0
        case default:
        {
// switch_38A0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3BF0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3BF0
            pri = 1;
            OP_JUMP lab_3BF8
// lab_3BF0
            pri = 0;
// lab_3BF8
            OP_JZER lab_3D50
            var_16 = 8368;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AC0(var_24, var_16)
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
            OP_JUMP lab_3DB0
// lab_3D50
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
// lab_3DB0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E10
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3E70
// lab_3E10
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3E70
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3E70
            pri = arg_2;
            OP_JZER lab_3EB0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3EB0
            var_8 = 0;
            pri = fun_1138()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38A0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1:
        {
// switch_38A0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x2:
        {
// switch_38A0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x3:
        {
// switch_38A0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x4:
        {
// switch_38A0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x5:
        {
// switch_38A0_case_0x5
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x6:
        {
// switch_38A0_case_0x6
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x7:
        {
// switch_38A0_case_0x7
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x8:
        {
// switch_38A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x9:
        {
// switch_38A0_case_0x9
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xa:
        {
// switch_38A0_case_0xa
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xb:
        {
// switch_38A0_case_0xb
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xc:
        {
// switch_38A0_case_0xc
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xd:
        {
// switch_38A0_case_0xd
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xe:
        {
// switch_38A0_case_0xe
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xf:
        {
// switch_38A0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x10:
        {
// switch_38A0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x11:
        {
// switch_38A0_case_0x11
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x12:
        {
// switch_38A0_case_0x12
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x13:
        {
// switch_38A0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x14:
        {
// switch_38A0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x15:
        {
// switch_38A0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x16:
        {
// switch_38A0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x17:
        {
// switch_38A0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x18:
        {
// switch_38A0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x19:
        {
// switch_38A0_case_0x19
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1a:
        {
// switch_38A0_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A48(var_48, var_40)
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
            pri = fun_0E58(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1b:
        {
// switch_38A0_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A48(var_48, var_40)
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
            pri = fun_0E58(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1c:
        {
// switch_38A0_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A48(var_48, var_40)
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
            pri = fun_0E58(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1d:
        {
// switch_38A0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1e:
        {
// switch_38A0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1f:
        {
// switch_38A0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x20:
        {
// switch_38A0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x21:
        {
// switch_38A0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x22:
        {
// switch_38A0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x23:
        {
// switch_38A0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x24:
        {
// switch_38A0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x25:
        {
// switch_38A0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x26:
        {
// switch_38A0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x27:
        {
// switch_38A0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x28:
        {
// switch_38A0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x29:
        {
// switch_38A0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
    }
}
// fun_3EE0
fun_3EE0() {
    pri = arg_5;
    OP_JNZ lab_3F18
    var_8 = 0;
    pri = fun_10F8()
// lab_3F18
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3F68
    OP_CONST_S -8, -1
// lab_3F68
    pri = arg_1;
    switch (pri) {
// switch_5A20
        case default:
        {
// switch_5A20_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5EC8
            var_520 = 28232;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AC0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5EC8
            pri = 1;
            OP_JUMP lab_5ED0
// lab_5EC8
            pri = 0;
// lab_5ED0
            OP_JZER lab_5F20
            var_8 = 64;
            var_16 = 28328;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6178
// lab_5F20
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5F88
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5F88
            pri = 1;
            OP_JUMP lab_5F90
// lab_5F88
            pri = 0;
// lab_5F90
            OP_JZER lab_6118
            var_16 = 28504;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AC0(var_24, var_16)
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
            OP_JUMP lab_6178
// lab_6118
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
// lab_6178
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_61E8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_61E8
            var_8 = 0;
            pri = fun_1138()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5A20_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1:
        {
// switch_5A20_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2:
        {
// switch_5A20_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3:
        {
// switch_5A20_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x4:
        {
// switch_5A20_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x5:
        {
// switch_5A20_case_0x5
            var_8 = 2;
            var_16 = 18488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E20(var_40)
            OP_JUMP switch_5A20_case_default
        }
        case 0x6:
        {
// switch_5A20_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x7:
        {
// switch_5A20_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x8:
        {
// switch_5A20_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x9:
        {
// switch_5A20_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xa:
        {
// switch_5A20_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xb:
        {
// switch_5A20_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xc:
        {
// switch_5A20_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0xd:
        {
// switch_5A20_case_0xd
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0xe:
        {
// switch_5A20_case_0xe
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0xf:
        {
// switch_5A20_case_0xf
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x10:
        {
// switch_5A20_case_0x10
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x11:
        {
// switch_5A20_case_0x11
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x12:
        {
// switch_5A20_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x13:
        {
// switch_5A20_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x14:
        {
// switch_5A20_case_0x14
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x15:
        {
// switch_5A20_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x16:
        {
// switch_5A20_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x17:
        {
// switch_5A20_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x18:
        {
// switch_5A20_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x19:
        {
// switch_5A20_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1a:
        {
// switch_5A20_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1b:
        {
// switch_5A20_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1c:
        {
// switch_5A20_case_0x1c
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1d:
        {
// switch_5A20_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1e:
        {
// switch_5A20_case_0x1e
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x1f:
        {
// switch_5A20_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x20:
        {
// switch_5A20_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x21:
        {
// switch_5A20_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x22:
        {
// switch_5A20_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x23:
        {
// switch_5A20_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x24:
        {
// switch_5A20_case_0x24
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x25:
        {
// switch_5A20_case_0x25
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x26:
        {
// switch_5A20_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x27:
        {
// switch_5A20_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x28:
        {
// switch_5A20_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x29:
        {
// switch_5A20_case_0x29
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2a:
        {
// switch_5A20_case_0x2a
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2b:
        {
// switch_5A20_case_0x2b
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2c:
        {
// switch_5A20_case_0x2c
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2d:
        {
// switch_5A20_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2e:
        {
// switch_5A20_case_0x2e
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x2f:
        {
// switch_5A20_case_0x2f
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x30:
        {
// switch_5A20_case_0x30
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x31:
        {
// switch_5A20_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x32:
        {
// switch_5A20_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x33:
        {
// switch_5A20_case_0x33
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x34:
        {
// switch_5A20_case_0x34
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x35:
        {
// switch_5A20_case_0x35
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x36:
        {
// switch_5A20_case_0x36
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x37:
        {
// switch_5A20_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x38:
        {
// switch_5A20_case_0x38
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
            pri = fun_0E58(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A20_case_default
        }
        case 0x39:
        {
// switch_5A20_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3a:
        {
// switch_5A20_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3b:
        {
// switch_5A20_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3c:
        {
// switch_5A20_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27808;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3d:
        {
// switch_5A20_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27984;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
        case 0x3e:
        {
// switch_5A20_case_0x3e
            var_8 = 4;
            var_16 = 28128;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            OP_JUMP switch_5A20_case_default
        }
    }
}
// fun_6218
fun_6218() {
    pri = arg_4;
    OP_JNZ lab_6250
    var_8 = 0;
    pri = fun_10F8()
// lab_6250
    pri = arg_1;
    switch (pri) {
// switch_7628
        case default:
        {
// switch_7628_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29200;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1520(var_264)
            OP_JZER lab_7BF0
            pri = arg_3;
            switch (pri) {
// switch_7B98
                case default:
                {
// switch_7B98_case_default
                    OP_JUMP lab_7EA8
// lab_7EA8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7F18
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7F18
                    var_8 = 0;
                    pri = fun_1138()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7B98_case_0x1
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B98_case_default
                }
                case 0x2:
                {
// switch_7B98_case_0x2
                    var_8 = 32;
                    var_16 = 29456;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B98_case_default
                }
                case 0x3:
                {
// switch_7B98_case_0x3
                    var_8 = 32;
                    var_16 = 29256;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B98_case_default
                }
            }
// lab_7BF0
            pri = arg_1;
            OP_JZER lab_7C40
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7C40
            pri = 0;
            OP_JUMP lab_7C48
// lab_7C40
            pri = 1;
// lab_7C48
            OP_JZER lab_7CB0
            var_8 = 29552;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AC0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7CB0
            pri = 1;
            OP_JUMP lab_7CB8
// lab_7CB0
            pri = 0;
// lab_7CB8
            OP_JZER lab_7D08
            var_8 = 32;
            var_16 = 29648;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7EA8
// lab_7D08
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7D70
            var_8 = 32;
            var_16 = 29808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7EA8
// lab_7D70
            var_16 = 29928;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AC0(var_24, var_16)
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
// switch_7628_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x1:
        {
// switch_7628_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x2:
        {
// switch_7628_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x3:
        {
// switch_7628_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x4:
        {
// switch_7628_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x5:
        {
// switch_7628_case_0x5
            var_8 = 1;
            var_16 = 28680;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E20(var_40)
            OP_JUMP switch_7628_case_default
        }
        case 0x6:
        {
// switch_7628_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x7:
        {
// switch_7628_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x8:
        {
// switch_7628_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x9:
        {
// switch_7628_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0xa:
        {
// switch_7628_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0xb:
        {
// switch_7628_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0xc:
        {
// switch_7628_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0xd:
        {
// switch_7628_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0xe:
        {
// switch_7628_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0xf:
        {
// switch_7628_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x10:
        {
// switch_7628_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x11:
        {
// switch_7628_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x12:
        {
// switch_7628_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x13:
        {
// switch_7628_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x14:
        {
// switch_7628_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x15:
        {
// switch_7628_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x16:
        {
// switch_7628_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x17:
        {
// switch_7628_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x18:
        {
// switch_7628_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x19:
        {
// switch_7628_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x1a:
        {
// switch_7628_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x1b:
        {
// switch_7628_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x1c:
        {
// switch_7628_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x1d:
        {
// switch_7628_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x1e:
        {
// switch_7628_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x1f:
        {
// switch_7628_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x20:
        {
// switch_7628_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x21:
        {
// switch_7628_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x22:
        {
// switch_7628_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x23:
        {
// switch_7628_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x24:
        {
// switch_7628_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x25:
        {
// switch_7628_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x26:
        {
// switch_7628_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x27:
        {
// switch_7628_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x28:
        {
// switch_7628_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x29:
        {
// switch_7628_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x2a:
        {
// switch_7628_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x2b:
        {
// switch_7628_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x2c:
        {
// switch_7628_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x2d:
        {
// switch_7628_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x2e:
        {
// switch_7628_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x2f:
        {
// switch_7628_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x30:
        {
// switch_7628_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x31:
        {
// switch_7628_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x32:
        {
// switch_7628_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x33:
        {
// switch_7628_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x34:
        {
// switch_7628_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x35:
        {
// switch_7628_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x36:
        {
// switch_7628_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x37:
        {
// switch_7628_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x38:
        {
// switch_7628_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x39:
        {
// switch_7628_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x3a:
        {
// switch_7628_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x3b:
        {
// switch_7628_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x3c:
        {
// switch_7628_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28776;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x3d:
        {
// switch_7628_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28952;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
        case 0x3e:
        {
// switch_7628_case_0x3e
            var_8 = 3;
            var_16 = 29096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A80(var_24, var_16, var_8)
            OP_JUMP switch_7628_case_default
        }
    }
}
// fun_7F48
fun_7F48() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8158(var_16, var_8)
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
    OP_JZER lab_8140
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8140
    pri = 0;
    return pri;
}
// fun_8158
fun_8158() {
    var_8 = arg_1;
    var_16 = 30216;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A80(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_81A0
fun_81A0() {
    pri = 30320;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8228
// lab_8228
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_83A8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8398
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_82E8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_82E8
    pri = 0;
    OP_JUMP lab_82F0
// lab_83A8
    pri = 0;
    return pri;
// lab_8398
    OP_JUMP lab_8220
// lab_8220
    OP_INC_P_S -936
// lab_82E8
    pri = 1;
// lab_82F0
    OP_JZER lab_8368
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8360
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8368
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8360
}
// fun_83C8
fun_83C8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8460
    var_8 = 1;
    var_16 = 0;
    var_24 = 31240;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_17C8()
// lab_8460
    pri = arg_4;
    OP_JZER lab_8498
    var_8 = 1;
    var_16 = 8;
    pri = fun_17F0(var_8)
// lab_8498
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_84F0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_84F0
    pri = 0;
    OP_JUMP lab_84F8
// lab_84F0
    pri = 1;
// lab_84F8
    OP_JZER lab_85C0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_85C0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8598
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1708(var_32, var_24)
    OP_JUMP lab_85C0
// lab_85C0
    pri = arg_2;
    OP_JZER lab_8698
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8668
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1298(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0770(var_40)
    OP_JUMP lab_8698
// lab_8698
    pri = arg_3;
    OP_JZER lab_86D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1790(var_8)
// lab_86D0
    pri = 0;
    return pri;
// lab_8668
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1298(var_16, var_8)
// lab_8598
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1708(var_16, var_8)
}
// fun_86E0
fun_86E0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_81A0(var_24)
    pri = 0;
    return pri;
}
// fun_8748
fun_8748() {
    pri = g_mode;
    switch (pri) {
// switch_8808
        case default:
        {
// switch_8808_case_default
            pri = CommandNOP()
            OP_JUMP lab_8850
// lab_8850
            pri = 0;
            return pri;
        }
        case 0x9461d7220618dd38:
        {
// switch_8808_case_0x9461d7220618dd38
            var_8 = 0;
            pri = fun_128F0()
            OP_JUMP lab_8850
        }
        case 0x0:
        {
// switch_8808_case_0x0
            var_8 = 0;
            pri = fun_8860()
            OP_JUMP lab_8850
        }
        case 0x76b0fd1e7bdeef34:
        {
// switch_8808_case_0x76b0fd1e7bdeef34
            var_8 = 0;
            pri = fun_129F8()
            OP_JUMP lab_8850
        }
    }
}
// fun_8860
fun_8860() {
    pri = 0;
    return pri;
}
// fun_8878
fun_8878() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    var_32 = 42752;
    pri = float(var_32)
    var_40 = pri;
    var_48 = -286;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 22898;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 43395;
    pri = float(var_80)
    var_88 = pri;
    var_96 = -196;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 22898;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 90;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 60;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 1;
    var_160 = 0;
    var_168 = 31240;
    var_176 = 8;
    var_184 = 32;
    pri = fun_02E0(var_176, var_168, var_160, var_152)
    var_192 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8A48
fun_8A48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_83C8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8AA0
fun_8AA0() {
    var_8 = -970134989010580305;
    pri = VanishFlagSet(var_8)
    var_16 = 7845089036434421356;
    var_24 = 8;
    pri = fun_0648(var_16)
    var_32 = -3674018664616446908;
    var_40 = 8;
    pri = fun_04C8(var_32)
    var_48 = -3674024162174587963;
    var_56 = 8;
    pri = fun_04C8(var_48)
    var_64 = 2312218129280921210;
    var_72 = 8;
    pri = fun_04C8(var_64)
    var_80 = -8654315183630985365;
    var_88 = 8;
    pri = fun_04C8(var_80)
    var_96 = -8654322880212382842;
    var_104 = 8;
    pri = fun_04C8(var_96)
    var_112 = 9204042830795947825;
    var_120 = 8;
    pri = fun_04C8(var_112)
    var_128 = 440998338954051805;
    var_136 = 8;
    pri = fun_04C8(var_128)
    var_144 = 2206624492151242658;
    var_152 = 8;
    pri = fun_04C8(var_144)
    var_160 = 440986244326141484;
    var_168 = 8;
    pri = fun_04C8(var_160)
    var_176 = -4504228236179943877;
    var_184 = 8;
    pri = fun_04C8(var_176)
    var_192 = -317160502977836181;
    var_200 = 8;
    pri = fun_04C8(var_192)
    var_208 = -484552086778445211;
    var_216 = 8;
    pri = fun_04C8(var_208)
    var_224 = -484546589220304156;
    var_232 = 8;
    pri = fun_04C8(var_224)
    var_240 = 6256141132606737718;
    var_248 = 8;
    pri = fun_04C8(var_240)
    var_256 = 59409724177917345;
    var_264 = 8;
    pri = fun_04C8(var_256)
    var_272 = 119772388837235790;
    var_280 = 8;
    pri = fun_04C8(var_272)
    var_288 = 2481285362137015056;
    var_296 = 8;
    pri = fun_04C8(var_288)
    var_304 = 2481297456764925377;
    var_312 = 8;
    pri = fun_04C8(var_304)
    var_320 = -34089364971008208;
    var_328 = 8;
    pri = fun_04C8(var_320)
    var_336 = -970134989010580305;
    var_344 = 8;
    pri = fun_0648(var_336)
    pri = 0;
    return pri;
}
// fun_8E28
fun_8E28() {
    var_8 = 0;
    pri = fun_04F8()
    pri = 0;
    return pri;
}
// fun_8E58
fun_8E58() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 43018;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 22970;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_06A0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    var_104 = 0;
    OP_PUSH3_C 4676039609367396352, 4672023093391130624, 1838443220896465507
    var_112 = 48;
    pri = fun_06A0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 1;
    OP_PUSH4_C 4640537203540230144, 4676190792216215552, 4672019245100433408, -34089364971008208
    var_136 = 48;
    pri = fun_06A0(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 0;
    var_152 = -34089364971008208;
    var_160 = 16;
    pri = fun_06F8(var_152, var_144)
    var_168 = 3;
    var_176 = 31288;
    var_184 = -8040610231773951744;
    var_192 = 24;
    pri = fun_0A80(var_184, var_176, var_168)
    var_200 = 1;
    var_208 = 8802641224559852288;
    var_216 = 16;
    pri = fun_0730(var_208, var_200)
    var_224 = 1;
    var_232 = -34089364971008208;
    var_240 = 16;
    pri = fun_0730(var_232, var_224)
    var_248 = 1;
    var_256 = 1838443220896465507;
    var_264 = 16;
    pri = fun_0730(var_256, var_248)
    var_272 = 1;
    var_280 = -3674018664616446908;
    var_288 = 16;
    pri = fun_0730(var_280, var_272)
    var_296 = 1;
    var_304 = -3674024162174587963;
    var_312 = 16;
    pri = fun_0730(var_304, var_296)
    var_320 = 1;
    var_328 = 2312218129280921210;
    var_336 = 16;
    pri = fun_0730(var_328, var_320)
    var_344 = 1;
    var_352 = -8654315183630985365;
    var_360 = 16;
    pri = fun_0730(var_352, var_344)
    var_368 = 1;
    var_376 = -8654322880212382842;
    var_384 = 16;
    pri = fun_0730(var_376, var_368)
    var_392 = 1;
    var_400 = 9204042830795947825;
    var_408 = 16;
    pri = fun_0730(var_400, var_392)
    var_416 = 1;
    var_424 = 440998338954051805;
    var_432 = 16;
    pri = fun_0730(var_424, var_416)
    var_440 = 1;
    var_448 = 2206624492151242658;
    var_456 = 16;
    pri = fun_0730(var_448, var_440)
    var_464 = 1;
    var_472 = 440986244326141484;
    var_480 = 16;
    pri = fun_0730(var_472, var_464)
    var_488 = 1;
    var_496 = -4504228236179943877;
    var_504 = 16;
    pri = fun_0730(var_496, var_488)
    var_512 = 1;
    var_520 = -317160502977836181;
    var_528 = 16;
    pri = fun_0730(var_520, var_512)
    var_536 = 1;
    var_544 = -484552086778445211;
    var_552 = 16;
    pri = fun_0730(var_544, var_536)
    var_560 = 1;
    var_568 = -484546589220304156;
    var_576 = 16;
    pri = fun_0730(var_568, var_560)
    var_584 = 1;
    var_592 = 6256141132606737718;
    var_600 = 16;
    pri = fun_0730(var_592, var_584)
    var_608 = 1;
    var_616 = 59409724177917345;
    var_624 = 16;
    pri = fun_0730(var_616, var_608)
    var_632 = 1;
    var_640 = 119772388837235790;
    var_648 = 16;
    pri = fun_0730(var_640, var_632)
    var_656 = 1;
    var_664 = 2481285362137015056;
    var_672 = 16;
    pri = fun_0730(var_664, var_656)
    var_680 = 1;
    var_688 = 2481297456764925377;
    var_696 = 16;
    pri = fun_0730(var_688, var_680)
    var_704 = 1;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 1;
    var_728 = 1;
    var_736 = -1;
    var_744 = -1;
    var_752 = 0;
    var_760 = 35;
    var_768 = 2481285362137015056;
    var_776 = 56;
    pri = fun_3EE0(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 1;
    var_792 = 1;
    var_800 = -1;
    var_808 = -1;
    var_816 = 0;
    var_824 = 7;
    var_832 = 2481297456764925377;
    var_840 = 56;
    pri = fun_3EE0(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 1;
    var_856 = 1;
    var_864 = -1;
    var_872 = -1;
    var_880 = 0;
    var_888 = 7;
    var_896 = -8654315183630985365;
    var_904 = 56;
    pri = fun_3EE0(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 1;
    var_920 = 1;
    var_928 = -1;
    var_936 = -1;
    var_944 = 0;
    var_952 = 15;
    var_960 = 9204042830795947825;
    var_968 = 56;
    pri = fun_3EE0(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 1;
    var_992 = -1;
    var_1000 = -1;
    var_1008 = 0;
    var_1016 = 8;
    var_1024 = 6256141132606737718;
    var_1032 = 56;
    pri = fun_3EE0(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1040 = 1;
    var_1048 = 1;
    var_1056 = -1;
    var_1064 = -1;
    var_1072 = 0;
    var_1080 = 11;
    var_1088 = 59409724177917345;
    var_1096 = 56;
    pri = fun_3EE0(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 1;
    var_1120 = -1;
    var_1128 = -1;
    var_1136 = 0;
    var_1144 = 8;
    var_1152 = 440998338954051805;
    var_1160 = 56;
    pri = fun_3EE0(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = 1;
    var_1176 = 1;
    var_1184 = -1;
    var_1192 = -1;
    var_1200 = 0;
    var_1208 = 8;
    var_1216 = -4504228236179943877;
    var_1224 = 56;
    pri = fun_3EE0(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 1;
    var_1240 = 1;
    var_1248 = -1;
    var_1256 = -1;
    var_1264 = 0;
    var_1272 = 8;
    var_1280 = 440986244326141484;
    var_1288 = 56;
    pri = fun_3EE0(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1296 = 1;
    var_1304 = 1;
    var_1312 = -1;
    var_1320 = -1;
    var_1328 = 0;
    var_1336 = 8;
    var_1344 = -484546589220304156;
    var_1352 = 56;
    pri = fun_3EE0(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1360 = 1;
    var_1368 = 1;
    var_1376 = -1;
    var_1384 = -1;
    var_1392 = 0;
    var_1400 = 17;
    var_1408 = 119772388837235790;
    var_1416 = 56;
    pri = fun_3EE0(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1424 = 1;
    var_1432 = 1;
    var_1440 = -1;
    var_1448 = -1;
    var_1456 = 0;
    var_1464 = 16;
    var_1472 = -8654322880212382842;
    var_1480 = 56;
    pri = fun_3EE0(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1488 = 1;
    var_1496 = 1;
    var_1504 = -1;
    var_1512 = -1;
    var_1520 = 0;
    var_1528 = 8;
    var_1536 = 2312218129280921210;
    var_1544 = 56;
    pri = fun_3EE0(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 1;
    var_1560 = 1;
    var_1568 = -1;
    var_1576 = -1;
    var_1584 = 0;
    var_1592 = 13;
    var_1600 = -3674018664616446908;
    var_1608 = 56;
    pri = fun_3EE0(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1616 = 1;
    var_1624 = 1;
    var_1632 = -1;
    var_1640 = -1;
    var_1648 = 0;
    var_1656 = 13;
    var_1664 = -3674024162174587963;
    var_1672 = 56;
    pri = fun_3EE0(var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1680 = 1;
    var_1688 = 1;
    var_1696 = -1;
    var_1704 = -1;
    var_1712 = 0;
    var_1720 = 8;
    var_1728 = -484552086778445211;
    var_1736 = 56;
    pri = fun_3EE0(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1744 = 1;
    var_1752 = 31368;
    var_1760 = 2481285362137015056;
    var_1768 = 24;
    pri = fun_0A80(var_1760, var_1752, var_1744)
    var_1776 = 1;
    var_1784 = 31416;
    var_1792 = 2481297456764925377;
    var_1800 = 24;
    pri = fun_0A80(var_1792, var_1784, var_1776)
    var_1808 = 1;
    var_1816 = 31464;
    var_1824 = -8654315183630985365;
    var_1832 = 24;
    pri = fun_0A80(var_1824, var_1816, var_1808)
    var_1840 = 1;
    var_1848 = 31512;
    var_1856 = 9204042830795947825;
    var_1864 = 24;
    pri = fun_0A80(var_1856, var_1848, var_1840)
    var_1872 = 1;
    var_1880 = 31560;
    var_1888 = 6256141132606737718;
    var_1896 = 24;
    pri = fun_0A80(var_1888, var_1880, var_1872)
    var_1904 = 1;
    var_1912 = 31608;
    var_1920 = 59409724177917345;
    var_1928 = 24;
    pri = fun_0A80(var_1920, var_1912, var_1904)
    var_1936 = 1;
    var_1944 = 31656;
    var_1952 = 440998338954051805;
    var_1960 = 24;
    pri = fun_0A80(var_1952, var_1944, var_1936)
    var_1968 = 1;
    var_1976 = 31704;
    var_1984 = -4504228236179943877;
    var_1992 = 24;
    pri = fun_0A80(var_1984, var_1976, var_1968)
    var_2000 = 1;
    var_2008 = 31752;
    var_2016 = 440986244326141484;
    var_2024 = 24;
    pri = fun_0A80(var_2016, var_2008, var_2000)
    var_2032 = 1;
    var_2040 = 31800;
    var_2048 = -484546589220304156;
    var_2056 = 24;
    pri = fun_0A80(var_2048, var_2040, var_2032)
    var_2064 = 1;
    var_2072 = 31848;
    var_2080 = 2312218129280921210;
    var_2088 = 24;
    pri = fun_0A80(var_2080, var_2072, var_2064)
    var_2096 = 1;
    var_2104 = 31896;
    var_2112 = -3674018664616446908;
    var_2120 = 24;
    pri = fun_0A80(var_2112, var_2104, var_2096)
    var_2128 = 1;
    var_2136 = 31944;
    var_2144 = -3674024162174587963;
    var_2152 = 24;
    pri = fun_0A80(var_2144, var_2136, var_2128)
    var_2160 = 15;
    var_2168 = 8;
    pri = fun_0060(var_2160)
    var_2176 = 0;
    var_2184 = 4629081171988106445;
    var_2192 = 0;
    OP_PUSH5_C 4676037630246466355, -4576089813263256125, 4671923452898642493, 4676090867225093734, -4578022842665816556
    var_2200 = 4672063712099439739;
    var_2208 = 1;
    pri = EvCameraMove(var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136)
    var_2216 = 0;
    pri = fun_2270()
    var_2224 = 31992;
    pri = SoundPostEvent(var_2224)
    var_2232 = 1;
    var_2240 = 8;
    pri = fun_0060(var_2232)
    var_2248 = 32152;
    pri = SoundPostEvent(var_2248)
    var_2256 = 1;
    var_2264 = 0;
    var_2272 = 4641240890982006784;
    var_2280 = 0;
    var_2288 = 0;
    OP_PUSH4_C 4676073969105764352, 4672023093391130624, 4607182418800017408, 1838443220896465507
    var_2296 = 72;
    pri = fun_07A8(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2304 = 32264;
    var_2312 = 8;
    var_2320 = 16;
    pri = fun_0280(var_2312, var_2304)
    var_2328 = 0;
    pri = fun_0350()
    var_2336 = 8802641224559852288;
    var_2344 = 8;
    pri = fun_0920(var_2336)
    var_2352 = 0;
    var_2360 = 4629081171988106445;
    var_2368 = 12;
    OP_PUSH5_C 4676010910739521864, -4578128043938362163, 4672021845445433098, 4676098952758726492, -4580060017809759928
    var_2376 = 4672023428742177096;
    var_2384 = 90;
    pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2392 = 0;
    pri = fun_2270()
    var_2400 = 5;
    var_2408 = 5;
    var_2416 = 1838443220896465507;
    var_2424 = 24;
    pri = fun_1460(var_2416, var_2408, var_2400)
    var_2432 = 30;
    var_2440 = 8;
    pri = fun_0060(var_2432)
    var_2448 = 1;
    var_2456 = 1;
    var_2464 = -1;
    var_2472 = -1;
    var_2480 = 0;
    var_2488 = 20;
    var_2496 = 1838443220896465507;
    var_2504 = 56;
    pri = fun_3EE0(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448)
    var_2512 = 15;
    var_2520 = 8;
    pri = fun_0060(var_2512)
    OP_PUSH2_C -4600877379321698714, 4627195289644145050
    var_2528 = 0;
    OP_PUSH5_C 4676042421368384389, -4578242744991371756, 4671974046926194606, 4676098859300238131, -4579670526810736558
    var_2536 = 4672057145266242847;
    var_2544 = 1;
    pri = EvCameraMove(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2552 = 30;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = 0;
    var_2576 = 4628630812025369395;
    var_2584 = 0;
    OP_PUSH5_C 4676054434907307377, -4584018083747893084, 4672074426840252416, 4676094989019308360, -4577697211302134415
    var_2592 = 4671981045317705400;
    var_2600 = 1;
    pri = EvCameraMove(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2608 = 30;
    var_2616 = 8;
    pri = fun_0060(var_2608)
    var_2624 = 32312;
    pri = SoundPostEvent(var_2624)
    var_2632 = 30;
    var_2640 = 8;
    pri = fun_0060(var_2632)
    var_2648 = 0;
    var_2656 = 4627279732137158246;
    var_2664 = 0;
    OP_PUSH5_C 4676115633724509389, -4579074855391272632, 4672032452983862067, 4676064095491346924, -4578346890732754698
    var_2672 = 4671887770997542093;
    var_2680 = 1;
    pri = EvCameraMove(var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608)
    var_2688 = 60;
    var_2696 = 8;
    pri = fun_0060(var_2688)
    OP_PUSH2_C -4620693217682128896, 4627898977085921690
    var_2704 = 0;
    OP_PUSH5_C 4676127666504885862, -4578908961076873789, 4672027944986188186, 4676072124675008758, -4580334983677634150
    var_2712 = 4672100111431877263;
    var_2720 = 1;
    pri = EvCameraMove(var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2728 = 60;
    var_2736 = 8;
    pri = fun_0060(var_2728)
    var_2744 = 0;
    var_2752 = -484552086778445211;
    var_2760 = 16;
    pri = fun_06F8(var_2752, var_2744)
    var_2768 = 0;
    var_2776 = -317160502977836181;
    var_2784 = 16;
    pri = fun_06F8(var_2776, var_2768)
    var_2792 = 0;
    var_2800 = 440998338954051805;
    var_2808 = 16;
    pri = fun_06F8(var_2800, var_2792)
    var_2816 = 0;
    var_2824 = -4504228236179943877;
    var_2832 = 16;
    pri = fun_06F8(var_2824, var_2816)
    var_2840 = 0;
    var_2848 = 440986244326141484;
    var_2856 = 16;
    pri = fun_06F8(var_2848, var_2840)
    var_2864 = 0;
    var_2872 = -484546589220304156;
    var_2880 = 16;
    pri = fun_06F8(var_2872, var_2864)
    var_2888 = 0;
    var_2896 = -3674018664616446908;
    var_2904 = 16;
    pri = fun_06F8(var_2896, var_2888)
    var_2912 = 0;
    var_2920 = -3674024162174587963;
    var_2928 = 16;
    pri = fun_06F8(var_2920, var_2912)
    var_2936 = 0;
    var_2944 = 9204042830795947825;
    var_2952 = 16;
    pri = fun_06F8(var_2944, var_2936)
    var_2960 = 0;
    var_2968 = 4627279732137158246;
    var_2976 = 0;
    OP_PUSH5_C 4676060171609225298, -4578862869549437420, 4672022642591363236, 4676148939306104259, -4579646073672134820
    var_2984 = 4672012340167410975;
    var_2992 = 1;
    pri = EvCameraMove(var_2992, var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920)
    var_3000 = 0;
    pri = fun_2270()
    var_3008 = 0;
    var_3016 = 4627279732137158246;
    var_3024 = 2;
    OP_PUSH5_C 4676060375018876436, -4578862869549437420, 4672022604108456264, 4676149104232848425, -4579644138531669934
    var_3032 = 4672034234192699064;
    var_3040 = 600;
    pri = EvCameraMove(var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968)
    var_3048 = 60;
    var_3056 = 8;
    pri = fun_0060(var_3048)
    var_3064 = 1;
    var_3072 = 3;
    var_3080 = 0;
    var_3088 = 20;
    var_3096 = 1838443220896465507;
    var_3104 = 40;
    pri = fun_6218(var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3112 = 75;
    var_3120 = 8;
    pri = fun_0060(var_3112)
    var_3128 = 5;
    var_3136 = 1838443220896465507;
    var_3144 = 16;
    pri = fun_1370(var_3136, var_3128)
    var_3152 = 1;
    var_3160 = -1;
    var_3168 = -1;
    var_3176 = 3;
    var_3184 = 0;
    var_3192 = 0;
    var_3200 = 1838443220896465507;
    var_3208 = 56;
    pri = fun_2300(var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3216 = 0;
    var_3224 = 3;
    var_3232 = 2;
    var_3240 = 100;
    var_3248 = -1;
    OP_PUSH2_C 8994487005391669154, 1838443220896465507
    var_3256 = 56;
    pri = fun_2038(var_3248, var_3240, var_3232, var_3224, var_3216, var_3208, var_3200)
    var_3264 = 1838443220896465507;
    var_3272 = 8;
    pri = fun_0AF8(var_3264)
    var_3280 = 30;
    var_3288 = 8;
    pri = fun_0060(var_3280)
    var_3296 = 0;
    var_3304 = 3;
    var_3312 = 1838443220896465507;
    var_3320 = 24;
    pri = fun_7F48(var_3312, var_3304, var_3296)
    var_3328 = 0;
    pri = fun_20E8()
    var_3336 = 1;
    var_3344 = 8;
    pri = fun_2180(var_3336)
    var_3352 = 0;
    pri = fun_2240()
    var_3360 = 1;
    var_3368 = -484552086778445211;
    var_3376 = 16;
    pri = fun_06F8(var_3368, var_3360)
    var_3384 = 1;
    var_3392 = -317160502977836181;
    var_3400 = 16;
    pri = fun_06F8(var_3392, var_3384)
    var_3408 = 1;
    var_3416 = 440998338954051805;
    var_3424 = 16;
    pri = fun_06F8(var_3416, var_3408)
    var_3432 = 1;
    var_3440 = -4504228236179943877;
    var_3448 = 16;
    pri = fun_06F8(var_3440, var_3432)
    var_3456 = 1;
    var_3464 = 440986244326141484;
    var_3472 = 16;
    pri = fun_06F8(var_3464, var_3456)
    var_3480 = 1;
    var_3488 = -484546589220304156;
    var_3496 = 16;
    pri = fun_06F8(var_3488, var_3480)
    var_3504 = 1;
    var_3512 = -3674018664616446908;
    var_3520 = 16;
    pri = fun_06F8(var_3512, var_3504)
    var_3528 = 1;
    var_3536 = -3674024162174587963;
    var_3544 = 16;
    pri = fun_06F8(var_3536, var_3528)
    var_3552 = 1;
    var_3560 = 9204042830795947825;
    var_3568 = 16;
    pri = fun_06F8(var_3560, var_3552)
    var_3576 = 1;
    var_3584 = -34089364971008208;
    var_3592 = 16;
    pri = fun_06F8(var_3584, var_3576)
    var_3600 = 1;
    var_3608 = 0;
    var_3616 = 100;
    pri = float(var_3616)
    var_3624 = pri;
    var_3632 = 0;
    var_3640 = 0;
    OP_PUSH4_C 4676145574800523264, 4672019245100433408, 4611686018427387904, -34089364971008208
    var_3648 = 72;
    pri = fun_07A8(var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576)
    var_3656 = 0;
    var_3664 = 4627279732137158246;
    var_3672 = 0;
    OP_PUSH5_C 4676141459878256312, -4578818889084326380, 4671995905217354793, 4676104223542592143, -4585483512845392937
    var_3680 = 4672146554803034522;
    var_3688 = 1;
    pri = EvCameraMove(var_3688, var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632, var_3624, var_3616)
    var_3696 = 0;
    pri = fun_2270()
    var_3704 = 0;
    var_3712 = 4627279732137158246;
    var_3720 = 2;
    OP_PUSH5_C 4676145205089738424, -4578818889084326380, 4671999610571540398, 4676107970128463790, -4585477179658416947
    var_3728 = 4672150290393789891;
    var_3736 = 600;
    pri = EvCameraMove(var_3736, var_3728, var_3720, var_3712, var_3704, var_3696, var_3688, var_3680, var_3672, var_3664)
    var_3744 = 1;
    var_3752 = 1;
    var_3760 = -1;
    var_3768 = -1;
    var_3776 = 0;
    var_3784 = 8;
    var_3792 = -317160502977836181;
    var_3800 = 56;
    pri = fun_3EE0(var_3792, var_3784, var_3776, var_3768, var_3760, var_3752, var_3744)
    var_3808 = 1;
    var_3816 = 3;
    var_3824 = 0;
    var_3832 = 8;
    var_3840 = 6256141132606737718;
    var_3848 = 40;
    pri = fun_6218(var_3840, var_3832, var_3824, var_3816, var_3808)
    var_3856 = 1;
    var_3864 = 3;
    var_3872 = 0;
    var_3880 = 8;
    var_3888 = -484546589220304156;
    var_3896 = 40;
    pri = fun_6218(var_3888, var_3880, var_3872, var_3864, var_3856)
    var_3904 = 1;
    var_3912 = 3;
    var_3920 = 0;
    var_3928 = 8;
    var_3936 = 119772388837235790;
    var_3944 = 40;
    pri = fun_6218(var_3936, var_3928, var_3920, var_3912, var_3904)
    var_3952 = 1;
    var_3960 = 3;
    var_3968 = 0;
    var_3976 = 7;
    var_3984 = -8654315183630985365;
    var_3992 = 40;
    pri = fun_6218(var_3984, var_3976, var_3968, var_3960, var_3952)
    var_4000 = 1;
    var_4008 = 3;
    var_4016 = 0;
    var_4024 = 15;
    var_4032 = 9204042830795947825;
    var_4040 = 40;
    pri = fun_6218(var_4032, var_4024, var_4016, var_4008, var_4000)
    var_4048 = 1;
    var_4056 = 3;
    var_4064 = 0;
    var_4072 = 13;
    var_4080 = -3674024162174587963;
    var_4088 = 40;
    pri = fun_6218(var_4080, var_4072, var_4064, var_4056, var_4048)
    var_4096 = 1;
    var_4104 = 3;
    var_4112 = 0;
    var_4120 = 16;
    var_4128 = 119772388837235790;
    var_4136 = 40;
    pri = fun_6218(var_4128, var_4120, var_4112, var_4104, var_4096)
    var_4144 = 1;
    var_4152 = 3;
    var_4160 = 0;
    var_4168 = 17;
    var_4176 = -8654322880212382842;
    var_4184 = 40;
    pri = fun_6218(var_4176, var_4168, var_4160, var_4152, var_4144)
    var_4192 = 1;
    var_4200 = 3;
    var_4208 = 0;
    var_4216 = 8;
    var_4224 = 2312218129280921210;
    var_4232 = 40;
    pri = fun_6218(var_4224, var_4216, var_4208, var_4200, var_4192)
    var_4240 = 1;
    var_4248 = 3;
    var_4256 = 0;
    var_4264 = 8;
    var_4272 = -484552086778445211;
    var_4280 = 40;
    pri = fun_6218(var_4272, var_4264, var_4256, var_4248, var_4240)
    var_4288 = 0;
    var_4296 = 32520;
    var_4304 = 2481285362137015056;
    var_4312 = 24;
    pri = fun_0A80(var_4304, var_4296, var_4288)
    var_4320 = 0;
    var_4328 = 32568;
    var_4336 = 2481297456764925377;
    var_4344 = 24;
    pri = fun_0A80(var_4336, var_4328, var_4320)
    var_4352 = 0;
    var_4360 = 32616;
    var_4368 = -8654315183630985365;
    var_4376 = 24;
    pri = fun_0A80(var_4368, var_4360, var_4352)
    var_4384 = 0;
    var_4392 = 32664;
    var_4400 = 9204042830795947825;
    var_4408 = 24;
    pri = fun_0A80(var_4400, var_4392, var_4384)
    var_4416 = 0;
    var_4424 = 32712;
    var_4432 = 6256141132606737718;
    var_4440 = 24;
    pri = fun_0A80(var_4432, var_4424, var_4416)
    var_4448 = 0;
    var_4456 = 32760;
    var_4464 = 59409724177917345;
    var_4472 = 24;
    pri = fun_0A80(var_4464, var_4456, var_4448)
    var_4480 = 0;
    var_4488 = 32808;
    var_4496 = 440998338954051805;
    var_4504 = 24;
    pri = fun_0A80(var_4496, var_4488, var_4480)
    var_4512 = 0;
    var_4520 = 32856;
    var_4528 = -4504228236179943877;
    var_4536 = 24;
    pri = fun_0A80(var_4528, var_4520, var_4512)
    var_4544 = 0;
    var_4552 = 32904;
    var_4560 = 440986244326141484;
    var_4568 = 24;
    pri = fun_0A80(var_4560, var_4552, var_4544)
    var_4576 = 0;
    var_4584 = 32952;
    var_4592 = -484546589220304156;
    var_4600 = 24;
    pri = fun_0A80(var_4592, var_4584, var_4576)
    var_4608 = 0;
    var_4616 = 33000;
    var_4624 = 2312218129280921210;
    var_4632 = 24;
    pri = fun_0A80(var_4624, var_4616, var_4608)
    var_4640 = 0;
    var_4648 = 33048;
    var_4656 = -3674018664616446908;
    var_4664 = 24;
    pri = fun_0A80(var_4656, var_4648, var_4640)
    var_4672 = 0;
    var_4680 = 33096;
    var_4688 = -3674024162174587963;
    var_4696 = 24;
    pri = fun_0A80(var_4688, var_4680, var_4672)
    var_4704 = 0;
    var_4712 = 3;
    var_4720 = 0;
    var_4728 = 100;
    var_4736 = -1;
    OP_PUSH2_C 8254975706994631006, -317160502977836181
    var_4744 = 56;
    pri = fun_2038(var_4736, var_4728, var_4720, var_4712, var_4704, var_4696, var_4688)
    var_4752 = -34089364971008208;
    var_4760 = 8;
    pri = fun_0920(var_4752)
    var_4768 = 1;
    var_4776 = 8;
    pri = fun_2180(var_4768)
    var_4784 = 0;
    pri = fun_2240()
    var_4792 = 1;
    var_4800 = 3;
    var_4808 = 0;
    var_4816 = 8;
    var_4824 = -317160502977836181;
    var_4832 = 40;
    pri = fun_6218(var_4824, var_4816, var_4808, var_4800, var_4792)
    var_4840 = 1838443220896465507;
    var_4848 = 8;
    pri = fun_14C8(var_4840)
    var_4856 = 5;
    var_4864 = 5;
    var_4872 = -34089364971008208;
    var_4880 = 24;
    pri = fun_1460(var_4872, var_4864, var_4856)
    var_4888 = 1;
    var_4896 = 1;
    var_4904 = 15;
    OP_PUSH2_C -34089364971008208, 8802641224559852288
    var_4912 = 40;
    pri = fun_11E0(var_4904, var_4896, var_4888, var_4880, var_4872)
    var_4920 = 1;
    var_4928 = 1;
    var_4936 = -1;
    var_4944 = -1;
    var_4952 = 0;
    var_4960 = 23;
    var_4968 = -34089364971008208;
    var_4976 = 56;
    pri = fun_3EE0(var_4968, var_4960, var_4952, var_4944, var_4936, var_4928, var_4920)
    var_4984 = 0;
    var_4992 = 3;
    var_5000 = 0;
    var_5008 = 100;
    var_5016 = -1;
    OP_PUSH2_C 8993496345414840268, 1838443220896465507
    var_5024 = 56;
    pri = fun_2038(var_5016, var_5008, var_5000, var_4992, var_4984, var_4976, var_4968)
    var_5032 = 1;
    var_5040 = 8;
    pri = fun_2180(var_5032)
    var_5048 = 0;
    pri = fun_2240()
    var_5056 = 1;
    var_5064 = 1;
    OP_PUSH4_C -4584382945686454272, 4676114458621457203, 4672103495178911744, 440998338954051805
    var_5072 = 48;
    pri = fun_06A0(var_5064, var_5056, var_5048, var_5040, var_5032, var_5024)
    var_5080 = 0;
    var_5088 = -8040610231773951744;
    var_5096 = 16;
    pri = fun_06F8(var_5088, var_5080)
    var_5104 = 0;
    var_5112 = 440986244326141484;
    var_5120 = 16;
    pri = fun_06F8(var_5112, var_5104)
    var_5128 = 0;
    var_5136 = 440998338954051805;
    var_5144 = 16;
    pri = fun_06F8(var_5136, var_5128)
    var_5152 = 0;
    var_5160 = 9204042830795947825;
    var_5168 = 16;
    pri = fun_06F8(var_5160, var_5152)
    var_5176 = 0;
    var_5184 = 6256141132606737718;
    var_5192 = 16;
    pri = fun_06F8(var_5184, var_5176)
    var_5200 = 1;
    pri = SetCascadeShadowMapLevel(var_5200)
    var_5208 = 1;
    var_5216 = 1;
    OP_PUSH4_C 4640537203540230144, 4676145574800523264, 4672019245100433408, -34089364971008208
    var_5224 = 48;
    pri = fun_06A0(var_5216, var_5208, var_5200, var_5192, var_5184, var_5176)
    var_5232 = 0;
    var_5240 = 4629615974443856691;
    var_5248 = 0;
    OP_PUSH5_C 4676144006622064148, -4578272299863926374, 4671992997009099325, 4676056906059690803, -4580558756284119122
    var_5256 = 4672014096637236347;
    var_5264 = 1;
    pri = EvCameraMove(var_5264, var_5256, var_5248, var_5240, var_5232, var_5224, var_5216, var_5208, var_5200, var_5192)
    var_5272 = 0;
    pri = fun_2270()
    var_5280 = 1;
    var_5288 = 1;
    var_5296 = -1;
    var_5304 = -1;
    var_5312 = 0;
    var_5320 = 2;
    var_5328 = -3674024162174587963;
    var_5336 = 56;
    pri = fun_3EE0(var_5328, var_5320, var_5312, var_5304, var_5296, var_5288, var_5280)
    var_5344 = 1;
    var_5352 = 1;
    var_5360 = 15;
    OP_PUSH2_C -3674024162174587963, 1838443220896465507
    var_5368 = 40;
    pri = fun_11E0(var_5360, var_5352, var_5344, var_5336, var_5328)
    var_5376 = 0;
    var_5384 = 3;
    var_5392 = 0;
    var_5400 = 100;
    var_5408 = -1;
    OP_PUSH2_C 6369816867822612480, -3674024162174587963
    var_5416 = 56;
    pri = fun_2038(var_5408, var_5400, var_5392, var_5384, var_5376, var_5368, var_5360)
    var_5424 = 1;
    var_5432 = 8;
    pri = fun_2180(var_5424)
    var_5440 = 0;
    pri = fun_2240()
    var_5448 = 1;
    var_5456 = -8654322880212382842;
    var_5464 = 16;
    pri = fun_06F8(var_5456, var_5448)
    var_5472 = 1;
    var_5480 = 440986244326141484;
    var_5488 = 16;
    pri = fun_06F8(var_5480, var_5472)
    var_5496 = 1;
    var_5504 = 440998338954051805;
    var_5512 = 16;
    pri = fun_06F8(var_5504, var_5496)
    var_5520 = 1;
    var_5528 = 9204042830795947825;
    var_5536 = 16;
    pri = fun_06F8(var_5528, var_5520)
    var_5544 = 1;
    var_5552 = 6256141132606737718;
    var_5560 = 16;
    pri = fun_06F8(var_5552, var_5544)
    var_5568 = -34089364971008208;
    var_5576 = 8;
    pri = fun_14C8(var_5568)
    var_5584 = -1;
    var_5592 = 8802641224559852288;
    var_5600 = 16;
    pri = fun_1298(var_5592, var_5584)
    var_5608 = 1;
    var_5616 = 3;
    var_5624 = 0;
    var_5632 = 2;
    var_5640 = -3674024162174587963;
    var_5648 = 40;
    pri = fun_6218(var_5640, var_5632, var_5624, var_5616, var_5608)
    var_5656 = 0;
    var_5664 = 4629615974443856691;
    var_5672 = 12;
    OP_PUSH5_C 4676140596761628508, -4578157950654637670, 4672075641800601108, 4676056737009778033, -4580608718092485263
    var_5680 = 4672025638760548925;
    var_5688 = 60;
    pri = EvCameraMove(var_5688, var_5680, var_5672, var_5664, var_5656, var_5648, var_5640, var_5632, var_5624, var_5616)
    var_5696 = 60;
    var_5704 = 8;
    pri = fun_0060(var_5696)
    var_5712 = 0;
    var_5720 = 2206624492151242658;
    var_5728 = 16;
    pri = fun_06F8(var_5720, var_5712)
    var_5736 = 0;
    var_5744 = 59409724177917345;
    var_5752 = 16;
    pri = fun_06F8(var_5744, var_5736)
    var_5760 = 0;
    var_5768 = -8654315183630985365;
    var_5776 = 16;
    pri = fun_06F8(var_5768, var_5760)
    var_5784 = 0;
    var_5792 = -3674024162174587963;
    var_5800 = 16;
    pri = fun_06F8(var_5792, var_5784)
    var_5808 = 0;
    var_5816 = -4504228236179943877;
    var_5824 = 16;
    pri = fun_06F8(var_5816, var_5808)
    var_5832 = 0;
    var_5840 = -3674018664616446908;
    var_5848 = 16;
    pri = fun_06F8(var_5840, var_5832)
    var_5856 = 1;
    var_5864 = -1;
    var_5872 = -1;
    var_5880 = 3;
    var_5888 = 0;
    var_5896 = 1;
    var_5904 = -8654322880212382842;
    var_5912 = 56;
    pri = fun_2300(var_5904, var_5896, var_5888, var_5880, var_5872, var_5864, var_5856)
    var_5920 = 1;
    var_5928 = 1;
    var_5936 = 15;
    OP_PUSH2_C -8654322880212382842, 1838443220896465507
    var_5944 = 40;
    pri = fun_11E0(var_5936, var_5928, var_5920, var_5912, var_5904)
    var_5952 = 0;
    var_5960 = 3;
    var_5968 = 0;
    var_5976 = 100;
    var_5984 = -1;
    OP_PUSH2_C -9015016069425583849, -8654322880212382842
    var_5992 = 56;
    pri = fun_2038(var_5984, var_5976, var_5968, var_5960, var_5952, var_5944, var_5936)
    var_6000 = 1;
    var_6008 = 8;
    pri = fun_2180(var_6000)
    var_6016 = 0;
    pri = fun_2240()
    var_6024 = 1;
    var_6032 = -8040610231773951744;
    var_6040 = 16;
    pri = fun_06F8(var_6032, var_6024)
    var_6048 = 1;
    var_6056 = 2481285362137015056;
    var_6064 = 16;
    pri = fun_06F8(var_6056, var_6048)
    var_6072 = 1;
    var_6080 = 2206624492151242658;
    var_6088 = 16;
    pri = fun_06F8(var_6080, var_6072)
    var_6096 = 1;
    var_6104 = 59409724177917345;
    var_6112 = 16;
    pri = fun_06F8(var_6104, var_6096)
    var_6120 = 1;
    var_6128 = -8654315183630985365;
    var_6136 = 16;
    pri = fun_06F8(var_6128, var_6120)
    var_6144 = 1;
    var_6152 = -3674024162174587963;
    var_6160 = 16;
    pri = fun_06F8(var_6152, var_6144)
    var_6168 = 1;
    var_6176 = -4504228236179943877;
    var_6184 = 16;
    pri = fun_06F8(var_6176, var_6168)
    var_6192 = 1;
    var_6200 = -3674018664616446908;
    var_6208 = 16;
    pri = fun_06F8(var_6200, var_6192)
    var_6216 = 1;
    var_6224 = 1;
    OP_PUSH4_C -4584382945686454272, 4676114458621457203, 4672100746399842304, 440998338954051805
    var_6232 = 48;
    pri = fun_06A0(var_6224, var_6216, var_6208, var_6200, var_6192, var_6184)
    var_6240 = 2;
    pri = SetCascadeShadowMapLevel(var_6240)
    var_6248 = 0;
    var_6256 = 4629615974443856691;
    var_6264 = 0;
    OP_PUSH5_C 4676041092333704315, -4579735441977240453, 4671959948438347448, 4676091998347680809, -4579481234888898642
    var_6272 = 4672046139154848809;
    var_6280 = 1;
    pri = EvCameraMove(var_6280, var_6272, var_6264, var_6256, var_6248, var_6240, var_6232, var_6224, var_6216, var_6208)
    var_6288 = 0;
    pri = fun_2270()
    var_6296 = 0;
    var_6304 = 4629615974443856691;
    var_6312 = 2;
    OP_PUSH5_C 4676041092333704315, -4579735441977240453, 4671959948438347448, 4676089612407448535, -4579481234888898642
    var_6320 = 4672051414061883064;
    var_6328 = 480;
    pri = EvCameraMove(var_6328, var_6320, var_6312, var_6304, var_6296, var_6288, var_6280, var_6272, var_6264, var_6256)
    var_6336 = 1;
    var_6344 = 3;
    var_6352 = 0;
    var_6360 = 23;
    var_6368 = -34089364971008208;
    var_6376 = 40;
    pri = fun_6218(var_6368, var_6360, var_6352, var_6344, var_6336)
    var_6384 = 0;
    var_6392 = 0;
    var_6400 = 1838443220896465507;
    var_6408 = 24;
    pri = fun_7F48(var_6400, var_6392, var_6384)
    var_6416 = 5;
    var_6424 = 1838443220896465507;
    var_6432 = 16;
    pri = fun_1370(var_6424, var_6416)
    var_6440 = 45;
    var_6448 = 8;
    pri = fun_0060(var_6440)
    var_6456 = 8;
    var_6464 = 1838443220896465507;
    var_6472 = 16;
    pri = fun_1370(var_6464, var_6456)
    var_6480 = 1;
    var_6488 = 1;
    var_6496 = 15;
    var_6504 = 20;
    pri = float(var_6504)
    var_6512 = pri;
    var_6520 = 0;
    pri = float(var_6520)
    var_6528 = pri;
    var_6536 = 1838443220896465507;
    var_6544 = 48;
    pri = fun_1238(var_6536, var_6528, var_6520, var_6512, var_6504, var_6496)
    var_6552 = 0;
    var_6560 = 3;
    var_6568 = 0;
    var_6576 = 100;
    var_6584 = -1;
    OP_PUSH2_C 8994485905880040943, 1838443220896465507
    var_6592 = 56;
    pri = fun_2038(var_6584, var_6576, var_6568, var_6560, var_6552, var_6544, var_6536)
    var_6600 = 1;
    var_6608 = 8;
    pri = fun_2180(var_6600)
    var_6616 = 0;
    var_6624 = 4631459635541311488;
    var_6632 = 0;
    OP_PUSH5_C 4676037505177018696, -4578217236321607352, 4672021435877351752, 4676103545968551526, -4579978390066513838
    var_6640 = 4672024327592932803;
    var_6648 = 1;
    pri = EvCameraMove(var_6648, var_6640, var_6632, var_6624, var_6616, var_6608, var_6600, var_6592, var_6584, var_6576)
    var_6656 = 0;
    pri = fun_2270()
    var_6664 = 0;
    var_6672 = 4631642594276173414;
    var_6680 = 3;
    OP_PUSH5_C 4676037505177018696, -4578217236321607352, 4672021435877351752, 4676097343348581335, -4579878818293502444
    var_6688 = 4672024049966246789;
    var_6696 = 180;
    pri = EvCameraMove(var_6696, var_6688, var_6680, var_6672, var_6664, var_6656, var_6648, var_6640, var_6632, var_6624)
    var_6704 = 2;
    var_6712 = 1838443220896465507;
    var_6720 = 16;
    pri = fun_1370(var_6712, var_6704)
    var_6728 = -1;
    var_6736 = 1838443220896465507;
    var_6744 = 16;
    pri = fun_1298(var_6736, var_6728)
    var_6752 = 1;
    var_6760 = 1;
    var_6768 = -1;
    var_6776 = -1;
    var_6784 = 0;
    var_6792 = 21;
    var_6800 = 1838443220896465507;
    var_6808 = 56;
    pri = fun_3EE0(var_6800, var_6792, var_6784, var_6776, var_6768, var_6760, var_6752)
    var_6816 = 0;
    var_6824 = 3;
    var_6832 = 0;
    var_6840 = 100;
    var_6848 = -1;
    OP_PUSH2_C 8994484806368412732, 1838443220896465507
    var_6856 = 56;
    pri = fun_2038(var_6848, var_6840, var_6832, var_6824, var_6816, var_6808, var_6800)
    var_6864 = 1;
    var_6872 = 8;
    pri = fun_2180(var_6864)
    var_6880 = 0;
    pri = fun_2240()
    var_6888 = 0;
    var_6896 = 4631684815522680013;
    var_6904 = 0;
    OP_PUSH5_C 4676054605331609682, -4578758723808054477, 4671993282882122547, 4676094209740442173, -4579149094416380068
    var_6912 = 4672079283932868116;
    var_6920 = 1;
    pri = EvCameraMove(var_6920, var_6912, var_6904, var_6896, var_6888, var_6880, var_6872, var_6864, var_6856, var_6848)
    var_6928 = 0;
    pri = fun_2270()
    var_6936 = 0;
    var_6944 = 4631684815522680013;
    var_6952 = 3;
    OP_PUSH5_C 4676047433767017513, -4578758723808054477, 4672006493514330276, 4676087038175850004, -4579149094416380068
    var_6960 = 4672092497313854915;
    var_6968 = 15;
    pri = EvCameraMove(var_6968, var_6960, var_6952, var_6944, var_6936, var_6928, var_6920, var_6912, var_6904, var_6896)
    var_6976 = 0;
    var_6984 = 0;
    var_6992 = 0;
    var_7000 = 6;
    pri = SoundPlayPokeVoice(var_7000, var_6992, var_6984, var_6976)
    var_7008 = 1;
    var_7016 = -1;
    var_7024 = -1;
    var_7032 = 3;
    var_7040 = 0;
    var_7048 = 30;
    var_7056 = -8040610231773951744;
    var_7064 = 56;
    pri = fun_2300(var_7056, var_7048, var_7040, var_7032, var_7024, var_7016, var_7008)
    var_7072 = 0;
    var_7080 = 3;
    var_7088 = 0;
    var_7096 = 100;
    var_7104 = -1;
    OP_PUSH2_C 3083377530764870012, -8040610231773951744
    var_7112 = 56;
    pri = fun_2038(var_7104, var_7096, var_7088, var_7080, var_7072, var_7064, var_7056)
    var_7120 = -8040610231773951744;
    var_7128 = 8;
    pri = fun_0AF8(var_7120)
    var_7136 = 1;
    var_7144 = 8;
    pri = fun_2180(var_7136)
    var_7152 = 0;
    pri = fun_2240()
    var_7160 = 0;
    var_7168 = -8040610231773951744;
    var_7176 = 16;
    pri = fun_06F8(var_7168, var_7160)
    var_7184 = 0;
    var_7192 = 2206624492151242658;
    var_7200 = 16;
    pri = fun_06F8(var_7192, var_7184)
    var_7208 = 0;
    var_7216 = -8654315183630985365;
    var_7224 = 16;
    pri = fun_06F8(var_7216, var_7208)
    var_7232 = 0;
    var_7240 = 440986244326141484;
    var_7248 = 16;
    pri = fun_06F8(var_7240, var_7232)
    var_7256 = 0;
    var_7264 = 6256141132606737718;
    var_7272 = 16;
    pri = fun_06F8(var_7264, var_7256)
    var_7280 = 0;
    var_7288 = -3674024162174587963;
    var_7296 = 16;
    pri = fun_06F8(var_7288, var_7280)
    var_7304 = 0;
    var_7312 = -4504228236179943877;
    var_7320 = 16;
    pri = fun_06F8(var_7312, var_7304)
    var_7328 = 0;
    var_7336 = 440998338954051805;
    var_7344 = 16;
    pri = fun_06F8(var_7336, var_7328)
    var_7352 = 0;
    var_7360 = -3674018664616446908;
    var_7368 = 16;
    pri = fun_06F8(var_7360, var_7352)
    var_7376 = 0;
    var_7384 = 9204042830795947825;
    var_7392 = 16;
    pri = fun_06F8(var_7384, var_7376)
    var_7400 = 1;
    pri = SetCascadeShadowMapLevel(var_7400)
    var_7408 = 0;
    var_7416 = 4627589354611539968;
    var_7424 = 0;
    OP_PUSH5_C 4676122109847996989, -4579236879424741704, 4672018403974038159, 4676055538542103757, -4579907845400475730
    var_7432 = 4672038747687931085;
    var_7440 = 1;
    pri = EvCameraMove(var_7440, var_7432, var_7424, var_7416, var_7408, var_7400, var_7392, var_7384, var_7376, var_7368)
    var_7448 = 1;
    var_7456 = 3;
    var_7464 = 0;
    var_7472 = 21;
    var_7480 = 1838443220896465507;
    var_7488 = 40;
    pri = fun_6218(var_7480, var_7472, var_7464, var_7456, var_7448)
    var_7496 = 1;
    var_7504 = 1;
    var_7512 = -1;
    var_7520 = -1;
    var_7528 = 0;
    var_7536 = 7;
    var_7544 = -34089364971008208;
    var_7552 = 56;
    pri = fun_3EE0(var_7544, var_7536, var_7528, var_7520, var_7512, var_7504, var_7496)
    var_7560 = 15;
    var_7568 = 8;
    pri = fun_0060(var_7560)
    var_7576 = 0;
    var_7584 = 0;
    var_7592 = 0;
    var_7600 = -120;
    pri = float(var_7600)
    var_7608 = pri;
    var_7616 = -317160502977836181;
    var_7624 = 40;
    pri = fun_0878(var_7616, var_7608, var_7600, var_7592, var_7584)
    var_7632 = 0;
    var_7640 = 10;
    OP_PUSH3_C -4620693217682128896, -4620693217682128896, -317160502977836181
    var_7648 = 40;
    pri = fun_12D8(var_7640, var_7632, var_7624, var_7616, var_7608)
    var_7656 = 1;
    var_7664 = 0;
    var_7672 = 20;
    var_7680 = 43021;
    pri = float(var_7680)
    var_7688 = pri;
    var_7696 = -242;
    pri = float(var_7696)
    var_7704 = pri;
    OP_PUSH2_C 4672019245100433408, -317160502977836181
    var_7712 = 56;
    pri = fun_1178(var_7704, var_7696, var_7688, var_7680, var_7672, var_7664, var_7656)
    var_7720 = 0;
    var_7728 = 3;
    var_7736 = 2;
    var_7744 = 100;
    var_7752 = -1;
    OP_PUSH2_C -6920489833852796791, -34089364971008208
    var_7760 = 56;
    pri = fun_2038(var_7752, var_7744, var_7736, var_7728, var_7720, var_7712, var_7704)
    var_7768 = 15;
    var_7776 = 8;
    pri = fun_0060(var_7768)
    var_7784 = 0;
    var_7792 = 10;
    var_7800 = 0;
    OP_PUSH2_C -4620693217682128896, -484552086778445211
    var_7808 = 40;
    pri = fun_12D8(var_7800, var_7792, var_7784, var_7776, var_7768)
    var_7816 = 0;
    var_7824 = 10;
    var_7832 = 0;
    OP_PUSH2_C 4604480259023595111, -484546589220304156
    var_7840 = 40;
    pri = fun_12D8(var_7832, var_7824, var_7816, var_7808, var_7800)
    var_7848 = 1;
    var_7856 = 0;
    var_7864 = 20;
    var_7872 = 0;
    pri = float(var_7872)
    var_7880 = pri;
    var_7888 = 40;
    pri = float(var_7888)
    var_7896 = pri;
    var_7904 = -484552086778445211;
    var_7912 = 48;
    pri = fun_1238(var_7904, var_7896, var_7888, var_7880, var_7872, var_7864)
    var_7920 = 1;
    var_7928 = 0;
    var_7936 = 20;
    var_7944 = 0;
    pri = float(var_7944)
    var_7952 = pri;
    var_7960 = -40;
    pri = float(var_7960)
    var_7968 = pri;
    var_7976 = -484546589220304156;
    var_7984 = 48;
    pri = fun_1238(var_7976, var_7968, var_7960, var_7952, var_7944, var_7936)
    var_7992 = -317160502977836181;
    var_8000 = 8;
    pri = fun_0920(var_7992)
    var_8008 = 0;
    pri = fun_20E8()
    var_8016 = 1;
    var_8024 = 8;
    pri = fun_2180(var_8016)
    var_8032 = 0;
    pri = fun_2240()
    var_8040 = 1;
    var_8048 = -8040610231773951744;
    var_8056 = 16;
    pri = fun_06F8(var_8048, var_8040)
    var_8064 = 1;
    var_8072 = 2206624492151242658;
    var_8080 = 16;
    pri = fun_06F8(var_8072, var_8064)
    var_8088 = 1;
    var_8096 = -8654315183630985365;
    var_8104 = 16;
    pri = fun_06F8(var_8096, var_8088)
    var_8112 = 1;
    var_8120 = 440986244326141484;
    var_8128 = 16;
    pri = fun_06F8(var_8120, var_8112)
    var_8136 = 1;
    var_8144 = 6256141132606737718;
    var_8152 = 16;
    pri = fun_06F8(var_8144, var_8136)
    var_8160 = 1;
    var_8168 = -3674024162174587963;
    var_8176 = 16;
    pri = fun_06F8(var_8168, var_8160)
    var_8184 = 1;
    var_8192 = -4504228236179943877;
    var_8200 = 16;
    pri = fun_06F8(var_8192, var_8184)
    var_8208 = 1;
    var_8216 = 440998338954051805;
    var_8224 = 16;
    pri = fun_06F8(var_8216, var_8208)
    var_8232 = 1;
    var_8240 = -3674018664616446908;
    var_8248 = 16;
    pri = fun_06F8(var_8240, var_8232)
    var_8256 = 1;
    var_8264 = 9204042830795947825;
    var_8272 = 16;
    pri = fun_06F8(var_8264, var_8256)
    var_8280 = 1;
    var_8288 = 3;
    var_8296 = 0;
    var_8304 = 7;
    var_8312 = -34089364971008208;
    var_8320 = 40;
    pri = fun_6218(var_8312, var_8304, var_8296, var_8288, var_8280)
    var_8328 = 1;
    var_8336 = 1;
    OP_PUSH4_C -4584242208198098944, 4676169901495287808, 4672062400931823616, 8802641224559852288
    var_8344 = 48;
    pri = fun_06A0(var_8336, var_8328, var_8320, var_8312, var_8304, var_8296)
    var_8352 = 1;
    var_8360 = 1;
    OP_PUSH4_C -4582834833314545664, 4676169764056334336, 4672022268757409792, -34089364971008208
    var_8368 = 48;
    pri = fun_06A0(var_8360, var_8352, var_8344, var_8336, var_8328, var_8320)
    var_8376 = 1;
    var_8384 = 1;
    OP_PUSH4_C 4636047677661695181, 4676133562635989811, 4671982658851019162, -484552086778445211
    var_8392 = 48;
    pri = fun_06A0(var_8384, var_8376, var_8368, var_8360, var_8352, var_8344)
    var_8400 = 1;
    var_8408 = 1;
    OP_PUSH4_C 4636061751410530714, 4676138372999361331, 4671965891298695578, -484546589220304156
    var_8416 = 48;
    pri = fun_06A0(var_8408, var_8400, var_8392, var_8384, var_8376, var_8368)
    var_8424 = 1;
    var_8432 = 1;
    OP_PUSH4_C -4588042120383692800, 4676130126662153011, 4672060614225428480, -317160502977836181
    var_8440 = 48;
    pri = fun_06A0(var_8432, var_8424, var_8416, var_8408, var_8400, var_8392)
    var_8448 = 1;
    var_8456 = 1;
    OP_PUSH4_C -4587338432941916160, 4676122416336863232, 4672066029320195277, 2312218129280921210
    var_8464 = 48;
    pri = fun_06A0(var_8456, var_8448, var_8440, var_8432, var_8424, var_8416)
    var_8472 = 1;
    var_8480 = 1;
    OP_PUSH4_C -4587282137946574029, 4676111517427852902, 4672054979228336128, 119772388837235790
    var_8488 = 48;
    pri = fun_06A0(var_8480, var_8472, var_8464, var_8456, var_8448, var_8440)
    var_8496 = 1;
    var_8504 = 1;
    OP_PUSH4_C 4636068788284948480, 4676122704958665523, 4671987001921948877, 2481285362137015056
    var_8512 = 48;
    pri = fun_06A0(var_8504, var_8496, var_8488, var_8480, var_8472, var_8464)
    var_8520 = 1;
    var_8528 = 1;
    OP_PUSH4_C 4636068788284948480, 4676122017763898163, 4671971004027764736, -8654315183630985365
    var_8536 = 48;
    pri = fun_06A0(var_8528, var_8520, var_8512, var_8504, var_8496, var_8488)
    var_8544 = 1;
    var_8552 = 1;
    OP_PUSH4_C -4587289174820991795, 4676119681301689139, 4672051268376592384, -8654322880212382842
    var_8560 = 48;
    pri = fun_06A0(var_8552, var_8544, var_8536, var_8528, var_8520, var_8512)
    var_8568 = 1;
    var_8576 = 1;
    OP_PUSH4_C -4588042120383692800, 4676130264101106483, 4672083978847518720, 440986244326141484
    var_8584 = 48;
    pri = fun_06A0(var_8576, var_8568, var_8560, var_8552, var_8544, var_8536)
    var_8592 = 1;
    var_8600 = 1;
    OP_PUSH4_C 4636033603912859648, 4676125178859828019, 4671945165504512000, 2206624492151242658
    var_8608 = 48;
    pri = fun_06A0(var_8600, var_8592, var_8584, var_8576, var_8568, var_8560)
    var_8616 = 1;
    var_8624 = 1;
    OP_PUSH4_C 4636033603912859648, 4676111654866806374, 4671987634141134848, 59409724177917345
    var_8632 = 48;
    pri = fun_06A0(var_8624, var_8616, var_8608, var_8600, var_8592, var_8584)
    var_8640 = 1;
    var_8648 = 1;
    OP_PUSH4_C 4636033603912859648, 4676117894595294003, 4671994423625436365, 2481297456764925377
    var_8656 = 48;
    pri = fun_06A0(var_8648, var_8640, var_8632, var_8624, var_8616, var_8608)
    var_8664 = 1;
    var_8672 = 1;
    OP_PUSH4_C 4636061751410530714, 4676112383293259776, 4671968997419044045, -3674024162174587963
    var_8680 = 48;
    pri = fun_06A0(var_8672, var_8664, var_8656, var_8648, var_8640, var_8632)
    var_8688 = 1;
    var_8696 = 1;
    OP_PUSH4_C -4587331396067498394, 4676106473418260480, 4672067238782985830, 6256141132606737718
    var_8704 = 48;
    pri = fun_06A0(var_8696, var_8688, var_8680, var_8672, var_8664, var_8656)
    var_8712 = 0;
    var_8720 = 4628771549513724723;
    var_8728 = 0;
    OP_PUSH5_C 4676021365720712479, -4578752390621078487, 4671949610280267284, 4676095541523901317, -4579756376678633308
    var_8736 = 4672047013266592891;
    var_8744 = 1;
    pri = EvCameraMove(var_8744, var_8736, var_8728, var_8720, var_8712, var_8704, var_8696, var_8688, var_8680, var_8672)
    var_8752 = 1;
    var_8760 = 3;
    var_8768 = 0;
    var_8776 = 35;
    var_8784 = 2481285362137015056;
    var_8792 = 40;
    pri = fun_6218(var_8784, var_8776, var_8768, var_8760, var_8752)
    var_8800 = 1;
    var_8808 = 3;
    var_8816 = 0;
    var_8824 = 7;
    var_8832 = 2481297456764925377;
    var_8840 = 40;
    pri = fun_6218(var_8832, var_8824, var_8816, var_8808, var_8800)
    var_8848 = 1;
    var_8856 = 3;
    var_8864 = 0;
    var_8872 = 11;
    var_8880 = 59409724177917345;
    var_8888 = 40;
    pri = fun_6218(var_8880, var_8872, var_8864, var_8856, var_8848)
    var_8896 = 1;
    var_8904 = 3;
    var_8912 = 0;
    var_8920 = 8;
    var_8928 = 440998338954051805;
    var_8936 = 40;
    pri = fun_6218(var_8928, var_8920, var_8912, var_8904, var_8896)
    var_8944 = 1;
    var_8952 = 3;
    var_8960 = 0;
    var_8968 = 8;
    var_8976 = -4504228236179943877;
    var_8984 = 40;
    pri = fun_6218(var_8976, var_8968, var_8960, var_8952, var_8944)
    var_8992 = 1;
    var_9000 = 3;
    var_9008 = 0;
    var_9016 = 8;
    var_9024 = 440986244326141484;
    var_9032 = 40;
    pri = fun_6218(var_9024, var_9016, var_9008, var_9000, var_8992)
    var_9040 = 1;
    var_9048 = 3;
    var_9056 = 0;
    var_9064 = 13;
    var_9072 = -3674018664616446908;
    var_9080 = 40;
    pri = fun_6218(var_9072, var_9064, var_9056, var_9048, var_9040)
    var_9088 = 5;
    var_9096 = 8;
    pri = fun_0060(var_9088)
    var_9104 = -1;
    var_9112 = -317160502977836181;
    var_9120 = 16;
    pri = fun_1298(var_9112, var_9104)
    var_9128 = -1;
    var_9136 = -484552086778445211;
    var_9144 = 16;
    pri = fun_1298(var_9136, var_9128)
    var_9152 = -1;
    var_9160 = 2312218129280921210;
    var_9168 = 16;
    pri = fun_1298(var_9160, var_9152)
    var_9176 = -1;
    var_9184 = -484546589220304156;
    var_9192 = 16;
    pri = fun_1298(var_9184, var_9176)
    var_9200 = 8;
    var_9208 = 1;
    var_9216 = 0;
    pri = float(var_9216)
    var_9224 = pri;
    var_9232 = 0;
    pri = float(var_9232)
    var_9240 = pri;
    var_9248 = -317160502977836181;
    var_9256 = 40;
    pri = fun_12D8(var_9248, var_9240, var_9232, var_9224, var_9216)
    var_9264 = 8;
    var_9272 = 1;
    var_9280 = 0;
    pri = float(var_9280)
    var_9288 = pri;
    var_9296 = 0;
    pri = float(var_9296)
    var_9304 = pri;
    var_9312 = -484552086778445211;
    var_9320 = 40;
    pri = fun_12D8(var_9312, var_9304, var_9296, var_9288, var_9280)
    var_9328 = 8;
    var_9336 = 1;
    var_9344 = 0;
    pri = float(var_9344)
    var_9352 = pri;
    var_9360 = 0;
    pri = float(var_9360)
    var_9368 = pri;
    var_9376 = 2312218129280921210;
    var_9384 = 40;
    pri = fun_12D8(var_9376, var_9368, var_9360, var_9352, var_9344)
    var_9392 = 8;
    var_9400 = 1;
    var_9408 = 0;
    pri = float(var_9408)
    var_9416 = pri;
    var_9424 = 0;
    pri = float(var_9424)
    var_9432 = pri;
    var_9440 = -484546589220304156;
    var_9448 = 40;
    pri = fun_12D8(var_9440, var_9432, var_9424, var_9416, var_9408)
    var_9456 = 1838443220896465507;
    var_9464 = 8;
    pri = fun_1330(var_9456)
    var_9472 = 4;
    var_9480 = 1838443220896465507;
    var_9488 = 16;
    pri = fun_13E8(var_9480, var_9472)
    var_9496 = 15;
    var_9504 = 8;
    pri = fun_0060(var_9496)
    var_9512 = 1838443220896465507;
    var_9520 = 8;
    pri = fun_1428(var_9512)
    var_9528 = 5;
    var_9536 = 1838443220896465507;
    var_9544 = 16;
    pri = fun_1370(var_9536, var_9528)
    var_9552 = 0;
    var_9560 = 3;
    var_9568 = 0;
    var_9576 = 100;
    var_9584 = -1;
    OP_PUSH2_C 8994483706856784521, 1838443220896465507
    var_9592 = 56;
    pri = fun_2038(var_9584, var_9576, var_9568, var_9560, var_9552, var_9544, var_9536)
    var_9600 = 1;
    var_9608 = 8;
    pri = fun_2180(var_9600)
    var_9616 = 0;
    pri = fun_2240()
    var_9624 = 1838443220896465507;
    var_9632 = 8;
    pri = fun_14C8(var_9624)
    var_9640 = 1838443220896465507;
    var_9648 = 8;
    pri = fun_0920(var_9640)
    var_9656 = 1;
    var_9664 = 0;
    var_9672 = 4641240890982006784;
    var_9680 = 0;
    var_9688 = 0;
    OP_PUSH4_C 4676156432477847552, 4672023093391130624, 4607182418800017408, 1838443220896465507
    var_9696 = 72;
    pri = fun_07A8(var_9688, var_9680, var_9672, var_9664, var_9656, var_9648, var_9640, var_9632, var_9624)
    var_9704 = 30;
    var_9712 = 8;
    pri = fun_0060(var_9704)
    var_9720 = 0;
    var_9728 = 4631952216750555136;
    var_9736 = 0;
    OP_PUSH5_C 4676123712386194473, -4577673285929114010, 4672002865125958615, 4676198516285400678, -4583318618430767104
    var_9744 = 4672074446081705902;
    var_9752 = 1;
    pri = EvCameraMove(var_9752, var_9744, var_9736, var_9728, var_9720, var_9712, var_9704, var_9696, var_9688, var_9680)
    var_9760 = 0;
    pri = fun_2270()
    var_9768 = 0;
    var_9776 = 4631952216750555136;
    var_9784 = 2;
    OP_PUSH5_C 4676125779468054692, -4577720960753294377, 4671967620280730255, 4676190164120198185, -4582464693720171151
    var_9792 = 4672076526907461468;
    var_9800 = 180;
    pri = EvCameraMove(var_9800, var_9792, var_9784, var_9776, var_9768, var_9760, var_9752, var_9744, var_9736, var_9728)
    var_9808 = 1;
    var_9816 = 1;
    var_9824 = 60;
    var_9832 = -15;
    pri = float(var_9832)
    var_9840 = pri;
    var_9848 = 0;
    pri = float(var_9848)
    var_9856 = pri;
    var_9864 = -34089364971008208;
    var_9872 = 48;
    pri = fun_1238(var_9864, var_9856, var_9848, var_9840, var_9832, var_9824)
    var_9880 = 0;
    var_9888 = 3;
    var_9896 = 2;
    var_9904 = 100;
    var_9912 = -1;
    OP_PUSH2_C 8994482607345156310, 1838443220896465507
    var_9920 = 56;
    pri = fun_2038(var_9912, var_9904, var_9896, var_9888, var_9880, var_9872, var_9864)
    var_9928 = 119772388837235790;
    var_9936 = 8;
    pri = fun_0920(var_9928)
    var_9944 = 59409724177917345;
    var_9952 = 8;
    pri = fun_0920(var_9944)
    var_9960 = -3674024162174587963;
    var_9968 = 8;
    pri = fun_0920(var_9960)
    var_9976 = 6256141132606737718;
    var_9984 = 8;
    pri = fun_0920(var_9976)
    var_9992 = -3674018664616446908;
    var_10000 = 8;
    pri = fun_0920(var_9992)
    var_10008 = 2481285362137015056;
    var_10016 = 8;
    pri = fun_0920(var_10008)
    var_10024 = 2481297456764925377;
    var_10032 = 8;
    pri = fun_0920(var_10024)
    var_10040 = -8654322880212382842;
    var_10048 = 8;
    pri = fun_0920(var_10040)
    var_10056 = 2312218129280921210;
    var_10064 = 8;
    pri = fun_0920(var_10056)
    var_10072 = 2206624492151242658;
    var_10080 = 8;
    pri = fun_0920(var_10072)
    var_10088 = -4504228236179943877;
    var_10096 = 8;
    pri = fun_0920(var_10088)
    var_10104 = -8654315183630985365;
    var_10112 = 8;
    pri = fun_0920(var_10104)
    var_10120 = -317160502977836181;
    var_10128 = 8;
    pri = fun_0920(var_10120)
    var_10136 = -484552086778445211;
    var_10144 = 8;
    pri = fun_0920(var_10136)
    var_10152 = -484546589220304156;
    var_10160 = 8;
    pri = fun_0920(var_10152)
    var_10168 = 10;
    var_10176 = 8;
    pri = fun_0060(var_10168)
    var_10184 = 0;
    var_10192 = 0;
    var_10200 = 0;
    OP_PUSH2_C -4599413709442803302, 119772388837235790
    var_10208 = 40;
    pri = fun_0878(var_10200, var_10192, var_10184, var_10176, var_10168)
    var_10216 = 0;
    var_10224 = 0;
    var_10232 = 0;
    var_10240 = 20;
    pri = float(var_10240)
    var_10248 = pri;
    var_10256 = 59409724177917345;
    var_10264 = 40;
    pri = fun_0878(var_10256, var_10248, var_10240, var_10232, var_10224)
    var_10272 = 0;
    var_10280 = 0;
    var_10288 = 0;
    var_10296 = 25;
    pri = float(var_10296)
    var_10304 = pri;
    var_10312 = -3674024162174587963;
    var_10320 = 40;
    pri = fun_0878(var_10312, var_10304, var_10296, var_10288, var_10280)
    var_10328 = 0;
    var_10336 = 0;
    var_10344 = 0;
    var_10352 = -16;
    pri = float(var_10352)
    var_10360 = pri;
    var_10368 = 6256141132606737718;
    var_10376 = 40;
    pri = fun_0878(var_10368, var_10360, var_10352, var_10344, var_10336)
    var_10384 = 15;
    var_10392 = 8;
    pri = fun_0060(var_10384)
    var_10400 = 0;
    var_10408 = 0;
    var_10416 = 0;
    var_10424 = 30;
    pri = float(var_10424)
    var_10432 = pri;
    var_10440 = -3674018664616446908;
    var_10448 = 40;
    pri = fun_0878(var_10440, var_10432, var_10424, var_10416, var_10408)
    var_10456 = 0;
    var_10464 = 0;
    var_10472 = 0;
    var_10480 = 25;
    pri = float(var_10480)
    var_10488 = pri;
    var_10496 = 2481285362137015056;
    var_10504 = 40;
    pri = fun_0878(var_10496, var_10488, var_10480, var_10472, var_10464)
    var_10512 = 0;
    var_10520 = 0;
    var_10528 = 0;
    var_10536 = 20;
    pri = float(var_10536)
    var_10544 = pri;
    var_10552 = 2481297456764925377;
    var_10560 = 40;
    pri = fun_0878(var_10552, var_10544, var_10536, var_10528, var_10520)
    var_10568 = 0;
    var_10576 = 0;
    var_10584 = 0;
    var_10592 = -20;
    pri = float(var_10592)
    var_10600 = pri;
    var_10608 = -8654322880212382842;
    var_10616 = 40;
    pri = fun_0878(var_10608, var_10600, var_10592, var_10584, var_10576)
    var_10624 = 12;
    var_10632 = 8;
    pri = fun_0060(var_10624)
    var_10640 = 0;
    var_10648 = 0;
    var_10656 = 0;
    var_10664 = -14;
    pri = float(var_10664)
    var_10672 = pri;
    var_10680 = 2312218129280921210;
    var_10688 = 40;
    pri = fun_0878(var_10680, var_10672, var_10664, var_10656, var_10648)
    var_10696 = 0;
    var_10704 = 0;
    var_10712 = 0;
    var_10720 = 50;
    pri = float(var_10720)
    var_10728 = pri;
    var_10736 = 2206624492151242658;
    var_10744 = 40;
    pri = fun_0878(var_10736, var_10728, var_10720, var_10712, var_10704)
    var_10752 = 0;
    var_10760 = 0;
    var_10768 = 0;
    var_10776 = 38;
    pri = float(var_10776)
    var_10784 = pri;
    var_10792 = -4504228236179943877;
    var_10800 = 40;
    pri = fun_0878(var_10792, var_10784, var_10776, var_10768, var_10760)
    var_10808 = 0;
    var_10816 = 0;
    var_10824 = 0;
    OP_PUSH2_C 4631037423076245504, -8654315183630985365
    var_10832 = 40;
    pri = fun_0878(var_10824, var_10816, var_10808, var_10800, var_10792)
    var_10840 = 15;
    var_10848 = 8;
    pri = fun_0060(var_10840)
    var_10856 = 0;
    var_10864 = 0;
    var_10872 = 0;
    var_10880 = -20;
    pri = float(var_10880)
    var_10888 = pri;
    var_10896 = -317160502977836181;
    var_10904 = 40;
    pri = fun_0878(var_10896, var_10888, var_10880, var_10872, var_10864)
    var_10912 = 0;
    var_10920 = 0;
    var_10928 = 0;
    OP_PUSH2_C 4630854464341383578, -484552086778445211
    var_10936 = 40;
    pri = fun_0878(var_10928, var_10920, var_10912, var_10904, var_10896)
    var_10944 = 0;
    var_10952 = 0;
    var_10960 = 0;
    OP_PUSH2_C 4630601136862343987, -484546589220304156
    var_10968 = 40;
    pri = fun_0878(var_10960, var_10952, var_10944, var_10936, var_10928)
    var_10976 = 1838443220896465507;
    var_10984 = 8;
    pri = fun_0920(var_10976)
    var_10992 = 1;
    var_11000 = 1;
    var_11008 = 15;
    var_11016 = 15;
    pri = float(var_11016)
    var_11024 = pri;
    var_11032 = 0;
    pri = float(var_11032)
    var_11040 = pri;
    var_11048 = 1838443220896465507;
    var_11056 = 48;
    pri = fun_1238(var_11048, var_11040, var_11032, var_11024, var_11016, var_11008)
    var_11064 = 0;
    pri = fun_20E8()
    var_11072 = 1;
    var_11080 = 8;
    pri = fun_2180(var_11072)
    var_11088 = 1;
    var_11096 = 1;
    OP_PUSH4_C -4584242208198098944, 4676172650274357248, 4672065149710893056, 8802641224559852288
    var_11104 = 48;
    pri = fun_06A0(var_11096, var_11088, var_11080, var_11072, var_11064, var_11056)
    var_11112 = 1;
    var_11120 = 1;
    OP_PUSH4_C 4630854464341383578, 4676129439467385651, 4671968914955671962, -484552086778445211
    var_11128 = 48;
    pri = fun_06A0(var_11120, var_11112, var_11104, var_11096, var_11088, var_11080)
    var_11136 = 1;
    var_11144 = 1;
    OP_PUSH4_C 4630601136862343987, 4676134249830757171, 4671952147403348378, -484546589220304156
    var_11152 = 48;
    pri = fun_06A0(var_11144, var_11136, var_11128, var_11120, var_11112, var_11104)
    var_11160 = 1;
    var_11168 = 1;
    OP_PUSH4_C -4601552919265804288, 4676082023028437811, 4672049619109150720, -317160502977836181
    var_11176 = 48;
    pri = fun_06A0(var_11168, var_11160, var_11152, var_11144, var_11136, var_11128)
    var_11184 = 1;
    var_11192 = 1;
    OP_PUSH4_C -4599301119452119040, 4676090805377564672, 4672063280541125837, 2312218129280921210
    var_11200 = 48;
    pri = fun_06A0(var_11192, var_11184, var_11176, var_11168, var_11160, var_11152)
    var_11208 = 1;
    var_11216 = 1;
    OP_PUSH4_C 4618666597849812173, 4676108768648783462, 4672027491437641728, 119772388837235790
    var_11224 = 48;
    pri = fun_06A0(var_11216, var_11208, var_11200, var_11192, var_11184, var_11176)
    var_11232 = 1;
    var_11240 = 1;
    var_11248 = 0;
    OP_PUSH3_C 4676119956179596083, 4672022736049851597, 2481285362137015056
    var_11256 = 48;
    pri = fun_06A0(var_11248, var_11240, var_11232, var_11224, var_11216, var_11208)
    var_11264 = 1;
    var_11272 = 1;
    var_11280 = 0;
    OP_PUSH3_C 4676113771426689843, 4672014984492875776, -8654315183630985365
    var_11288 = 48;
    pri = fun_06A0(var_11280, var_11272, var_11264, var_11256, var_11248, var_11240)
    var_11296 = 1;
    var_11304 = 1;
    var_11312 = 0;
    OP_PUSH3_C 4676116932522619699, 4672040273260314624, -8654322880212382842
    var_11320 = 48;
    pri = fun_06A0(var_11312, var_11304, var_11296, var_11288, var_11280, var_11272)
    var_11328 = 1;
    var_11336 = 1;
    OP_PUSH4_C -4597893744568565760, 4676093155583669043, 4672085353237053440, 440986244326141484
    var_11344 = 48;
    pri = fun_06A0(var_11336, var_11328, var_11320, var_11312, var_11304, var_11296)
    var_11352 = 1;
    var_11360 = 1;
    var_11368 = 0;
    OP_PUSH3_C 4676122649983084134, 4672006875594620928, 59409724177917345
    var_11376 = 48;
    pri = fun_06A0(var_11368, var_11360, var_11352, var_11344, var_11336, var_11328)
    var_11384 = 1;
    var_11392 = 1;
    OP_PUSH4_C 4630826316843712512, 4676137136048780083, 4671972433392880845, 2481297456764925377
    var_11400 = 48;
    pri = fun_06A0(var_11392, var_11384, var_11376, var_11368, var_11360, var_11352)
    var_11408 = 1;
    var_11416 = 1;
    OP_PUSH4_C 4627730092099895296, 4676078023554891776, 4671938760849280205, -3674024162174587963
    var_11424 = 48;
    pri = fun_06A0(var_11416, var_11408, var_11400, var_11392, var_11384, var_11376)
    var_11432 = 1;
    var_11440 = 1;
    OP_PUSH4_C -4595641944754880512, 4676111970976399360, 4672091977794610790, 6256141132606737718
    var_11448 = 48;
    pri = fun_06A0(var_11440, var_11432, var_11424, var_11416, var_11408, var_11400)
    var_11456 = 1;
    var_11464 = 1;
    OP_PUSH4_C -4593066448717978010, 4676104837894714163, 4672108992737050624, 440998338954051805
    var_11472 = 48;
    pri = fun_06A0(var_11464, var_11456, var_11448, var_11440, var_11432, var_11424)
    var_11480 = 1;
    var_11488 = 1;
    OP_PUSH4_C 4630544841867001856, 4676108273868550963, 4671936919167303680, -4504228236179943877
    var_11496 = 48;
    pri = fun_06A0(var_11488, var_11480, var_11472, var_11464, var_11456, var_11448)
    var_11504 = 1;
    var_11512 = 1;
    OP_PUSH4_C 4630826316843712512, 4676111434964480819, 4671917677713817600, 2206624492151242658
    var_11520 = 48;
    pri = fun_06A0(var_11512, var_11504, var_11496, var_11488, var_11480, var_11472)
    var_11528 = 1;
    var_11536 = 1;
    var_11544 = 30;
    pri = float(var_11544)
    var_11552 = pri;
    OP_PUSH3_C 4676091959864773837, 4671938980751605760, -3674018664616446908
    var_11560 = 48;
    pri = fun_06A0(var_11552, var_11544, var_11536, var_11528, var_11520, var_11512)
    var_11568 = 1;
    var_11576 = 1;
    var_11584 = 0;
    OP_PUSH3_C 4676100989604016947, 4671994093771948032, 9204042830795947825
    var_11592 = 48;
    pri = fun_06A0(var_11584, var_11576, var_11568, var_11560, var_11552, var_11544)
    var_11600 = 1;
    var_11608 = 1;
    OP_PUSH4_C -4592362761276201370, 4676144887605755904, 4672081917263216640, -8040610231773951744
    var_11616 = 48;
    pri = fun_06A0(var_11608, var_11600, var_11592, var_11584, var_11576, var_11568)
    var_11624 = 0;
    var_11632 = 4631952216750555136;
    var_11640 = 0;
    OP_PUSH5_C 4676141183625959834, -4579189204600561336, 4671888653355623383, 4676167339633195090, -4581060837273826755
    var_11648 = 4672057065551649833;
    var_11656 = 1;
    pri = EvCameraMove(var_11656, var_11648, var_11640, var_11632, var_11624, var_11616, var_11608, var_11600, var_11592, var_11584)
    var_11664 = 0;
    pri = fun_2270()
    var_11672 = 0;
    var_11680 = 4631952216750555136;
    var_11688 = 2;
    OP_PUSH5_C 4676142261147355054, -4579189204600561336, 4671887985402309509, 4676168417154590310, -4581060837273826755
    var_11696 = 4672056397598335959;
    var_11704 = 180;
    pri = EvCameraMove(var_11704, var_11696, var_11688, var_11680, var_11672, var_11664, var_11656, var_11648, var_11640, var_11632)
    var_11712 = 0;
    var_11720 = 3;
    var_11728 = 0;
    var_11736 = 100;
    var_11744 = -1;
    OP_PUSH2_C 8994481507833528099, 1838443220896465507
    var_11752 = 56;
    pri = fun_2038(var_11744, var_11736, var_11728, var_11720, var_11712, var_11704, var_11696)
    var_11760 = 1;
    var_11768 = 8;
    pri = fun_2180(var_11760)
    var_11776 = 0;
    pri = fun_2240()
    var_11784 = 5;
    var_11792 = 5;
    var_11800 = -34089364971008208;
    var_11808 = 24;
    pri = fun_1460(var_11800, var_11792, var_11784)
    var_11816 = 1;
    var_11824 = 1;
    var_11832 = -1;
    var_11840 = -1;
    var_11848 = 0;
    var_11856 = 22;
    var_11864 = -34089364971008208;
    var_11872 = 56;
    pri = fun_3EE0(var_11864, var_11856, var_11848, var_11840, var_11832, var_11824, var_11816)
    var_11880 = 0;
    var_11888 = 3;
    var_11896 = 0;
    var_11904 = 100;
    var_11912 = -1;
    OP_PUSH2_C -6920493132387681424, -34089364971008208
    var_11920 = 56;
    pri = fun_2038(var_11912, var_11904, var_11896, var_11888, var_11880, var_11872, var_11864)
    var_11928 = 5;
    var_11936 = 1838443220896465507;
    var_11944 = 16;
    pri = fun_1370(var_11936, var_11928)
    var_11952 = 33144;
    var_11960 = -34089364971008208;
    var_11968 = 16;
    pri = fun_0CF8(var_11960, var_11952)
    var_11976 = 1;
    var_11984 = 8;
    pri = fun_2180(var_11976)
    var_11992 = 0;
    pri = fun_2240()
    var_12000 = 1;
    var_12008 = 3;
    var_12016 = 0;
    var_12024 = 22;
    var_12032 = -34089364971008208;
    var_12040 = 40;
    pri = fun_6218(var_12032, var_12024, var_12016, var_12008, var_12000)
    var_12048 = 0;
    var_12056 = 4629798933178718618;
    var_12064 = 0;
    OP_PUSH5_C 4676154130375376896, -4579530317087962563, 4671921671689805496, 4676169714578311086, -4580219930780903670
    var_12072 = 4672096340106993992;
    var_12080 = 1;
    pri = EvCameraMove(var_12080, var_12072, var_12064, var_12056, var_12048, var_12040, var_12032, var_12024, var_12016, var_12008)
    var_12088 = 0;
    pri = fun_2270()
    var_12096 = 0;
    var_12104 = 4629798933178718618;
    var_12112 = 2;
    OP_PUSH5_C 4676154807949417513, -4579443939454484480, 4671929269315153428, 4676170393526741238, -4580104174196731412
    var_12120 = 4672103940481120993;
    var_12128 = 180;
    pri = EvCameraMove(var_12128, var_12120, var_12112, var_12104, var_12096, var_12088, var_12080, var_12072, var_12064, var_12056)
    var_12136 = 1838443220896465507;
    var_12144 = 8;
    pri = fun_14C8(var_12136)
    var_12152 = 1;
    var_12160 = 1;
    var_12168 = -1;
    OP_PUSH2_C 8802641224559852288, 1838443220896465507
    var_12176 = 40;
    pri = fun_11E0(var_12168, var_12160, var_12152, var_12144, var_12136)
    var_12184 = 0;
    var_12192 = 0;
    var_12200 = 0;
    var_12208 = 0;
    OP_PUSH2_C 8802641224559852288, 1838443220896465507
    var_12216 = 48;
    pri = fun_08C8(var_12208, var_12200, var_12192, var_12184, var_12176, var_12168)
    var_12224 = -34089364971008208;
    var_12232 = 8;
    pri = fun_1428(var_12224)
    var_12240 = 0;
    var_12248 = 3;
    var_12256 = 2;
    var_12264 = 100;
    var_12272 = -1;
    OP_PUSH2_C 8994480408321899888, 1838443220896465507
    var_12280 = 56;
    pri = fun_2038(var_12272, var_12264, var_12256, var_12248, var_12240, var_12232, var_12224)
    var_12288 = 30;
    var_12296 = 8;
    pri = fun_0060(var_12288)
    var_12304 = 1;
    var_12312 = 1;
    var_12320 = -1;
    OP_PUSH2_C 8802641224559852288, -34089364971008208
    var_12328 = 40;
    pri = fun_11E0(var_12320, var_12312, var_12304, var_12296, var_12288)
    var_12336 = 0;
    var_12344 = 0;
    var_12352 = 0;
    var_12360 = 0;
    OP_PUSH2_C 8802641224559852288, -34089364971008208
    var_12368 = 48;
    pri = fun_08C8(var_12360, var_12352, var_12344, var_12336, var_12328, var_12320)
    var_12376 = -34089364971008208;
    var_12384 = 8;
    pri = fun_0920(var_12376)
    var_12392 = 1838443220896465507;
    var_12400 = 8;
    pri = fun_0920(var_12392)
    var_12408 = 0;
    pri = fun_20E8()
    var_12416 = 1;
    var_12424 = 8;
    pri = fun_2180(var_12416)
    var_12432 = 0;
    var_12440 = 2;
    var_12448 = 1838443220896465507;
    var_12456 = 24;
    pri = fun_7F48(var_12448, var_12440, var_12432)
    var_12464 = 0;
    var_12472 = 3;
    var_12480 = 0;
    var_12488 = 100;
    var_12496 = -1;
    OP_PUSH2_C 8994496900996323053, 1838443220896465507
    var_12504 = 56;
    pri = fun_2038(var_12496, var_12488, var_12480, var_12472, var_12464, var_12456, var_12448)
    var_12512 = 1;
    var_12520 = 8;
    pri = fun_2180(var_12512)
    var_12528 = 0;
    pri = fun_2240()
    var_12536 = 0;
    var_12544 = 0;
    var_12552 = 1838443220896465507;
    var_12560 = 24;
    pri = fun_7F48(var_12552, var_12544, var_12536)
    var_12568 = 1;
    var_12576 = 1;
    var_12584 = -1;
    OP_PUSH2_C 1838443220896465507, -34089364971008208
    var_12592 = 40;
    pri = fun_11E0(var_12584, var_12576, var_12568, var_12560, var_12552)
    var_12600 = 0;
    var_12608 = 0;
    var_12616 = 0;
    var_12624 = 0;
    OP_PUSH2_C 1838443220896465507, -34089364971008208
    var_12632 = 48;
    pri = fun_08C8(var_12624, var_12616, var_12608, var_12600, var_12592, var_12584)
    var_12640 = 5;
    var_12648 = -34089364971008208;
    var_12656 = 16;
    pri = fun_13E8(var_12648, var_12640)
    var_12664 = -34089364971008208;
    var_12672 = 8;
    pri = fun_0920(var_12664)
    var_12680 = 0;
    var_12688 = 3;
    var_12696 = 2;
    var_12704 = 100;
    var_12712 = -1;
    OP_PUSH2_C -6920492032876053213, -34089364971008208
    var_12720 = 56;
    pri = fun_2038(var_12712, var_12704, var_12696, var_12688, var_12680, var_12672, var_12664)
    var_12728 = 0;
    var_12736 = 5;
    OP_PUSH3_C -4624296097384025292, 4602678819172646912, 1838443220896465507
    var_12744 = 40;
    pri = fun_12D8(var_12736, var_12728, var_12720, var_12712, var_12704)
    var_12752 = 1;
    var_12760 = 0;
    var_12768 = 15;
    OP_PUSH2_C -34089364971008208, 1838443220896465507
    var_12776 = 40;
    pri = fun_11E0(var_12768, var_12760, var_12752, var_12744, var_12736)
    var_12784 = 10;
    var_12792 = 8;
    pri = fun_0060(var_12784)
    var_12800 = 0;
    var_12808 = 10;
    var_12816 = -4624296097384025292;
    var_12824 = 0;
    pri = float(var_12824)
    var_12832 = pri;
    var_12840 = 1838443220896465507;
    var_12848 = 40;
    pri = fun_12D8(var_12840, var_12832, var_12824, var_12816, var_12808)
    var_12856 = 0;
    var_12864 = 0;
    var_12872 = 0;
    var_12880 = 0;
    OP_PUSH2_C -34089364971008208, 1838443220896465507
    var_12888 = 48;
    pri = fun_08C8(var_12880, var_12872, var_12864, var_12856, var_12848, var_12840)
    var_12896 = 1838443220896465507;
    var_12904 = 8;
    pri = fun_0920(var_12896)
    var_12912 = 0;
    pri = fun_20E8()
    var_12920 = 1;
    var_12928 = 8;
    pri = fun_2180(var_12920)
    var_12936 = 0;
    pri = fun_2240()
    var_12944 = 1;
    pri = SetCascadeShadowMapLevel(var_12944)
    var_12952 = 0;
    var_12960 = 4631712963020351078;
    var_12968 = 0;
    OP_PUSH5_C 4676153437683051397, -4578145987968127468, 4672030097280199557, 4676219035921154048, -4591972918433457111
    var_12976 = 4672109025722399457;
    var_12984 = 1;
    pri = EvCameraMove(var_12984, var_12976, var_12968, var_12960, var_12952, var_12944, var_12936, var_12928, var_12920, var_12912)
    var_12992 = 0;
    pri = fun_2270()
    var_13000 = 0;
    var_13008 = 4631712963020351078;
    var_13016 = 2;
    OP_PUSH5_C 4676157191140870717, -4578145987968127468, 4672017628818340577, 4676222789378973368, -4591972918433457111
    var_13024 = 4672096557260540477;
    var_13032 = 180;
    pri = EvCameraMove(var_13032, var_13024, var_13016, var_13008, var_13000, var_12992, var_12984, var_12976, var_12968, var_12960)
    var_13040 = -34089364971008208;
    var_13048 = 8;
    pri = fun_14C8(var_13040)
    var_13056 = -1;
    var_13064 = -34089364971008208;
    var_13072 = 16;
    pri = fun_1298(var_13064, var_13056)
    var_13080 = 8;
    var_13088 = 10;
    var_13096 = 0;
    pri = float(var_13096)
    var_13104 = pri;
    var_13112 = 0;
    pri = float(var_13112)
    var_13120 = pri;
    var_13128 = 1838443220896465507;
    var_13136 = 40;
    pri = fun_12D8(var_13128, var_13120, var_13112, var_13104, var_13096)
    var_13144 = 1;
    var_13152 = 0;
    var_13160 = 4641240890982006784;
    var_13168 = 0;
    var_13176 = 0;
    OP_PUSH4_C 4676238895849930752, 4672022268757409792, 4611686018427387904, -34089364971008208
    var_13184 = 72;
    pri = fun_07A8(var_13176, var_13168, var_13160, var_13152, var_13144, var_13136, var_13128, var_13120, var_13112)
    var_13192 = 15;
    var_13200 = 8;
    pri = fun_0060(var_13192)
    var_13208 = 0;
    var_13216 = 0;
    var_13224 = 0;
    var_13232 = -10;
    pri = float(var_13232)
    var_13240 = pri;
    var_13248 = 8802641224559852288;
    var_13256 = 40;
    pri = fun_0878(var_13248, var_13240, var_13232, var_13224, var_13216)
    var_13264 = 15;
    var_13272 = 8;
    pri = fun_0060(var_13264)
    var_13280 = -1;
    var_13288 = 1838443220896465507;
    var_13296 = 16;
    pri = fun_1298(var_13288, var_13280)
    var_13304 = 1838443220896465507;
    var_13312 = 8;
    pri = fun_0920(var_13304)
    var_13320 = 1;
    var_13328 = 0;
    var_13336 = 4641240890982006784;
    var_13344 = 0;
    var_13352 = 0;
    OP_PUSH4_C 4676168801983660032, 4672023093391130624, 4607182418800017408, 1838443220896465507
    var_13360 = 72;
    pri = fun_07A8(var_13352, var_13344, var_13336, var_13328, var_13320, var_13312, var_13304, var_13296, var_13288)
    var_13368 = 0;
    var_13376 = 3;
    var_13384 = 2;
    var_13392 = 100;
    var_13400 = -1;
    OP_PUSH2_C 8994495801484694842, 1838443220896465507
    var_13408 = 56;
    pri = fun_2038(var_13400, var_13392, var_13384, var_13376, var_13368, var_13360, var_13352)
    var_13416 = 1838443220896465507;
    var_13424 = 8;
    pri = fun_0920(var_13416)
    var_13432 = 8802641224559852288;
    var_13440 = 8;
    pri = fun_0920(var_13432)
    var_13448 = 0;
    var_13456 = 0;
    var_13464 = 0;
    var_13472 = 0;
    OP_PUSH2_C 1838443220896465507, 8802641224559852288
    var_13480 = 48;
    pri = fun_08C8(var_13472, var_13464, var_13456, var_13448, var_13440, var_13432)
    var_13488 = 0;
    pri = fun_20E8()
    var_13496 = 1;
    var_13504 = 8;
    pri = fun_2180(var_13496)
    var_13512 = 0;
    pri = fun_2240()
    var_13520 = 0;
    var_13528 = 0;
    var_13536 = 0;
    var_13544 = 180;
    pri = float(var_13544)
    var_13552 = pri;
    var_13560 = 1838443220896465507;
    var_13568 = 40;
    pri = fun_0878(var_13560, var_13552, var_13544, var_13536, var_13528)
    var_13576 = 1838443220896465507;
    var_13584 = 8;
    pri = fun_0920(var_13576)
    var_13592 = 8802641224559852288;
    var_13600 = 8;
    pri = fun_0920(var_13592)
    var_13608 = 15;
    var_13616 = 8;
    pri = fun_0060(var_13608)
    var_13624 = 0;
    var_13632 = 3;
    var_13640 = 2;
    var_13648 = 101;
    var_13656 = -1;
    OP_PUSH2_C 8993497444926468479, 1838443220896465507
    var_13664 = 56;
    pri = fun_2038(var_13656, var_13648, var_13640, var_13632, var_13624, var_13616, var_13608)
    var_13672 = 1;
    var_13680 = 1;
    var_13688 = -1;
    var_13696 = -1;
    var_13704 = 0;
    var_13712 = 20;
    var_13720 = 1838443220896465507;
    var_13728 = 56;
    pri = fun_3EE0(var_13720, var_13712, var_13704, var_13696, var_13688, var_13680, var_13672)
    var_13736 = 60;
    var_13744 = 8;
    pri = fun_0060(var_13736)
    var_13752 = 33320;
    pri = SoundPostEvent(var_13752)
    var_13760 = 1;
    var_13768 = 1;
    var_13776 = -1;
    var_13784 = -1;
    var_13792 = 0;
    var_13800 = 13;
    var_13808 = -3674018664616446908;
    var_13816 = 56;
    pri = fun_3EE0(var_13808, var_13800, var_13792, var_13784, var_13776, var_13768, var_13760)
    var_13824 = 1;
    var_13832 = 1;
    var_13840 = -1;
    var_13848 = -1;
    var_13856 = 0;
    var_13864 = 35;
    var_13872 = 2481285362137015056;
    var_13880 = 56;
    pri = fun_3EE0(var_13872, var_13864, var_13856, var_13848, var_13840, var_13832, var_13824)
    var_13888 = 1;
    var_13896 = 8;
    pri = fun_0060(var_13888)
    var_13904 = 1;
    var_13912 = 1;
    var_13920 = -1;
    var_13928 = -1;
    var_13936 = 0;
    var_13944 = 14;
    var_13952 = -484552086778445211;
    var_13960 = 56;
    pri = fun_3EE0(var_13952, var_13944, var_13936, var_13928, var_13920, var_13912, var_13904)
    var_13968 = 1;
    var_13976 = 1;
    var_13984 = -1;
    var_13992 = -1;
    var_14000 = 0;
    var_14008 = 7;
    var_14016 = -4504228236179943877;
    var_14024 = 56;
    pri = fun_3EE0(var_14016, var_14008, var_14000, var_13992, var_13984, var_13976, var_13968)
    var_14032 = 1;
    var_14040 = 1;
    var_14048 = -1;
    var_14056 = -1;
    var_14064 = 0;
    var_14072 = 13;
    var_14080 = -317160502977836181;
    var_14088 = 56;
    pri = fun_3EE0(var_14080, var_14072, var_14064, var_14056, var_14048, var_14040, var_14032)
    var_14096 = 2;
    var_14104 = 8;
    pri = fun_0060(var_14096)
    var_14112 = 1;
    var_14120 = 1;
    var_14128 = -1;
    var_14136 = -1;
    var_14144 = 0;
    var_14152 = 13;
    var_14160 = -8654315183630985365;
    var_14168 = 56;
    pri = fun_3EE0(var_14160, var_14152, var_14144, var_14136, var_14128, var_14120, var_14112)
    var_14176 = 1;
    var_14184 = 1;
    var_14192 = -1;
    var_14200 = -1;
    var_14208 = 0;
    var_14216 = 13;
    var_14224 = 2481297456764925377;
    var_14232 = 56;
    pri = fun_3EE0(var_14224, var_14216, var_14208, var_14200, var_14192, var_14184, var_14176)
    var_14240 = 1;
    var_14248 = 1;
    var_14256 = -1;
    var_14264 = -1;
    var_14272 = 0;
    var_14280 = 7;
    var_14288 = 440986244326141484;
    var_14296 = 56;
    pri = fun_3EE0(var_14288, var_14280, var_14272, var_14264, var_14256, var_14248, var_14240)
    var_14304 = 5;
    var_14312 = 8;
    pri = fun_0060(var_14304)
    var_14320 = 1;
    var_14328 = 1;
    var_14336 = -1;
    var_14344 = -1;
    var_14352 = 0;
    var_14360 = 13;
    var_14368 = 59409724177917345;
    var_14376 = 56;
    pri = fun_3EE0(var_14368, var_14360, var_14352, var_14344, var_14336, var_14328, var_14320)
    var_14384 = 1;
    var_14392 = 1;
    var_14400 = -1;
    var_14408 = -1;
    var_14416 = 0;
    var_14424 = 7;
    var_14432 = 440998338954051805;
    var_14440 = 56;
    pri = fun_3EE0(var_14432, var_14424, var_14416, var_14408, var_14400, var_14392, var_14384)
    var_14448 = 1;
    var_14456 = 1;
    var_14464 = -1;
    var_14472 = -1;
    var_14480 = 0;
    var_14488 = 14;
    var_14496 = 2206624492151242658;
    var_14504 = 56;
    pri = fun_3EE0(var_14496, var_14488, var_14480, var_14472, var_14464, var_14456, var_14448)
    var_14512 = 3;
    var_14520 = 8;
    pri = fun_0060(var_14512)
    var_14528 = 1;
    var_14536 = 1;
    var_14544 = -1;
    var_14552 = -1;
    var_14560 = 0;
    var_14568 = 13;
    var_14576 = 9204042830795947825;
    var_14584 = 56;
    pri = fun_3EE0(var_14576, var_14568, var_14560, var_14552, var_14544, var_14536, var_14528)
    var_14592 = 1;
    var_14600 = 1;
    var_14608 = -1;
    var_14616 = -1;
    var_14624 = 0;
    var_14632 = 13;
    var_14640 = -8654322880212382842;
    var_14648 = 56;
    pri = fun_3EE0(var_14640, var_14632, var_14624, var_14616, var_14608, var_14600, var_14592)
    var_14656 = 1;
    var_14664 = 1;
    var_14672 = -1;
    var_14680 = -1;
    var_14688 = 0;
    var_14696 = 8;
    var_14704 = 6256141132606737718;
    var_14712 = 56;
    pri = fun_3EE0(var_14704, var_14696, var_14688, var_14680, var_14672, var_14664, var_14656)
    var_14720 = 5;
    var_14728 = 8;
    pri = fun_0060(var_14720)
    var_14736 = 1;
    var_14744 = 1;
    var_14752 = -1;
    var_14760 = -1;
    var_14768 = 0;
    var_14776 = 13;
    var_14784 = 2312218129280921210;
    var_14792 = 56;
    pri = fun_3EE0(var_14784, var_14776, var_14768, var_14760, var_14752, var_14744, var_14736)
    var_14800 = 1;
    var_14808 = 1;
    var_14816 = -1;
    var_14824 = -1;
    var_14832 = 0;
    var_14840 = 13;
    var_14848 = -3674024162174587963;
    var_14856 = 56;
    pri = fun_3EE0(var_14848, var_14840, var_14832, var_14824, var_14816, var_14808, var_14800)
    var_14864 = 1;
    var_14872 = 8;
    pri = fun_0060(var_14864)
    var_14880 = 1;
    var_14888 = 1;
    var_14896 = -1;
    var_14904 = -1;
    var_14912 = 0;
    var_14920 = 13;
    var_14928 = 119772388837235790;
    var_14936 = 56;
    pri = fun_3EE0(var_14928, var_14920, var_14912, var_14904, var_14896, var_14888, var_14880)
    var_14944 = 1;
    var_14952 = 1;
    var_14960 = -1;
    var_14968 = -1;
    var_14976 = 0;
    var_14984 = 4;
    var_14992 = -484546589220304156;
    var_15000 = 56;
    pri = fun_3EE0(var_14992, var_14984, var_14976, var_14968, var_14960, var_14952, var_14944)
    var_15008 = 60;
    var_15016 = 8;
    pri = fun_0060(var_15008)
    var_15024 = 0;
    pri = fun_20E8()
    var_15032 = 1;
    var_15040 = 8;
    pri = fun_2180(var_15032)
    var_15048 = 0;
    pri = fun_2240()
    var_15056 = 1;
    var_15064 = 3;
    var_15072 = 0;
    var_15080 = 20;
    var_15088 = 1838443220896465507;
    var_15096 = 40;
    pri = fun_6218(var_15088, var_15080, var_15072, var_15064, var_15056)
    var_15104 = 60;
    var_15112 = 8;
    pri = fun_0060(var_15104)
    var_15120 = 1;
    var_15128 = 3;
    var_15136 = 0;
    var_15144 = 13;
    var_15152 = -3674018664616446908;
    var_15160 = 40;
    pri = fun_6218(var_15152, var_15144, var_15136, var_15128, var_15120)
    var_15168 = 1;
    var_15176 = 3;
    var_15184 = 0;
    var_15192 = 35;
    var_15200 = 2481285362137015056;
    var_15208 = 40;
    pri = fun_6218(var_15200, var_15192, var_15184, var_15176, var_15168)
    var_15216 = 1;
    var_15224 = 8;
    pri = fun_0060(var_15216)
    var_15232 = 1;
    var_15240 = 3;
    var_15248 = 0;
    var_15256 = 14;
    var_15264 = -484552086778445211;
    var_15272 = 40;
    pri = fun_6218(var_15264, var_15256, var_15248, var_15240, var_15232)
    var_15280 = 1;
    var_15288 = 3;
    var_15296 = 0;
    var_15304 = 13;
    var_15312 = -317160502977836181;
    var_15320 = 40;
    pri = fun_6218(var_15312, var_15304, var_15296, var_15288, var_15280)
    var_15328 = 2;
    var_15336 = 8;
    pri = fun_0060(var_15328)
    var_15344 = 1;
    var_15352 = 3;
    var_15360 = 0;
    var_15368 = 13;
    var_15376 = -8654315183630985365;
    var_15384 = 40;
    pri = fun_6218(var_15376, var_15368, var_15360, var_15352, var_15344)
    var_15392 = 1;
    var_15400 = 3;
    var_15408 = 0;
    var_15416 = 13;
    var_15424 = 2481297456764925377;
    var_15432 = 40;
    pri = fun_6218(var_15424, var_15416, var_15408, var_15400, var_15392)
    var_15440 = 5;
    var_15448 = 8;
    pri = fun_0060(var_15440)
    var_15456 = 1;
    var_15464 = 3;
    var_15472 = 0;
    var_15480 = 13;
    var_15488 = 59409724177917345;
    var_15496 = 40;
    pri = fun_6218(var_15488, var_15480, var_15472, var_15464, var_15456)
    var_15504 = 1;
    var_15512 = 3;
    var_15520 = 0;
    var_15528 = 14;
    var_15536 = 2206624492151242658;
    var_15544 = 40;
    pri = fun_6218(var_15536, var_15528, var_15520, var_15512, var_15504)
    var_15552 = 3;
    var_15560 = 8;
    pri = fun_0060(var_15552)
    var_15568 = 1;
    var_15576 = 3;
    var_15584 = 0;
    var_15592 = 13;
    var_15600 = 9204042830795947825;
    var_15608 = 40;
    pri = fun_6218(var_15600, var_15592, var_15584, var_15576, var_15568)
    var_15616 = 1;
    var_15624 = 3;
    var_15632 = 0;
    var_15640 = 13;
    var_15648 = -8654322880212382842;
    var_15656 = 40;
    pri = fun_6218(var_15648, var_15640, var_15632, var_15624, var_15616)
    var_15664 = 5;
    var_15672 = 8;
    pri = fun_0060(var_15664)
    var_15680 = 1;
    var_15688 = 3;
    var_15696 = 0;
    var_15704 = 13;
    var_15712 = 2312218129280921210;
    var_15720 = 40;
    pri = fun_6218(var_15712, var_15704, var_15696, var_15688, var_15680)
    var_15728 = 1;
    var_15736 = 3;
    var_15744 = 0;
    var_15752 = 13;
    var_15760 = -3674024162174587963;
    var_15768 = 40;
    pri = fun_6218(var_15760, var_15752, var_15744, var_15736, var_15728)
    var_15776 = 1;
    var_15784 = 8;
    pri = fun_0060(var_15776)
    var_15792 = 1;
    var_15800 = 3;
    var_15808 = 0;
    var_15816 = 13;
    var_15824 = 119772388837235790;
    var_15832 = 40;
    pri = fun_6218(var_15824, var_15816, var_15808, var_15800, var_15792)
    var_15840 = 18;
    var_15848 = 8;
    pri = fun_0060(var_15840)
    var_15856 = -34089364971008208;
    var_15864 = 8;
    pri = fun_0920(var_15856)
    var_15872 = 1;
    var_15880 = 1;
    OP_PUSH4_C 4640185359819341824, 4676325482390618112, 4671981037071368192, -34089364971008208
    var_15888 = 48;
    pri = fun_06A0(var_15880, var_15872, var_15864, var_15856, var_15848, var_15840)
    var_15896 = 1;
    var_15904 = 1;
    var_15912 = -5;
    pri = float(var_15912)
    var_15920 = pri;
    OP_PUSH3_C 4676144887605755904, 4672081917263216640, -8040610231773951744
    var_15928 = 48;
    pri = fun_06A0(var_15920, var_15912, var_15904, var_15896, var_15888, var_15880)
    var_15936 = 0;
    var_15944 = 4632078880490074931;
    var_15952 = 0;
    OP_PUSH5_C 4676181578308774789, -4575505576764721070, 4671988230626192916, 4676400283541045248, -4593722285413713838
    var_15960 = 4672131815849664184;
    var_15968 = 1;
    pri = EvCameraMove(var_15968, var_15960, var_15952, var_15944, var_15936, var_15928, var_15920, var_15912, var_15904, var_15896)
    var_15976 = 0;
    pri = fun_2270()
    var_15984 = 0;
    var_15992 = 4632078880490074931;
    var_16000 = 2;
    OP_PUSH5_C 4676185595649384776, -4575505576764721070, 4671963733507126067, 4676404300881655235, -4593722285413713838
    var_16008 = 4672107318730597335;
    var_16016 = 120;
    pri = EvCameraMove(var_16016, var_16008, var_16000, var_15992, var_15984, var_15976, var_15968, var_15960, var_15952, var_15944)
    var_16024 = 15;
    var_16032 = 8;
    pri = fun_0060(var_16024)
    var_16040 = 1838443220896465507;
    var_16048 = 8;
    pri = fun_0AF8(var_16040)
    var_16056 = 1838443220896465507;
    var_16064 = 8;
    pri = fun_0920(var_16056)
    var_16072 = 1;
    var_16080 = 0;
    var_16088 = 4636737291354636288;
    var_16096 = 0;
    pri = float(var_16096)
    var_16104 = pri;
    var_16112 = 0;
    var_16120 = 45391;
    pri = float(var_16120)
    var_16128 = pri;
    var_16136 = 22890;
    pri = float(var_16136)
    var_16144 = pri;
    OP_PUSH2_C 4611686018427387904, 1838443220896465507
    var_16152 = 72;
    pri = fun_07A8(var_16144, var_16136, var_16128, var_16120, var_16112, var_16104, var_16096, var_16088, var_16080)
    var_16160 = 1;
    var_16168 = 1;
    var_16176 = -1;
    var_16184 = -1;
    var_16192 = 0;
    var_16200 = 11;
    var_16208 = -3674018664616446908;
    var_16216 = 56;
    pri = fun_3EE0(var_16208, var_16200, var_16192, var_16184, var_16176, var_16168, var_16160)
    var_16224 = 1;
    var_16232 = 1;
    var_16240 = -1;
    var_16248 = -1;
    var_16256 = 0;
    var_16264 = 7;
    var_16272 = 2481285362137015056;
    var_16280 = 56;
    pri = fun_3EE0(var_16272, var_16264, var_16256, var_16248, var_16240, var_16232, var_16224)
    var_16288 = 1;
    var_16296 = 1;
    var_16304 = -1;
    var_16312 = -1;
    var_16320 = 0;
    var_16328 = 2;
    var_16336 = -317160502977836181;
    var_16344 = 56;
    pri = fun_3EE0(var_16336, var_16328, var_16320, var_16312, var_16304, var_16296, var_16288)
    var_16352 = 1;
    var_16360 = 1;
    var_16368 = -1;
    var_16376 = -1;
    var_16384 = 0;
    var_16392 = 7;
    var_16400 = -8654315183630985365;
    var_16408 = 56;
    pri = fun_3EE0(var_16400, var_16392, var_16384, var_16376, var_16368, var_16360, var_16352)
    var_16416 = -484552086778445211;
    var_16424 = 8;
    pri = fun_0920(var_16416)
    var_16432 = 2206624492151242658;
    var_16440 = 8;
    pri = fun_0920(var_16432)
    var_16448 = 2481297456764925377;
    var_16456 = 8;
    pri = fun_0920(var_16448)
    var_16464 = 0;
    var_16472 = 0;
    var_16480 = 0;
    var_16488 = 5;
    pri = float(var_16488)
    var_16496 = pri;
    var_16504 = -484552086778445211;
    var_16512 = 40;
    pri = fun_0878(var_16504, var_16496, var_16488, var_16480, var_16472)
    var_16520 = 0;
    var_16528 = 0;
    var_16536 = 0;
    var_16544 = 5;
    pri = float(var_16544)
    var_16552 = pri;
    var_16560 = 2206624492151242658;
    var_16568 = 40;
    pri = fun_0878(var_16560, var_16552, var_16544, var_16536, var_16528)
    var_16576 = 0;
    var_16584 = 0;
    var_16592 = 0;
    var_16600 = 5;
    pri = float(var_16600)
    var_16608 = pri;
    var_16616 = 2481297456764925377;
    var_16624 = 40;
    pri = fun_0878(var_16616, var_16608, var_16600, var_16592, var_16584)
    var_16632 = -34089364971008208;
    var_16640 = 8;
    pri = fun_0920(var_16632)
    var_16648 = 0;
    var_16656 = 0;
    var_16664 = 0;
    var_16672 = 3;
    pri = float(var_16672)
    var_16680 = pri;
    var_16688 = -34089364971008208;
    var_16696 = 40;
    pri = fun_0878(var_16688, var_16680, var_16672, var_16664, var_16656)
    var_16704 = -34089364971008208;
    var_16712 = 8;
    pri = fun_0920(var_16704)
    var_16720 = 1;
    var_16728 = 1;
    var_16736 = -1;
    var_16744 = -1;
    var_16752 = 0;
    var_16760 = 8;
    var_16768 = 59409724177917345;
    var_16776 = 56;
    pri = fun_3EE0(var_16768, var_16760, var_16752, var_16744, var_16736, var_16728, var_16720)
    var_16784 = 1;
    var_16792 = 1;
    var_16800 = -1;
    var_16808 = -1;
    var_16816 = 0;
    var_16824 = 7;
    var_16832 = 9204042830795947825;
    var_16840 = 56;
    pri = fun_3EE0(var_16832, var_16824, var_16816, var_16808, var_16800, var_16792, var_16784)
    var_16848 = 1;
    var_16856 = 1;
    var_16864 = -1;
    var_16872 = -1;
    var_16880 = 0;
    var_16888 = 7;
    var_16896 = -8654322880212382842;
    var_16904 = 56;
    pri = fun_3EE0(var_16896, var_16888, var_16880, var_16872, var_16864, var_16856, var_16848)
    var_16912 = 1;
    var_16920 = 1;
    var_16928 = -1;
    var_16936 = -1;
    var_16944 = 0;
    var_16952 = 4;
    var_16960 = 2312218129280921210;
    var_16968 = 56;
    pri = fun_3EE0(var_16960, var_16952, var_16944, var_16936, var_16928, var_16920, var_16912)
    var_16976 = 1;
    var_16984 = 1;
    var_16992 = -1;
    var_17000 = -1;
    var_17008 = 0;
    var_17016 = 8;
    var_17024 = -3674024162174587963;
    var_17032 = 56;
    pri = fun_3EE0(var_17024, var_17016, var_17008, var_17000, var_16992, var_16984, var_16976)
    var_17040 = 1;
    var_17048 = 1;
    var_17056 = -1;
    var_17064 = -1;
    var_17072 = 0;
    var_17080 = 8;
    var_17088 = 119772388837235790;
    var_17096 = 56;
    pri = fun_3EE0(var_17088, var_17080, var_17072, var_17064, var_17056, var_17048, var_17040)
    var_17104 = 1;
    var_17112 = 0;
    var_17120 = 0;
    var_17128 = 90;
    OP_PUSH2_C 4611686018427387904, -34089364971008208
    var_17136 = 48;
    pri = fun_0820(var_17128, var_17120, var_17112, var_17104, var_17096, var_17088)
    var_17144 = 0;
    var_17152 = 0;
    var_17160 = 0;
    var_17168 = -5;
    pri = float(var_17168)
    var_17176 = pri;
    var_17184 = 8802641224559852288;
    var_17192 = 40;
    pri = fun_0878(var_17184, var_17176, var_17168, var_17160, var_17152)
    var_17200 = 0;
    var_17208 = 0;
    var_17216 = 0;
    var_17224 = -5;
    pri = float(var_17224)
    var_17232 = pri;
    var_17240 = -8040610231773951744;
    var_17248 = 40;
    pri = fun_0878(var_17240, var_17232, var_17224, var_17216, var_17208)
    var_17256 = 8802641224559852288;
    var_17264 = 8;
    pri = fun_0920(var_17256)
    var_17272 = -484552086778445211;
    var_17280 = 8;
    pri = fun_0920(var_17272)
    var_17288 = 1;
    var_17296 = 1;
    var_17304 = -1;
    var_17312 = -1;
    var_17320 = 0;
    var_17328 = 7;
    var_17336 = -484552086778445211;
    var_17344 = 56;
    pri = fun_3EE0(var_17336, var_17328, var_17320, var_17312, var_17304, var_17296, var_17288)
    var_17352 = 3;
    var_17360 = 8;
    pri = fun_0060(var_17352)
    var_17368 = 2206624492151242658;
    var_17376 = 8;
    pri = fun_0920(var_17368)
    var_17384 = 2481297456764925377;
    var_17392 = 8;
    pri = fun_0920(var_17384)
    var_17400 = 1;
    var_17408 = 1;
    var_17416 = -1;
    var_17424 = -1;
    var_17432 = 0;
    var_17440 = 8;
    var_17448 = 2206624492151242658;
    var_17456 = 56;
    pri = fun_3EE0(var_17448, var_17440, var_17432, var_17424, var_17416, var_17408, var_17400)
    var_17464 = 1;
    var_17472 = 1;
    var_17480 = -1;
    var_17488 = -1;
    var_17496 = 0;
    var_17504 = 7;
    var_17512 = 2481297456764925377;
    var_17520 = 56;
    pri = fun_3EE0(var_17512, var_17504, var_17496, var_17488, var_17480, var_17472, var_17464)
    var_17528 = 0;
    pri = fun_2270()
    var_17536 = 0;
    var_17544 = 4632078880490074931;
    var_17552 = 3;
    OP_PUSH5_C 4676239181722953974, 4654034984204668764, 4671998920627993969, 4676397532013196739, 4640506944980233748
    var_17560 = 4672102838220714148;
    var_17568 = 90;
    pri = EvCameraMove(var_17568, var_17560, var_17552, var_17544, var_17536, var_17528, var_17520, var_17512, var_17504, var_17496)
    var_17576 = 15;
    var_17584 = 8;
    pri = fun_0060(var_17576)
    var_17592 = -8040610231773951744;
    var_17600 = 8;
    pri = fun_0920(var_17592)
    var_17608 = 1;
    var_17616 = 0;
    var_17624 = 0;
    var_17632 = 20;
    OP_PUSH2_C 4607182418800017408, -8040610231773951744
    var_17640 = 48;
    pri = fun_0820(var_17632, var_17624, var_17616, var_17608, var_17600, var_17592)
    var_17648 = 15;
    var_17656 = 8;
    pri = fun_0060(var_17648)
    var_17664 = 8802641224559852288;
    var_17672 = 8;
    pri = fun_0920(var_17664)
    var_17680 = 1;
    var_17688 = 0;
    var_17696 = 0;
    var_17704 = 20;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_17712 = 48;
    pri = fun_0820(var_17704, var_17696, var_17688, var_17680, var_17672, var_17664)
    var_17720 = 30;
    var_17728 = 8;
    pri = fun_0060(var_17720)
    var_17736 = 1;
    var_17744 = 0;
    var_17752 = 31240;
    var_17760 = 30;
    var_17768 = 32;
    pri = fun_02E0(var_17760, var_17752, var_17744, var_17736)
    var_17776 = 0;
    pri = fun_0350()
    var_17784 = 2;
    pri = SetCascadeShadowMapLevel(var_17784)
    var_17792 = 0;
    var_17800 = 8802641224559852288;
    var_17808 = 16;
    pri = fun_0730(var_17800, var_17792)
    var_17816 = 0;
    var_17824 = -34089364971008208;
    var_17832 = 16;
    pri = fun_0730(var_17824, var_17816)
    var_17840 = 0;
    var_17848 = 1838443220896465507;
    var_17856 = 16;
    pri = fun_0730(var_17848, var_17840)
    var_17864 = 0;
    var_17872 = -3674018664616446908;
    var_17880 = 16;
    pri = fun_0730(var_17872, var_17864)
    var_17888 = 0;
    var_17896 = -3674024162174587963;
    var_17904 = 16;
    pri = fun_0730(var_17896, var_17888)
    var_17912 = 0;
    var_17920 = 2312218129280921210;
    var_17928 = 16;
    pri = fun_0730(var_17920, var_17912)
    var_17936 = 0;
    var_17944 = -8654315183630985365;
    var_17952 = 16;
    pri = fun_0730(var_17944, var_17936)
    var_17960 = 0;
    var_17968 = -8654322880212382842;
    var_17976 = 16;
    pri = fun_0730(var_17968, var_17960)
    var_17984 = 0;
    var_17992 = 9204042830795947825;
    var_18000 = 16;
    pri = fun_0730(var_17992, var_17984)
    var_18008 = 0;
    var_18016 = 440998338954051805;
    var_18024 = 16;
    pri = fun_0730(var_18016, var_18008)
    var_18032 = 0;
    var_18040 = 2206624492151242658;
    var_18048 = 16;
    pri = fun_0730(var_18040, var_18032)
    var_18056 = 0;
    var_18064 = 440986244326141484;
    var_18072 = 16;
    pri = fun_0730(var_18064, var_18056)
    var_18080 = 0;
    var_18088 = -4504228236179943877;
    var_18096 = 16;
    pri = fun_0730(var_18088, var_18080)
    var_18104 = 0;
    var_18112 = -317160502977836181;
    var_18120 = 16;
    pri = fun_0730(var_18112, var_18104)
    var_18128 = 0;
    var_18136 = -484552086778445211;
    var_18144 = 16;
    pri = fun_0730(var_18136, var_18128)
    var_18152 = 0;
    var_18160 = -484546589220304156;
    var_18168 = 16;
    pri = fun_0730(var_18160, var_18152)
    var_18176 = 0;
    var_18184 = 6256141132606737718;
    var_18192 = 16;
    pri = fun_0730(var_18184, var_18176)
    var_18200 = 0;
    var_18208 = 59409724177917345;
    var_18216 = 16;
    pri = fun_0730(var_18208, var_18200)
    var_18224 = 0;
    var_18232 = 119772388837235790;
    var_18240 = 16;
    pri = fun_0730(var_18232, var_18224)
    var_18248 = 0;
    var_18256 = 2481285362137015056;
    var_18264 = 16;
    pri = fun_0730(var_18256, var_18248)
    var_18272 = 0;
    var_18280 = 2481297456764925377;
    var_18288 = 16;
    pri = fun_0730(var_18280, var_18272)
    var_18296 = 33528;
    pri = SoundPostEvent(var_18296)
    var_18304 = 1;
    var_18312 = 8;
    pri = fun_0060(var_18304)
    var_18320 = 8802641224559852288;
    var_18328 = 8;
    pri = fun_0920(var_18320)
    var_18336 = 1838443220896465507;
    var_18344 = 8;
    pri = fun_0920(var_18336)
    var_18352 = -34089364971008208;
    var_18360 = 8;
    pri = fun_0920(var_18352)
    var_18368 = -8040610231773951744;
    var_18376 = 8;
    pri = fun_0920(var_18368)
    var_18384 = 15;
    var_18392 = 8;
    pri = fun_0060(var_18384)
    var_18400 = 3;
    var_18408 = 1;
    pri = EvCameraEnd(var_18408, var_18400)
    var_18416 = 0;
    var_18424 = 8802641224559852288;
    var_18432 = 16;
    pri = fun_0730(var_18424, var_18416)
    var_18440 = 0;
    var_18448 = -34089364971008208;
    var_18456 = 16;
    pri = fun_0730(var_18448, var_18440)
    var_18464 = 0;
    var_18472 = 1838443220896465507;
    var_18480 = 16;
    pri = fun_0730(var_18472, var_18464)
    var_18488 = 119772388837235790;
    var_18496 = 8;
    pri = fun_0920(var_18488)
    var_18504 = 59409724177917345;
    var_18512 = 8;
    pri = fun_0920(var_18504)
    var_18520 = -3674024162174587963;
    var_18528 = 8;
    pri = fun_0920(var_18520)
    var_18536 = 6256141132606737718;
    var_18544 = 8;
    pri = fun_0920(var_18536)
    var_18552 = -3674018664616446908;
    var_18560 = 8;
    pri = fun_0920(var_18552)
    var_18568 = 2481285362137015056;
    var_18576 = 8;
    pri = fun_0920(var_18568)
    var_18584 = 2481297456764925377;
    var_18592 = 8;
    pri = fun_0920(var_18584)
    pri = 0;
    return pri;
}
// fun_120F0
fun_120F0() {
    pri = 0;
    return pri;
}
// fun_12108
fun_12108() {
    var_8 = 1838443220896465507;
    var_16 = 8;
    pri = fun_0648(var_8)
    var_24 = -3674018664616446908;
    var_32 = 8;
    pri = fun_0648(var_24)
    var_40 = -3674024162174587963;
    var_48 = 8;
    pri = fun_0648(var_40)
    var_56 = 2312218129280921210;
    var_64 = 8;
    pri = fun_0648(var_56)
    var_72 = -8654315183630985365;
    var_80 = 8;
    pri = fun_0648(var_72)
    var_88 = -8654322880212382842;
    var_96 = 8;
    pri = fun_0648(var_88)
    var_104 = 9204042830795947825;
    var_112 = 8;
    pri = fun_0648(var_104)
    var_120 = 440998338954051805;
    var_128 = 8;
    pri = fun_0648(var_120)
    var_136 = 2206624492151242658;
    var_144 = 8;
    pri = fun_0648(var_136)
    var_152 = 440986244326141484;
    var_160 = 8;
    pri = fun_0648(var_152)
    var_168 = -4504228236179943877;
    var_176 = 8;
    pri = fun_0648(var_168)
    var_184 = -317160502977836181;
    var_192 = 8;
    pri = fun_0648(var_184)
    var_200 = -484552086778445211;
    var_208 = 8;
    pri = fun_0648(var_200)
    var_216 = -484546589220304156;
    var_224 = 8;
    pri = fun_0648(var_216)
    var_232 = 6256141132606737718;
    var_240 = 8;
    pri = fun_0648(var_232)
    var_248 = 59409724177917345;
    var_256 = 8;
    pri = fun_0648(var_248)
    var_264 = 119772388837235790;
    var_272 = 8;
    pri = fun_0648(var_264)
    var_280 = 2481285362137015056;
    var_288 = 8;
    pri = fun_0648(var_280)
    var_296 = 2481297456764925377;
    var_304 = 8;
    pri = fun_0648(var_296)
    var_312 = -8040610231773951744;
    var_320 = 8;
    pri = fun_0648(var_312)
    var_328 = -34089364971008208;
    var_336 = 8;
    pri = fun_0648(var_328)
    var_344 = -3674018664616446908;
    pri = VanishFlagSet(var_344)
    var_352 = -3674024162174587963;
    pri = VanishFlagSet(var_352)
    var_360 = 2312218129280921210;
    pri = VanishFlagSet(var_360)
    var_368 = -8654315183630985365;
    pri = VanishFlagSet(var_368)
    var_376 = -8654322880212382842;
    pri = VanishFlagSet(var_376)
    var_384 = 9204042830795947825;
    pri = VanishFlagSet(var_384)
    var_392 = 440998338954051805;
    pri = VanishFlagSet(var_392)
    var_400 = 2206624492151242658;
    pri = VanishFlagSet(var_400)
    var_408 = 440986244326141484;
    pri = VanishFlagSet(var_408)
    var_416 = -4504228236179943877;
    pri = VanishFlagSet(var_416)
    var_424 = -317160502977836181;
    pri = VanishFlagSet(var_424)
    var_432 = -484552086778445211;
    pri = VanishFlagSet(var_432)
    var_440 = -484546589220304156;
    pri = VanishFlagSet(var_440)
    var_448 = 6256141132606737718;
    pri = VanishFlagSet(var_448)
    var_456 = 59409724177917345;
    pri = VanishFlagSet(var_456)
    var_464 = 119772388837235790;
    pri = VanishFlagSet(var_464)
    var_472 = 2481285362137015056;
    pri = VanishFlagSet(var_472)
    var_480 = 2481297456764925377;
    pri = VanishFlagSet(var_480)
    var_488 = -8040610231773951744;
    pri = VanishFlagSet(var_488)
    var_496 = -34089364971008208;
    pri = VanishFlagSet(var_496)
    var_504 = 70;
    var_512 = 8;
    pri = fun_86E0(var_504)
    var_520 = 10;
    var_528 = -3710971335921605691;
    pri = WorkSet(var_528, var_520)
    var_536 = -2409953949732425464;
    pri = VanishFlagReset(var_536)
    var_544 = -1655053127185566619;
    pri = VanishFlagReset(var_544)
    pri = 0;
    return pri;
}
// fun_12828
fun_12828() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 0;
    var_48 = 52742;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 23621;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 115789295882128190, -7332432130569991359, -7753688782735673663
    var_80 = 80;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_128F0
fun_128F0() {
    var_8 = 0;
    pri = fun_8878()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8A48()
    var_24 = 0;
    pri = fun_8AA0()
    var_32 = 0;
    pri = fun_8E28()
    var_40 = 0;
    pri = fun_8E58()
    var_48 = 0;
    pri = fun_120F0()
    var_56 = 0;
    pri = fun_12108()
    var_64 = 0;
    pri = fun_12828()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_129F8
fun_129F8() {
    var_8 = 0;
    pri = fun_8AA0()
    var_16 = 0;
    pri = fun_12108()
    pri = 0;
    return pri;
}
