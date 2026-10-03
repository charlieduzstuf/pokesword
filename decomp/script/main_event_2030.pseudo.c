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
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
// lab_02F0
    var_8 = arg_1;
    pri = SetPlayerUniform(var_8)
    pri = CallReloadPlayer()
    pri = arg_0;
    OP_JZER lab_0380
    var_16 = 80;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0390(var_24, var_16)
    var_40 = 0;
    pri = fun_0460()
// lab_0380
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03F0
fun_03F0() {
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
// fun_0460
fun_0460() {
    OP_JUMP lab_0478
// lab_0478
    pri = FadeWait_()
    OP_JZER lab_04B0
    pri = 0;
    return pri;
// lab_04B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0550
fun_0550() {
    OP_JUMP lab_0568
// lab_0568
    pri = IsLoadedLogoFade_()
    OP_JZER lab_05A0
    pri = 0;
    return pri;
// lab_05A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0568
    pri = 0;
    return pri;
}
// fun_05E0
fun_05E0() {
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
// fun_0680
fun_0680() {
    pri = arg_8;
    OP_JZER lab_06F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
// lab_06F0
    var_8 = arg_9;
    var_16 = 0;
    var_24 = arg_7;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_05E0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0C80(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_07E0
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0390(var_128, var_120)
    var_144 = 0;
    pri = fun_0460()
// lab_07E0
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    pri = SetRespawnZone(var_8)
    pri = 0;
    return pri;
}
// fun_0828
fun_0828() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0858
fun_0858() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_08A0
// lab_08A0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_08E0
    OP_JUMP lab_0950
// lab_08E0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0920
    OP_JUMP lab_0950
// lab_0920
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08A0
// lab_0950
    pri = 0;
    return pri;
}
// fun_0968
fun_0968() {
    pri = arg_0;
    switch (pri) {
// switch_0B10
        case default:
        {
// switch_0B10_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0B10_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0B10_case_default
        }
        case 0x1:
        {
// switch_0B10_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0B10_case_default
        }
        case 0x2:
        {
// switch_0B10_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0B10_case_default
        }
        case 0x3:
        {
// switch_0B10_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0B10_case_default
        }
        case 0x4:
        {
// switch_0B10_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0B10_case_default
        }
        case 0x5:
        {
// switch_0B10_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0B10_case_default
        }
        case 0x6:
        {
// switch_0B10_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0B10_case_default
        }
    }
}
// fun_0BA8
fun_0BA8() {
    pri = ResetFixGameTime_()
    pri = 0;
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C28
fun_0C28() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0D38
fun_0D38() {
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
// fun_0DB0
fun_0DB0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17D8(var_8)
    OP_JZER lab_0ED0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1808(var_24)
    OP_JNZ lab_0ED0
    pri = 0;
    return pri;
// lab_0ED0
    OP_JUMP lab_0EE0
// lab_0EE0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0F40
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0F40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EE0
    pri = 0;
    return pri;
}
// fun_0F80
fun_0F80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_1030
fun_1030() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_1078
    pri = 0;
    return pri;
// lab_1078
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_10B8
// lab_10B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17D8(var_8)
    OP_JNZ lab_1140
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_1130
    pri = 0;
    return pri;
// lab_1140
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_1188
    pri = 0;
    return pri;
// lab_1188
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_11E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1358(var_8)
    pri = 0;
    return pri;
// lab_11E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10B8
    pri = 0;
    return pri;
// lab_1130
    OP_JUMP lab_1188
}
// fun_1230
fun_1230() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1278
// lab_1278
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12D0
    pri = 0;
    return pri;
// lab_12D0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1310
    pri = 0;
    return pri;
// lab_1310
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1278
    pri = 0;
    return pri;
}
// fun_1358
fun_1358() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1390
fun_1390() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13E0
    pri = 0;
    return pri;
// lab_13E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17D8(var_8)
    OP_JZER lab_1510
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1438
    OP_ZERO_P_S 64
// lab_1510
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1548
    OP_CONST_S 64, 1
// lab_1548
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1580
    OP_CONST_S 72, 1
// lab_1580
    var_8 = 1;
    var_16 = 0;
    var_24 = 352;
    var_32 = -1;
    var_40 = -1;
    var_48 = 344;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 296;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 256;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_1438
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1460
    OP_ZERO_P_S 72
// lab_1460
    var_8 = 0;
    var_16 = 0;
    var_24 = 248;
    var_32 = -1;
    var_40 = -1;
    var_48 = 240;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 176;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 128;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_1620
// lab_1620
    pri = 0;
    return pri;
}
// fun_1630
fun_1630() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16B0
fun_16B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1730
fun_1730() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_16F0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1730(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_17D8
fun_17D8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1808
fun_1808() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1838
fun_1838() {
    OP_JUMP lab_1850
// lab_1850
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_18E0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_18D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_1030(var_8)
    pri = 0;
    return pri;
// lab_18E0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1970
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1960
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_1030(var_8)
    pri = 0;
    return pri;
// lab_1970
    pri = 0;
    return pri;
// lab_1960
    OP_JUMP lab_1980
// lab_1980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1850
    pri = 0;
    return pri;
// lab_18D0
    OP_JUMP lab_1980
}
// fun_19C0
fun_19C0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_1030(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1838(var_40)
    pri = 0;
    return pri;
}
// fun_1A48
fun_1A48() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1A80
fun_1A80() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1AA8
fun_1AA8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1AD8
fun_1AD8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B68
fun_1B68() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1BA0
fun_1BA0() {
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
// switch_21B8
        case default:
        {
// switch_21B8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2200
// lab_2200
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
            OP_JNZ lab_22A8
            var_88 = 0;
            pri = fun_2528()
// lab_22A8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_21B8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1DA0
                case default:
                {
// switch_1DA0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E18
// lab_1E18
                    OP_JUMP lab_2200
                }
                case 0x0:
                {
// switch_1DA0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1E18
                }
                case 0x1:
                {
// switch_1DA0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1E18
                }
                case 0x2:
                {
// switch_1DA0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1E18
                }
                case 0x3:
                {
// switch_1DA0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E18
                }
                case 0x4:
                {
// switch_1DA0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1E18
                }
                case 0x5:
                {
// switch_1DA0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1E18
                }
            }
        }
        case 0x65:
        {
// switch_21B8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1F58
                case default:
                {
// switch_1F58_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FD0
// lab_1FD0
                    OP_JUMP lab_2200
                }
                case 0x0:
                {
// switch_1F58_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1FD0
                }
                case 0x1:
                {
// switch_1F58_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1FD0
                }
                case 0x2:
                {
// switch_1F58_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1FD0
                }
                case 0x3:
                {
// switch_1F58_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FD0
                }
                case 0x4:
                {
// switch_1F58_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1FD0
                }
                case 0x5:
                {
// switch_1F58_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1FD0
                }
            }
        }
        case 0x66:
        {
// switch_21B8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2110
                case default:
                {
// switch_2110_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2188
// lab_2188
                    OP_JUMP lab_2200
                }
                case 0x0:
                {
// switch_2110_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2188
                }
                case 0x1:
                {
// switch_2110_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2188
                }
                case 0x2:
                {
// switch_2110_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2188
                }
                case 0x3:
                {
// switch_2110_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2188
                }
                case 0x4:
                {
// switch_2110_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2188
                }
                case 0x5:
                {
// switch_2110_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2188
                }
            }
        }
    }
}
// fun_22C0
fun_22C0() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0FF8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2368
    pri = 1;
    return pri;
// lab_2368
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_23B0
fun_23B0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2400
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_22C0(var_8)
    arg_2 = pri;
// lab_2400
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1BA0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2460
fun_2460() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_24B0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_22C0(var_8)
    arg_2 = pri;
// lab_24B0
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_23B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2528
fun_2528() {
    OP_JUMP lab_2540
// lab_2540
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2580
    pri = 0;
    return pri;
// lab_2580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2540
    pri = 0;
    return pri;
}
// fun_25C0
fun_25C0() {
    var_8 = 0;
    pri = fun_2528()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2670
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_2670
    pri = 0;
    return pri;
}
// fun_2680
fun_2680() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_26B0
fun_26B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2728()
    return pri;
}
// fun_2728
fun_2728() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2768
fun_2768() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_27A0
fun_27A0() {
    OP_JUMP lab_27B8
// lab_27B8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2800
    OP_JUMP lab_2830
    OP_JUMP lab_2820
// lab_2800
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2830
    pri = 0;
    return pri;
// lab_2820
    OP_JUMP lab_27B8
}
// fun_2840
fun_2840() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2870
fun_2870() {
    pri = CallGameClearEvent_()
    pri = 0;
    return pri;
}
// fun_28A0
fun_28A0() {
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    var_8 = pri;
    OP_ZERO_P_S -16
    OP_JUMP lab_2908
// lab_2908
    OP_LOAD_S_BOTH -16, -8
    OP_JSGEQ lab_2A70
    var_16 = 0;
    var_24 = 0;
    var_32 = var_16;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_24 = pri;
    OP_LOAD_S_BOTH 24, -24
    OP_JNEQ lab_2A58
    pri = arg_1;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_29D0
    pri = 1;
    return pri;
// lab_2A70
    pri = 0;
    return pri;
// lab_2A58
    OP_JUMP lab_2900
// lab_2900
    OP_INC_P_S -16
// lab_29D0
    var_16 = 0;
    var_24 = 1;
    var_32 = var_16;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_32 = pri;
    OP_LOAD_S_BOTH -32, 32
    OP_JNEQ lab_2A50
    pri = 1;
    return pri;
// lab_2A50
}
// fun_2A90
fun_2A90() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 0;
    pri = StartLoadTrainerBattleSeamless_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AF0
fun_2AF0() {
    OP_JUMP lab_2B08
// lab_2B08
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2B40
    pri = 0;
    return pri;
// lab_2B40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B08
    pri = 0;
    return pri;
}
// fun_2B80
fun_2B80() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2BB0
fun_2BB0() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2C28
fun_2C28() {
    var_8 = 0;
    pri = fun_2BB0()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2CA8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2CA8
    pri = 1;
    return pri;
// lab_2CA8
    var_8 = 0;
    pri = fun_2BB0()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2CE8
    pri = 1;
    return pri;
// lab_2CE8
    var_8 = 0;
    pri = fun_2BB0()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2D18
fun_2D18() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2D68
fun_2D68() {
    OP_JUMP lab_2D80
// lab_2D80
    pri = EvCameraMoveWait_()
    OP_JZER lab_2DB8
    pri = 0;
    return pri;
// lab_2DB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2D80
    pri = 0;
    return pri;
}
// fun_2DF8
fun_2DF8() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2E60(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2EB8()
    pri = 0;
    return pri;
}
// fun_2E60
fun_2E60() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2EB8
fun_2EB8() {
    OP_JUMP lab_2ED0
// lab_2ED0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2F28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2F38
// lab_2F28
    pri = 0;
    return pri;
// lab_2F38
    OP_JUMP lab_2ED0
    pri = 0;
    return pri;
}
// fun_2F58
fun_2F58() {
    pri = arg_5;
    OP_JNZ lab_2F90
    var_8 = 0;
    pri = fun_1630()
// lab_2F90
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2FE0
    OP_CONST_S -8, -1
// lab_2FE0
    pri = arg_1;
    switch (pri) {
// switch_4A98
        case default:
        {
// switch_4A98_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4F40
            var_520 = 20488;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0FF8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4F40
            pri = 1;
            OP_JUMP lab_4F48
// lab_4F40
            pri = 0;
// lab_4F48
            OP_JZER lab_4F98
            var_8 = 64;
            var_16 = 20584;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_51F0
// lab_4F98
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5000
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5000
            pri = 1;
            OP_JUMP lab_5008
// lab_5000
            pri = 0;
// lab_5008
            OP_JZER lab_5190
            var_16 = 20760;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0FF8(var_24, var_16)
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
            var_176 = 20864;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20880;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_51F0
// lab_5190
            var_8 = 64;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_51F0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5260
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5260
            var_8 = 0;
            pri = fun_1670()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4A98_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x1:
        {
// switch_4A98_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x2:
        {
// switch_4A98_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x3:
        {
// switch_4A98_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x4:
        {
// switch_4A98_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x5:
        {
// switch_4A98_case_0x5
            var_8 = 2;
            var_16 = 10744;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0FB8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1358(var_40)
            OP_JUMP switch_4A98_case_default
        }
        case 0x6:
        {
// switch_4A98_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x7:
        {
// switch_4A98_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x8:
        {
// switch_4A98_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x9:
        {
// switch_4A98_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0xa:
        {
// switch_4A98_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0xb:
        {
// switch_4A98_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0xc:
        {
// switch_4A98_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0xd:
        {
// switch_4A98_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11392;
            var_72 = 11216;
            var_80 = 11032;
            var_88 = 10840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0xe:
        {
// switch_4A98_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12048;
            var_72 = 11840;
            var_80 = 11624;
            var_88 = 11400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0xf:
        {
// switch_4A98_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12440;
            var_72 = 12320;
            var_80 = 12192;
            var_88 = 12056;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x10:
        {
// switch_4A98_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12784;
            var_72 = 12680;
            var_80 = 12568;
            var_88 = 12448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x11:
        {
// switch_4A98_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13128;
            var_72 = 13024;
            var_80 = 12912;
            var_88 = 12792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x12:
        {
// switch_4A98_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x13:
        {
// switch_4A98_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x14:
        {
// switch_4A98_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13688;
            var_72 = 13512;
            var_80 = 13328;
            var_88 = 13136;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x15:
        {
// switch_4A98_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x16:
        {
// switch_4A98_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x17:
        {
// switch_4A98_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x18:
        {
// switch_4A98_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x19:
        {
// switch_4A98_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x1a:
        {
// switch_4A98_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x1b:
        {
// switch_4A98_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x1c:
        {
// switch_4A98_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14080;
            var_72 = 13960;
            var_80 = 13832;
            var_88 = 13696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x1d:
        {
// switch_4A98_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x1e:
        {
// switch_4A98_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14544;
            var_72 = 14400;
            var_80 = 14248;
            var_88 = 14088;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x1f:
        {
// switch_4A98_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x20:
        {
// switch_4A98_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x21:
        {
// switch_4A98_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x22:
        {
// switch_4A98_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x23:
        {
// switch_4A98_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x24:
        {
// switch_4A98_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14912;
            var_72 = 14800;
            var_80 = 14680;
            var_88 = 14552;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x25:
        {
// switch_4A98_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15280;
            var_72 = 15168;
            var_80 = 15048;
            var_88 = 14920;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x26:
        {
// switch_4A98_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x27:
        {
// switch_4A98_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x28:
        {
// switch_4A98_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x29:
        {
// switch_4A98_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15720;
            var_72 = 15584;
            var_80 = 15440;
            var_88 = 15288;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x2a:
        {
// switch_4A98_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16112;
            var_72 = 15992;
            var_80 = 15864;
            var_88 = 15728;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x2b:
        {
// switch_4A98_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16528;
            var_72 = 16400;
            var_80 = 16264;
            var_88 = 16120;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x2c:
        {
// switch_4A98_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16968;
            var_72 = 16832;
            var_80 = 16688;
            var_88 = 16536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x2d:
        {
// switch_4A98_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x2e:
        {
// switch_4A98_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17288;
            var_72 = 17192;
            var_80 = 17088;
            var_88 = 16976;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x2f:
        {
// switch_4A98_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17680;
            var_72 = 17560;
            var_80 = 17432;
            var_88 = 17296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x30:
        {
// switch_4A98_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18072;
            var_72 = 17952;
            var_80 = 17824;
            var_88 = 17688;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x31:
        {
// switch_4A98_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x32:
        {
// switch_4A98_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x33:
        {
// switch_4A98_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18464;
            var_72 = 18344;
            var_80 = 18216;
            var_88 = 18080;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x34:
        {
// switch_4A98_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18832;
            var_72 = 18720;
            var_80 = 18600;
            var_88 = 18472;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x35:
        {
// switch_4A98_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19320;
            var_72 = 19168;
            var_80 = 19008;
            var_88 = 18840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x36:
        {
// switch_4A98_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19688;
            var_72 = 19576;
            var_80 = 19456;
            var_88 = 19328;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x37:
        {
// switch_4A98_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x38:
        {
// switch_4A98_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20056;
            var_72 = 19944;
            var_80 = 19824;
            var_88 = 19696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1390(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4A98_case_default
        }
        case 0x39:
        {
// switch_4A98_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x3a:
        {
// switch_4A98_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x3b:
        {
// switch_4A98_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x3c:
        {
// switch_4A98_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 20064;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x3d:
        {
// switch_4A98_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20240;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
        case 0x3e:
        {
// switch_4A98_case_0x3e
            var_8 = 4;
            var_16 = 20384;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0FB8(var_24, var_16, var_8)
            OP_JUMP switch_4A98_case_default
        }
    }
}
// fun_5290
fun_5290() {
    pri = arg_4;
    OP_JNZ lab_52C8
    var_8 = 0;
    pri = fun_1630()
// lab_52C8
    pri = arg_1;
    switch (pri) {
// switch_66A0
        case default:
        {
// switch_66A0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21456;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_17D8(var_264)
            OP_JZER lab_6C68
            pri = arg_3;
            switch (pri) {
// switch_6C10
                case default:
                {
// switch_6C10_case_default
                    OP_JUMP lab_6F20
// lab_6F20
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6F90
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6F90
                    var_8 = 0;
                    pri = fun_1670()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6C10_case_0x1
                    var_8 = 32;
                    var_16 = 21608;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6C10_case_default
                }
                case 0x2:
                {
// switch_6C10_case_0x2
                    var_8 = 32;
                    var_16 = 21712;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6C10_case_default
                }
                case 0x3:
                {
// switch_6C10_case_0x3
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6C10_case_default
                }
            }
// lab_6C68
            pri = arg_1;
            OP_JZER lab_6CB8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6CB8
            pri = 0;
            OP_JUMP lab_6CC0
// lab_6CB8
            pri = 1;
// lab_6CC0
            OP_JZER lab_6D28
            var_8 = 21808;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0FF8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6D28
            pri = 1;
            OP_JUMP lab_6D30
// lab_6D28
            pri = 0;
// lab_6D30
            OP_JZER lab_6D80
            var_8 = 32;
            var_16 = 21904;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6F20
// lab_6D80
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6DE8
            var_8 = 32;
            var_16 = 22064;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6F20
// lab_6DE8
            var_16 = 22184;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0FF8(var_24, var_16)
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
            var_176 = 22288;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22304;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_66A0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x1:
        {
// switch_66A0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x2:
        {
// switch_66A0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x3:
        {
// switch_66A0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x4:
        {
// switch_66A0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x5:
        {
// switch_66A0_case_0x5
            var_8 = 1;
            var_16 = 20936;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0FB8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1358(var_40)
            OP_JUMP switch_66A0_case_default
        }
        case 0x6:
        {
// switch_66A0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x7:
        {
// switch_66A0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x8:
        {
// switch_66A0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x9:
        {
// switch_66A0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0xa:
        {
// switch_66A0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0xb:
        {
// switch_66A0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0xc:
        {
// switch_66A0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0xd:
        {
// switch_66A0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0xe:
        {
// switch_66A0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0xf:
        {
// switch_66A0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x10:
        {
// switch_66A0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x11:
        {
// switch_66A0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x12:
        {
// switch_66A0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x13:
        {
// switch_66A0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x14:
        {
// switch_66A0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x15:
        {
// switch_66A0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x16:
        {
// switch_66A0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x17:
        {
// switch_66A0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x18:
        {
// switch_66A0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x19:
        {
// switch_66A0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x1a:
        {
// switch_66A0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x1b:
        {
// switch_66A0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x1c:
        {
// switch_66A0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x1d:
        {
// switch_66A0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x1e:
        {
// switch_66A0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x1f:
        {
// switch_66A0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x20:
        {
// switch_66A0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x21:
        {
// switch_66A0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x22:
        {
// switch_66A0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x23:
        {
// switch_66A0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x24:
        {
// switch_66A0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x25:
        {
// switch_66A0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x26:
        {
// switch_66A0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x27:
        {
// switch_66A0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x28:
        {
// switch_66A0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x29:
        {
// switch_66A0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x2a:
        {
// switch_66A0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x2b:
        {
// switch_66A0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x2c:
        {
// switch_66A0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x2d:
        {
// switch_66A0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x2e:
        {
// switch_66A0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x2f:
        {
// switch_66A0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x30:
        {
// switch_66A0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x31:
        {
// switch_66A0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x32:
        {
// switch_66A0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x33:
        {
// switch_66A0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x34:
        {
// switch_66A0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x35:
        {
// switch_66A0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x36:
        {
// switch_66A0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x37:
        {
// switch_66A0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x38:
        {
// switch_66A0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x39:
        {
// switch_66A0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x3a:
        {
// switch_66A0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x3b:
        {
// switch_66A0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x3c:
        {
// switch_66A0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21032;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x3d:
        {
// switch_66A0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21208;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
        case 0x3e:
        {
// switch_66A0_case_0x3e
            var_8 = 3;
            var_16 = 21352;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0FB8(var_24, var_16, var_8)
            OP_JUMP switch_66A0_case_default
        }
    }
}
// fun_6FC0
fun_6FC0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_70C0
        case default:
        {
// switch_70C0_case_default
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
// switch_70C0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_70C0_case_default
        }
        case 0x1:
        {
// switch_70C0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_70C0_case_default
        }
        case 0x2:
        {
// switch_70C0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_70C0_case_default
        }
        case 0x3:
        {
// switch_70C0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_70C0_case_default
        }
    }
}
// fun_7180
fun_7180() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_71D0
// lab_71D0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22352;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7248
    OP_JUMP lab_7278
// lab_7248
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_71D0
// lab_7278
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7300
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5290(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1AA8(var_56)
// lab_7300
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7368
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_16B0(var_24, var_16)
// lab_7368
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_16B0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7428
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1030(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0E08(var_88, var_80, var_72, var_64, var_56)
// lab_7428
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7468
    pri = 0;
    return pri;
// lab_7468
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_75B0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 22472;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0F80(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7578
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_75B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E58(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E58(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_1030(var_40)
    pri = 0;
    return pri;
// lab_7578
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_16B0(var_16, var_8)
}
// fun_7638
fun_7638() {
    pri = 22608;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_76C0
// lab_76C0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7840
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7830
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7780
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7780
    pri = 0;
    OP_JUMP lab_7788
// lab_7840
    pri = 0;
    return pri;
// lab_7830
    OP_JUMP lab_76B8
// lab_76B8
    OP_INC_P_S -936
// lab_7780
    pri = 1;
// lab_7788
    OP_JZER lab_7800
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_77F8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7800
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_77F8
}
// fun_7860
fun_7860() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_7898
fun_7898() {
    var_8 = 0;
    pri = fun_7860()
    switch (pri) {
// switch_7948
        case default:
        {
// switch_7948_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_7990
// lab_7990
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_7948_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_7990
        }
        case 0x1:
        {
// switch_7948_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_7990
        }
        case 0x2:
        {
// switch_7948_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_7990
        }
    }
}
// fun_79A0
fun_79A0() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    OP_MOVE_ALT 
    pri = arg_3;
    var_56 = pri;
    var_64 = alt;
    pri = floatadd(var_64, var_56)
    var_72 = pri;
    var_80 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_80)
    OP_MOVE_ALT 
    pri = arg_2;
    var_88 = pri;
    var_96 = alt;
    pri = floatadd(var_96, var_88)
    var_104 = pri;
    var_112 = arg_1;
    var_120 = arg_0;
    var_128 = 72;
    pri = fun_0D38(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_7AD8
fun_7AD8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7B70
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
    var_56 = 0;
    pri = fun_1A80()
// lab_7B70
    pri = arg_4;
    OP_JZER lab_7BA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B68(var_8)
// lab_7BA8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7C00
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7C00
    pri = 0;
    OP_JUMP lab_7C08
// lab_7C00
    pri = 1;
// lab_7C08
    OP_JZER lab_7CD0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7CD0
    var_16 = 0;
    pri = fun_04F0()
    OP_JZER lab_7CA8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_19C0(var_32, var_24)
    OP_JUMP lab_7CD0
// lab_7CD0
    pri = arg_2;
    OP_JZER lab_7DA8
    var_8 = 0;
    pri = fun_04F0()
    OP_JZER lab_7D78
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_16B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D00(var_40)
    OP_JUMP lab_7DA8
// lab_7DA8
    pri = arg_3;
    OP_JZER lab_7DE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A48(var_8)
// lab_7DE0
    pri = 0;
    return pri;
// lab_7D78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_16B0(var_16, var_8)
// lab_7CA8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_19C0(var_16, var_8)
}
// fun_7DF0
fun_7DF0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_7F70
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7E88
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
// lab_7F70
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_7E88
    pri = arg_0;
    OP_JNZ lab_7ED0
    var_8 = 23528;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_7EF0
// lab_7ED0
    var_8 = 23704;
    pri = SoundPostEvent(var_8)
// lab_7EF0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0858(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7F70
    var_24 = 80;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0390(var_32, var_24)
    var_48 = 0;
    pri = fun_0460()
}
// fun_7FB0
fun_7FB0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7638(var_24)
    pri = 0;
    return pri;
}
// fun_8018
fun_8018() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_8198(var_16)
    var_8 = pri;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    pri = GetFieldObjectPositionZ_(var_48)
    var_56 = pri;
    var_64 = arg_0;
    pri = GetFieldObjectPositionX_(var_64)
    var_72 = pri;
    var_80 = var_8;
    var_88 = 40;
    pri = fun_0BD8(var_80, var_72, var_64, var_56, var_48)
    var_96 = 24024;
    var_104 = 23968;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1AD8(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_8120
fun_8120() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_8198(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1B28(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_8198
fun_8198() {
    pri = arg_0;
    OP_JNZ lab_81E0
    var_8 = 24080;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_81E0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8228
    var_8 = 24232;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_8228
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 24384;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_8270
fun_8270() {
    pri = g_mode;
    switch (pri) {
// switch_8358
        case default:
        {
// switch_8358_case_default
            pri = CommandNOP()
            OP_JUMP lab_83B0
// lab_83B0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8358_case_0x0
            var_8 = 0;
            pri = fun_83C0()
            OP_JUMP lab_83B0
        }
        case 0x26f802d1eefd7d85:
        {
// switch_8358_case_0x26f802d1eefd7d85
            var_8 = 0;
            pri = fun_ADD8()
            OP_JUMP lab_83B0
        }
        case 0x618a8b0f09d2691b:
        {
// switch_8358_case_0x618a8b0f09d2691b
            var_8 = 0;
            pri = fun_AD90()
            OP_JUMP lab_83B0
        }
        case 0x7f56751294233a07:
        {
// switch_8358_case_0x7f56751294233a07
            var_8 = 0;
            pri = fun_AC88()
            OP_JUMP lab_83B0
        }
    }
}
// fun_83C0
fun_83C0() {
    pri = 0;
    return pri;
}
// fun_83D8
fun_83D8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
    pri = 0;
    return pri;
}
// fun_8440
fun_8440() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7AD8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8498
fun_8498() {
    var_8 = -9128224971166635613;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_84D8
fun_84D8() {
    pri = 0;
    return pri;
}
// fun_84F0
fun_84F0() {
    var_8 = 3;
    var_16 = 8;
    pri = fun_0968(var_8)
    OP_CONST_S -8, 258
    var_40 = 190;
    var_48 = 189;
    var_56 = 149;
    var_64 = 24;
    pri = fun_7898(var_56, var_48, var_40)
    var_16 = pri;
    var_72 = 31;
    var_80 = 0;
    var_88 = var_8;
    var_96 = var_16;
    var_104 = 32;
    pri = fun_2A90(var_96, var_88, var_80, var_72)
    pri = EvCameraStart()
    var_112 = 0;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_8018(var_120, var_112)
    var_136 = 1;
    var_144 = -1658347341221882014;
    var_152 = 16;
    pri = fun_8018(var_144, var_136)
    var_160 = 1;
    var_168 = 8802641224559852288;
    var_176 = 16;
    pri = fun_0CC0(var_168, var_160)
    var_184 = 1;
    var_192 = -1658347341221882014;
    var_200 = 16;
    pri = fun_0CC0(var_192, var_184)
    var_208 = 1;
    var_216 = 3458049540832089695;
    var_224 = 16;
    pri = fun_0CC0(var_216, var_208)
    var_232 = 1;
    var_240 = 3458048441320461484;
    var_248 = 16;
    pri = fun_0CC0(var_240, var_232)
    var_256 = 1;
    var_264 = 1;
    OP_PUSH4_C 4640537203540230144, 4672744098141044736, 4671226772094713856, 8802641224559852288
    var_272 = 48;
    pri = fun_0C28(var_264, var_256, var_248, var_240, var_232, var_224)
    var_280 = 1;
    var_288 = 1;
    var_296 = 0;
    OP_PUSH3_C 4670292187211104256, 4671268003780755456, -1658347341221882014
    var_304 = 48;
    pri = fun_0C28(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 2;
    var_320 = 2;
    var_328 = 8802641224559852288;
    var_336 = 24;
    pri = fun_1770(var_328, var_320, var_312)
    var_344 = 1;
    var_352 = 1;
    var_360 = -1658347341221882014;
    var_368 = 24;
    pri = fun_1770(var_360, var_352, var_344)
    var_376 = 0;
    var_384 = 60;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 24392;
    pri = SoundSetRTPC(var_400, var_392, var_384)
    var_408 = 15;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 1;
    var_432 = 0;
    var_440 = 0;
    var_448 = 125;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_456 = 48;
    pri = fun_0DB0(var_448, var_440, var_432, var_424, var_416, var_408)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_464 = 16;
    pri = fun_2DF8(var_456, var_448)
    var_472 = 0;
    var_480 = 1;
    var_488 = 1000;
    pri = float(var_488)
    var_496 = pri;
    var_504 = 4607182418800017408;
    var_512 = 32;
    pri = fun_2E60(var_504, var_496, var_488, var_480)
    var_520 = 0;
    var_528 = 4632951452917877965;
    var_536 = 0;
    OP_PUSH5_C 4671920102136956846, 4656675439388540273, 4671073126339848438, 4671846159979988910, 4657249274507076567
    var_544 = 4671043277347933389;
    var_552 = 1;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 0;
    pri = fun_2D68()
    var_568 = 0;
    var_576 = 4632951452917877965;
    var_584 = 0;
    OP_PUSH5_C 4671818108689585275, 4655211109802668196, 4671115160669378314, 4671744037340001075, 4656311061235095306
    var_592 = 4671085319923800474;
    var_600 = 240;
    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 80;
    var_616 = 8;
    var_624 = 16;
    pri = fun_0390(var_616, var_608)
    var_632 = 0;
    pri = fun_0460()
    var_640 = 120;
    var_648 = 8;
    pri = fun_0060(var_640)
    var_656 = 0;
    var_664 = 4632951452917877965;
    var_672 = 0;
    OP_PUSH5_C 4670702362772625162, 4645177494453165752, 4671135045337166643, 4670801755874997043, 4644712005210430505
    var_680 = 4671101485493507850;
    var_688 = 1;
    pri = EvCameraMove(var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_696 = 0;
    pri = fun_2D68()
    var_704 = 0;
    var_712 = 4632951452917877965;
    var_720 = 0;
    OP_PUSH5_C 4670729636158552146, 4640055881330054922, 4671213630181982863, 4670831008381854024, 4639001053854831739
    var_728 = 4671187269390706934;
    var_736 = 240;
    pri = EvCameraMove(var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_744 = 1;
    var_752 = 0;
    var_760 = 0;
    var_768 = 125;
    OP_PUSH2_C 4607182418800017408, -1658347341221882014
    var_776 = 48;
    pri = fun_0DB0(var_768, var_760, var_752, var_744, var_736, var_728)
    var_784 = 120;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 0;
    var_808 = 1;
    var_816 = 300;
    pri = float(var_816)
    var_824 = pri;
    var_832 = 4615063718147915776;
    var_840 = 32;
    pri = fun_2E60(var_832, var_824, var_816, var_808)
    var_848 = 0;
    var_856 = 4626857519672092262;
    var_864 = 0;
    OP_PUSH5_C 4671232769930643374, 4628816585509998428, 4671162315974314557, 4671238564356921754, 4628979840996490609
    var_872 = 4671126680802458337;
    var_880 = 1;
    pri = EvCameraMove(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_888 = 0;
    pri = fun_2D68()
    var_896 = 8802641224559852288;
    var_904 = 8;
    pri = fun_0E58(var_896)
    var_912 = -1658347341221882014;
    var_920 = 8;
    pri = fun_0E58(var_912)
    var_928 = 0;
    var_936 = 4626857519672092262;
    var_944 = 2;
    OP_PUSH5_C 4671238921698200781, 4628816585509998428, 4671163627141930680, 4671248556168839168, 4628993914745326141
    var_952 = 4671128833096469709;
    var_960 = 480;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 1;
    var_976 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_984 = 48;
    pri = fun_0C28(var_976, var_968, var_960, var_952, var_944, var_936)
    var_992 = 1;
    var_1000 = 1;
    var_1008 = 0;
    OP_PUSH3_C 4671149806280769536, 4671268003780755456, -1658347341221882014
    var_1016 = 48;
    pri = fun_0C28(var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1024 = 5;
    var_1032 = 8;
    pri = fun_0060(var_1024)
    var_1040 = 1;
    var_1048 = 0;
    var_1056 = 4641240890982006784;
    var_1064 = 0;
    var_1072 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_1080 = 72;
    pri = fun_0D38(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1088 = 1;
    var_1096 = 0;
    var_1104 = 4641240890982006784;
    var_1112 = 0;
    var_1120 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, -1658347341221882014
    var_1128 = 72;
    pri = fun_0D38(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1136 = 8802641224559852288;
    var_1144 = 8;
    pri = fun_0E58(var_1136)
    var_1152 = -1658347341221882014;
    var_1160 = 8;
    pri = fun_0E58(var_1152)
    var_1168 = 15;
    var_1176 = 8;
    pri = fun_0060(var_1168)
    var_1184 = 0;
    var_1192 = 1;
    var_1200 = 400;
    pri = float(var_1200)
    var_1208 = pri;
    var_1216 = 4616189618054758400;
    var_1224 = 32;
    pri = fun_2E60(var_1216, var_1208, var_1200, var_1192)
    var_1232 = 0;
    var_1240 = 4626519749700039475;
    var_1248 = 0;
    OP_PUSH5_C 4671237209208840520, 4636896324716477809, 4671277173707731108, 4671244779346397757, 4637486718480128410
    var_1256 = 4671312748406447800;
    var_1264 = 1;
    pri = EvCameraMove(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1272 = 0;
    pri = fun_2D68()
    var_1280 = 0;
    var_1288 = 4626519749700039475;
    var_1296 = 3;
    OP_PUSH5_C 4671240881577677292, 4636896324716477809, 4671276112679010304, 4671253778849071104, 4637486718480128410
    var_1304 = 4671310117824878346;
    var_1312 = 45;
    pri = EvCameraMove(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1320 = 0;
    var_1328 = 0;
    var_1336 = 0;
    var_1344 = 90;
    pri = float(var_1344)
    var_1352 = pri;
    var_1360 = 8802641224559852288;
    var_1368 = 40;
    pri = fun_0E08(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = 60;
    var_1384 = 8;
    pri = fun_0060(var_1376)
    var_1392 = 0;
    var_1400 = 4626519749700039475;
    var_1408 = 0;
    OP_PUSH5_C 4671234551139480371, 4636803437974163292, 4671171081830767002, 4671240433526688973, 4636681700046735933
    var_1416 = 4671135116805422449;
    var_1424 = 1;
    pri = EvCameraMove(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1432 = 0;
    pri = fun_2D68()
    var_1440 = 0;
    var_1448 = 4626519749700039475;
    var_1456 = 3;
    OP_PUSH5_C 4671238822742154281, 4636803437974163292, 4671172472712976138, 4671248905263780987, 4636682403734177710
    var_1464 = 4671137453267631473;
    var_1472 = 45;
    pri = EvCameraMove(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 0;
    var_1504 = 270;
    pri = float(var_1504)
    var_1512 = pri;
    var_1520 = -1658347341221882014;
    var_1528 = 40;
    pri = fun_0E08(var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1536 = 60;
    var_1544 = 8;
    pri = fun_0060(var_1536)
    var_1552 = 8802641224559852288;
    var_1560 = 8;
    pri = fun_0E58(var_1552)
    var_1568 = -1658347341221882014;
    var_1576 = 8;
    pri = fun_0E58(var_1568)
    var_1584 = 1;
    var_1592 = 1;
    var_1600 = -1;
    var_1608 = -1;
    var_1616 = 0;
    var_1624 = 3;
    var_1632 = -1658347341221882014;
    var_1640 = 56;
    pri = fun_2F58(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 60;
    var_1656 = 8;
    pri = fun_0060(var_1648)
    var_1664 = 0;
    var_1672 = 3;
    var_1680 = 0;
    var_1688 = 100;
    var_1696 = -1;
    OP_PUSH2_C 4068000995652385561, -1658347341221882014
    var_1704 = 56;
    pri = fun_23B0(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1712 = 1;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 3;
    var_1744 = -1658347341221882014;
    var_1752 = 40;
    pri = fun_5290(var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1760 = -1658347341221882014;
    var_1768 = 8;
    pri = fun_1030(var_1760)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_25C0(var_1776)
    var_1792 = 0;
    var_1800 = 1;
    var_1808 = 200;
    pri = float(var_1808)
    var_1816 = pri;
    var_1824 = 4618441417868443648;
    var_1832 = 32;
    pri = fun_2E60(var_1824, var_1816, var_1808, var_1800)
    var_1840 = 0;
    var_1848 = 4626519749700039475;
    var_1856 = 0;
    OP_PUSH5_C 4671233138267038679, 4637657714528480133, 4671200807127623926, 4671247871722850877, 4637593678971278459
    var_1864 = 4671234136073840886;
    var_1872 = 1;
    pri = EvCameraMove(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1880 = 0;
    pri = fun_2D68()
    var_1888 = 0;
    var_1896 = 4626519749700039475;
    var_1904 = 2;
    OP_PUSH5_C 4671236299362968535, 4637657714528480133, 4671199135869949706, 4671256695303663780, 4637594382658720236
    var_1912 = 4671229333956806574;
    var_1920 = 360;
    pri = EvCameraMove(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848)
    var_1928 = 0;
    var_1936 = 3;
    var_1944 = 0;
    var_1952 = 100;
    var_1960 = -1;
    OP_PUSH2_C 4067997697117500928, -1658347341221882014
    var_1968 = 56;
    pri = fun_23B0(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1976 = 1;
    var_1984 = 8;
    pri = fun_25C0(var_1976)
    var_1992 = 0;
    var_2000 = 1;
    var_2008 = 325;
    pri = float(var_2008)
    var_2016 = pri;
    var_2024 = 4608983858650965606;
    var_2032 = 32;
    pri = fun_2E60(var_2024, var_2016, var_2008, var_2000)
    var_2040 = 0;
    var_2048 = 4630488546871659725;
    var_2056 = 0;
    OP_PUSH5_C 4671321412558074675, 4634673376087905403, 4671190523945125151, 4671356148879175188, 4634470010417231954
    var_2064 = 4671179800957975265;
    var_2072 = 1;
    pri = EvCameraMove(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2080 = 0;
    pri = fun_2D68()
    var_2088 = 0;
    var_2096 = 4630488546871659725;
    var_2104 = 2;
    OP_PUSH5_C 4671313267925691924, 4634673376087905403, 4671172261056987791, 4671345013575164887, 4634469306729790177
    var_2112 = 4671154550673443389;
    var_2120 = 480;
    pri = EvCameraMove(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2128 = 0;
    var_2136 = 3;
    var_2144 = 0;
    var_2152 = 100;
    var_2160 = -1;
    OP_PUSH2_C 4067998796629129139, -1658347341221882014
    var_2168 = 56;
    pri = fun_23B0(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2176 = 1;
    var_2184 = 8;
    pri = fun_25C0(var_2176)
    var_2192 = 0;
    var_2200 = 1;
    var_2208 = 328;
    pri = float(var_2208)
    var_2216 = pri;
    var_2224 = 4610785298501913805;
    var_2232 = 32;
    pri = fun_2E60(var_2224, var_2216, var_2208, var_2200)
    var_2240 = 0;
    var_2248 = 4628546369532356198;
    var_2256 = 0;
    OP_PUSH5_C 4671241670477270221, 4636968804522980803, 4671178071975940588, 4671254696941280297, 4636994840958326538
    var_2264 = 4671144127303212073;
    var_2272 = 1;
    pri = EvCameraMove(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2280 = 0;
    pri = fun_2D68()
    var_2288 = 0;
    var_2296 = 4628546369532356198;
    var_2304 = 2;
    OP_PUSH5_C 4671238932693317059, 4636968804522980803, 4671177024691115131, 4671251959157327135, 4636994840958326538
    var_2312 = 4671143080018386616;
    var_2320 = 300;
    pri = EvCameraMove(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2336 = -1;
    var_2344 = 890;
    var_2352 = 16;
    pri = fun_28A0(var_2344, var_2336)
    var_24 = pri;
    pri = var_24;
    OP_JZER lab_9BA0
    var_2360 = 0;
    var_2368 = 3;
    var_2376 = 0;
    var_2384 = 100;
    var_2392 = -1;
    OP_PUSH2_C 4068004294187270194, -1658347341221882014
    var_2400 = 56;
    pri = fun_23B0(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2408 = 1;
    var_2416 = 8;
    pri = fun_25C0(var_2408)
    OP_JUMP lab_9C18
// lab_9BA0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 4068005393698898405, -1658347341221882014
    var_48 = 56;
    pri = fun_23B0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_25C0(var_56)
// lab_9C18
    var_8 = 6;
    var_16 = 6;
    var_24 = -1658347341221882014;
    var_32 = 24;
    pri = fun_1770(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 4628546369532356198;
    var_56 = 0;
    OP_PUSH5_C 4671227945823376507, 4638821613557178696, 4671252308252268954, 4671227967813609062, 4637944115317283226
    var_64 = 4671216183797738373;
    var_72 = 1;
    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_80 = 0;
    pri = fun_2D68()
    var_88 = 0;
    var_96 = 4629559679448514560;
    var_104 = 2;
    OP_PUSH5_C 4671227959567271854, 4637518384415008358, 4671232198184596931, 4671227981557504410, 4636527592496986849
    var_112 = 4671196070981287281;
    var_120 = 30;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 101;
    var_160 = -1;
    OP_PUSH2_C 4068002095164013772, -1658347341221882014
    var_168 = 56;
    pri = fun_23B0(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_25C0(var_176)
    var_192 = 1;
    var_200 = 1;
    var_208 = -1;
    var_216 = -1;
    var_224 = 0;
    var_232 = 20;
    var_240 = -1658347341221882014;
    var_248 = 56;
    pri = fun_2F58(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 0;
    var_264 = 3;
    var_272 = 2;
    var_280 = 101;
    var_288 = -1;
    OP_PUSH2_C 4068003194675641983, -1658347341221882014
    var_296 = 56;
    pri = fun_23B0(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 15;
    var_312 = 8;
    pri = fun_0060(var_304)
    var_320 = 0;
    var_328 = 1;
    var_336 = 250;
    pri = float(var_336)
    var_344 = pri;
    var_352 = 4612811918334230528;
    var_360 = 32;
    pri = fun_2E60(var_352, var_344, var_336, var_328)
    var_368 = 0;
    var_376 = 4627279732137158246;
    var_384 = 0;
    OP_PUSH5_C 4671246934389188198, 4636758401977889587, 4671242827713258455, 4671269053814359982, 4634907704006017024
    var_392 = 4671214924856924570;
    var_400 = 1;
    pri = EvCameraMove(var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 30;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 0;
    var_432 = 1;
    var_440 = 250;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 4611686018427387904;
    var_464 = 32;
    pri = fun_2E60(var_456, var_448, var_440, var_432)
    var_472 = 0;
    var_480 = 4629939670667073946;
    var_488 = 0;
    OP_PUSH5_C 4671212481192331837, 4637287574934105620, 4671240587458316861, 4671194130343264256, 4633474996374559785
    var_496 = 4671212283280238838;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 45;
    var_520 = 8;
    pri = fun_0060(var_512)
    var_528 = 0;
    pri = fun_2528()
    var_536 = 0;
    pri = fun_2680()
    var_544 = 24528;
    pri = SoundPostEvent(var_544)
    var_552 = 24744;
    pri = SoundPostEvent(var_552)
    var_560 = 0;
    var_568 = 80;
    pri = float(var_568)
    var_576 = pri;
    var_584 = 24992;
    pri = SoundSetRTPC(var_584, var_576, var_568)
    var_592 = 0;
    var_600 = 4629883375671731814;
    var_608 = 0;
    OP_PUSH5_C 4671224966146865234, 4643160902166894346, 4671219864412912353, 4671224691268958290, 4644897954616919982
    var_616 = 4671195290328031560;
    var_624 = 1;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    pri = fun_2D68()
    var_640 = 0;
    var_648 = 4633176632899246490;
    var_656 = 8;
    OP_PUSH5_C 4671210721973727396, 4662072678086501990, 4669656185705133507, 4671210447095820452, 4662179704548349706
    var_664 = 4669607043032930058;
    var_672 = 30;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 25128;
    var_688 = -1658347341221882014;
    var_696 = 16;
    pri = fun_1230(var_688, var_680)
    var_704 = 60;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 25312;
    pri = SoundPostEvent(var_720)
    var_728 = 30;
    var_736 = 8;
    pri = fun_0060(var_728)
    var_744 = 0;
    var_752 = 1;
    var_760 = 200;
    pri = float(var_760)
    var_768 = pri;
    var_776 = 4612811918334230528;
    var_784 = 32;
    pri = fun_2E60(var_776, var_768, var_760, var_752)
    var_792 = 0;
    var_800 = 4631952216750555136;
    var_808 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_816 = 4671031446602818519;
    var_824 = 1;
    pri = EvCameraMove(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 0;
    pri = fun_2D68()
    var_840 = 1;
    var_848 = 3;
    var_856 = 0;
    var_864 = 20;
    var_872 = -1658347341221882014;
    var_880 = 40;
    pri = fun_5290(var_872, var_864, var_856, var_848, var_840)
    var_888 = -1658347341221882014;
    var_896 = 8;
    pri = fun_1030(var_888)
    var_904 = 0;
    var_912 = 4631952216750555136;
    var_920 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_928 = 4671018568572878193;
    var_936 = 240;
    pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_944 = 30;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 0;
    var_968 = 120;
    var_976 = 850;
    pri = float(var_976)
    var_984 = pri;
    var_992 = 4605380978949069210;
    var_1000 = 32;
    pri = fun_2E60(var_992, var_984, var_976, var_968)
    var_1008 = 1;
    var_1016 = 0;
    var_1024 = 4641240890982006784;
    var_1032 = 0;
    var_1040 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_1048 = 72;
    pri = fun_0D38(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 1;
    var_1064 = 0;
    var_1072 = 4641240890982006784;
    var_1080 = 0;
    var_1088 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -1658347341221882014
    var_1096 = 72;
    pri = fun_0D38(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1104 = 8802641224559852288;
    var_1112 = 8;
    pri = fun_0E58(var_1104)
    var_1120 = -1658347341221882014;
    var_1128 = 8;
    pri = fun_0E58(var_1120)
    var_1136 = 15;
    var_1144 = 8;
    pri = fun_0060(var_1136)
    var_1152 = 0;
    var_1160 = 0;
    var_1168 = 0;
    var_1176 = 90;
    pri = float(var_1176)
    var_1184 = pri;
    var_1192 = 8802641224559852288;
    var_1200 = 40;
    pri = fun_0E08(var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1208 = 0;
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = 270;
    pri = float(var_1232)
    var_1240 = pri;
    var_1248 = -1658347341221882014;
    var_1256 = 40;
    pri = fun_0E08(var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1264 = 30;
    var_1272 = 8;
    pri = fun_0060(var_1264)
    var_1280 = 8802641224559852288;
    var_1288 = 8;
    pri = fun_0E58(var_1280)
    var_1296 = -1658347341221882014;
    var_1304 = 8;
    pri = fun_0E58(var_1296)
    var_1312 = 0;
    pri = fun_2AF0()
    var_1320 = 0;
    pri = fun_2B80()
    var_1328 = 0;
    pri = fun_2C28()
    OP_JZER lab_A880
    var_1336 = 0;
    pri = fun_2D18()
// lab_A880
    var_8 = 0;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_8120(var_16, var_8)
    var_32 = 1;
    var_40 = -1658347341221882014;
    var_48 = 16;
    pri = fun_8120(var_40, var_32)
    var_56 = 0;
    var_64 = 0;
    var_72 = 25536;
    pri = PokeMemoryCheckParty(var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A928
fun_A928() {
    pri = 0;
    return pri;
}
// fun_A940
fun_A940() {
    var_8 = 14;
    var_16 = 8;
    pri = fun_0828(var_8)
    var_24 = 3;
    var_32 = 8;
    pri = fun_0968(var_24)
    var_40 = 3000;
    var_48 = 8;
    pri = fun_7FB0(var_40)
    var_56 = 100;
    var_64 = 8021964092511761817;
    pri = WorkSet(var_64, var_56)
    var_72 = 100;
    var_80 = -7727870117976650933;
    pri = WorkSet(var_80, var_72)
    var_88 = 30;
    var_96 = 5709399143917384936;
    pri = WorkSet(var_96, var_88)
    var_104 = -1550676495148187892;
    pri = VanishFlagSet(var_104)
    var_112 = 5626903673887278750;
    pri = VanishFlagSet(var_112)
    var_120 = -1145167662867329443;
    pri = VanishFlagSet(var_120)
    var_128 = -4673310409164856701;
    pri = VanishFlagSet(var_128)
    var_136 = 2216618159322974925;
    pri = VanishFlagSet(var_136)
    var_144 = -1658347341221882014;
    pri = VanishFlagSet(var_144)
    var_152 = -3181508942575245480;
    pri = VanishFlagReset(var_152)
    var_160 = 7506713967005848083;
    pri = FlagSet(var_160)
    var_168 = 5501743159805903958;
    pri = FlagReset(var_168)
    var_176 = 7486487997080519139;
    pri = FlagReset(var_176)
    var_184 = 0;
    pri = fun_0BA8()
    pri = SaveClearParty()
    var_192 = -4287114950590366842;
    var_200 = 8;
    pri = fun_07F0(var_192)
    pri = 0;
    return pri;
}
// fun_AC30
fun_AC30() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_7DF0(var_16, var_8)
    var_32 = 0;
    pri = fun_2870()
    pri = 0;
    return pri;
}
// fun_AC88
fun_AC88() {
    var_8 = 0;
    pri = fun_83D8()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8440()
    var_24 = 0;
    pri = fun_8498()
    var_32 = 0;
    pri = fun_84D8()
    var_40 = 0;
    pri = fun_84F0()
    var_48 = 0;
    pri = fun_A928()
    var_56 = 0;
    pri = fun_A940()
    var_64 = 0;
    pri = fun_AC30()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_AD90
fun_AD90() {
    var_8 = 0;
    pri = fun_8498()
    var_16 = 0;
    pri = fun_A940()
    pri = 0;
    return pri;
}
// fun_ADD8
fun_ADD8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    OP_ZERO_P_S -16
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 1;
    var_56 = 1;
    var_64 = var_8;
    var_72 = 48;
    pri = fun_6FC0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = -9128224971166635613;
    pri = FlagGet(var_80)
    OP_JZER lab_AFD8
    var_88 = 25680;
    var_96 = 8;
    pri = fun_2768(var_88)
    var_104 = 0;
    pri = fun_27A0()
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    var_152 = -7750021528402695259;
    var_160 = var_8;
    var_168 = 56;
    pri = fun_2460(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_25C0(var_176)
    var_192 = 0;
    var_200 = 0;
    var_208 = 1;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 48;
    pri = fun_26B0(var_232, var_224, var_216, var_208, var_200, var_192)
    var_16 = pri;
    var_248 = 0;
    pri = fun_2680()
    var_256 = 0;
    pri = fun_2840()
    OP_JUMP lab_B0C0
// lab_AFD8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3596861753511570126;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_23B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_25C0(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    OP_PUSH2_C 7281888164659854013, 7281884866124969380
    var_112 = 1;
    var_120 = 48;
    pri = fun_26B0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_16 = pri;
    var_128 = 0;
    pri = fun_2680()
// lab_B0C0
    pri = var_16;
    OP_JNZ lab_B128
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7180(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
// lab_B128
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3596860653999941915;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_23B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_25C0(var_72)
    var_88 = 0;
    pri = fun_2680()
    var_96 = 10;
    var_104 = 8;
    pri = fun_0518(var_96)
    var_112 = 0;
    pri = fun_0550()
    var_120 = 25896;
    pri = SoundPostEvent(var_120)
    var_128 = 1;
    var_136 = 0;
    var_144 = 26168;
    var_152 = 8;
    var_160 = 32;
    pri = fun_03F0(var_152, var_144, var_136, var_128)
    var_168 = 0;
    pri = fun_0460()
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = var_8;
    var_208 = 32;
    pri = fun_7180(var_200, var_192, var_184, var_176)
    pri = IsPlayerUniform()
    var_24 = pri;
    pri = var_24;
    OP_JNZ lab_B300
    var_224 = 1;
    var_232 = 1;
    var_240 = 16;
    pri = fun_0280(var_232, var_224)
// lab_B300
    var_8 = -1658347341221882014;
    pri = VanishFlagReset(var_8)
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 4640537203540230144;
    var_64 = 27250;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 20000;
    pri = float(var_80)
    var_88 = pri;
    OP_PUSH2_C 9116614320094512028, -3307772254259144861
    var_96 = 80;
    pri = fun_0680(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_104 = 26240;
    pri = SoundPostEvent(var_104)
    var_112 = 1;
    var_120 = 0;
    var_128 = 4641240890982006784;
    var_136 = 0;
    var_144 = 0;
    var_152 = -150;
    pri = float(var_152)
    var_160 = pri;
    var_168 = 0;
    pri = float(var_168)
    var_176 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_184 = 72;
    pri = fun_79A0(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 26520;
    var_200 = 8;
    var_208 = 16;
    pri = fun_0390(var_200, var_192)
    var_216 = 0;
    pri = fun_0460()
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_0E58(var_224)
    pri = 0;
    return pri;
}
