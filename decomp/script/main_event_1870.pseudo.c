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
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00B8
fun_00B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00F8
    pri = 0;
    return pri;
// lab_00F8
    OP_ZERO_P_S -8
    OP_JUMP lab_0120
// lab_0120
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0118
// lab_0178
    pri = 0;
    return pri;
// lab_0118
    OP_INC_P_S -8
}
// fun_0190
fun_0190() {
    pri = ABKeyWait_()
    return pri;
}
// fun_01B8
fun_01B8() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01E8
// lab_01E8
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02E8
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0268
    pri = 0;
    return pri;
// lab_02E8
    pri = 0;
    return pri;
// lab_0268
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
    OP_JUMP lab_01E0
// lab_01E0
    OP_INC_P_S -8
}
// fun_0300
fun_0300() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0360
fun_0360() {
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
// fun_03D0
fun_03D0() {
    OP_JUMP lab_03E8
// lab_03E8
    pri = FadeWait_()
    OP_JZER lab_0420
    pri = 0;
    return pri;
// lab_0420
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03E8
    pri = 0;
    return pri;
}
// fun_0460
fun_0460() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0488
fun_0488() {
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
// fun_0528
fun_0528() {
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_0558
fun_0558() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_05A0
// lab_05A0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_05E0
    OP_JUMP lab_0650
// lab_05E0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0620
    OP_JUMP lab_0650
// lab_0620
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A0
// lab_0650
    pri = 0;
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07E0
fun_07E0() {
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
    pri = fun_1438(var_8)
    OP_JZER lab_0978
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1468(var_24)
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
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B60
// lab_0B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1438(var_8)
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
    pri = fun_0E00(var_8)
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
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D20
// lab_0D20
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D78
    pri = 0;
    return pri;
// lab_0D78
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DB8
    pri = 0;
    return pri;
// lab_0DB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D20
    pri = 0;
    return pri;
}
// fun_0E00
fun_0E00() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E38
fun_0E38() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E88
    pri = 0;
    return pri;
// lab_0E88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1438(var_8)
    OP_JZER lab_0FB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EE0
    OP_ZERO_P_S 64
// lab_0FB8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF0
    OP_CONST_S 64, 1
// lab_0FF0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1028
    OP_CONST_S 72, 1
// lab_1028
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
// lab_0EE0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F08
    OP_ZERO_P_S 72
// lab_0F08
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
    OP_JUMP lab_10C8
// lab_10C8
    pri = 0;
    return pri;
}
// fun_10D8
fun_10D8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1248
fun_1248() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1288
fun_1288() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1300
fun_1300() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1288(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1300(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_13E0
fun_13E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1340(var_24)
    pri = 0;
    return pri;
}
// fun_1438
fun_1438() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1468
fun_1468() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1498
fun_1498() {
    OP_JUMP lab_14B0
// lab_14B0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1540
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1530
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    pri = 0;
    return pri;
// lab_1540
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_15C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    pri = 0;
    return pri;
// lab_15D0
    pri = 0;
    return pri;
// lab_15C0
    OP_JUMP lab_15E0
// lab_15E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14B0
    pri = 0;
    return pri;
// lab_1530
    OP_JUMP lab_15E0
}
// fun_1620
fun_1620() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1498(var_40)
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_16E0
fun_16E0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1708
fun_1708() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1738
fun_1738() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
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
// switch_1D88
        case default:
        {
// switch_1D88_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DD0
// lab_1DD0
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
            OP_JNZ lab_1E78
            var_88 = 0;
            pri = fun_2148()
// lab_1E78
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D88_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1970
                case default:
                {
// switch_1970_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19E8
// lab_19E8
                    OP_JUMP lab_1DD0
                }
                case 0x0:
                {
// switch_1970_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19E8
                }
                case 0x1:
                {
// switch_1970_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19E8
                }
                case 0x2:
                {
// switch_1970_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19E8
                }
                case 0x3:
                {
// switch_1970_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19E8
                }
                case 0x4:
                {
// switch_1970_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19E8
                }
                case 0x5:
                {
// switch_1970_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19E8
                }
            }
        }
        case 0x65:
        {
// switch_1D88_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B28
                case default:
                {
// switch_1B28_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA0
// lab_1BA0
                    OP_JUMP lab_1DD0
                }
                case 0x0:
                {
// switch_1B28_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BA0
                }
                case 0x1:
                {
// switch_1B28_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BA0
                }
                case 0x2:
                {
// switch_1B28_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BA0
                }
                case 0x3:
                {
// switch_1B28_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA0
                }
                case 0x4:
                {
// switch_1B28_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BA0
                }
                case 0x5:
                {
// switch_1B28_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BA0
                }
            }
        }
        case 0x66:
        {
// switch_1D88_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1CE0
                case default:
                {
// switch_1CE0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D58
// lab_1D58
                    OP_JUMP lab_1DD0
                }
                case 0x0:
                {
// switch_1CE0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D58
                }
                case 0x1:
                {
// switch_1CE0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D58
                }
                case 0x2:
                {
// switch_1CE0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D58
                }
                case 0x3:
                {
// switch_1CE0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D58
                }
                case 0x4:
                {
// switch_1CE0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D58
                }
                case 0x5:
                {
// switch_1CE0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D58
                }
            }
        }
    }
}
// fun_1E90
fun_1E90() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1770(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EF8
fun_1EF8() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AA0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FA0
    pri = 1;
    return pri;
// lab_1FA0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FE8
fun_1FE8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2038
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1EF8(var_8)
    arg_2 = pri;
// lab_2038
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1770(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2098
fun_2098() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1E90(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2098(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2148
fun_2148() {
    OP_JUMP lab_2160
// lab_2160
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21A0
    pri = 0;
    return pri;
// lab_21A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2160
    pri = 0;
    return pri;
}
// fun_21E0
fun_21E0() {
    var_8 = 0;
    pri = fun_2148()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2290
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_2290
    pri = 0;
    return pri;
}
// fun_22A0
fun_22A0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_22D0
fun_22D0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2300
// lab_2300
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2340
    OP_JUMP lab_2370
// lab_2340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2300
// lab_2370
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23B8
fun_23B8() {
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
// fun_2428
fun_2428() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2460
fun_2460() {
    OP_JUMP lab_2478
// lab_2478
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_24C0
    OP_JUMP lab_24F0
    OP_JUMP lab_24E0
// lab_24C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_24F0
    pri = 0;
    return pri;
// lab_24E0
    OP_JUMP lab_2478
}
// fun_2500
fun_2500() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2530
fun_2530() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2580
fun_2580() {
    OP_JUMP lab_2598
// lab_2598
    pri = EvCameraMoveWait_()
    OP_JZER lab_25D0
    pri = 0;
    return pri;
// lab_25D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2598
    pri = 0;
    return pri;
}
// fun_2610
fun_2610() {
    pri = arg_6;
    OP_JNZ lab_2648
    var_8 = 0;
    pri = fun_10D8()
// lab_2648
    pri = arg_1;
    switch (pri) {
// switch_3BB0
        case default:
        {
// switch_3BB0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3F00
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3F00
            pri = 1;
            OP_JUMP lab_3F08
// lab_3F00
            pri = 0;
// lab_3F08
            OP_JZER lab_4060
            var_16 = 8368;
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
            OP_JUMP lab_40C0
// lab_4060
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
            pri = fun_01B8(var_16, var_8, var_0)
// lab_40C0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4120
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4180
// lab_4120
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4180
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4180
            pri = arg_2;
            OP_JZER lab_41C0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_41C0
            var_8 = 0;
            pri = fun_1118()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3BB0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x1:
        {
// switch_3BB0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x2:
        {
// switch_3BB0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x3:
        {
// switch_3BB0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x4:
        {
// switch_3BB0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x5:
        {
// switch_3BB0_case_0x5
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x6:
        {
// switch_3BB0_case_0x6
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x7:
        {
// switch_3BB0_case_0x7
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x8:
        {
// switch_3BB0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x9:
        {
// switch_3BB0_case_0x9
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0xa:
        {
// switch_3BB0_case_0xa
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0xb:
        {
// switch_3BB0_case_0xb
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0xc:
        {
// switch_3BB0_case_0xc
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0xd:
        {
// switch_3BB0_case_0xd
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0xe:
        {
// switch_3BB0_case_0xe
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0xf:
        {
// switch_3BB0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x10:
        {
// switch_3BB0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x11:
        {
// switch_3BB0_case_0x11
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x12:
        {
// switch_3BB0_case_0x12
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x13:
        {
// switch_3BB0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x14:
        {
// switch_3BB0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x15:
        {
// switch_3BB0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x16:
        {
// switch_3BB0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x17:
        {
// switch_3BB0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x18:
        {
// switch_3BB0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x19:
        {
// switch_3BB0_case_0x19
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x1a:
        {
// switch_3BB0_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0E38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x1b:
        {
// switch_3BB0_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0E38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x1c:
        {
// switch_3BB0_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0E38(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x1d:
        {
// switch_3BB0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x1e:
        {
// switch_3BB0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x1f:
        {
// switch_3BB0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x20:
        {
// switch_3BB0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x21:
        {
// switch_3BB0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x22:
        {
// switch_3BB0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x23:
        {
// switch_3BB0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x24:
        {
// switch_3BB0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x25:
        {
// switch_3BB0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x26:
        {
// switch_3BB0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x27:
        {
// switch_3BB0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x28:
        {
// switch_3BB0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
        case 0x29:
        {
// switch_3BB0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BB0_case_default
        }
    }
}
// fun_41F0
fun_41F0() {
    pri = arg_5;
    OP_JNZ lab_4228
    var_8 = 0;
    pri = fun_10D8()
// lab_4228
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4278
    OP_CONST_S -8, -1
// lab_4278
    pri = arg_1;
    switch (pri) {
// switch_5D30
        case default:
        {
// switch_5D30_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_61D8
            var_520 = 28232;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AA0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_61D8
            pri = 1;
            OP_JUMP lab_61E0
// lab_61D8
            pri = 0;
// lab_61E0
            OP_JZER lab_6230
            var_8 = 64;
            var_16 = 28328;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_6488
// lab_6230
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6298
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6298
            pri = 1;
            OP_JUMP lab_62A0
// lab_6298
            pri = 0;
// lab_62A0
            OP_JZER lab_6428
            var_16 = 28504;
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
            OP_JUMP lab_6488
// lab_6428
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
            pri = fun_01B8(var_16, var_8, var_0)
// lab_6488
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_64F8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_64F8
            var_8 = 0;
            pri = fun_1118()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5D30_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x1:
        {
// switch_5D30_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x2:
        {
// switch_5D30_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x3:
        {
// switch_5D30_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x4:
        {
// switch_5D30_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x5:
        {
// switch_5D30_case_0x5
            var_8 = 2;
            var_16 = 18488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E00(var_40)
            OP_JUMP switch_5D30_case_default
        }
        case 0x6:
        {
// switch_5D30_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x7:
        {
// switch_5D30_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x8:
        {
// switch_5D30_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x9:
        {
// switch_5D30_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0xa:
        {
// switch_5D30_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0xb:
        {
// switch_5D30_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0xc:
        {
// switch_5D30_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0xd:
        {
// switch_5D30_case_0xd
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0xe:
        {
// switch_5D30_case_0xe
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0xf:
        {
// switch_5D30_case_0xf
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x10:
        {
// switch_5D30_case_0x10
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x11:
        {
// switch_5D30_case_0x11
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x12:
        {
// switch_5D30_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x13:
        {
// switch_5D30_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x14:
        {
// switch_5D30_case_0x14
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x15:
        {
// switch_5D30_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x16:
        {
// switch_5D30_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x17:
        {
// switch_5D30_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x18:
        {
// switch_5D30_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x19:
        {
// switch_5D30_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x1a:
        {
// switch_5D30_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x1b:
        {
// switch_5D30_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x1c:
        {
// switch_5D30_case_0x1c
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x1d:
        {
// switch_5D30_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x1e:
        {
// switch_5D30_case_0x1e
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x1f:
        {
// switch_5D30_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x20:
        {
// switch_5D30_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x21:
        {
// switch_5D30_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x22:
        {
// switch_5D30_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x23:
        {
// switch_5D30_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x24:
        {
// switch_5D30_case_0x24
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x25:
        {
// switch_5D30_case_0x25
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x26:
        {
// switch_5D30_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x27:
        {
// switch_5D30_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x28:
        {
// switch_5D30_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x29:
        {
// switch_5D30_case_0x29
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x2a:
        {
// switch_5D30_case_0x2a
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x2b:
        {
// switch_5D30_case_0x2b
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x2c:
        {
// switch_5D30_case_0x2c
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x2d:
        {
// switch_5D30_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x2e:
        {
// switch_5D30_case_0x2e
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x2f:
        {
// switch_5D30_case_0x2f
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x30:
        {
// switch_5D30_case_0x30
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x31:
        {
// switch_5D30_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x32:
        {
// switch_5D30_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x33:
        {
// switch_5D30_case_0x33
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x34:
        {
// switch_5D30_case_0x34
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x35:
        {
// switch_5D30_case_0x35
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x36:
        {
// switch_5D30_case_0x36
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x37:
        {
// switch_5D30_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x38:
        {
// switch_5D30_case_0x38
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
            pri = fun_0E38(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5D30_case_default
        }
        case 0x39:
        {
// switch_5D30_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x3a:
        {
// switch_5D30_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x3b:
        {
// switch_5D30_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x3c:
        {
// switch_5D30_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27808;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x3d:
        {
// switch_5D30_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27984;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
        case 0x3e:
        {
// switch_5D30_case_0x3e
            var_8 = 4;
            var_16 = 28128;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            OP_JUMP switch_5D30_case_default
        }
    }
}
// fun_6528
fun_6528() {
    pri = arg_4;
    OP_JNZ lab_6560
    var_8 = 0;
    pri = fun_10D8()
// lab_6560
    pri = arg_1;
    switch (pri) {
// switch_7938
        case default:
        {
// switch_7938_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29200;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1438(var_264)
            OP_JZER lab_7F00
            pri = arg_3;
            switch (pri) {
// switch_7EA8
                case default:
                {
// switch_7EA8_case_default
                    OP_JUMP lab_81B8
// lab_81B8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8228
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8228
                    var_8 = 0;
                    pri = fun_1118()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7EA8_case_0x1
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_7EA8_case_default
                }
                case 0x2:
                {
// switch_7EA8_case_0x2
                    var_8 = 32;
                    var_16 = 29456;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_7EA8_case_default
                }
                case 0x3:
                {
// switch_7EA8_case_0x3
                    var_8 = 32;
                    var_16 = 29256;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_7EA8_case_default
                }
            }
// lab_7F00
            pri = arg_1;
            OP_JZER lab_7F50
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7F50
            pri = 0;
            OP_JUMP lab_7F58
// lab_7F50
            pri = 1;
// lab_7F58
            OP_JZER lab_7FC0
            var_8 = 29552;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AA0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7FC0
            pri = 1;
            OP_JUMP lab_7FC8
// lab_7FC0
            pri = 0;
// lab_7FC8
            OP_JZER lab_8018
            var_8 = 32;
            var_16 = 29648;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_81B8
// lab_8018
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8080
            var_8 = 32;
            var_16 = 29808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_81B8
// lab_8080
            var_16 = 29928;
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
// switch_7938_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x1:
        {
// switch_7938_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x2:
        {
// switch_7938_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x3:
        {
// switch_7938_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x4:
        {
// switch_7938_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x5:
        {
// switch_7938_case_0x5
            var_8 = 1;
            var_16 = 28680;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E00(var_40)
            OP_JUMP switch_7938_case_default
        }
        case 0x6:
        {
// switch_7938_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x7:
        {
// switch_7938_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x8:
        {
// switch_7938_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x9:
        {
// switch_7938_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0xa:
        {
// switch_7938_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0xb:
        {
// switch_7938_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0xc:
        {
// switch_7938_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0xd:
        {
// switch_7938_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0xe:
        {
// switch_7938_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0xf:
        {
// switch_7938_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x10:
        {
// switch_7938_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x11:
        {
// switch_7938_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x12:
        {
// switch_7938_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x13:
        {
// switch_7938_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x14:
        {
// switch_7938_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x15:
        {
// switch_7938_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x16:
        {
// switch_7938_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x17:
        {
// switch_7938_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x18:
        {
// switch_7938_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x19:
        {
// switch_7938_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x1a:
        {
// switch_7938_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x1b:
        {
// switch_7938_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x1c:
        {
// switch_7938_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x1d:
        {
// switch_7938_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x1e:
        {
// switch_7938_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x1f:
        {
// switch_7938_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x20:
        {
// switch_7938_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x21:
        {
// switch_7938_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x22:
        {
// switch_7938_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x23:
        {
// switch_7938_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x24:
        {
// switch_7938_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x25:
        {
// switch_7938_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x26:
        {
// switch_7938_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x27:
        {
// switch_7938_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x28:
        {
// switch_7938_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x29:
        {
// switch_7938_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x2a:
        {
// switch_7938_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x2b:
        {
// switch_7938_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x2c:
        {
// switch_7938_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x2d:
        {
// switch_7938_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x2e:
        {
// switch_7938_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x2f:
        {
// switch_7938_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x30:
        {
// switch_7938_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x31:
        {
// switch_7938_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x32:
        {
// switch_7938_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x33:
        {
// switch_7938_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x34:
        {
// switch_7938_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x35:
        {
// switch_7938_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x36:
        {
// switch_7938_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x37:
        {
// switch_7938_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x38:
        {
// switch_7938_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x39:
        {
// switch_7938_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x3a:
        {
// switch_7938_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x3b:
        {
// switch_7938_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x3c:
        {
// switch_7938_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28776;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x3d:
        {
// switch_7938_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28952;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
        case 0x3e:
        {
// switch_7938_case_0x3e
            var_8 = 3;
            var_16 = 29096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            OP_JUMP switch_7938_case_default
        }
    }
}
// fun_8258
fun_8258() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8358
        case default:
        {
// switch_8358_case_default
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
// switch_8358_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8358_case_default
        }
        case 0x1:
        {
// switch_8358_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8358_case_default
        }
        case 0x2:
        {
// switch_8358_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8358_case_default
        }
        case 0x3:
        {
// switch_8358_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8358_case_default
        }
    }
}
// fun_8418
fun_8418() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8468
// lab_8468
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30096;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_84E0
    OP_JUMP lab_8510
// lab_84E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_8468
// lab_8510
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8598
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6528(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1708(var_56)
// lab_8598
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8600
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11B0(var_24, var_16)
// lab_8600
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_11B0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_86C0
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
// lab_86C0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8700
    pri = 0;
    return pri;
// lab_8700
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8848
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 30216;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A28(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8810
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_8848
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
// lab_8810
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11B0(var_16, var_8)
}
// fun_88D0
fun_88D0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8940
    OP_CONST_S -8, 1
// lab_8940
    pri = arg_0;
    OP_JNZ lab_8960
    OP_ZERO_P_S -8
// lab_8960
    pri = var_8;
    OP_JZER lab_89E8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 0;
    pri = fun_0190()
    pri = ItemCloseDescWindow()
// lab_89E8
    pri = 0;
    return pri;
}
// fun_8A00
fun_8A00() {
    pri = 30352;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8A88
// lab_8A88
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8C08
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8BF8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8B48
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8B48
    pri = 0;
    OP_JUMP lab_8B50
// lab_8C08
    pri = 0;
    return pri;
// lab_8BF8
    OP_JUMP lab_8A80
// lab_8A80
    OP_INC_P_S -936
// lab_8B48
    pri = 1;
// lab_8B50
    OP_JZER lab_8BC8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8BC0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8BC8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8BC0
}
// fun_8C28
fun_8C28() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_8C70
    pri = arg_0;
    return pri;
// lab_8C70
    pri = arg_1;
    return pri;
}
// fun_8C80
fun_8C80() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8D18
    var_8 = 1;
    var_16 = 0;
    var_24 = 31272;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0360(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03D0()
    var_56 = 0;
    pri = fun_16E0()
// lab_8D18
    pri = arg_4;
    OP_JZER lab_8D50
    var_8 = 1;
    var_16 = 8;
    pri = fun_1738(var_8)
// lab_8D50
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8DA8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8DA8
    pri = 0;
    OP_JUMP lab_8DB0
// lab_8DA8
    pri = 1;
// lab_8DB0
    OP_JZER lab_8E78
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8E78
    var_16 = 0;
    pri = fun_0460()
    OP_JZER lab_8E50
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1620(var_32, var_24)
    OP_JUMP lab_8E78
// lab_8E78
    pri = arg_2;
    OP_JZER lab_8F50
    var_8 = 0;
    pri = fun_0460()
    OP_JZER lab_8F20
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07A8(var_40)
    OP_JUMP lab_8F50
// lab_8F50
    pri = arg_3;
    OP_JZER lab_8F88
    var_8 = 1;
    var_16 = 8;
    pri = fun_16A8(var_8)
// lab_8F88
    pri = 0;
    return pri;
// lab_8F20
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11B0(var_16, var_8)
// lab_8E50
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1620(var_16, var_8)
}
// fun_8F98
fun_8F98() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8A00(var_24)
    pri = 0;
    return pri;
}
// fun_9000
fun_9000() {
    pri = g_mode;
    switch (pri) {
// switch_9110
        case default:
        {
// switch_9110_case_default
            pri = CommandNOP()
            OP_JUMP lab_9178
// lab_9178
            pri = 0;
            return pri;
        }
        case 0xc3034783698c1196:
        {
// switch_9110_case_0xc3034783698c1196
            var_8 = 0;
            pri = fun_C030()
            OP_JUMP lab_9178
        }
        case 0xe6f82b27482d6aa4:
        {
// switch_9110_case_0xe6f82b27482d6aa4
            var_8 = 0;
            pri = fun_BFB8()
            OP_JUMP lab_9178
        }
        case 0x0:
        {
// switch_9110_case_0x0
            var_8 = 0;
            pri = fun_9188()
            OP_JUMP lab_9178
        }
        case 0x36119a3e7c5e051c:
        {
// switch_9110_case_0x36119a3e7c5e051c
            var_8 = 0;
            pri = fun_A0C8()
            OP_JUMP lab_9178
        }
        case 0x36119d3e7c5e0a35:
        {
// switch_9110_case_0x36119d3e7c5e0a35
            var_8 = 0;
            pri = fun_BEC8()
            OP_JUMP lab_9178
        }
    }
}
// fun_9188
fun_9188() {
    pri = 0;
    return pri;
}
// fun_91A0
fun_91A0() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    OP_PUSH5_C 4659501843978901258, 4646043381850271908, 4658788634766428078, 4661338281284961567, 4646618294490203423
    var_32 = 4658788634766428078;
    var_40 = 60;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 30;
    var_56 = 8;
    pri = fun_00B8(var_48)
    var_64 = 1;
    var_72 = 0;
    var_80 = 31272;
    var_88 = 8;
    var_96 = 32;
    pri = fun_0360(var_88, var_80, var_72, var_64)
    var_104 = 0;
    pri = fun_03D0()
    var_112 = 1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0768(var_120, var_112)
    pri = 0;
    return pri;
}
// fun_92F0
fun_92F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8C80(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9348
fun_9348() {
    pri = 0;
    return pri;
}
// fun_9360
fun_9360() {
    pri = 0;
    return pri;
}
// fun_9378
fun_9378() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4661014508095930368, 4658815484840378368, 8802641224559852288
    var_24 = 48;
    pri = fun_0698(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 15;
    var_40 = 8;
    pri = fun_00B8(var_32)
    var_48 = 0;
    var_56 = 4631952216750555136;
    var_64 = 0;
    OP_PUSH5_C 4658777155865034097, 4648500482475095491, 4658795715621310956, 4660708250127129641, 4648263779611867873
    var_72 = 4658801103228287058;
    var_80 = 1;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 0;
    pri = fun_2580()
    var_96 = 31320;
    var_104 = 8;
    var_112 = 16;
    pri = fun_0300(var_104, var_96)
    var_120 = 0;
    pri = fun_03D0()
    var_128 = 0;
    var_136 = 4631952216750555136;
    var_144 = 3;
    OP_PUSH5_C 4658647369512491418, -4588165265686003712, 4658795341787357512, 4660254041873695375, 4645915134814008115
    var_152 = 4658799453960845394;
    var_160 = 180;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 90;
    var_176 = 8;
    pri = fun_00B8(var_168)
    var_184 = 0;
    pri = fun_2580()
    var_192 = 1;
    var_200 = 0;
    var_208 = 31368;
    var_216 = 1;
    var_224 = 32;
    pri = fun_0360(var_216, var_208, var_200, var_192)
    var_232 = 0;
    pri = fun_03D0()
    var_240 = 0;
    var_248 = 4627730092099895296;
    var_256 = 0;
    OP_PUSH5_C 4659152683066384712, 4630204257145181962, 4658610403931565588, 4659778635036077588, 4642839317006002422
    var_264 = 4658438528273911644;
    var_272 = 1;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 0;
    pri = fun_2580()
    var_288 = 0;
    var_296 = 4627730092099895296;
    var_304 = 0;
    OP_PUSH5_C 4659161655081267364, 4630204257145181962, 4658626588742726451, 4659723329601200456, 4642838965162281533
    var_312 = 4658301221261834977;
    var_320 = 180;
    pri = EvCameraMove(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 31416;
    var_336 = 15;
    var_344 = 16;
    pri = fun_0300(var_336, var_328)
    var_352 = 60;
    var_360 = 8;
    pri = fun_00B8(var_352)
    var_368 = 1;
    var_376 = 0;
    var_384 = 31464;
    var_392 = 1;
    var_400 = 32;
    pri = fun_0360(var_392, var_384, var_376, var_368)
    var_408 = 0;
    pri = fun_03D0()
    var_416 = 0;
    var_424 = 4627730092099895296;
    var_432 = 0;
    OP_PUSH5_C 4659342832607292293, 4634211053438658150, 4658961543965012132, 4659822197686770074, 4642916722624597852
    var_440 = 4658914902681761874;
    var_448 = 1;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 0;
    pri = fun_2580()
    var_464 = 0;
    var_472 = 4627730092099895296;
    var_480 = 0;
    OP_PUSH5_C 4659348308175198618, 4634211053438658150, 4659017816970121708, 4659827827186304287, 4642913907874830746
    var_488 = 4658971241657569116;
    var_496 = 180;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 31512;
    var_512 = 15;
    var_520 = 16;
    pri = fun_0300(var_512, var_504)
    var_528 = 90;
    var_536 = 8;
    pri = fun_00B8(var_528)
    var_544 = 1;
    var_552 = 0;
    var_560 = 4641240890982006784;
    var_568 = 0;
    var_576 = 0;
    OP_PUSH4_C 4660618683909931008, 4658815484840378368, 4607182418800017408, 8802641224559852288
    var_584 = 72;
    pri = fun_07E0(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 0;
    var_600 = 4628293042053316608;
    var_608 = 0;
    OP_PUSH5_C 4660499562820177756, 4634847186886024233, 4658769085449686221, 4659521657178433782, 4641911153270299034
    var_616 = 4658379220616709407;
    var_624 = 1;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    pri = fun_2580()
    var_640 = 0;
    var_648 = 4628293042053316608;
    var_656 = 3;
    OP_PUSH5_C 4660514912002501509, 4634847186886024233, 4658719167621785190, 4659486098972391506, 4641910801426578145
    var_664 = 4658495790839486218;
    var_672 = 240;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 30;
    var_688 = 8;
    pri = fun_00B8(var_680)
    var_696 = -3181508942575245480;
    var_704 = 8;
    pri = fun_1248(var_696)
    var_712 = 0;
    var_720 = 15;
    var_728 = 0;
    OP_PUSH2_C 4607182418800017408, -3181508942575245480
    var_736 = 40;
    pri = fun_11F0(var_728, var_720, var_712, var_704, var_696)
    var_744 = 10;
    var_752 = 8;
    pri = fun_00B8(var_744)
    var_760 = 1;
    var_768 = 1;
    var_776 = 20;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_784 = 40;
    pri = fun_1158(var_776, var_768, var_760, var_752, var_744)
    var_792 = 15;
    var_800 = 8;
    pri = fun_00B8(var_792)
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_840 = 48;
    pri = fun_08A8(var_832, var_824, var_816, var_808, var_800, var_792)
    var_848 = 1;
    var_856 = 1;
    var_864 = -1;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_872 = 40;
    pri = fun_1158(var_864, var_856, var_848, var_840, var_832)
    var_880 = 8;
    var_888 = 10;
    var_896 = 0;
    var_904 = 0;
    var_912 = -3181508942575245480;
    var_920 = 40;
    pri = fun_11F0(var_912, var_904, var_896, var_888, var_880)
    var_928 = -3181508942575245480;
    var_936 = 8;
    pri = fun_0900(var_928)
    var_944 = 8802641224559852288;
    var_952 = 8;
    pri = fun_0900(var_944)
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    OP_PUSH2_C -3181508942575245480, 8802641224559852288
    var_992 = 48;
    pri = fun_08A8(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 15;
    var_1008 = 8;
    pri = fun_00B8(var_1000)
    var_1016 = 8802641224559852288;
    var_1024 = 8;
    pri = fun_0900(var_1016)
    var_1032 = 0;
    var_1040 = 4629742638183376486;
    var_1048 = 0;
    OP_PUSH5_C 4660111479196037939, 4635467135522229453, 4658772757818522993, 4661162986146145239, 4642078982725162762
    var_1056 = 4658681916167836140;
    var_1064 = 1;
    pri = EvCameraMove(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 0;
    pri = fun_2580()
    var_1080 = 0;
    var_1088 = 4629742638183376486;
    var_1096 = 2;
    OP_PUSH5_C 4660384355991819387, 4638057408995409265, 4658749184289223475, 4661330738635195023, 4643292843562227466
    var_1104 = 4658658320648304067;
    var_1112 = 240;
    pri = EvCameraMove(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 0;
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 100;
    var_1152 = -1;
    OP_PUSH2_C -4741726267939129047, -3181508942575245480
    var_1160 = 56;
    pri = fun_1FE8(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = 1;
    var_1176 = 8;
    pri = fun_21E0(var_1168)
    var_1184 = 0;
    var_1192 = 3;
    var_1200 = 0;
    var_1208 = 100;
    var_1216 = -1;
    OP_PUSH2_C -4741729566474013680, -3181508942575245480
    var_1224 = 56;
    pri = fun_1FE8(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_21E0(var_1232)
    var_1248 = 0;
    pri = fun_22A0()
    var_1256 = -1;
    var_1264 = -3181508942575245480;
    var_1272 = 16;
    pri = fun_11B0(var_1264, var_1256)
    var_1280 = 3;
    var_1288 = 30;
    pri = EvCameraEnd(var_1288, var_1280)
    var_1296 = 0;
    var_1304 = 8802641224559852288;
    var_1312 = 16;
    pri = fun_0768(var_1304, var_1296)
    var_1320 = 15;
    var_1328 = 8;
    pri = fun_00B8(var_1320)
    pri = 0;
    return pri;
}
// fun_A020
fun_A020() {
    pri = 0;
    return pri;
}
// fun_A038
fun_A038() {
    var_8 = 1871;
    var_16 = 8;
    pri = fun_8F98(var_8)
    pri = 0;
    return pri;
}
// fun_A070
fun_A070() {
    var_8 = 31320;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0300(var_16, var_8)
    var_32 = 0;
    pri = fun_03D0()
    pri = 0;
    return pri;
}
// fun_A0C8
fun_A0C8() {
    var_8 = 0;
    pri = fun_91A0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_92F0()
    var_24 = 0;
    pri = fun_9348()
    var_32 = 0;
    pri = fun_9360()
    var_40 = 0;
    pri = fun_9378()
    var_48 = 0;
    pri = fun_A020()
    var_56 = 0;
    pri = fun_A038()
    var_64 = 0;
    pri = fun_A070()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A1D0
fun_A1D0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8C80(var_40, var_32, var_24, var_16, var_8)
    var_56 = 1;
    var_64 = 0;
    var_72 = 31272;
    var_80 = 8;
    var_88 = 32;
    pri = fun_0360(var_80, var_72, var_64, var_56)
    var_96 = 0;
    pri = fun_03D0()
    pri = 0;
    return pri;
}
// fun_A278
fun_A278() {
    pri = 0;
    return pri;
}
// fun_A290
fun_A290() {
    pri = 0;
    return pri;
}
// fun_A2A8
fun_A2A8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH3_C 4640537203540230144, -1391275217799450280, -753493480947668086
    var_24 = 16;
    pri = fun_8C28(var_16, var_8)
    var_32 = pri;
    pri = GetFieldObjectPositionZ_(var_32)
    alt = 300;
    var_40 = alt;
    var_48 = pri;
    var_56 = 16;
    pri = fun_0060(var_48, var_40)
    var_64 = pri;
    OP_PUSH2_C -1391275217799450280, -753493480947668086
    var_72 = 16;
    pri = fun_8C28(var_64, var_56)
    var_80 = pri;
    pri = GetFieldObjectPositionX_(var_80)
    var_88 = pri;
    var_96 = 8802641224559852288;
    var_104 = 48;
    pri = fun_0698(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 1;
    var_128 = -1;
    OP_PUSH2_C -1391275217799450280, -753493480947668086
    var_136 = 16;
    pri = fun_8C28(var_128, var_120)
    var_144 = pri;
    var_152 = 8802641224559852288;
    var_160 = 40;
    pri = fun_1158(var_152, var_144, var_136, var_128, var_120)
    var_168 = 0;
    var_176 = -3181508942575245480;
    var_184 = 16;
    pri = fun_0730(var_176, var_168)
    var_192 = 1;
    var_200 = 1;
    OP_PUSH3_C 4640537203540230144, -753493480947668086, -1391275217799450280
    var_208 = 16;
    pri = fun_8C28(var_200, var_192)
    var_216 = pri;
    pri = GetFieldObjectPositionZ_(var_216)
    alt = 300;
    var_224 = alt;
    var_232 = pri;
    var_240 = 16;
    pri = fun_0060(var_232, var_224)
    var_248 = pri;
    OP_PUSH2_C -753493480947668086, -1391275217799450280
    var_256 = 16;
    pri = fun_8C28(var_248, var_240)
    var_264 = pri;
    pri = GetFieldObjectPositionX_(var_264)
    var_272 = pri;
    var_280 = -3181508942575245480;
    var_288 = 48;
    pri = fun_0698(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    var_312 = -1;
    OP_PUSH2_C -753493480947668086, -1391275217799450280
    var_320 = 16;
    pri = fun_8C28(var_312, var_304)
    var_328 = pri;
    var_336 = -3181508942575245480;
    var_344 = 40;
    pri = fun_1158(var_336, var_328, var_320, var_312, var_304)
    var_352 = 15;
    var_360 = 8;
    pri = fun_00B8(var_352)
    var_368 = 0;
    var_376 = 4629855228174060749;
    var_384 = 0;
    OP_PUSH5_C 4659518996360294564, 4634994961248797327, 4658831273827353231, 4660186048074633708, 4647213614065946460
    var_392 = 4657708496533533491;
    var_400 = 1;
    pri = EvCameraMove(var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 0;
    pri = fun_2580()
    var_416 = 0;
    var_424 = 4629855228174060749;
    var_432 = 3;
    OP_PUSH5_C 4659299709761250918, 4636730958167660298, 4658744368428293816, 4659966651524427284, 4647647437373801759
    var_440 = 4657621525163776410;
    var_448 = 90;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 1;
    var_464 = 0;
    var_472 = 4641240890982006784;
    var_480 = 0;
    var_488 = 0;
    OP_PUSH2_C -1391275217799450280, -753493480947668086
    var_496 = 16;
    pri = fun_8C28(var_488, var_480)
    var_504 = pri;
    pri = GetFieldObjectPositionZ_(var_504)
    alt = 100;
    var_512 = alt;
    var_520 = pri;
    var_528 = 16;
    pri = fun_0060(var_520, var_512)
    var_536 = pri;
    OP_PUSH2_C -1391275217799450280, -753493480947668086
    var_544 = 16;
    pri = fun_8C28(var_536, var_528)
    var_552 = pri;
    pri = GetFieldObjectPositionX_(var_552)
    var_560 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_568 = 72;
    pri = fun_07E0(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_576 = 31320;
    var_584 = 8;
    var_592 = 16;
    pri = fun_0300(var_584, var_576)
    var_600 = 0;
    pri = fun_03D0()
    var_608 = 8802641224559852288;
    var_616 = 8;
    pri = fun_0900(var_608)
    var_624 = 15;
    var_632 = 8;
    pri = fun_00B8(var_624)
    var_640 = 0;
    var_648 = 4629742638183376486;
    var_656 = 0;
    OP_PUSH5_C 4659255509393814323, 4634253978372606525, 4658800267599449948, 4660197417024864911, 4638109481866100736
    var_664 = 4657531343220066222;
    var_672 = 1;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 0;
    pri = fun_2580()
    var_688 = 0;
    var_696 = 4629742638183376486;
    var_704 = 3;
    OP_PUSH5_C 4659318533400318444, 4634253978372606525, 4658835276049678336, 4659952028019777864, 4638108074491217183
    var_712 = 4657387505108920566;
    var_720 = 180;
    pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 15;
    var_736 = 8;
    pri = fun_00B8(var_728)
    var_744 = 1;
    var_752 = -1;
    var_760 = -1;
    var_768 = 3;
    var_776 = 0;
    var_784 = 15;
    var_792 = 8802641224559852288;
    var_800 = 56;
    pri = fun_2610(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 0;
    OP_PUSH2_C -1391275217799450280, -753493480947668086
    var_816 = 16;
    pri = fun_8C28(var_808, var_800)
    var_824 = pri;
    var_832 = 16;
    pri = fun_0730(var_824, var_816)
    var_840 = 15;
    var_848 = 8;
    pri = fun_00B8(var_840)
    var_856 = 31560;
    pri = SoundPostEvent(var_856)
    var_864 = 15;
    var_872 = 8;
    pri = fun_00B8(var_864)
    var_880 = 31744;
    var_888 = 8;
    pri = fun_2428(var_880)
    var_896 = 0;
    pri = fun_2460()
    var_904 = 1;
    var_912 = 1104;
    var_920 = 1103;
    var_928 = 16;
    pri = fun_8C28(var_920, var_912)
    var_936 = pri;
    var_944 = 1;
    var_952 = 24;
    pri = fun_2530(var_944, var_936, var_928)
    var_960 = 31904;
    pri = SoundPostEvent(var_960)
    var_968 = 3;
    var_976 = 0;
    var_984 = 1318458441734432130;
    var_992 = 24;
    pri = fun_20E8(var_984, var_976, var_968)
    var_1000 = 0;
    var_1008 = 8;
    pri = fun_0558(var_1000)
    var_1016 = 1;
    var_1024 = 8;
    pri = fun_21E0(var_1016)
    var_1032 = 0;
    pri = fun_22A0()
    var_1040 = 8;
    var_1048 = 1104;
    var_1056 = 1103;
    var_1064 = 16;
    pri = fun_8C28(var_1056, var_1048)
    var_1072 = pri;
    var_1080 = 16;
    pri = fun_88D0(var_1072, var_1064)
    var_1088 = 0;
    pri = fun_2500()
    var_1096 = 1;
    var_1104 = -3181508942575245480;
    var_1112 = 16;
    pri = fun_0730(var_1104, var_1096)
    var_1120 = 1;
    var_1128 = 0;
    var_1136 = 4641240890982006784;
    var_1144 = 0;
    var_1152 = 0;
    OP_PUSH2_C -753493480947668086, -1391275217799450280
    var_1160 = 16;
    pri = fun_8C28(var_1152, var_1144)
    var_1168 = pri;
    pri = GetFieldObjectPositionZ_(var_1168)
    alt = 100;
    var_1176 = alt;
    var_1184 = pri;
    var_1192 = 16;
    pri = fun_0060(var_1184, var_1176)
    var_1200 = pri;
    OP_PUSH2_C -753493480947668086, -1391275217799450280
    var_1208 = 16;
    pri = fun_8C28(var_1200, var_1192)
    var_1216 = pri;
    pri = GetFieldObjectPositionX_(var_1216)
    var_1224 = pri;
    OP_PUSH2_C 4607182418800017408, -3181508942575245480
    var_1232 = 72;
    pri = fun_07E0(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 0;
    var_1248 = 4629855228174060749;
    var_1256 = 0;
    OP_PUSH5_C 4659341029408222740, 4635835164054278636, 4658716132969692529, 4658135986654412800, 4647173152038044303
    var_1264 = 4658160417802781983;
    var_1272 = 1;
    pri = EvCameraMove(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1280 = 0;
    pri = fun_2580()
    var_1288 = 0;
    var_1296 = 4629855228174060749;
    var_1304 = 3;
    OP_PUSH5_C 4659279962532416061, 4635835164054278636, 4658848536159909315, 4658074655895815455, 4647169809522695864
    var_1312 = 4658292755022301102;
    var_1320 = 180;
    pri = EvCameraMove(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    OP_PUSH2_C -4741722969404244414, -4741728466962385469
    var_1336 = 16;
    pri = fun_8C28(var_1328, var_1320)
    var_8 = pri;
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 2;
    var_1368 = 100;
    var_1376 = -1;
    var_1384 = var_8;
    var_1392 = -3181508942575245480;
    var_1400 = 56;
    pri = fun_1FE8(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1408 = -3181508942575245480;
    var_1416 = 8;
    pri = fun_0900(var_1408)
    var_1424 = -1;
    var_1432 = 8802641224559852288;
    var_1440 = 16;
    pri = fun_11B0(var_1432, var_1424)
    var_1448 = 0;
    var_1456 = 0;
    var_1464 = 0;
    var_1472 = 0;
    OP_PUSH2_C -3181508942575245480, 8802641224559852288
    var_1480 = 48;
    pri = fun_08A8(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1488 = 1;
    var_1496 = 8;
    pri = fun_21E0(var_1488)
    var_1504 = 1;
    var_1512 = 1;
    var_1520 = -1;
    var_1528 = -1;
    var_1536 = 0;
    var_1544 = 6;
    var_1552 = -3181508942575245480;
    var_1560 = 56;
    pri = fun_41F0(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    OP_PUSH2_C -4741725168427500836, -4741721869892616203
    var_1568 = 16;
    pri = fun_8C28(var_1560, var_1552)
    var_8 = pri;
    var_1576 = 0;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 100;
    var_1608 = -1;
    var_1616 = var_8;
    var_1624 = -3181508942575245480;
    var_1632 = 56;
    pri = fun_1FE8(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1640 = 32088;
    var_1648 = -3181508942575245480;
    var_1656 = 16;
    pri = fun_0CD8(var_1648, var_1640)
    var_1664 = 1;
    var_1672 = 8;
    pri = fun_21E0(var_1664)
    var_1680 = 0;
    pri = fun_22A0()
    var_1688 = 1;
    var_1696 = 3;
    var_1704 = 0;
    var_1712 = 6;
    var_1720 = -3181508942575245480;
    var_1728 = 40;
    pri = fun_6528(var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1736 = -3181508942575245480;
    var_1744 = 8;
    pri = fun_0AD8(var_1736)
    var_1752 = 1;
    var_1760 = 1;
    var_1768 = -1;
    var_1776 = -1;
    var_1784 = 0;
    var_1792 = 26;
    var_1800 = -3181508942575245480;
    var_1808 = 56;
    pri = fun_41F0(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1816 = 20;
    var_1824 = 8;
    pri = fun_00B8(var_1816)
    var_1832 = 1;
    var_1840 = 0;
    var_1848 = 32240;
    var_1856 = 8;
    var_1864 = 32;
    pri = fun_0360(var_1856, var_1848, var_1840, var_1832)
    var_1872 = 0;
    pri = fun_03D0()
    var_1880 = 32304;
    pri = SoundPostEvent(var_1880)
    var_1888 = 32488;
    var_1896 = -3181508942575245480;
    var_1904 = 16;
    pri = fun_0CD8(var_1896, var_1888)
    var_1912 = 8802641224559852288;
    var_1920 = 8;
    pri = fun_0900(var_1912)
    var_1928 = 1;
    var_1936 = 3;
    var_1944 = 0;
    var_1952 = 26;
    var_1960 = -3181508942575245480;
    var_1968 = 40;
    pri = fun_6528(var_1960, var_1952, var_1944, var_1936, var_1928)
    var_1976 = 15;
    var_1984 = 8;
    pri = fun_00B8(var_1976)
    var_1992 = 0;
    OP_PUSH2_C -753493480947668086, -1391275217799450280
    var_2000 = 16;
    pri = fun_8C28(var_1992, var_1984)
    var_2008 = pri;
    var_2016 = 16;
    pri = fun_0730(var_2008, var_2000)
    var_2024 = -1;
    var_2032 = 8802641224559852288;
    var_2040 = 16;
    pri = fun_11B0(var_2032, var_2024)
    var_2048 = -1;
    var_2056 = -3181508942575245480;
    var_2064 = 16;
    pri = fun_11B0(var_2056, var_2048)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_B600
    var_2072 = 1;
    var_2080 = 1;
    OP_PUSH4_C 4636033603912859648, 4659475191817043968, 4658661553212489728, 8802641224559852288
    var_2088 = 48;
    pri = fun_0698(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2096 = 1;
    var_2104 = 1;
    OP_PUSH4_C -4587338432941916160, 4659475191817043968, 4658969416468267008, -3181508942575245480
    var_2112 = 48;
    pri = fun_0698(var_2104, var_2096, var_2088, var_2080, var_2072, var_2064)
    OP_JUMP lab_B6A0
// lab_B600
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4587338432941916160, 4659475191817043968, 4658969416468267008, 8802641224559852288
    var_24 = 48;
    pri = fun_0698(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4636033603912859648, 4659475191817043968, 4658661553212489728, -3181508942575245480
    var_48 = 48;
    pri = fun_0698(var_40, var_32, var_24, var_16, var_8, var_0)
// lab_B6A0
    var_8 = 2;
    var_16 = 2;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_1378(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 6;
    var_56 = -3181508942575245480;
    var_64 = 24;
    pri = fun_1378(var_56, var_48, var_40)
    var_72 = 5;
    var_80 = 8;
    pri = fun_00B8(var_72)
    var_88 = 0;
    var_96 = 4630812243094876979;
    var_104 = 0;
    OP_PUSH5_C 4659074199926394061, 4637544420850354094, 4658767436182244557, 4660608040637374136, 4643835210657976812
    var_112 = 4658815330908750479;
    var_120 = 1;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    pri = fun_2580()
    var_136 = 0;
    var_144 = 4630812243094876979;
    var_152 = 3;
    OP_PUSH5_C 4659308681776133571, 4639094292440867144, 4658774758929685545, 4660842500496881091, 4644319171696058696
    var_160 = 4658822653656191468;
    var_168 = 180;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 31320;
    var_184 = 8;
    var_192 = 16;
    pri = fun_0300(var_184, var_176)
    var_200 = 0;
    pri = fun_03D0()
    var_208 = 90;
    var_216 = 8;
    pri = fun_00B8(var_208)
    var_224 = 0;
    var_232 = 4629193761978790707;
    var_240 = 0;
    OP_PUSH5_C 4660029983394187182, 4637590864221511352, 4659699975974226493, 4659146195947780833, 4641417516529892721
    var_248 = 4658400441191125484;
    var_256 = 1;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_2580()
    var_272 = 0;
    var_280 = 4629193761978790707;
    var_288 = 2;
    OP_PUSH5_C 4660075525165809664, 4637590864221511352, 4659668991736555766, 4659191847670566093, 4641411887030358508
    var_296 = 4658369368992524534;
    var_304 = 360;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 1;
    var_320 = -1;
    var_328 = -1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 1;
    var_360 = -3181508942575245480;
    var_368 = 56;
    pri = fun_2610(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 0;
    var_384 = 3;
    var_392 = 0;
    var_400 = 100;
    var_408 = -1;
    OP_PUSH2_C -4741724068915872625, -3181508942575245480
    var_416 = 56;
    pri = fun_1FE8(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 8;
    pri = fun_21E0(var_424)
    var_440 = 0;
    pri = fun_22A0()
    var_448 = -3181508942575245480;
    var_456 = 8;
    pri = fun_0AD8(var_448)
    var_464 = 1;
    var_472 = 0;
    var_480 = 31272;
    var_488 = 8;
    var_496 = 32;
    pri = fun_0360(var_488, var_480, var_472, var_464)
    var_504 = 0;
    pri = fun_03D0()
    var_512 = 3;
    var_520 = 1;
    pri = EvCameraEnd(var_520, var_512)
    var_528 = 8802641224559852288;
    var_536 = 8;
    pri = fun_13E0(var_528)
    var_544 = -3181508942575245480;
    var_552 = 8;
    pri = fun_13E0(var_544)
    var_560 = 10;
    var_568 = 8;
    pri = fun_00B8(var_560)
    pri = 0;
    return pri;
}
// fun_BBD0
fun_BBD0() {
    pri = 0;
    return pri;
}
// fun_BBE8
fun_BBE8() {
    var_8 = 2298869767325498192;
    pri = VanishFlagReset(var_8)
    var_16 = -753493480947668086;
    var_24 = 8;
    pri = fun_0668(var_16)
    var_32 = -1391275217799450280;
    var_40 = 8;
    pri = fun_0668(var_32)
    var_48 = 1872;
    var_56 = 8;
    pri = fun_8F98(var_48)
    var_64 = -4302906878504062438;
    pri = VanishFlagSet(var_64)
    var_72 = -4689337920581802424;
    pri = VanishFlagSet(var_72)
    var_80 = 3902381536102020823;
    pri = VanishFlagSet(var_80)
    var_88 = 7432978969316161588;
    pri = VanishFlagSet(var_88)
    var_96 = -7103632191647310716;
    pri = VanishFlagSet(var_96)
    var_104 = -4302913475573831704;
    pri = VanishFlagSet(var_104)
    var_112 = 3902383735125277245;
    pri = VanishFlagSet(var_112)
    pri = 0;
    return pri;
}
// fun_BDB0
fun_BDB0() {
    OP_PUSH2_C -3181508942575245480, -8679956574232143210
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4659475191817043968, 4658793494607822848, 8802641224559852288
    var_40 = 48;
    pri = fun_0698(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 5;
    var_56 = 8;
    pri = fun_00B8(var_48)
    var_64 = 31320;
    var_72 = 8;
    var_80 = 16;
    pri = fun_0300(var_72, var_64)
    var_88 = 0;
    pri = fun_03D0()
    pri = 0;
    return pri;
}
// fun_BEC8
fun_BEC8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A1D0()
    var_16 = 0;
    pri = fun_A278()
    var_24 = 0;
    pri = fun_A290()
    var_32 = 0;
    pri = fun_A2A8()
    var_40 = 0;
    pri = fun_BBD0()
    var_48 = 0;
    pri = fun_BBE8()
    var_56 = 0;
    pri = fun_BDB0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BFB8
fun_BFB8() {
    var_8 = 0;
    pri = fun_9348()
    var_16 = 0;
    pri = fun_A038()
    var_24 = 0;
    pri = fun_A278()
    var_32 = 0;
    pri = fun_BBE8()
    pri = 0;
    return pri;
}
// fun_C030
fun_C030() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -3181508942575245480;
    var_56 = 48;
    pri = fun_8258(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C -4741718571357731570, -3181508942575245480
    var_104 = 56;
    pri = fun_1FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_21E0(var_112)
    var_128 = 0;
    var_136 = 4389556905597292799;
    var_144 = 0;
    var_152 = 24;
    pri = fun_22D0(var_144, var_136, var_128)
    var_160 = 0;
    var_168 = 4389558005108921010;
    var_176 = 1;
    var_184 = 24;
    pri = fun_22D0(var_176, var_168, var_160)
    var_200 = 0;
    var_208 = 1;
    var_216 = 0;
    var_224 = 1;
    var_232 = 32;
    pri = fun_23B8(var_224, var_216, var_208, var_200)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_CA18
        case default:
        {
// switch_CA18_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_CA18_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -4741717471846103359, -3181508942575245480
            var_48 = 56;
            pri = fun_1FE8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_21E0(var_56)
            var_72 = 0;
            pri = fun_22A0()
            var_80 = 0;
            var_88 = 0;
            var_96 = 0;
            var_104 = -3181508942575245480;
            var_112 = 32;
            pri = fun_8418(var_104, var_96, var_88, var_80)
            var_120 = 1;
            var_128 = 0;
            var_136 = 31272;
            var_144 = 8;
            var_152 = 32;
            pri = fun_0360(var_144, var_136, var_128, var_120)
            var_160 = 0;
            pri = fun_03D0()
            var_168 = 0;
            var_176 = 0;
            var_184 = 0;
            var_192 = 2;
            var_200 = 0;
            var_208 = 40;
            pri = fun_8C80(var_200, var_192, var_184, var_176, var_168)
            var_216 = -1292278190967397311;
            pri = VanishFlagReset(var_216)
            var_224 = 1875;
            var_232 = 8;
            pri = fun_8F98(var_224)
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = 0;
            var_272 = 0;
            var_280 = 12000;
            pri = float(var_280)
            var_288 = pri;
            var_296 = 19800;
            pri = float(var_296)
            var_304 = pri;
            OP_PUSH2_C -281100147996315678, -4743939865879759539
            var_312 = 72;
            pri = fun_0488(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
            var_320 = 1;
            var_328 = 180;
            pri = float(var_328)
            var_336 = pri;
            var_344 = 8802641224559852288;
            var_352 = 24;
            pri = fun_06F0(var_344, var_336, var_328)
            var_360 = 1;
            var_368 = 1;
            var_376 = 180;
            pri = float(var_376)
            var_384 = pri;
            var_392 = 12000;
            pri = float(var_392)
            var_400 = pri;
            var_408 = 19710;
            pri = float(var_408)
            var_416 = pri;
            var_424 = -1292278190967397311;
            var_432 = 48;
            pri = fun_0698(var_424, var_416, var_408, var_400, var_392, var_384)
            var_440 = 15;
            var_448 = 8;
            pri = fun_00B8(var_440)
            pri = EvCameraStart()
            var_456 = 0;
            var_464 = 4631952216750555136;
            var_472 = 0;
            OP_PUSH5_C 4667909160684643942, 4653480390539618550, 4671172425983731958, 4668566992993984184, 4647678399621239931
            var_480 = 4671172425983731958;
            var_488 = 1;
            pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
            var_496 = 0;
            pri = fun_2580()
            var_504 = 31320;
            var_512 = 8;
            var_520 = 16;
            pri = fun_0300(var_512, var_504)
            var_528 = 0;
            pri = fun_03D0()
            var_536 = 0;
            var_544 = 4631952216750555136;
            var_552 = 3;
            OP_PUSH5_C 4667933069564989932, 4644140962851428762, 4671172420486173819, 4668722167070012211, 4646160545809327718
            var_560 = 4671172557925127291;
            var_568 = 150;
            pri = EvCameraMove(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
            var_576 = 30;
            var_584 = 8;
            pri = fun_00B8(var_576)
            var_592 = 0;
            pri = fun_0528()
            var_600 = 45;
            var_608 = 8;
            pri = fun_00B8(var_600)
            var_616 = 1;
            var_624 = 0;
            var_632 = 4641240890982006784;
            var_640 = 0;
            var_648 = 0;
            var_656 = 11800;
            pri = float(var_656)
            var_664 = pri;
            var_672 = 19800;
            pri = float(var_672)
            var_680 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_688 = 72;
            pri = fun_07E0(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
            var_696 = 1;
            var_704 = 0;
            var_712 = 4641240890982006784;
            var_720 = 0;
            var_728 = 0;
            var_736 = 11800;
            pri = float(var_736)
            var_744 = pri;
            var_752 = 19710;
            pri = float(var_752)
            var_760 = pri;
            OP_PUSH2_C 4607182418800017408, -1292278190967397311
            var_768 = 72;
            pri = fun_07E0(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
            var_776 = 8802641224559852288;
            var_784 = 8;
            pri = fun_0900(var_776)
            var_792 = -1292278190967397311;
            var_800 = 8;
            pri = fun_0900(var_792)
            var_808 = 0;
            pri = fun_2580()
            var_816 = 3;
            var_824 = 1000;
            pri = EvCameraEnd(var_824, var_816)
            var_832 = 335951563739118247;
            pri = ReserveScript(var_832)
            OP_JUMP switch_CA18_case_default
        }
        case 0x1:
        {
// switch_CA18_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -4740876345450711169, -3181508942575245480
            var_48 = 56;
            pri = fun_1FE8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_21E0(var_56)
            var_72 = 0;
            pri = fun_22A0()
            var_80 = 0;
            var_88 = 0;
            var_96 = 0;
            var_104 = -3181508942575245480;
            var_112 = 32;
            pri = fun_8418(var_104, var_96, var_88, var_80)
            OP_JUMP switch_CA18_case_default
        }
    }
}
