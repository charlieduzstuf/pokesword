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
    OP_ZERO_P_S -8
    OP_JUMP lab_01C0
// lab_01C0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02C0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0240
    pri = 0;
    return pri;
// lab_02C0
    pri = 0;
    return pri;
// lab_0240
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
    OP_JUMP lab_01B8
// lab_01B8
    OP_INC_P_S -8
}
// fun_02D8
fun_02D8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_04C8
// lab_04C8
    var_8 = 0;
    pri = fun_05E0()
    OP_JNZ lab_0500
    OP_JUMP lab_0530
// lab_0500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04C8
// lab_0530
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0560
// lab_0560
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05A0
    pri = 0;
    return pri;
// lab_05A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0560
    pri = 0;
    return pri;
}
// fun_05E0
fun_05E0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionX_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0780
fun_0780() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionY_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionY_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_08A0
fun_08A0() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionZ_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionZ_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0A38
fun_0A38() {
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
// fun_0AB0
fun_0AB0() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B58
fun_0B58() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BB0
fun_0BB0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17D0(var_8)
    OP_JZER lab_0C28
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1800(var_24)
    OP_JNZ lab_0C28
    pri = 0;
    return pri;
// lab_0C28
    OP_JUMP lab_0C38
// lab_0C38
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C98
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C38
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D50
fun_0D50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D88
fun_0D88() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0DD0
    pri = 0;
    return pri;
// lab_0DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E10
// lab_0E10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17D0(var_8)
    OP_JNZ lab_0E98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E88
    pri = 0;
    return pri;
// lab_0E98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0EE0
    pri = 0;
    return pri;
// lab_0EE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0F40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F88(var_8)
    pri = 0;
    return pri;
// lab_0F40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E10
    pri = 0;
    return pri;
// lab_0E88
    OP_JUMP lab_0EE0
}
// fun_0F88
fun_0F88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0FC0
fun_0FC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1010
    pri = 0;
    return pri;
// lab_1010
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17D0(var_8)
    OP_JZER lab_1140
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1068
    OP_ZERO_P_S 64
// lab_1140
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1178
    OP_CONST_S 64, 1
// lab_1178
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_11B0
    OP_CONST_S 72, 1
// lab_11B0
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
// lab_1068
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1090
    OP_ZERO_P_S 72
// lab_1090
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
    OP_JUMP lab_1250
// lab_1250
    pri = 0;
    return pri;
}
// fun_1260
fun_1260() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12A0
fun_12A0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B8
fun_13B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1430
fun_1430() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1468
fun_1468() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1378(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_13F0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_14D0
fun_14D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13B8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1430(var_24)
    pri = 0;
    return pri;
}
// fun_1528
fun_1528() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_17D0(var_8)
    OP_JZER lab_15C8
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_15C8
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1630
fun_1630() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_1528(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_17D0
fun_17D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1830
fun_1830() {
    OP_JUMP lab_1848
// lab_1848
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_18D8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_18C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    pri = 0;
    return pri;
// lab_18D8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1968
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1958
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    pri = 0;
    return pri;
// lab_1968
    pri = 0;
    return pri;
// lab_1958
    OP_JUMP lab_1978
// lab_1978
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1848
    pri = 0;
    return pri;
// lab_18C8
    OP_JUMP lab_1978
}
// fun_19B8
fun_19B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1830(var_40)
    pri = 0;
    return pri;
}
// fun_1A40
fun_1A40() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1A78
fun_1A78() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1AA0
fun_1AA0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1AD0
fun_1AD0() {
    var_8 = arg_20;
    var_16 = arg_19;
    var_24 = arg_18;
    var_32 = arg_17;
    var_40 = arg_16;
    var_48 = arg_15;
    var_56 = arg_14;
    var_64 = arg_13;
    var_72 = arg_12;
    var_80 = arg_11;
    var_88 = arg_10;
    var_96 = arg_9;
    var_104 = arg_8;
    var_112 = arg_7;
    var_120 = arg_6;
    var_128 = arg_5;
    var_136 = arg_4;
    var_144 = arg_3;
    var_152 = arg_2;
    var_160 = arg_1;
    var_168 = arg_0;
    pri = CreatePathObject_(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1BA0
fun_1BA0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1BD8
fun_1BD8() {
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
// switch_21F0
        case default:
        {
// switch_21F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2238
// lab_2238
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
            OP_JNZ lab_22E0
            var_88 = 0;
            pri = fun_2500()
// lab_22E0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_21F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1DD8
                case default:
                {
// switch_1DD8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E50
// lab_1E50
                    OP_JUMP lab_2238
                }
                case 0x0:
                {
// switch_1DD8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1E50
                }
                case 0x1:
                {
// switch_1DD8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1E50
                }
                case 0x2:
                {
// switch_1DD8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1E50
                }
                case 0x3:
                {
// switch_1DD8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E50
                }
                case 0x4:
                {
// switch_1DD8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1E50
                }
                case 0x5:
                {
// switch_1DD8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1E50
                }
            }
        }
        case 0x65:
        {
// switch_21F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1F90
                case default:
                {
// switch_1F90_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2008
// lab_2008
                    OP_JUMP lab_2238
                }
                case 0x0:
                {
// switch_1F90_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2008
                }
                case 0x1:
                {
// switch_1F90_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2008
                }
                case 0x2:
                {
// switch_1F90_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2008
                }
                case 0x3:
                {
// switch_1F90_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2008
                }
                case 0x4:
                {
// switch_1F90_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2008
                }
                case 0x5:
                {
// switch_1F90_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2008
                }
            }
        }
        case 0x66:
        {
// switch_21F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2148
                case default:
                {
// switch_2148_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21C0
// lab_21C0
                    OP_JUMP lab_2238
                }
                case 0x0:
                {
// switch_2148_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_21C0
                }
                case 0x1:
                {
// switch_2148_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_21C0
                }
                case 0x2:
                {
// switch_2148_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_21C0
                }
                case 0x3:
                {
// switch_2148_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21C0
                }
                case 0x4:
                {
// switch_2148_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_21C0
                }
                case 0x5:
                {
// switch_2148_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_21C0
                }
            }
        }
    }
}
// fun_22F8
fun_22F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1BD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2360
fun_2360() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2408
    pri = 1;
    return pri;
// lab_2408
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2450
fun_2450() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_24A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2360(var_8)
    arg_2 = pri;
// lab_24A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1BD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2500
fun_2500() {
    OP_JUMP lab_2518
// lab_2518
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2558
    pri = 0;
    return pri;
// lab_2558
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2518
    pri = 0;
    return pri;
}
// fun_2598
fun_2598() {
    var_8 = 0;
    pri = fun_2500()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2648
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2648
    pri = 0;
    return pri;
}
// fun_2658
fun_2658() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2688
fun_2688() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_26B8
// lab_26B8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_26F8
    OP_JUMP lab_2728
// lab_26F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_26B8
// lab_2728
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2770
fun_2770() {
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
// fun_27E0
fun_27E0() {
    OP_JUMP lab_27F8
// lab_27F8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2830
    pri = 0;
    return pri;
// lab_2830
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27F8
    pri = 0;
    return pri;
}
// fun_2870
fun_2870() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0660(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0780(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0060(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_08A0(var_136, var_128, var_120)
    var_24 = pri;
    var_152 = arg_5;
    var_160 = arg_3;
    var_168 = var_24;
    var_176 = var_16;
    var_184 = var_8;
    var_192 = arg_0;
    pri = EvCameraMoveOffsetLookAt(var_192, var_184, var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_29D0
fun_29D0() {
    pri = arg_6;
    OP_JNZ lab_2A08
    var_8 = 0;
    pri = fun_1260()
// lab_2A08
    pri = arg_1;
    switch (pri) {
// switch_3F70
        case default:
        {
// switch_3F70_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_42C0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_42C0
            pri = 1;
            OP_JUMP lab_42C8
// lab_42C0
            pri = 0;
// lab_42C8
            OP_JZER lab_4420
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D50(var_24, var_16)
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4480
// lab_4420
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
// lab_4480
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_44E0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4540
// lab_44E0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4540
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4540
            pri = arg_2;
            OP_JZER lab_4580
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4580
            var_8 = 0;
            pri = fun_12A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F70_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x1:
        {
// switch_3F70_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x2:
        {
// switch_3F70_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x3:
        {
// switch_3F70_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x4:
        {
// switch_3F70_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x5:
        {
// switch_3F70_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0x6:
        {
// switch_3F70_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0x7:
        {
// switch_3F70_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0x8:
        {
// switch_3F70_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x9:
        {
// switch_3F70_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0xa:
        {
// switch_3F70_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0xb:
        {
// switch_3F70_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0xc:
        {
// switch_3F70_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0xd:
        {
// switch_3F70_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0xe:
        {
// switch_3F70_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0xf:
        {
// switch_3F70_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x10:
        {
// switch_3F70_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x11:
        {
// switch_3F70_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0x12:
        {
// switch_3F70_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0x13:
        {
// switch_3F70_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x14:
        {
// switch_3F70_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x15:
        {
// switch_3F70_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x16:
        {
// switch_3F70_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x17:
        {
// switch_3F70_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x18:
        {
// switch_3F70_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x19:
        {
// switch_3F70_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0FC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F70_case_default
        }
        case 0x1a:
        {
// switch_3F70_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CD8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0FC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F70_case_default
        }
        case 0x1b:
        {
// switch_3F70_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CD8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0FC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F70_case_default
        }
        case 0x1c:
        {
// switch_3F70_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CD8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0FC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F70_case_default
        }
        case 0x1d:
        {
// switch_3F70_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x1e:
        {
// switch_3F70_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x1f:
        {
// switch_3F70_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x20:
        {
// switch_3F70_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x21:
        {
// switch_3F70_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x22:
        {
// switch_3F70_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x23:
        {
// switch_3F70_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x24:
        {
// switch_3F70_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x25:
        {
// switch_3F70_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x26:
        {
// switch_3F70_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x27:
        {
// switch_3F70_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x28:
        {
// switch_3F70_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
        case 0x29:
        {
// switch_3F70_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F70_case_default
        }
    }
}
// fun_45B0
fun_45B0() {
    pri = arg_4;
    OP_JNZ lab_45E8
    var_8 = 0;
    pri = fun_1260()
// lab_45E8
    pri = arg_1;
    switch (pri) {
// switch_59C0
        case default:
        {
// switch_59C0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 11720;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_17D0(var_264)
            OP_JZER lab_5F88
            pri = arg_3;
            switch (pri) {
// switch_5F30
                case default:
                {
// switch_5F30_case_default
                    OP_JUMP lab_6240
// lab_6240
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_62B0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_62B0
                    var_8 = 0;
                    pri = fun_12A0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5F30_case_0x1
                    var_8 = 32;
                    var_16 = 11872;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5F30_case_default
                }
                case 0x2:
                {
// switch_5F30_case_0x2
                    var_8 = 32;
                    var_16 = 11976;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5F30_case_default
                }
                case 0x3:
                {
// switch_5F30_case_0x3
                    var_8 = 32;
                    var_16 = 11776;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_5F30_case_default
                }
            }
// lab_5F88
            pri = arg_1;
            OP_JZER lab_5FD8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5FD8
            pri = 0;
            OP_JUMP lab_5FE0
// lab_5FD8
            pri = 1;
// lab_5FE0
            OP_JZER lab_6048
            var_8 = 12072;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D50(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6048
            pri = 1;
            OP_JUMP lab_6050
// lab_6048
            pri = 0;
// lab_6050
            OP_JZER lab_60A0
            var_8 = 32;
            var_16 = 12168;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6240
// lab_60A0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6108
            var_8 = 32;
            var_16 = 12328;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6240
// lab_6108
            var_16 = 12448;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D50(var_24, var_16)
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
            var_176 = 12552;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 12568;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_59C0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x1:
        {
// switch_59C0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x2:
        {
// switch_59C0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x3:
        {
// switch_59C0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x4:
        {
// switch_59C0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x5:
        {
// switch_59C0_case_0x5
            var_8 = 1;
            var_16 = 11200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F88(var_40)
            OP_JUMP switch_59C0_case_default
        }
        case 0x6:
        {
// switch_59C0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x7:
        {
// switch_59C0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x8:
        {
// switch_59C0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x9:
        {
// switch_59C0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0xa:
        {
// switch_59C0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0xb:
        {
// switch_59C0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0xc:
        {
// switch_59C0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0xd:
        {
// switch_59C0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0xe:
        {
// switch_59C0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0xf:
        {
// switch_59C0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x10:
        {
// switch_59C0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x11:
        {
// switch_59C0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x12:
        {
// switch_59C0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x13:
        {
// switch_59C0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x14:
        {
// switch_59C0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x15:
        {
// switch_59C0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x16:
        {
// switch_59C0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x17:
        {
// switch_59C0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x18:
        {
// switch_59C0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x19:
        {
// switch_59C0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x1a:
        {
// switch_59C0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x1b:
        {
// switch_59C0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x1c:
        {
// switch_59C0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x1d:
        {
// switch_59C0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x1e:
        {
// switch_59C0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x1f:
        {
// switch_59C0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x20:
        {
// switch_59C0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x21:
        {
// switch_59C0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x22:
        {
// switch_59C0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x23:
        {
// switch_59C0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x24:
        {
// switch_59C0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x25:
        {
// switch_59C0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x26:
        {
// switch_59C0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x27:
        {
// switch_59C0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x28:
        {
// switch_59C0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x29:
        {
// switch_59C0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x2a:
        {
// switch_59C0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x2b:
        {
// switch_59C0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x2c:
        {
// switch_59C0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x2d:
        {
// switch_59C0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x2e:
        {
// switch_59C0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x2f:
        {
// switch_59C0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x30:
        {
// switch_59C0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x31:
        {
// switch_59C0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x32:
        {
// switch_59C0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x33:
        {
// switch_59C0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x34:
        {
// switch_59C0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x35:
        {
// switch_59C0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x36:
        {
// switch_59C0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x37:
        {
// switch_59C0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x38:
        {
// switch_59C0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x39:
        {
// switch_59C0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x3a:
        {
// switch_59C0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x3b:
        {
// switch_59C0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x3c:
        {
// switch_59C0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 11296;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x3d:
        {
// switch_59C0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 11472;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
        case 0x3e:
        {
// switch_59C0_case_0x3e
            var_8 = 3;
            var_16 = 11616;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D10(var_24, var_16, var_8)
            OP_JUMP switch_59C0_case_default
        }
    }
}
// fun_62E0
fun_62E0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_63E0
        case default:
        {
// switch_63E0_case_default
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
// switch_63E0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_63E0_case_default
        }
        case 0x1:
        {
// switch_63E0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_63E0_case_default
        }
        case 0x2:
        {
// switch_63E0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_63E0_case_default
        }
        case 0x3:
        {
// switch_63E0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_63E0_case_default
        }
    }
}
// fun_64A0
fun_64A0() {
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
    pri = fun_2450(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2500()
    pri = 0;
    return pri;
}
// fun_6538
fun_6538() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_62E0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_64A0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_65E0
fun_65E0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6630
// lab_6630
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 12616;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_66A8
    OP_JUMP lab_66D8
// lab_66A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_6630
// lab_66D8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6760
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_45B0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1AA0(var_56)
// lab_6760
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_67C8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1338(var_24, var_16)
// lab_67C8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1338(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6888
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D88(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0B08(var_88, var_80, var_72, var_64, var_56)
// lab_6888
    pri = IsPlayerRideBicycle()
    OP_JZER lab_68C8
    pri = 0;
    return pri;
// lab_68C8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6A10
    var_16 = 1;
    var_24 = 8;
    pri = fun_00B8(var_16)
    var_32 = 12736;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0CD8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_69D8
    var_72 = 12;
    var_80 = 8;
    pri = fun_00B8(var_72)
// lab_6A10
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BB0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0BB0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D88(var_40)
    pri = 0;
    return pri;
// lab_69D8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1338(var_16, var_8)
}
// fun_6A98
fun_6A98() {
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
    pri = fun_6538(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2598(var_112)
    var_128 = 0;
    pri = fun_2658()
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
    pri = fun_65E0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6C10
fun_6C10() {
    pri = 12872;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6C98
// lab_6C98
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6E18
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6E08
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6D58
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6D58
    pri = 0;
    OP_JUMP lab_6D60
// lab_6E18
    pri = 0;
    return pri;
// lab_6E08
    OP_JUMP lab_6C90
// lab_6C90
    OP_INC_P_S -936
// lab_6D58
    pri = 1;
// lab_6D60
    OP_JZER lab_6DD8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6DD0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6DD8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6DD0
}
// fun_6E38
fun_6E38() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6ED0
    var_8 = 1;
    var_16 = 0;
    var_24 = 13792;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1A78()
// lab_6ED0
    pri = arg_4;
    OP_JZER lab_6F08
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BA0(var_8)
// lab_6F08
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6F60
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6F60
    pri = 0;
    OP_JUMP lab_6F68
// lab_6F60
    pri = 1;
// lab_6F68
    OP_JZER lab_7030
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7030
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_7008
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_19B8(var_32, var_24)
    OP_JUMP lab_7030
// lab_7030
    pri = arg_2;
    OP_JZER lab_7108
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_70D8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1338(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A00(var_40)
    OP_JUMP lab_7108
// lab_7108
    pri = arg_3;
    OP_JZER lab_7140
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A40(var_8)
// lab_7140
    pri = 0;
    return pri;
// lab_70D8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1338(var_16, var_8)
// lab_7008
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_19B8(var_16, var_8)
}
// fun_7150
fun_7150() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6C10(var_24)
    pri = 0;
    return pri;
}
// fun_71B8
fun_71B8() {
    pri = g_mode;
    switch (pri) {
// switch_72A0
        case default:
        {
// switch_72A0_case_default
            pri = CommandNOP()
            OP_JUMP lab_72F8
// lab_72F8
            pri = 0;
            return pri;
        }
        case 0x9d22fc220b14dba2:
        {
// switch_72A0_case_0x9d22fc220b14dba2
            var_8 = 0;
            pri = fun_8B68()
            OP_JUMP lab_72F8
        }
        case 0x0:
        {
// switch_72A0_case_0x0
            var_8 = 0;
            pri = fun_7308()
            OP_JUMP lab_72F8
        }
        case 0x788463df42d4839c:
        {
// switch_72A0_case_0x788463df42d4839c
            var_8 = 0;
            pri = fun_8CB8()
            OP_JUMP lab_72F8
        }
        case 0x7fc3921e81200316:
        {
// switch_72A0_case_0x7fc3921e81200316
            var_8 = 0;
            pri = fun_8C70()
            OP_JUMP lab_72F8
        }
    }
}
// fun_7308
fun_7308() {
    pri = 0;
    return pri;
}
// fun_7320
fun_7320() {
    var_8 = 1;
    var_16 = 1214016743080096326;
    var_24 = 16;
    pri = fun_09C0(var_16, var_8)
    var_32 = 1;
    var_40 = 1169377006106690087;
    var_48 = 16;
    pri = fun_09C0(var_40, var_32)
    var_56 = 1;
    var_64 = 1169378105618318298;
    var_72 = 16;
    pri = fun_09C0(var_64, var_56)
    var_80 = -1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_1338(var_88, var_80)
    var_104 = 13840;
    pri = SoundPostEvent(var_104)
    pri = EvCameraStart()
    var_112 = 100;
    var_120 = 3;
    OP_PUSH4_C 4602678819172646912, 4607182418800017408, -1655053127185566619, 8802641224559852288
    var_128 = 60;
    var_136 = 56;
    pri = fun_2870(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 3;
    var_152 = 2;
    var_160 = 101;
    var_168 = -8274229260886421666;
    var_176 = 32;
    pri = fun_22F8(var_168, var_160, var_152, var_144)
    var_184 = 15;
    var_192 = 8;
    pri = fun_00B8(var_184)
    var_200 = 1;
    var_208 = 0;
    var_216 = 0;
    OP_PUSH2_C 4607182418800017408, -1655053127185566619
    var_224 = 0;
    var_232 = 48;
    pri = fun_1630(var_224, var_216, var_208, var_200, var_192, var_184)
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C -4600145544382251008, -1655053127185566619
    var_264 = 40;
    pri = fun_0B08(var_256, var_248, var_240, var_232, var_224)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = -40;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 8802641224559852288;
    var_320 = 40;
    pri = fun_0B08(var_312, var_304, var_296, var_288, var_280)
    var_328 = 8802641224559852288;
    var_336 = 8;
    pri = fun_0BB0(var_328)
    var_344 = -1655053127185566619;
    var_352 = 8;
    pri = fun_0BB0(var_344)
    var_360 = 15;
    var_368 = 8;
    pri = fun_00B8(var_360)
    var_376 = 0;
    pri = fun_2658()
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C 4330231415481401191, -1655053127185566619
    var_424 = 56;
    pri = fun_2450(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_2598(var_432)
    var_448 = 0;
    pri = fun_2658()
    var_456 = 1;
    var_464 = 0;
    var_472 = 13792;
    var_480 = 8;
    var_488 = 32;
    pri = fun_0338(var_480, var_472, var_464, var_456)
    var_496 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_7750
fun_7750() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6E38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_77A8
fun_77A8() {
    var_8 = -1655053127185566619;
    var_16 = 8;
    pri = fun_0460(var_8)
    pri = 0;
    return pri;
}
// fun_77E8
fun_77E8() {
    var_8 = 0;
    pri = fun_0490()
    var_16 = 15;
    var_24 = 8;
    pri = fun_00B8(var_16)
    pri = 0;
    return pri;
}
// fun_7838
fun_7838() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4587338432941916160, 4677710867041615872, 4671419186629574656, 8802641224559852288
    var_24 = 48;
    pri = fun_0608(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4677710867041615872, 4671364211048185856, -1655053127185566619
    var_48 = 48;
    pri = fun_0608(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 0;
    var_64 = 6;
    var_72 = -1655053127185566619;
    var_80 = 24;
    pri = fun_1468(var_72, var_64, var_56)
    var_88 = 1;
    var_96 = 8;
    pri = fun_00B8(var_88)
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 0;
    OP_PUSH5_C 4677703937369581814, 4654481825730196931, 4671215174995819889, 4677782064542682972, 4655291989878007398
    var_128 = 4671201469583379661;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_27E0()
    var_152 = 0;
    var_160 = 4631952216750555136;
    var_168 = 2;
    OP_PUSH5_C 4677701639390279762, 4654481825730196931, 4671162684310709862, 4677779766563380920, 4655289614932891402
    var_176 = 4671148981647048704;
    var_184 = 120;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_200 = 14016;
    var_208 = 1;
    var_216 = 0;
    var_224 = 1;
    var_232 = -1;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH5_C 4677710867041615872, 4654131125501401498, 4671185540408672256, 4677703995093942272, 4654105616831637094
    OP_PUSH5_C 4671202033083088896, 4677702620704407552, 4654055918906061619, 4671240515990061056, 4677702579472721510
    OP_PUSH2_C 4653985989966535066, 4671390681790624563
    var_264 = 4;
    var_272 = 168;
    pri = fun_1AD0(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_8 = pri;
    var_280 = 1;
    var_288 = 4596373779694328218;
    var_296 = -1;
    var_304 = 4611686018427387904;
    var_312 = var_8;
    var_320 = 8802641224559852288;
    var_328 = 48;
    pri = fun_0AB0(var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 14064;
    var_352 = 1;
    var_360 = 0;
    var_368 = 1;
    var_376 = -1;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    OP_PUSH5_C 4677710867041615872, 4654219086431623578, 4671144308722630656, 4677701246314872832, 4654194457371161395
    OP_PUSH5_C 4671163550176116736, 4677699871925338112, 4654069992654897152, 4671229520873783296, 4677699871925338112
    OP_PUSH2_C 4653989508403743949, 4671331225699352576
    var_408 = 4;
    var_416 = 168;
    pri = fun_1AD0(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_16 = pri;
    var_424 = 1;
    var_432 = 4596373779694328218;
    var_440 = -1;
    var_448 = 4611686018427387904;
    var_456 = var_16;
    var_464 = -1655053127185566619;
    var_472 = 48;
    pri = fun_0AB0(var_464, var_456, var_448, var_440, var_432, var_424)
    var_480 = 14112;
    var_488 = 8;
    var_496 = 16;
    pri = fun_02D8(var_488, var_480)
    var_504 = 0;
    pri = fun_03A8()
    var_512 = 8802641224559852288;
    var_520 = 8;
    pri = fun_0BB0(var_512)
    var_528 = -1655053127185566619;
    var_536 = 8;
    pri = fun_0BB0(var_528)
    var_544 = 0;
    var_552 = 3;
    var_560 = 0;
    var_568 = 100;
    var_576 = -1;
    OP_PUSH2_C 4330232514993029402, -1655053127185566619
    var_584 = 56;
    pri = fun_2450(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = -1655053127185566619;
    var_600 = 8;
    pri = fun_0BB0(var_592)
    var_608 = 1;
    var_616 = 8;
    pri = fun_2598(var_608)
    var_624 = 0;
    pri = fun_2658()
    var_632 = 0;
    var_640 = 4631952216750555136;
    var_648 = 3;
    OP_PUSH5_C 4677727388578212741, 4654277448508825928, 4671099882955310367, 4677791304563524895, 4655551122778441646
    var_656 = 4671240788119188931;
    var_664 = 90;
    pri = EvCameraMove(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_672 = 90;
    var_680 = 8;
    pri = fun_00B8(var_672)
    var_688 = 0;
    var_696 = 4630854464341383578;
    var_704 = 3;
    OP_PUSH5_C 4677752392847017902, 4653980932213047296, 4670982411132998779, 4677777002666026598, 4655244754858478141
    var_712 = 4671166329191755940;
    var_720 = 90;
    pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 30;
    var_736 = 8;
    pri = fun_00B8(var_728)
    var_744 = -1655053127185566619;
    var_752 = 8;
    pri = fun_0BB0(var_744)
    var_760 = 8802641224559852288;
    var_768 = 8;
    pri = fun_0BB0(var_760)
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    OP_PUSH2_C 4330233614504657613, -1655053127185566619
    var_816 = 56;
    pri = fun_2450(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 1;
    var_832 = 8;
    pri = fun_2598(var_824)
    var_840 = 0;
    pri = fun_2658()
    var_848 = 0;
    var_856 = 4630699653104192717;
    var_864 = 0;
    OP_PUSH5_C 4677705851894203679, 4654341747948818268, 4671136315273096724, 4677743435950420132, 4655005589089204306
    var_872 = 4671223468062272389;
    var_880 = 1;
    pri = EvCameraMove(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_888 = 0;
    pri = fun_27E0()
    var_896 = 0;
    var_904 = 4630699653104192717;
    var_912 = 2;
    OP_PUSH5_C 4677701780952401838, 4654341747948818268, 4671143338403619144, 4677739365008618291, 4655005281225948529
    var_920 = 4671230535173259919;
    var_928 = 180;
    pri = EvCameraMove(var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_936 = 0;
    var_944 = 0;
    var_952 = 0;
    var_960 = 0;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_968 = 48;
    pri = fun_0B58(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 1;
    var_984 = 1;
    var_992 = -1;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_1000 = 40;
    pri = fun_12E0(var_992, var_984, var_976, var_968, var_960)
    var_1008 = 5;
    var_1016 = 8;
    pri = fun_00B8(var_1008)
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = 0;
    var_1048 = 0;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_1056 = 48;
    pri = fun_0B58(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1064 = 1;
    var_1072 = 1;
    var_1080 = -1;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_1088 = 40;
    pri = fun_12E0(var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1096 = 0;
    var_1104 = 3;
    var_1112 = 0;
    var_1120 = 100;
    var_1128 = -1;
    OP_PUSH2_C 4330225917923260136, -1655053127185566619
    var_1136 = 56;
    pri = fun_2450(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_2598(var_1144)
    var_1160 = 0;
    var_1168 = 3;
    var_1176 = 0;
    var_1184 = 100;
    var_1192 = -1;
    OP_PUSH2_C 4330227017434888347, -1655053127185566619
    var_1200 = 56;
    pri = fun_2450(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1208 = 1;
    var_1216 = 8;
    pri = fun_2598(var_1208)
    var_1224 = 0;
    var_1232 = 393274959205226417;
    var_1240 = 0;
    var_1248 = 24;
    pri = fun_2688(var_1240, var_1232, var_1224)
    var_1256 = 0;
    var_1264 = 393271660670341784;
    var_1272 = 1;
    var_1280 = 24;
    pri = fun_2688(var_1272, var_1264, var_1256)
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 0;
    var_1320 = 1;
    var_1328 = 32;
    pri = fun_2770(var_1320, var_1312, var_1304, var_1296)
    var_24 = pri;
    var_1336 = -1655053127185566619;
    var_1344 = 8;
    pri = fun_0BB0(var_1336)
    var_1352 = 8802641224559852288;
    var_1360 = 8;
    pri = fun_0BB0(var_1352)
    var_1368 = 1;
    var_1376 = -1;
    var_1384 = -1;
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = 0;
    var_1416 = -1655053127185566619;
    var_1424 = 56;
    pri = fun_29D0(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    pri = var_24;
    switch (pri) {
// switch_8658
        case default:
        {
// switch_8658_case_default
            var_8 = -1655053127185566619;
            var_16 = 8;
            pri = fun_0D88(var_8)
            var_24 = 2;
            var_32 = 2;
            var_40 = -1655053127185566619;
            var_48 = 24;
            pri = fun_1468(var_40, var_32, var_24)
            var_56 = 0;
            var_64 = 3;
            var_72 = 0;
            var_80 = 100;
            var_88 = -1;
            OP_PUSH2_C 4330221519876747292, -1655053127185566619
            var_96 = 56;
            pri = fun_2450(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 1;
            var_112 = 8;
            pri = fun_2598(var_104)
            var_120 = 0;
            pri = fun_2658()
            var_128 = -1655053127185566619;
            var_136 = 8;
            pri = fun_14D0(var_128)
            var_144 = -1;
            var_152 = 8802641224559852288;
            var_160 = 16;
            pri = fun_1338(var_152, var_144)
            var_168 = -1;
            var_176 = -1655053127185566619;
            var_184 = 16;
            pri = fun_1338(var_176, var_168)
            var_192 = 1;
            var_200 = 0;
            var_208 = 50;
            pri = float(var_208)
            var_216 = pri;
            var_224 = 0;
            var_232 = 0;
            OP_PUSH4_C 4677741103611379712, 4671086584362172416, 4611686018427387904, -1655053127185566619
            var_240 = 72;
            pri = fun_0A38(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_248 = 30;
            var_256 = 8;
            pri = fun_00B8(var_248)
            var_264 = 1;
            var_272 = 0;
            var_280 = 13792;
            var_288 = 8;
            var_296 = 32;
            pri = fun_0338(var_288, var_280, var_272, var_264)
            var_304 = 0;
            pri = fun_03A8()
            var_312 = -1655053127185566619;
            var_320 = 8;
            pri = fun_0BB0(var_312)
            var_328 = 3;
            var_336 = 1;
            pri = EvCameraEnd(var_336, var_328)
            var_344 = 5;
            var_352 = 8;
            pri = fun_00B8(var_344)
            var_360 = 0;
            var_368 = 1214016743080096326;
            var_376 = 16;
            pri = fun_09C0(var_368, var_360)
            var_384 = 0;
            var_392 = 1169377006106690087;
            var_400 = 16;
            pri = fun_09C0(var_392, var_384)
            var_408 = 0;
            var_416 = 1169378105618318298;
            var_424 = 16;
            pri = fun_09C0(var_416, var_408)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8658_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 4330228116946516558, -1655053127185566619
            var_48 = 56;
            pri = fun_2450(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_2598(var_56)
            var_72 = 0;
            pri = fun_2658()
            OP_JUMP switch_8658_case_default
        }
        case 0x1:
        {
// switch_8658_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 4330229216458144769, -1655053127185566619
            var_48 = 56;
            pri = fun_2450(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_2598(var_56)
            var_72 = 0;
            pri = fun_2658()
            OP_JUMP switch_8658_case_default
        }
    }
}
// fun_8A18
fun_8A18() {
    pri = 0;
    return pri;
}
// fun_8A30
fun_8A30() {
    var_8 = 140;
    var_16 = 8;
    pri = fun_7150(var_8)
    var_24 = 10;
    var_32 = -5552271472220922956;
    pri = WorkSet(var_32, var_24)
    var_40 = -4242657469657360075;
    pri = VanishFlagReset(var_40)
    pri = 0;
    return pri;
}
// fun_8AC0
fun_8AC0() {
    OP_PUSH2_C -1655053127185566619, 1820663424830640830
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 15;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 14112;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02D8(var_32, var_24)
    var_48 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_8B68
fun_8B68() {
    var_8 = 0;
    pri = fun_7320()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_7750()
    var_24 = 0;
    pri = fun_77A8()
    var_32 = 0;
    pri = fun_77E8()
    var_40 = 0;
    pri = fun_7838()
    var_48 = 0;
    pri = fun_8A18()
    var_56 = 0;
    pri = fun_8A30()
    var_64 = 0;
    pri = fun_8AC0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8C70
fun_8C70() {
    var_8 = 0;
    pri = fun_77A8()
    var_16 = 0;
    pri = fun_8A30()
    pri = 0;
    return pri;
}
// fun_8CB8
fun_8CB8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4330222619388375503;
    var_88 = 80;
    pri = fun_6A98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
