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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0308
// lab_0308
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0348
    OP_JUMP lab_03B8
// lab_0348
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0388
    OP_JUMP lab_03B8
// lab_0388
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
// lab_03B8
    pri = 0;
    return pri;
}
// fun_03D0
fun_03D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0410
fun_0410() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0450
fun_0450() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0488
fun_0488() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_04D0
    pri = 0;
    return pri;
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0510
// lab_0510
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0700(var_8)
    OP_JNZ lab_0598
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0588
    pri = 0;
    return pri;
// lab_0598
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_05E0
    pri = 0;
    return pri;
// lab_05E0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0640
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0688(var_8)
    pri = 0;
    return pri;
// lab_0640
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0510
    pri = 0;
    return pri;
// lab_0588
    OP_JUMP lab_05E0
}
// fun_0688
fun_0688() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0700
fun_0700() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0730
fun_0730() {
    OP_JUMP lab_0748
// lab_0748
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_07D8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_07C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0488(var_8)
    pri = 0;
    return pri;
// lab_07D8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0868
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0858
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0488(var_8)
    pri = 0;
    return pri;
// lab_0868
    pri = 0;
    return pri;
// lab_0858
    OP_JUMP lab_0878
// lab_0878
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0748
    pri = 0;
    return pri;
// lab_07C8
    OP_JUMP lab_0878
}
// fun_08B8
fun_08B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0488(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0730(var_40)
    pri = 0;
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0978
fun_0978() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_0A10
fun_0A10() {
    pri = 32;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_0A98
// lab_0A98
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_0C18
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_0C08
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_0B58
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_0B58
    pri = 0;
    OP_JUMP lab_0B60
// lab_0C18
    pri = 0;
    return pri;
// lab_0C08
    OP_JUMP lab_0A90
// lab_0A90
    OP_INC_P_S -936
// lab_0B58
    pri = 1;
// lab_0B60
    OP_JZER lab_0BD8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_0BD0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_0BD8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_0BD0
}
// fun_0C38
fun_0C38() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_0CD0
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0978()
// lab_0CD0
    pri = arg_4;
    OP_JZER lab_0D08
    var_8 = 1;
    var_16 = 8;
    pri = fun_09A0(var_8)
// lab_0D08
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_0D60
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_0D60
    pri = 0;
    OP_JUMP lab_0D68
// lab_0D60
    pri = 1;
// lab_0D68
    OP_JZER lab_0E30
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_0E30
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_0E08
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_08B8(var_32, var_24)
    OP_JUMP lab_0E30
// lab_0E30
    pri = arg_2;
    OP_JZER lab_0F08
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_0ED8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_06C0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0450(var_40)
    OP_JUMP lab_0F08
// lab_0F08
    pri = arg_3;
    OP_JZER lab_0F40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0940(var_8)
// lab_0F40
    pri = 0;
    return pri;
// lab_0ED8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_06C0(var_16, var_8)
// lab_0E08
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_08B8(var_16, var_8)
}
// fun_0F50
fun_0F50() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_10D0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FE8
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
// lab_10D0
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_0FE8
    pri = arg_0;
    OP_JNZ lab_1030
    var_8 = 1000;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_1050
// lab_1030
    var_8 = 1176;
    pri = SoundPostEvent(var_8)
// lab_1050
    var_8 = 0;
    var_16 = 8;
    pri = fun_02C0(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10D0
    var_24 = 1440;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
}
// fun_1110
fun_1110() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A10(var_24)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    pri = g_mode;
    switch (pri) {
// switch_1238
        case default:
        {
// switch_1238_case_default
            pri = CommandNOP()
            OP_JUMP lab_1280
// lab_1280
            pri = 0;
            return pri;
        }
        case 0x8d19a722025ce856:
        {
// switch_1238_case_0x8d19a722025ce856
            var_8 = 0;
            pri = fun_15B8()
            OP_JUMP lab_1280
        }
        case 0x0:
        {
// switch_1238_case_0x0
            var_8 = 0;
            pri = fun_1290()
            OP_JUMP lab_1280
        }
        case 0x6dec551e76dfdc5a:
        {
// switch_1238_case_0x6dec551e76dfdc5a
            var_8 = 0;
            pri = fun_16A8()
            OP_JUMP lab_1280
        }
    }
}
// fun_1290
fun_1290() {
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0C38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1300
fun_1300() {
    pri = 0;
    return pri;
}
// fun_1318
fun_1318() {
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1;
    var_32 = 7977662558473576712;
    var_40 = 16;
    pri = fun_0410(var_32, var_24)
    pri = IsMovieSkipEnable()
    OP_JZER lab_13C0
    OP_JUMP lab_13E0
// lab_13C0
    var_8 = 1488;
    var_16 = 8;
    pri = fun_09D8(var_8)
// lab_13E0
    OP_LCTRL 5
    OP_SCTRL 4
    pri = IsMovieSkipEnable()
    OP_JZER lab_1480
    var_8 = 1;
    var_16 = -90;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_03D0(var_32, var_24, var_16)
// lab_1480
    var_8 = 0;
    var_16 = 7977662558473576712;
    var_24 = 16;
    pri = fun_0410(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14C0
fun_14C0() {
    pri = 0;
    return pri;
}
// fun_14D8
fun_14D8() {
    var_8 = 370;
    var_16 = 8;
    pri = fun_1110(var_8)
    var_24 = -2126201733266812698;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_1538
fun_1538() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0F50(var_16, var_8)
    var_32 = 1440;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0138(var_40, var_32)
    var_56 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_15B8
fun_15B8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_12A8()
    var_16 = 0;
    pri = fun_1300()
    var_24 = 0;
    pri = fun_1318()
    var_32 = 0;
    pri = fun_1330()
    var_40 = 0;
    pri = fun_14C0()
    var_48 = 0;
    pri = fun_14D8()
    var_56 = 0;
    pri = fun_1538()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    var_8 = 0;
    pri = fun_1300()
    var_16 = 0;
    pri = fun_14D8()
    pri = 0;
    return pri;
}
