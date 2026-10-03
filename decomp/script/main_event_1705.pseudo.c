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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = IsLoadedLogoFade_()
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
// fun_0570
fun_0570() {
    pri = arg_8;
    OP_JZER lab_05E0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_05E0
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
    pri = fun_04D0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0A40(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_06D0
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
// lab_06D0
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0728
// lab_0728
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0768
    OP_JUMP lab_07D8
// lab_0768
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_07A8
    OP_JUMP lab_07D8
// lab_07A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0728
// lab_07D8
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0858
// lab_0858
    var_8 = 0;
    pri = fun_0970()
    OP_JNZ lab_0890
    OP_JUMP lab_08C0
// lab_0890
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0858
// lab_08C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_08F0
// lab_08F0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0930
    pri = 0;
    return pri;
// lab_0930
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08F0
    pri = 0;
    return pri;
}
// fun_0970
fun_0970() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A40
fun_0A40() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
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
// fun_0B70
fun_0B70() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0C18(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = arg_2;
    var_96 = arg_0;
    var_104 = arg_1;
    var_112 = 48;
    pri = fun_0C18(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_0D18
fun_0D18() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1800(var_8)
    OP_JZER lab_0D90
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1830(var_24)
    OP_JNZ lab_0D90
    pri = 0;
    return pri;
// lab_0D90
    OP_JUMP lab_0DA0
// lab_0DA0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0E00
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0E00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DA0
    pri = 0;
    return pri;
}
// fun_0E40
fun_0E40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0E78
fun_0E78() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0EF0
fun_0EF0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0F38
    pri = 0;
    return pri;
// lab_0F38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0F78
// lab_0F78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1800(var_8)
    OP_JNZ lab_1000
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0FF0
    pri = 0;
    return pri;
// lab_1000
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_1048
    pri = 0;
    return pri;
// lab_1048
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_10A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1218(var_8)
    pri = 0;
    return pri;
// lab_10A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F78
    pri = 0;
    return pri;
// lab_0FF0
    OP_JUMP lab_1048
}
// fun_10F0
fun_10F0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1138
// lab_1138
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1190
    pri = 0;
    return pri;
// lab_1190
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_11D0
    pri = 0;
    return pri;
// lab_11D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1138
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1250
fun_1250() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12A0
    pri = 0;
    return pri;
// lab_12A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1800(var_8)
    OP_JZER lab_13D0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12F8
    OP_ZERO_P_S 64
// lab_13D0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1408
    OP_CONST_S 64, 1
// lab_1408
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1440
    OP_CONST_S 72, 1
// lab_1440
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
// lab_12F8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1320
    OP_ZERO_P_S 72
// lab_1320
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
    OP_JUMP lab_14E0
// lab_14E0
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1570
fun_1570() {
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
// fun_15D0
fun_15D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1610
fun_1610() {
    var_8 = 440;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1650
fun_1650() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1690
fun_1690() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_16C8
fun_16C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1708
fun_1708() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1740
fun_1740() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1650(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_16C8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_17A8
fun_17A8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1690(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1708(var_24)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1830
fun_1830() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1860
fun_1860() {
    OP_JUMP lab_1878
// lab_1878
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1908
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_18F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0EF0(var_8)
    pri = 0;
    return pri;
// lab_1908
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1998
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1988
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0EF0(var_8)
    pri = 0;
    return pri;
// lab_1998
    pri = 0;
    return pri;
// lab_1988
    OP_JUMP lab_19A8
// lab_19A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1878
    pri = 0;
    return pri;
// lab_18F8
    OP_JUMP lab_19A8
}
// fun_19E8
fun_19E8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0EF0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1860(var_40)
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1AA8
fun_1AA8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1AD0
fun_1AD0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B20
fun_1B20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1B98
fun_1B98() {
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
// switch_21B0
        case default:
        {
// switch_21B0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_21F8
// lab_21F8
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
            OP_JNZ lab_22A0
            var_88 = 0;
            pri = fun_2540()
// lab_22A0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_21B0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1D98
                case default:
                {
// switch_1D98_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E10
// lab_1E10
                    OP_JUMP lab_21F8
                }
                case 0x0:
                {
// switch_1D98_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1E10
                }
                case 0x1:
                {
// switch_1D98_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1E10
                }
                case 0x2:
                {
// switch_1D98_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1E10
                }
                case 0x3:
                {
// switch_1D98_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E10
                }
                case 0x4:
                {
// switch_1D98_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1E10
                }
                case 0x5:
                {
// switch_1D98_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1E10
                }
            }
        }
        case 0x65:
        {
// switch_21B0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1F50
                case default:
                {
// switch_1F50_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FC8
// lab_1FC8
                    OP_JUMP lab_21F8
                }
                case 0x0:
                {
// switch_1F50_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1FC8
                }
                case 0x1:
                {
// switch_1F50_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1FC8
                }
                case 0x2:
                {
// switch_1F50_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1FC8
                }
                case 0x3:
                {
// switch_1F50_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FC8
                }
                case 0x4:
                {
// switch_1F50_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1FC8
                }
                case 0x5:
                {
// switch_1F50_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1FC8
                }
            }
        }
        case 0x66:
        {
// switch_21B0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2108
                case default:
                {
// switch_2108_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2180
// lab_2180
                    OP_JUMP lab_21F8
                }
                case 0x0:
                {
// switch_2108_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2180
                }
                case 0x1:
                {
// switch_2108_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2180
                }
                case 0x2:
                {
// switch_2108_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2180
                }
                case 0x3:
                {
// switch_2108_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2180
                }
                case 0x4:
                {
// switch_2108_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2180
                }
                case 0x5:
                {
// switch_2108_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2180
                }
            }
        }
    }
}
// fun_22B8
fun_22B8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1B98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2320
fun_2320() {
    pri = 488;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 568;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0EB8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_23C8
    pri = 1;
    return pri;
// lab_23C8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2410
fun_2410() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2460
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2320(var_8)
    arg_2 = pri;
// lab_2460
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1B98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24C0
fun_24C0() {
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 16;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_2410(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2540
fun_2540() {
    OP_JUMP lab_2558
// lab_2558
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2598
    pri = 0;
    return pri;
// lab_2598
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2558
    pri = 0;
    return pri;
}
// fun_25D8
fun_25D8() {
    var_8 = 0;
    pri = fun_2540()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2688
    var_32 = 616;
    pri = SoundPostEvent(var_32)
// lab_2688
    pri = 0;
    return pri;
}
// fun_2698
fun_2698() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_26C8
fun_26C8() {
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
// fun_2730
fun_2730() {
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
// fun_2790
fun_2790() {
    OP_JUMP lab_27A8
// lab_27A8
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_27E0
    pri = 0;
    return pri;
// lab_27E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27A8
    pri = 0;
    return pri;
}
// fun_2820
fun_2820() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2850
fun_2850() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_28C8
fun_28C8() {
    var_8 = 0;
    pri = fun_2850()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2948
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2948
    pri = 1;
    return pri;
// lab_2948
    var_8 = 0;
    pri = fun_2850()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2988
    pri = 1;
    return pri;
// lab_2988
    var_8 = 0;
    pri = fun_2850()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_29B8
fun_29B8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2A08
fun_2A08() {
    OP_JUMP lab_2A20
// lab_2A20
    pri = EvCameraMoveWait_()
    OP_JZER lab_2A58
    pri = 0;
    return pri;
// lab_2A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A20
    pri = 0;
    return pri;
}
// fun_2A98
fun_2A98() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2B00(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2BD8()
    pri = 0;
    return pri;
}
// fun_2B00
fun_2B00() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B58
fun_2B58() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2B00(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2BD8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2BD8
fun_2BD8() {
    OP_JUMP lab_2BF0
// lab_2BF0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2C58
// lab_2C48
    pri = 0;
    return pri;
// lab_2C58
    OP_JUMP lab_2BF0
    pri = 0;
    return pri;
}
// fun_2C78
fun_2C78() {
    pri = arg_6;
    OP_JNZ lab_2CB0
    var_8 = 0;
    pri = fun_14F0()
// lab_2CB0
    pri = arg_1;
    switch (pri) {
// switch_4218
        case default:
        {
// switch_4218_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4568
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4568
            pri = 1;
            OP_JUMP lab_4570
// lab_4568
            pri = 0;
// lab_4570
            OP_JZER lab_46C8
            var_16 = 8464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0EB8(var_24, var_16)
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
            var_64 = 8568;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4728
// lab_46C8
            var_8 = 64;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4728
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4788
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_47E8
// lab_4788
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_47E8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_47E8
            pri = arg_2;
            OP_JZER lab_4828
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4828
            var_8 = 0;
            pri = fun_1530()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4218_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x1:
        {
// switch_4218_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x2:
        {
// switch_4218_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x3:
        {
// switch_4218_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x4:
        {
// switch_4218_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x5:
        {
// switch_4218_case_0x5
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
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0x6:
        {
// switch_4218_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0x7:
        {
// switch_4218_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0x8:
        {
// switch_4218_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x9:
        {
// switch_4218_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0xa:
        {
// switch_4218_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0xb:
        {
// switch_4218_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0xc:
        {
// switch_4218_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0xd:
        {
// switch_4218_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0xe:
        {
// switch_4218_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5944;
            var_72 = 5936;
            var_80 = 5928;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0xf:
        {
// switch_4218_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x10:
        {
// switch_4218_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x11:
        {
// switch_4218_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5968;
            var_72 = 5960;
            var_80 = 5952;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0x12:
        {
// switch_4218_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5992;
            var_72 = 5984;
            var_80 = 5976;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0x13:
        {
// switch_4218_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x14:
        {
// switch_4218_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x15:
        {
// switch_4218_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x16:
        {
// switch_4218_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x17:
        {
// switch_4218_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x18:
        {
// switch_4218_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x19:
        {
// switch_4218_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6016;
            var_72 = 6008;
            var_80 = 6000;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4218_case_default
        }
        case 0x1a:
        {
// switch_4218_case_0x1a
            var_8 = 1;
            var_16 = 6024;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E78(var_24, var_16, var_8)
            var_40 = 6160;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0E40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6240;
            var_88 = 6232;
            var_96 = 6224;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1250(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4218_case_default
        }
        case 0x1b:
        {
// switch_4218_case_0x1b
            var_8 = 3;
            var_16 = 6248;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E78(var_24, var_16, var_8)
            var_40 = 6384;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0E40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6464;
            var_88 = 6456;
            var_96 = 6448;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1250(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4218_case_default
        }
        case 0x1c:
        {
// switch_4218_case_0x1c
            var_8 = 2;
            var_16 = 6472;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E78(var_24, var_16, var_8)
            var_40 = 6608;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0E40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6688;
            var_88 = 6680;
            var_96 = 6672;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1250(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4218_case_default
        }
        case 0x1d:
        {
// switch_4218_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x1e:
        {
// switch_4218_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x1f:
        {
// switch_4218_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x20:
        {
// switch_4218_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7104;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x21:
        {
// switch_4218_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7224;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x22:
        {
// switch_4218_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x23:
        {
// switch_4218_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x24:
        {
// switch_4218_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x25:
        {
// switch_4218_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x26:
        {
// switch_4218_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x27:
        {
// switch_4218_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x28:
        {
// switch_4218_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
        case 0x29:
        {
// switch_4218_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4218_case_default
        }
    }
}
// fun_4858
fun_4858() {
    pri = arg_5;
    OP_JNZ lab_4890
    var_8 = 0;
    pri = fun_14F0()
// lab_4890
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_48E0
    OP_CONST_S -8, -1
// lab_48E0
    pri = arg_1;
    switch (pri) {
// switch_6398
        case default:
        {
// switch_6398_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6840
            var_520 = 28328;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0EB8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6840
            pri = 1;
            OP_JUMP lab_6848
// lab_6840
            pri = 0;
// lab_6848
            OP_JZER lab_6898
            var_8 = 64;
            var_16 = 28424;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6AF0
// lab_6898
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6900
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6900
            pri = 1;
            OP_JUMP lab_6908
// lab_6900
            pri = 0;
// lab_6908
            OP_JZER lab_6A90
            var_16 = 28600;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0EB8(var_24, var_16)
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
            var_176 = 28704;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28720;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8584;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6AF0
// lab_6A90
            var_8 = 64;
            alt = 8584;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6AF0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6B60
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6B60
            var_8 = 0;
            pri = fun_1530()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6398_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x1:
        {
// switch_6398_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x2:
        {
// switch_6398_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x3:
        {
// switch_6398_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x4:
        {
// switch_6398_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x5:
        {
// switch_6398_case_0x5
            var_8 = 2;
            var_16 = 18584;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1218(var_40)
            OP_JUMP switch_6398_case_default
        }
        case 0x6:
        {
// switch_6398_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x7:
        {
// switch_6398_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x8:
        {
// switch_6398_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x9:
        {
// switch_6398_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0xa:
        {
// switch_6398_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0xb:
        {
// switch_6398_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0xc:
        {
// switch_6398_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0xd:
        {
// switch_6398_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19056;
            var_80 = 18872;
            var_88 = 18680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0xe:
        {
// switch_6398_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19888;
            var_72 = 19680;
            var_80 = 19464;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0xf:
        {
// switch_6398_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20280;
            var_72 = 20160;
            var_80 = 20032;
            var_88 = 19896;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x10:
        {
// switch_6398_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20624;
            var_72 = 20520;
            var_80 = 20408;
            var_88 = 20288;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x11:
        {
// switch_6398_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20968;
            var_72 = 20864;
            var_80 = 20752;
            var_88 = 20632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x12:
        {
// switch_6398_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x13:
        {
// switch_6398_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x14:
        {
// switch_6398_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21528;
            var_72 = 21352;
            var_80 = 21168;
            var_88 = 20976;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x15:
        {
// switch_6398_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x16:
        {
// switch_6398_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x17:
        {
// switch_6398_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x18:
        {
// switch_6398_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x19:
        {
// switch_6398_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x1a:
        {
// switch_6398_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x1b:
        {
// switch_6398_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x1c:
        {
// switch_6398_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21920;
            var_72 = 21800;
            var_80 = 21672;
            var_88 = 21536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x1d:
        {
// switch_6398_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x1e:
        {
// switch_6398_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22384;
            var_72 = 22240;
            var_80 = 22088;
            var_88 = 21928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x1f:
        {
// switch_6398_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x20:
        {
// switch_6398_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x21:
        {
// switch_6398_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x22:
        {
// switch_6398_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x23:
        {
// switch_6398_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x24:
        {
// switch_6398_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22752;
            var_72 = 22640;
            var_80 = 22520;
            var_88 = 22392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x25:
        {
// switch_6398_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23120;
            var_72 = 23008;
            var_80 = 22888;
            var_88 = 22760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x26:
        {
// switch_6398_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x27:
        {
// switch_6398_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x28:
        {
// switch_6398_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x29:
        {
// switch_6398_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23560;
            var_72 = 23424;
            var_80 = 23280;
            var_88 = 23128;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x2a:
        {
// switch_6398_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23952;
            var_72 = 23832;
            var_80 = 23704;
            var_88 = 23568;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x2b:
        {
// switch_6398_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24368;
            var_72 = 24240;
            var_80 = 24104;
            var_88 = 23960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x2c:
        {
// switch_6398_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24808;
            var_72 = 24672;
            var_80 = 24528;
            var_88 = 24376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x2d:
        {
// switch_6398_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x2e:
        {
// switch_6398_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25128;
            var_72 = 25032;
            var_80 = 24928;
            var_88 = 24816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x2f:
        {
// switch_6398_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25520;
            var_72 = 25400;
            var_80 = 25272;
            var_88 = 25136;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x30:
        {
// switch_6398_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25912;
            var_72 = 25792;
            var_80 = 25664;
            var_88 = 25528;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x31:
        {
// switch_6398_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x32:
        {
// switch_6398_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x33:
        {
// switch_6398_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26304;
            var_72 = 26184;
            var_80 = 26056;
            var_88 = 25920;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x34:
        {
// switch_6398_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26672;
            var_72 = 26560;
            var_80 = 26440;
            var_88 = 26312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x35:
        {
// switch_6398_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27160;
            var_72 = 27008;
            var_80 = 26848;
            var_88 = 26680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x36:
        {
// switch_6398_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27528;
            var_72 = 27416;
            var_80 = 27296;
            var_88 = 27168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x37:
        {
// switch_6398_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x38:
        {
// switch_6398_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27896;
            var_72 = 27784;
            var_80 = 27664;
            var_88 = 27536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1250(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6398_case_default
        }
        case 0x39:
        {
// switch_6398_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x3a:
        {
// switch_6398_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x3b:
        {
// switch_6398_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x3c:
        {
// switch_6398_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27904;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x3d:
        {
// switch_6398_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28080;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
        case 0x3e:
        {
// switch_6398_case_0x3e
            var_8 = 4;
            var_16 = 28224;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E78(var_24, var_16, var_8)
            OP_JUMP switch_6398_case_default
        }
    }
}
// fun_6B90
fun_6B90() {
    pri = arg_4;
    OP_JNZ lab_6BC8
    var_8 = 0;
    pri = fun_14F0()
// lab_6BC8
    pri = arg_1;
    switch (pri) {
// switch_7FA0
        case default:
        {
// switch_7FA0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29296;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1800(var_264)
            OP_JZER lab_8568
            pri = arg_3;
            switch (pri) {
// switch_8510
                case default:
                {
// switch_8510_case_default
                    OP_JUMP lab_8820
// lab_8820
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8890
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8890
                    var_8 = 0;
                    pri = fun_1530()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8510_case_0x1
                    var_8 = 32;
                    var_16 = 29448;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8510_case_default
                }
                case 0x2:
                {
// switch_8510_case_0x2
                    var_8 = 32;
                    var_16 = 29552;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8510_case_default
                }
                case 0x3:
                {
// switch_8510_case_0x3
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8510_case_default
                }
            }
// lab_8568
            pri = arg_1;
            OP_JZER lab_85B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_85B8
            pri = 0;
            OP_JUMP lab_85C0
// lab_85B8
            pri = 1;
// lab_85C0
            OP_JZER lab_8628
            var_8 = 29648;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0EB8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8628
            pri = 1;
            OP_JUMP lab_8630
// lab_8628
            pri = 0;
// lab_8630
            OP_JZER lab_8680
            var_8 = 32;
            var_16 = 29744;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8820
// lab_8680
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_86E8
            var_8 = 32;
            var_16 = 29904;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8820
// lab_86E8
            var_16 = 30024;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0EB8(var_24, var_16)
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
            var_176 = 30128;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30144;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7FA0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x1:
        {
// switch_7FA0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x2:
        {
// switch_7FA0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x3:
        {
// switch_7FA0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x4:
        {
// switch_7FA0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x5:
        {
// switch_7FA0_case_0x5
            var_8 = 1;
            var_16 = 28776;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1218(var_40)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x6:
        {
// switch_7FA0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x7:
        {
// switch_7FA0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x8:
        {
// switch_7FA0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x9:
        {
// switch_7FA0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0xa:
        {
// switch_7FA0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0xb:
        {
// switch_7FA0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0xc:
        {
// switch_7FA0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0xd:
        {
// switch_7FA0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0xe:
        {
// switch_7FA0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0xf:
        {
// switch_7FA0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x10:
        {
// switch_7FA0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x11:
        {
// switch_7FA0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x12:
        {
// switch_7FA0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x13:
        {
// switch_7FA0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x14:
        {
// switch_7FA0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x15:
        {
// switch_7FA0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x16:
        {
// switch_7FA0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x17:
        {
// switch_7FA0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x18:
        {
// switch_7FA0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x19:
        {
// switch_7FA0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x1a:
        {
// switch_7FA0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x1b:
        {
// switch_7FA0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x1c:
        {
// switch_7FA0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x1d:
        {
// switch_7FA0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x1e:
        {
// switch_7FA0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x1f:
        {
// switch_7FA0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x20:
        {
// switch_7FA0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x21:
        {
// switch_7FA0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x22:
        {
// switch_7FA0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x23:
        {
// switch_7FA0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x24:
        {
// switch_7FA0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x25:
        {
// switch_7FA0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x26:
        {
// switch_7FA0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x27:
        {
// switch_7FA0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x28:
        {
// switch_7FA0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x29:
        {
// switch_7FA0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x2a:
        {
// switch_7FA0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x2b:
        {
// switch_7FA0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x2c:
        {
// switch_7FA0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x2d:
        {
// switch_7FA0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x2e:
        {
// switch_7FA0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x2f:
        {
// switch_7FA0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x30:
        {
// switch_7FA0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x31:
        {
// switch_7FA0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x32:
        {
// switch_7FA0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x33:
        {
// switch_7FA0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x34:
        {
// switch_7FA0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x35:
        {
// switch_7FA0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x36:
        {
// switch_7FA0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x37:
        {
// switch_7FA0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x38:
        {
// switch_7FA0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x39:
        {
// switch_7FA0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x3a:
        {
// switch_7FA0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x3b:
        {
// switch_7FA0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x3c:
        {
// switch_7FA0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28872;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x3d:
        {
// switch_7FA0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29048;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
        case 0x3e:
        {
// switch_7FA0_case_0x3e
            var_8 = 3;
            var_16 = 29192;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E78(var_24, var_16, var_8)
            OP_JUMP switch_7FA0_case_default
        }
    }
}
// fun_88C0
fun_88C0() {
    pri = 30192;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8948
// lab_8948
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8AC8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8AB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8A08
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8A08
    pri = 0;
    OP_JUMP lab_8A10
// lab_8AC8
    pri = 0;
    return pri;
// lab_8AB8
    OP_JUMP lab_8940
// lab_8940
    OP_INC_P_S -936
// lab_8A08
    pri = 1;
// lab_8A10
    OP_JZER lab_8A88
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8A80
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8A88
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8A80
}
// fun_8AE8
fun_8AE8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8B80
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1AA8()
// lab_8B80
    pri = arg_4;
    OP_JZER lab_8BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B60(var_8)
// lab_8BB8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8C10
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8C10
    pri = 0;
    OP_JUMP lab_8C18
// lab_8C10
    pri = 1;
// lab_8C18
    OP_JZER lab_8CE0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8CE0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8CB8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_19E8(var_32, var_24)
    OP_JUMP lab_8CE0
// lab_8CE0
    pri = arg_2;
    OP_JZER lab_8DB8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8D88
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_15D0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AC0(var_40)
    OP_JUMP lab_8DB8
// lab_8DB8
    pri = arg_3;
    OP_JZER lab_8DF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A70(var_8)
// lab_8DF0
    pri = 0;
    return pri;
// lab_8D88
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_15D0(var_16, var_8)
// lab_8CB8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_19E8(var_16, var_8)
}
// fun_8E00
fun_8E00() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_8F80
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8E98
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_8F80
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_8E98
    pri = arg_0;
    OP_JNZ lab_8EE0
    var_8 = 31112;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_8F00
// lab_8EE0
    var_8 = 31288;
    pri = SoundPostEvent(var_8)
// lab_8F00
    var_8 = 0;
    var_16 = 8;
    pri = fun_06E0(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8F80
    var_24 = 80;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_8FC0
fun_8FC0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_88C0(var_24)
    pri = 0;
    return pri;
}
// fun_9028
fun_9028() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_91A8(var_16)
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
    pri = fun_0998(var_80, var_72, var_64, var_56, var_48)
    var_96 = 31608;
    var_104 = 31552;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1AD0(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_9130
fun_9130() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_91A8(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1B20(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_91A8
fun_91A8() {
    pri = arg_0;
    OP_JNZ lab_91F0
    var_8 = 31664;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_91F0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9238
    var_8 = 31816;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_9238
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 31968;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_9280
fun_9280() {
    pri = g_mode;
    switch (pri) {
// switch_9340
        case default:
        {
// switch_9340_case_default
            pri = CommandNOP()
            OP_JUMP lab_9388
// lab_9388
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9340_case_0x0
            var_8 = 0;
            pri = fun_9398()
            OP_JUMP lab_9388
        }
        case 0x30105b2aeb03c6fd:
        {
// switch_9340_case_0x30105b2aeb03c6fd
            var_8 = 0;
            pri = fun_D898()
            OP_JUMP lab_9388
        }
        case 0x5723412787960bf1:
        {
// switch_9340_case_0x5723412787960bf1
            var_8 = 0;
            pri = fun_D9A0()
            OP_JUMP lab_9388
        }
    }
}
// fun_9398
fun_9398() {
    pri = 0;
    return pri;
}
// fun_93B0
fun_93B0() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = -4197569636683807137;
    pri = FlagGet(var_56)
    OP_JNZ lab_9490
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 31976;
    var_120 = 56;
    pri = fun_26C8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
// lab_9490
    pri = 0;
    return pri;
}
// fun_94A0
fun_94A0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8AE8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_94F8
fun_94F8() {
    var_8 = 2029204762929083870;
    var_16 = 8;
    pri = fun_07F0(var_8)
    pri = 0;
    return pri;
}
// fun_9538
fun_9538() {
    var_8 = 0;
    pri = fun_0820()
    pri = 0;
    return pri;
}
// fun_9568
fun_9568() {
    OP_CONST_S -8, 258
    var_16 = 23;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 134;
    var_48 = 32;
    pri = fun_2730(var_40, var_32, var_24, var_16)
    var_56 = 32016;
    pri = SoundPostEvent(var_56)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 101;
    var_96 = -1;
    OP_PUSH2_C 760589186071077550, 2029204762929083870
    var_104 = 56;
    pri = fun_24C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_25D8(var_112)
    var_128 = 0;
    pri = fun_2698()
    var_136 = 0;
    var_144 = 8802641224559852288;
    var_152 = 16;
    pri = fun_9028(var_144, var_136)
    var_160 = 1;
    var_168 = 2029204762929083870;
    var_176 = 16;
    pri = fun_9028(var_168, var_160)
    pri = EvCameraStart()
    var_184 = 1;
    var_192 = 8802641224559852288;
    var_200 = 16;
    pri = fun_0A80(var_192, var_184)
    var_208 = 1;
    var_216 = 2029204762929083870;
    var_224 = 16;
    pri = fun_0A80(var_216, var_208)
    var_232 = 1;
    var_240 = 3458049540832089695;
    var_248 = 16;
    pri = fun_0A80(var_240, var_232)
    var_256 = 1;
    var_264 = 3458048441320461484;
    var_272 = 16;
    pri = fun_0A80(var_264, var_256)
    var_280 = 1;
    var_288 = 1;
    OP_PUSH4_C 4636033603912859648, 4671226772094713856, 4671185540408672256, 8802641224559852288
    var_296 = 48;
    pri = fun_09E8(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 1;
    var_312 = 1;
    OP_PUSH4_C -9223372036854775808, 4670951894187769856, 4671268003780755456, 2029204762929083870
    var_320 = 48;
    pri = fun_09E8(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 2;
    var_336 = 2;
    var_344 = 8802641224559852288;
    var_352 = 24;
    pri = fun_1740(var_344, var_336, var_328)
    var_360 = 2029204762929083870;
    var_368 = 8;
    pri = fun_17A8(var_360)
    var_376 = 0;
    var_384 = 60;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 32176;
    pri = SoundSetRTPC(var_400, var_392, var_384)
    var_408 = 15;
    var_416 = 8;
    pri = fun_0060(var_408)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_424 = 16;
    pri = fun_2A98(var_416, var_408)
    var_432 = 0;
    var_440 = 1;
    var_448 = 700;
    pri = float(var_448)
    var_456 = pri;
    var_464 = 4611686018427387904;
    var_472 = 32;
    pri = fun_2B00(var_464, var_456, var_448, var_440)
    var_480 = 0;
    var_488 = 4631952216750555136;
    var_496 = 0;
    OP_PUSH5_C 4671026100227528458, 4633414479254566994, 4671251747501338788, 4670921058384168878, 4631234455559942963
    var_504 = 4671246109755467366;
    var_512 = 1;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    pri = fun_2A08()
    var_528 = 0;
    var_536 = 4631952216750555136;
    var_544 = 2;
    OP_PUSH5_C 4671017441573459722, 4633234335269472174, 4671251285706455122, 4670912399730100142, 4631054311574848143
    var_552 = 4671245647960583700;
    var_560 = 180;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 80;
    var_576 = 8;
    var_584 = 16;
    pri = fun_0280(var_576, var_568)
    var_592 = 0;
    pri = fun_0350()
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH2_C 2029204762929083870, 8802641224559852288
    var_632 = 48;
    pri = fun_0C18(var_624, var_616, var_608, var_600, var_592, var_584)
    var_640 = 45;
    var_648 = 8;
    pri = fun_0060(var_640)
    var_656 = 8802641224559852288;
    var_664 = 8;
    pri = fun_0D18(var_656)
    var_672 = 1;
    var_680 = 0;
    var_688 = 0;
    var_696 = 60;
    OP_PUSH2_C 4607182418800017408, 2029204762929083870
    var_704 = 48;
    pri = fun_0B70(var_696, var_688, var_680, var_672, var_664, var_656)
    var_712 = 45;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 0;
    var_736 = 4631952216750555136;
    var_744 = 0;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671211002349192479, 4654693239825985700
    var_752 = 4670926311300970578;
    var_760 = 1;
    pri = EvCameraMove(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 0;
    pri = fun_2A08()
    var_776 = 0;
    var_784 = 4631952216750555136;
    var_792 = 2;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671487458055322337, 4654693019923660145
    var_800 = 4670935629662015980;
    var_808 = 1200;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 15;
    var_824 = 8;
    pri = fun_0060(var_816)
    var_832 = 3;
    var_840 = 0;
    var_848 = 100;
    var_856 = 2761592607192094548;
    var_864 = 32;
    pri = fun_22B8(var_856, var_848, var_840, var_832)
    var_872 = 2029204762929083870;
    var_880 = 8;
    pri = fun_0D18(var_872)
    var_888 = 1;
    var_896 = 8;
    pri = fun_25D8(var_888)
    var_904 = 0;
    pri = fun_2698()
    var_912 = 1;
    var_920 = 1;
    var_928 = 0;
    OP_PUSH3_C 4671158052617977856, 4671268003780755456, 2029204762929083870
    var_936 = 48;
    pri = fun_09E8(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 5;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 1;
    var_968 = 0;
    var_976 = 4641240890982006784;
    var_984 = 0;
    var_992 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, 2029204762929083870
    var_1000 = 72;
    pri = fun_0AF8(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 5;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 0;
    var_1032 = 4631952216750555136;
    var_1040 = 0;
    OP_PUSH5_C 4671284779579416248, 4640362689054669537, 4671190598162160026, 4671368114314464461, 4644067075670042214
    var_1048 = 4671137068438561751;
    var_1056 = 1;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 0;
    pri = fun_2A08()
    var_1072 = 0;
    var_1080 = 4631952216750555136;
    var_1088 = 2;
    OP_PUSH5_C 4671288331001973965, 4638860316366476411, 4671188316675532390, 4671371665737022177, 4643315889325945651
    var_1096 = 4671134786951934116;
    var_1104 = 180;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 2029204762929083870;
    var_1120 = 8;
    pri = fun_0D18(var_1112)
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 0;
    var_1152 = 0;
    OP_PUSH2_C 2029204762929083870, 8802641224559852288
    var_1160 = 48;
    pri = fun_0C18(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1168 = 8802641224559852288;
    var_1176 = 8;
    pri = fun_0D18(var_1168)
    var_1184 = 1;
    var_1192 = 0;
    var_1200 = 15;
    var_1208 = -30;
    pri = float(var_1208)
    var_1216 = pri;
    var_1224 = 0;
    var_1232 = 2029204762929083870;
    var_1240 = 48;
    pri = fun_1570(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1248 = 1;
    var_1256 = 1;
    var_1264 = -1;
    var_1272 = -1;
    var_1280 = 0;
    var_1288 = 29;
    var_1296 = 2029204762929083870;
    var_1304 = 56;
    pri = fun_4858(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1312 = 15;
    var_1320 = 8;
    pri = fun_0060(var_1312)
    var_1328 = 0;
    var_1336 = 1;
    var_1344 = 250;
    pri = float(var_1344)
    var_1352 = pri;
    var_1360 = 4611686018427387904;
    var_1368 = 32;
    pri = fun_2B00(var_1360, var_1352, var_1344, var_1336)
    var_1376 = 0;
    var_1384 = 4629883375671731814;
    var_1392 = 0;
    OP_PUSH5_C 4671189795518671749, 4640347911618392228, 4671302729106739692, 4671264455106976809, 4633645288735469732
    var_1400 = 4671235584680410481;
    var_1408 = 1;
    pri = EvCameraMove(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1416 = 0;
    pri = fun_2A08()
    var_1424 = 0;
    var_1432 = 4629883375671731814;
    var_1440 = 2;
    OP_PUSH5_C 4671184286965416591, 4640347911618392228, 4671295708724996342, 4671268729458429788, 4633669214108490138
    var_1448 = 4671241340623781888;
    var_1456 = 180;
    pri = EvCameraMove(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1464 = 0;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 100;
    var_1496 = -1;
    OP_PUSH2_C 760588086559449339, 2029204762929083870
    var_1504 = 56;
    pri = fun_2410(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_25D8(var_1512)
    var_1528 = 0;
    pri = fun_2698()
    var_1536 = 0;
    var_1544 = 1;
    var_1552 = 500;
    pri = float(var_1552)
    var_1560 = pri;
    var_1568 = 4613937818241073152;
    var_1576 = 32;
    pri = fun_2B00(var_1568, var_1560, var_1552, var_1544)
    OP_PUSH2_C 4618666597849812173, 4630333735634468864
    var_1584 = 0;
    OP_PUSH5_C 4671112483358564680, 4652912998559221023, 4671495643919391130, 4671205205174135030, 4652819320168534508
    var_1592 = 4671544965262234092;
    var_1600 = 1;
    pri = EvCameraMove(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1608 = 0;
    pri = fun_2A08()
    OP_PUSH2_C 4618666597849812173, 4630333735634468864
    var_1616 = 2;
    OP_PUSH5_C 4671039791896073339, 4652912998559221023, 4671632274731816714, 4671132513711643689, 4652819320168534508
    var_1624 = 4671681593325880607;
    var_1632 = 420;
    pri = EvCameraMove(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1640 = 3;
    var_1648 = 0;
    var_1656 = 100;
    var_1664 = 2761595905726979181;
    var_1672 = 32;
    pri = fun_22B8(var_1664, var_1656, var_1648, var_1640)
    var_1680 = 1;
    var_1688 = 8;
    pri = fun_25D8(var_1680)
    var_1696 = 0;
    pri = fun_2698()
    var_1704 = 0;
    var_1712 = 1;
    var_1720 = 250;
    pri = float(var_1720)
    var_1728 = pri;
    var_1736 = 4613487458278336102;
    var_1744 = 32;
    pri = fun_2B00(var_1736, var_1728, var_1720, var_1712)
    var_1752 = 0;
    var_1760 = 4628546369532356198;
    var_1768 = 0;
    OP_PUSH5_C 4671211579592797061, 4637268575373177651, 4671220908948958740, 4671263055978430464, 4638361401970256773
    var_1776 = 4671312514760226898;
    var_1784 = 1;
    pri = EvCameraMove(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1792 = 0;
    pri = fun_2A08()
    var_1800 = 0;
    var_1808 = 4628546369532356198;
    var_1816 = 3;
    OP_PUSH5_C 4671212536167913226, 4637268575373177651, 4671220441656516936, 4671258611202675180, 4638360698282814996
    var_1824 = 4671314859468773130;
    var_1832 = 240;
    pri = EvCameraMove(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760)
    var_1840 = 1;
    var_1848 = 3;
    var_1856 = 0;
    var_1864 = 29;
    var_1872 = 2029204762929083870;
    var_1880 = 40;
    pri = fun_6B90(var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1888 = 10;
    var_1896 = 2029204762929083870;
    var_1904 = 16;
    pri = fun_15D0(var_1896, var_1888)
    var_1912 = 0;
    var_1920 = 0;
    var_1928 = 0;
    var_1936 = 0;
    OP_PUSH2_C 8802641224559852288, 2029204762929083870
    var_1944 = 48;
    pri = fun_0C18(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896)
    var_1952 = 0;
    var_1960 = 3;
    var_1968 = 0;
    var_1976 = 100;
    var_1984 = -1;
    OP_PUSH2_C 760586987047821128, 2029204762929083870
    var_1992 = 56;
    pri = fun_2410(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2000 = 1;
    var_2008 = 8;
    pri = fun_25D8(var_2000)
    var_2016 = 0;
    pri = fun_2698()
    var_2024 = 0;
    var_2032 = 1;
    var_2040 = 500;
    pri = float(var_2040)
    var_2048 = pri;
    var_2056 = 4613937818241073152;
    var_2064 = 32;
    pri = fun_2B00(var_2056, var_2048, var_2040, var_2032)
    OP_PUSH2_C 4627533059616197837, 4627955272081263821
    var_2072 = 0;
    OP_PUSH5_C 4671444247248350740, 4651959194212357898, 4671037821021480550, 4671499621402704609, 4653243203891274711
    var_2080 = 4670985443036312371;
    var_2088 = 1;
    pri = EvCameraMove(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016)
    var_2096 = 0;
    pri = fun_2A08()
    OP_PUSH2_C -4604818028995647898, 4628546369532356198
    var_2104 = 2;
    OP_PUSH5_C 4671437842593118945, 4653290746774059745, 4671035685220143596, 4671484654300671508, 4654628544561807360
    var_2112 = 4670992834503230095;
    var_2120 = 480;
    pri = EvCameraMove(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2128 = 3;
    var_2136 = 0;
    var_2144 = 101;
    var_2152 = 426074126416442840;
    var_2160 = 32;
    pri = fun_22B8(var_2152, var_2144, var_2136, var_2128)
    var_2168 = 1;
    var_2176 = 8;
    pri = fun_25D8(var_2168)
    var_2184 = 3;
    var_2192 = 0;
    var_2200 = 101;
    var_2208 = 426077424951327473;
    var_2216 = 32;
    pri = fun_22B8(var_2208, var_2200, var_2192, var_2184)
    var_2224 = 1;
    var_2232 = 8;
    pri = fun_25D8(var_2224)
    var_2240 = 0;
    pri = fun_2698()
    var_2248 = 0;
    var_2256 = 1;
    var_2264 = 250;
    pri = float(var_2264)
    var_2272 = pri;
    var_2280 = 4613937818241073152;
    var_2288 = 32;
    pri = fun_2B00(var_2280, var_2272, var_2264, var_2256)
    var_2296 = 0;
    var_2304 = 4628264894555645542;
    var_2312 = 0;
    OP_PUSH5_C 4671215043054424556, 4638721338096725524, 4671313589532843049, 4671242893683956122, 4637490940604779069
    var_2320 = 4671212211811983032;
    var_2328 = 1;
    pri = EvCameraMove(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2336 = 0;
    pri = fun_2A08()
    var_2344 = 0;
    var_2352 = 4628264894555645542;
    var_2360 = 2;
    OP_PUSH5_C 4671211079315006423, 4638721338096725524, 4671312501016331551, 4671238929944537989, 4637490940604779069
    var_2368 = 4671211123295471534;
    var_2376 = 180;
    pri = EvCameraMove(var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2384 = 6;
    var_2392 = 6;
    var_2400 = 2029204762929083870;
    var_2408 = 24;
    pri = fun_1740(var_2400, var_2392, var_2384)
    var_2416 = 0;
    var_2424 = 3;
    var_2432 = 0;
    var_2440 = 100;
    var_2448 = -1;
    OP_PUSH2_C 760594683629218605, 2029204762929083870
    var_2456 = 56;
    pri = fun_2410(var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2464 = 1;
    var_2472 = 8;
    pri = fun_25D8(var_2464)
    var_2480 = 0;
    var_2488 = 1;
    var_2496 = 300;
    pri = float(var_2496)
    var_2504 = pri;
    var_2512 = 4612811918334230528;
    var_2520 = 32;
    pri = fun_2B00(var_2512, var_2504, var_2496, var_2488)
    var_2528 = 0;
    var_2536 = 4628264894555645542;
    var_2544 = 0;
    OP_PUSH5_C 4671217093643610358, 4635704278190108180, 4671242253218432942, 4671251392908838830, 4636684514796503040
    var_2552 = 4671142827130712228;
    var_2560 = 1;
    pri = EvCameraMove(var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488)
    var_2568 = 0;
    pri = fun_2A08()
    var_2576 = 0;
    var_2584 = 4628264894555645542;
    var_2592 = 2;
    OP_PUSH5_C 4671217797331052134, 4635704278190108180, 4671242280706223636, 4671245554502095340, 4636684514796503040
    var_2600 = 4671140837014665953;
    var_2608 = 180;
    pri = EvCameraMove(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536)
    var_2616 = 1;
    var_2624 = 1;
    var_2632 = -1;
    var_2640 = -1;
    var_2648 = 0;
    var_2656 = 10;
    var_2664 = 2029204762929083870;
    var_2672 = 56;
    pri = fun_4858(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616)
    var_2680 = 0;
    var_2688 = 3;
    var_2696 = 0;
    var_2704 = 100;
    var_2712 = -1;
    OP_PUSH2_C 760593584117590394, 2029204762929083870
    var_2720 = 56;
    pri = fun_2410(var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2728 = 1;
    var_2736 = 8;
    pri = fun_25D8(var_2728)
    var_2744 = 0;
    var_2752 = 3;
    var_2760 = 0;
    var_2768 = 100;
    var_2776 = -1;
    OP_PUSH2_C 760592484605962183, 2029204762929083870
    var_2784 = 56;
    pri = fun_2410(var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728)
    var_2792 = 32312;
    var_2800 = 2029204762929083870;
    var_2808 = 16;
    pri = fun_10F0(var_2800, var_2792)
    var_2816 = 1;
    var_2824 = 3;
    var_2832 = 0;
    var_2840 = 10;
    var_2848 = 2029204762929083870;
    var_2856 = 40;
    pri = fun_6B90(var_2848, var_2840, var_2832, var_2824, var_2816)
    var_2864 = 2029204762929083870;
    var_2872 = 8;
    pri = fun_0EF0(var_2864)
    var_2880 = 1;
    var_2888 = 8;
    pri = fun_25D8(var_2880)
    var_2896 = 0;
    var_2904 = 4628264894555645542;
    var_2912 = 0;
    OP_PUSH5_C 4671246851925816115, 4635333434908291891, 4671216565878029025, 4671344180695106847, 4636127194342615941
    var_2920 = 4671176846020475617;
    var_2928 = 1;
    pri = EvCameraMove(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2936 = 0;
    pri = fun_2A08()
    var_2944 = 0;
    var_2952 = 4628264894555645542;
    var_2960 = 2;
    OP_PUSH5_C 4671261744810814341, 4635454469148277473, 4671210485578727424, 4671359070831326003, 4636248228582601523
    var_2968 = 4671170765721174016;
    var_2976 = 240;
    pri = EvCameraMove(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2984 = 1;
    var_2992 = -1;
    var_3000 = -1;
    var_3008 = 3;
    var_3016 = 0;
    var_3024 = 1;
    var_3032 = 2029204762929083870;
    var_3040 = 56;
    pri = fun_2C78(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3048 = 4;
    var_3056 = 7;
    var_3064 = 2029204762929083870;
    var_3072 = 24;
    pri = fun_1740(var_3064, var_3056, var_3048)
    var_3080 = 0;
    var_3088 = 3;
    var_3096 = 0;
    var_3104 = 100;
    var_3112 = -1;
    OP_PUSH2_C 760591385094333972, 2029204762929083870
    var_3120 = 56;
    pri = fun_2410(var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3128 = 2029204762929083870;
    var_3136 = 8;
    pri = fun_0EF0(var_3128)
    var_3144 = 6;
    var_3152 = 7;
    var_3160 = 2029204762929083870;
    var_3168 = 24;
    pri = fun_1740(var_3160, var_3152, var_3144)
    var_3176 = 1;
    var_3184 = 8;
    pri = fun_25D8(var_3176)
    var_3192 = 0;
    pri = fun_2698()
    var_3200 = 3;
    var_3208 = 0;
    var_3216 = 101;
    var_3224 = 426076325439699262;
    var_3232 = 32;
    pri = fun_22B8(var_3224, var_3216, var_3208, var_3200)
    var_3240 = 1;
    var_3248 = 8;
    pri = fun_25D8(var_3240)
    var_3256 = 0;
    pri = fun_2698()
    var_3264 = 0;
    var_3272 = 1;
    var_3280 = 215;
    pri = float(var_3280)
    var_3288 = pri;
    var_3296 = 4616189618054758400;
    var_3304 = 32;
    pri = fun_2B00(var_3296, var_3288, var_3280, var_3272)
    var_3312 = 0;
    var_3320 = 4628264894555645542;
    var_3328 = 0;
    OP_PUSH5_C 4671225906229306982, 4638129185114470482, 4671308193679529738, 4671228132740353229, 4638814224839040041
    var_3336 = 4671203066624019005;
    var_3344 = 1;
    pri = EvCameraMove(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272)
    var_3352 = 0;
    pri = fun_2A08()
    var_3360 = 0;
    var_3368 = 4627645649606882099;
    var_3376 = 2;
    OP_PUSH5_C 4671225689075760497, 4638051779495875052, 4671318463118133166, 4671227915586806743, 4638775522029742326
    var_3384 = 4671213336062622433;
    var_3392 = 240;
    pri = EvCameraMove(var_3392, var_3384, var_3376, var_3368, var_3360, var_3352, var_3344, var_3336, var_3328, var_3320)
    var_3400 = 8;
    var_3408 = 8;
    var_3416 = 2029204762929083870;
    var_3424 = 24;
    pri = fun_1740(var_3416, var_3408, var_3400)
    var_3432 = 1;
    var_3440 = 1;
    var_3448 = 15;
    var_3456 = 4626322717216342016;
    var_3464 = 0;
    var_3472 = 2029204762929083870;
    var_3480 = 48;
    pri = fun_1570(var_3472, var_3464, var_3456, var_3448, var_3440, var_3432)
    var_3488 = 45;
    var_3496 = 8;
    pri = fun_0060(var_3488)
    var_3504 = 2029204762929083870;
    var_3512 = 8;
    pri = fun_1690(var_3504)
    var_3520 = 2;
    var_3528 = 2029204762929083870;
    var_3536 = 16;
    pri = fun_16C8(var_3528, var_3520)
    var_3544 = 10;
    var_3552 = 2029204762929083870;
    var_3560 = 16;
    pri = fun_15D0(var_3552, var_3544)
    var_3568 = 0;
    var_3576 = 3;
    var_3584 = 0;
    var_3592 = 100;
    var_3600 = -1;
    OP_PUSH2_C 760581489489680073, 2029204762929083870
    var_3608 = 56;
    pri = fun_2410(var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552)
    var_3616 = 1;
    var_3624 = 8;
    pri = fun_25D8(var_3616)
    var_3632 = 0;
    pri = fun_2698()
    var_3640 = 32448;
    pri = SoundPostEvent(var_3640)
    var_3648 = 0;
    var_3656 = 1;
    var_3664 = 200;
    pri = float(var_3664)
    var_3672 = pri;
    var_3680 = 4612811918334230528;
    var_3688 = 32;
    pri = fun_2B00(var_3680, var_3672, var_3664, var_3656)
    var_3696 = 0;
    var_3704 = 4631952216750555136;
    var_3712 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_3720 = 4671031446602818519;
    var_3728 = 1;
    pri = EvCameraMove(var_3728, var_3720, var_3712, var_3704, var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3736 = 0;
    pri = fun_2A08()
    var_3744 = 0;
    var_3752 = 4631952216750555136;
    var_3760 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_3768 = 4671018568572878193;
    var_3776 = 240;
    pri = EvCameraMove(var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720, var_3712, var_3704)
    var_3784 = 0;
    var_3792 = 60;
    pri = float(var_3792)
    var_3800 = pri;
    var_3808 = 32608;
    pri = SoundSetRTPC(var_3808, var_3800, var_3792)
    var_3816 = 32744;
    pri = SoundPostEvent(var_3816)
    var_3824 = 30;
    var_3832 = 8;
    pri = fun_0060(var_3824)
    var_3840 = 0;
    var_3848 = 120;
    var_3856 = 850;
    pri = float(var_3856)
    var_3864 = pri;
    var_3872 = 4605380978949069210;
    var_3880 = 32;
    pri = fun_2B00(var_3872, var_3864, var_3856, var_3848)
    var_3888 = 8802641224559852288;
    var_3896 = 8;
    pri = fun_0D18(var_3888)
    var_3904 = 2029204762929083870;
    var_3912 = 8;
    pri = fun_0D18(var_3904)
    var_3920 = 1;
    var_3928 = 0;
    var_3936 = 4641240890982006784;
    var_3944 = 0;
    var_3952 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_3960 = 72;
    pri = fun_0AF8(var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904, var_3896, var_3888)
    var_3968 = 1;
    var_3976 = 0;
    var_3984 = 4641240890982006784;
    var_3992 = 0;
    var_4000 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, 2029204762929083870
    var_4008 = 72;
    pri = fun_0AF8(var_4000, var_3992, var_3984, var_3976, var_3968, var_3960, var_3952, var_3944, var_3936)
    var_4016 = 8802641224559852288;
    var_4024 = 8;
    pri = fun_0D18(var_4016)
    var_4032 = 2029204762929083870;
    var_4040 = 8;
    pri = fun_0D18(var_4032)
    var_4048 = 15;
    var_4056 = 8;
    pri = fun_0060(var_4048)
    var_4064 = 0;
    var_4072 = 0;
    var_4080 = 0;
    var_4088 = 90;
    pri = float(var_4088)
    var_4096 = pri;
    var_4104 = 8802641224559852288;
    var_4112 = 40;
    pri = fun_0BC8(var_4104, var_4096, var_4088, var_4080, var_4072)
    var_4120 = 0;
    var_4128 = 0;
    var_4136 = 0;
    var_4144 = 270;
    pri = float(var_4144)
    var_4152 = pri;
    var_4160 = 2029204762929083870;
    var_4168 = 40;
    pri = fun_0BC8(var_4160, var_4152, var_4144, var_4136, var_4128)
    var_4176 = 30;
    var_4184 = 8;
    pri = fun_0060(var_4176)
    var_4192 = 8802641224559852288;
    var_4200 = 8;
    pri = fun_0D18(var_4192)
    var_4208 = 2029204762929083870;
    var_4216 = 8;
    pri = fun_0D18(var_4208)
    var_4224 = 0;
    pri = fun_2790()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_4232 = 3;
    var_4240 = 1;
    var_4248 = 32;
    pri = fun_2B58(var_4240, var_4232, var_4224, var_4216)
    var_4256 = 0;
    pri = fun_2820()
    var_4264 = 0;
    pri = fun_28C8()
    OP_JZER lab_BD08
    var_4272 = 1705;
    var_4280 = 8;
    pri = fun_8FC0(var_4272)
    var_4288 = 1;
    var_4296 = -6958835188024118277;
    pri = WorkSet(var_4296, var_4288)
    var_4304 = -4197569636683807137;
    pri = FlagSet(var_4304)
    var_4312 = 0;
    pri = fun_29B8()
// lab_BD08
    var_8 = 0;
    var_16 = 0;
    var_24 = 32992;
    pri = PokeMemoryCheckParty(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    var_48 = 90;
    pri = float(var_48)
    var_56 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_64 = 48;
    pri = fun_09E8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    var_88 = 270;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 4671226772094713856;
    var_112 = 20580;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 2029204762929083870;
    var_136 = 48;
    pri = fun_09E8(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_17A8(var_144)
    var_160 = 3;
    var_168 = 3;
    var_176 = 2029204762929083870;
    var_184 = 24;
    pri = fun_1740(var_176, var_168, var_160)
    var_192 = 1;
    var_200 = 1;
    var_208 = -1;
    var_216 = 20;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 0;
    var_240 = 2029204762929083870;
    var_248 = 48;
    pri = fun_1570(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 15;
    var_264 = 8;
    pri = fun_0060(var_256)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_272 = 16;
    pri = fun_2A98(var_264, var_256)
    var_280 = 0;
    var_288 = 1;
    var_296 = 100;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 3;
    pri = float(var_312)
    var_320 = pri;
    var_328 = 32;
    pri = fun_2B00(var_320, var_312, var_304, var_296)
    var_336 = 0;
    var_344 = 30;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 33144;
    pri = SoundSetRTPC(var_360, var_352, var_344)
    var_368 = 0;
    var_376 = 4631065570573916570;
    var_384 = 0;
    OP_PUSH5_C 4671170331414081044, 4640000290022154568, 4671441649652130120, 4671241524791979540, 4638111592928426066
    var_392 = 4671365098903825285;
    var_400 = 1;
    pri = EvCameraMove(var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 0;
    pri = fun_2A08()
    var_416 = 0;
    var_424 = 4631065570573916570;
    var_432 = 2;
    OP_PUSH5_C 4671171590354894848, 4640000290022154568, 4671442815134455562, 4671242783732793344, 4638111592928426066
    var_440 = 4671366264386150728;
    var_448 = 120;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 80;
    var_464 = 8;
    var_472 = 16;
    pri = fun_0280(var_464, var_456)
    var_480 = 0;
    pri = fun_0350()
    var_488 = 30;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 1;
    var_512 = 1;
    var_520 = 30;
    var_528 = -20;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 0;
    var_552 = 2029204762929083870;
    var_560 = 48;
    pri = fun_1570(var_552, var_544, var_536, var_528, var_520, var_512)
    var_568 = 10;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 2;
    var_592 = 2;
    var_600 = 2029204762929083870;
    var_608 = 24;
    pri = fun_1740(var_600, var_592, var_584)
    var_616 = 30;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    OP_PUSH2_C 760580389978051862, 2029204762929083870
    var_672 = 56;
    pri = fun_2410(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 1;
    var_688 = 8;
    pri = fun_25D8(var_680)
    var_696 = 0;
    pri = fun_2698()
    var_704 = 0;
    var_712 = 1;
    var_720 = 550;
    pri = float(var_720)
    var_728 = pri;
    var_736 = 4;
    pri = float(var_736)
    var_744 = pri;
    var_752 = 32;
    pri = fun_2B00(var_744, var_736, var_728, var_720)
    var_760 = 0;
    var_768 = 4627448617123184640;
    var_776 = 0;
    OP_PUSH5_C 4671221838036284211, 4632623534570010051, 4671322138235749007, 4671238201518084588, 4632516574078860001
    var_784 = 4671426113552829645;
    var_792 = 1;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    pri = fun_2A08()
    var_808 = 0;
    var_816 = 4627448617123184640;
    var_824 = 2;
    OP_PUSH5_C 4671223676969481667, 4632623534570010051, 4671321849613946716, 4671240037702502973, 4632516574078860001
    var_832 = 4671425824931027354;
    var_840 = 120;
    pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_848 = 3;
    var_856 = 0;
    var_864 = 101;
    var_872 = 426079623974583895;
    var_880 = 32;
    pri = fun_22B8(var_872, var_864, var_856, var_848)
    var_888 = 1;
    var_896 = 8;
    pri = fun_25D8(var_888)
    var_904 = 0;
    pri = fun_2698()
    var_912 = 0;
    var_920 = 4629967818164745011;
    var_928 = 0;
    OP_PUSH5_C 4671203500931111977, 4637585234721977139, 4671420833148237251, 4671254094958664090, 4637554272474538967
    var_936 = 4671328564881213358;
    var_944 = 1;
    pri = EvCameraMove(var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_952 = 0;
    pri = fun_2A08()
    var_960 = 0;
    var_968 = 4629967818164745011;
    var_976 = 2;
    OP_PUSH5_C 4671201315651751772, 4637585234721977139, 4671419475251376947, 4671262475986046812, 4637585234721977139
    var_984 = 4671333845285805752;
    var_992 = 360;
    pri = EvCameraMove(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 3;
    var_1008 = 0;
    var_1016 = 100;
    var_1024 = 2761589308657209915;
    var_1032 = 32;
    pri = fun_22B8(var_1024, var_1016, var_1008, var_1000)
    var_1040 = 1;
    var_1048 = 8;
    pri = fun_25D8(var_1040)
    var_1056 = 0;
    pri = fun_2698()
    var_1064 = 2029204762929083870;
    var_1072 = 8;
    pri = fun_1610(var_1064)
    var_1080 = 8;
    var_1088 = 2029204762929083870;
    var_1096 = 16;
    pri = fun_16C8(var_1088, var_1080)
    var_1104 = 1;
    var_1112 = 1;
    var_1120 = 30;
    var_1128 = 0;
    pri = float(var_1128)
    var_1136 = pri;
    OP_PUSH2_C 4629137466983448576, 2029204762929083870
    var_1144 = 48;
    pri = fun_1570(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1152 = 45;
    var_1160 = 8;
    pri = fun_0060(var_1152)
    var_1168 = 0;
    var_1176 = 1;
    var_1184 = 700;
    pri = float(var_1184)
    var_1192 = pri;
    var_1200 = 4611686018427387904;
    var_1208 = 32;
    pri = fun_2B00(var_1200, var_1192, var_1184, var_1176)
    var_1216 = 0;
    var_1224 = 4631952216750555136;
    var_1232 = 0;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671211002349192479, 4654693239825985700
    var_1240 = 4670926311300970578;
    var_1248 = 1;
    pri = EvCameraMove(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1256 = 0;
    pri = fun_2A08()
    var_1264 = 0;
    var_1272 = 4631952216750555136;
    var_1280 = 2;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671487458055322337, 4654693019923660145
    var_1288 = 4670935629662015980;
    var_1296 = 1200;
    pri = EvCameraMove(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1304 = 1;
    var_1312 = 20;
    pri = float(var_1312)
    var_1320 = pri;
    var_1328 = 2029204762929083870;
    var_1336 = 24;
    pri = fun_0A40(var_1328, var_1320, var_1312)
    var_1344 = -1;
    var_1352 = 2029204762929083870;
    var_1360 = 16;
    pri = fun_15D0(var_1352, var_1344)
    var_1368 = 3;
    var_1376 = 0;
    var_1384 = 100;
    var_1392 = 2761588209145581704;
    var_1400 = 32;
    pri = fun_22B8(var_1392, var_1384, var_1376, var_1368)
    var_1408 = 1;
    var_1416 = 8;
    pri = fun_25D8(var_1408)
    var_1424 = 0;
    pri = fun_2698()
    var_1432 = 0;
    var_1440 = 1;
    var_1448 = 500;
    pri = float(var_1448)
    var_1456 = pri;
    var_1464 = 4620693217682128896;
    var_1472 = 32;
    pri = fun_2B00(var_1464, var_1456, var_1448, var_1440)
    var_1480 = 0;
    var_1488 = 4625084227318815130;
    var_1496 = 0;
    OP_PUSH5_C 4671227514265062605, 4637320648243869123, 4671365711881557770, 4671244911287793091, 4639572096213833482
    var_1504 = 4671468719628405965;
    var_1512 = 1;
    pri = EvCameraMove(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1520 = 6;
    var_1528 = 6;
    var_1536 = 2029204762929083870;
    var_1544 = 24;
    pri = fun_1740(var_1536, var_1528, var_1520)
    var_1552 = 1;
    var_1560 = 1;
    var_1568 = -1;
    var_1576 = -1;
    var_1584 = 0;
    var_1592 = 9;
    var_1600 = 2029204762929083870;
    var_1608 = 56;
    pri = fun_4858(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1616 = 0;
    var_1624 = 3;
    var_1632 = 0;
    var_1640 = 100;
    var_1648 = -1;
    OP_PUSH2_C 759598526094248664, 2029204762929083870
    var_1656 = 56;
    pri = fun_2410(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1664 = 1;
    var_1672 = 8;
    pri = fun_25D8(var_1664)
    var_1680 = 1;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 9;
    var_1712 = 2029204762929083870;
    var_1720 = 40;
    pri = fun_6B90(var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1728 = 2029204762929083870;
    var_1736 = 8;
    pri = fun_0EF0(var_1728)
    var_1744 = 0;
    var_1752 = 0;
    var_1760 = 0;
    var_1768 = 0;
    OP_PUSH2_C 8802641224559852288, 2029204762929083870
    var_1776 = 48;
    pri = fun_0C18(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
    var_1784 = 0;
    var_1792 = 4625675324769907507;
    var_1800 = 0;
    OP_PUSH5_C 4671230955736457544, 4636662700485807964, 4671129808913039360, 4671237387879480033, 4638070075369361244
    var_1808 = 4671024984223226266;
    var_1816 = 1;
    pri = EvCameraMove(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1824 = 0;
    pri = fun_2A08()
    var_1832 = 0;
    var_1840 = 4625675324769907507;
    var_1848 = 2;
    OP_PUSH5_C 4671232228421166694, 4636942768087635067, 4671108929187227894, 4671238660564189184, 4638350142971188347
    var_1856 = 4671004104497414799;
    var_1864 = 240;
    pri = EvCameraMove(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1872 = 33280;
    pri = SoundPostEvent(var_1872)
    var_1880 = 0;
    var_1888 = 3;
    var_1896 = 0;
    var_1904 = 100;
    var_1912 = -1;
    OP_PUSH2_C 759599625605876875, 2029204762929083870
    var_1920 = 56;
    pri = fun_2410(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1928 = 1;
    var_1936 = 8;
    pri = fun_25D8(var_1928)
    var_1944 = 0;
    var_1952 = 1;
    var_1960 = 235;
    pri = float(var_1960)
    var_1968 = pri;
    var_1976 = 4613937818241073152;
    var_1984 = 32;
    pri = fun_2B00(var_1976, var_1968, var_1960, var_1952)
    var_1992 = 0;
    var_2000 = 4629756711932212019;
    var_2008 = 0;
    OP_PUSH5_C 4671206010566402376, 4638145369925631345, 4671440385213758177, 4671235076156282634, 4638039113121923072
    var_2016 = 4671339320853712077;
    var_2024 = 1;
    pri = EvCameraMove(var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2032 = 0;
    pri = fun_2A08()
    var_2040 = 0;
    var_2048 = 4629756711932212019;
    var_2056 = 2;
    OP_PUSH5_C 4671209520757274051, 4638145369925631345, 4671441394015676662, 4671238586347154309, 4638039113121923072
    var_2064 = 4671340329655630561;
    var_2072 = 180;
    pri = EvCameraMove(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2080 = 2029204762929083870;
    var_2088 = 8;
    pri = fun_1610(var_2080)
    var_2096 = 2029204762929083870;
    var_2104 = 8;
    pri = fun_1690(var_2096)
    var_2112 = 2;
    var_2120 = 2029204762929083870;
    var_2128 = 16;
    pri = fun_16C8(var_2120, var_2112)
    var_2136 = 0;
    var_2144 = 3;
    var_2152 = 0;
    var_2160 = 100;
    var_2168 = -1;
    OP_PUSH2_C 759600725117505086, 2029204762929083870
    var_2176 = 56;
    pri = fun_2410(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2184 = 1;
    var_2192 = 8;
    pri = fun_25D8(var_2184)
    var_2200 = 0;
    pri = fun_2698()
    var_2208 = 0;
    var_2216 = 4631952216750555136;
    var_2224 = 0;
    OP_PUSH5_C 4671488766474159391, 4636660589423482634, 4670981383089626808, 4671566378251185029, 4636493815499781571
    var_2232 = 4670910423357949215;
    var_2240 = 1;
    pri = EvCameraMove(var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2248 = 0;
    pri = fun_2A08()
    var_2256 = 0;
    var_2264 = 4631952216750555136;
    var_2272 = 2;
    OP_PUSH5_C 4671533497355956388, 4636660589423482634, 4671042683611654390, 4671626903617515028, 4631932513502185390
    var_2280 = 4670996484881834312;
    var_2288 = 600;
    pri = EvCameraMove(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2296 = 33440;
    pri = SoundPostEvent(var_2296)
    var_2304 = 3;
    var_2312 = 0;
    var_2320 = 101;
    var_2328 = 426078524462955684;
    var_2336 = 32;
    pri = fun_22B8(var_2328, var_2320, var_2312, var_2304)
    var_2344 = 1;
    var_2352 = 8;
    pri = fun_25D8(var_2344)
    var_2360 = 0;
    pri = fun_2698()
    var_2368 = 33648;
    pri = SoundPostEvent(var_2368)
    var_2376 = 12;
    var_2384 = 8;
    pri = fun_0408(var_2376)
    var_2392 = 0;
    pri = fun_0440()
    var_2400 = 1;
    var_2408 = 0;
    var_2416 = 33912;
    var_2424 = 8;
    var_2432 = 32;
    pri = fun_02E0(var_2424, var_2416, var_2408, var_2400)
    var_2440 = 0;
    pri = fun_0350()
    var_2448 = 0;
    var_2456 = 8802641224559852288;
    var_2464 = 16;
    pri = fun_9130(var_2456, var_2448)
    var_2472 = 1;
    var_2480 = 2029204762929083870;
    var_2488 = 16;
    pri = fun_9130(var_2480, var_2472)
    var_2496 = 33968;
    pri = SoundPostEvent(var_2496)
    var_2504 = 0;
    var_2512 = 2;
    var_2520 = 16;
    pri = fun_8E00(var_2512, var_2504)
    var_2528 = 0;
    var_2536 = 0;
    var_2544 = 0;
    var_2552 = 0;
    var_2560 = 0;
    var_2568 = 0;
    pri = float(var_2568)
    var_2576 = pri;
    var_2584 = 1550;
    pri = float(var_2584)
    var_2592 = pri;
    var_2600 = 1725;
    pri = float(var_2600)
    var_2608 = pri;
    OP_PUSH2_C 9117463143071301695, -3308731028398755628
    var_2616 = 80;
    pri = fun_0570(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536)
    var_2624 = 1;
    var_2632 = 0;
    var_2640 = 4641240890982006784;
    var_2648 = 0;
    var_2656 = 0;
    var_2664 = 1800;
    pri = float(var_2664)
    var_2672 = pri;
    var_2680 = 1725;
    pri = float(var_2680)
    var_2688 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_2696 = 72;
    pri = fun_0AF8(var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2704 = 34128;
    pri = SoundPostEvent(var_2704)
    var_2712 = 34400;
    var_2720 = 8;
    var_2728 = 16;
    pri = fun_0280(var_2720, var_2712)
    var_2736 = 0;
    pri = fun_0350()
    var_2744 = 45;
    var_2752 = 8;
    pri = fun_0060(var_2744)
    var_2760 = 0;
    var_2768 = 3;
    var_2776 = 2;
    var_2784 = 100;
    var_2792 = -1;
    OP_PUSH2_C -3193906330608872568, -4889189955526537819
    var_2800 = 56;
    pri = fun_2410(var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2808 = 8802641224559852288;
    var_2816 = 8;
    pri = fun_0D18(var_2808)
    var_2824 = 4;
    OP_PUSH2_C -4889189955526537819, 8802641224559852288
    var_2832 = 24;
    pri = fun_0C70(var_2824, var_2816, var_2808)
    var_2840 = 0;
    pri = fun_2540()
    var_2848 = 1;
    var_2856 = 8;
    pri = fun_25D8(var_2848)
    var_2864 = 0;
    pri = fun_2698()
    var_2872 = 8802641224559852288;
    var_2880 = 8;
    pri = fun_0D18(var_2872)
    var_2888 = -4889189955526537819;
    var_2896 = 8;
    pri = fun_0D18(var_2888)
    pri = 0;
    return pri;
}
// fun_D760
fun_D760() {
    pri = 0;
    return pri;
}
// fun_D778
fun_D778() {
    var_8 = 1710;
    var_16 = 8;
    pri = fun_8FC0(var_8)
    var_24 = -98310360955755334;
    pri = VanishFlagReset(var_24)
    var_32 = 2029204762929083870;
    pri = VanishFlagSet(var_32)
    var_40 = 7506713967005848083;
    pri = FlagReset(var_40)
    var_48 = 5501743159805903958;
    pri = FlagSet(var_48)
    var_56 = 1;
    var_64 = -6958835188024118277;
    pri = WorkSet(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_D880
fun_D880() {
    pri = 0;
    return pri;
}
// fun_D898
fun_D898() {
    var_8 = 0;
    pri = fun_93B0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_94A0()
    var_24 = 0;
    pri = fun_94F8()
    var_32 = 0;
    pri = fun_9538()
    var_40 = 0;
    pri = fun_9568()
    var_48 = 0;
    pri = fun_D760()
    var_56 = 0;
    pri = fun_D778()
    var_64 = 0;
    pri = fun_D880()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_D9A0
fun_D9A0() {
    var_8 = 0;
    pri = fun_94F8()
    var_16 = 0;
    pri = fun_D778()
    pri = 0;
    return pri;
}
