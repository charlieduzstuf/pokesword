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
    pri = arg_0;
    OP_JZER lab_01A8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02A8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0318()
// lab_01A8
    var_8 = arg_1;
    pri = SetPlayerUniform(var_8)
    pri = CallReloadPlayer()
    pri = arg_0;
    OP_JZER lab_0238
    var_16 = 80;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0248(var_24, var_16)
    var_40 = 0;
    pri = fun_0318()
// lab_0238
    pri = 0;
    return pri;
}
// fun_0248
fun_0248() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02A8
fun_02A8() {
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
// fun_0318
fun_0318() {
    OP_JUMP lab_0330
// lab_0330
    pri = FadeWait_()
    OP_JZER lab_0368
    pri = 0;
    return pri;
// lab_0368
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0330
    pri = 0;
    return pri;
}
// fun_03A8
fun_03A8() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03D0
fun_03D0() {
    pri = arg_0;
    switch (pri) {
// switch_0578
        case default:
        {
// switch_0578_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0578_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x1:
        {
// switch_0578_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x2:
        {
// switch_0578_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x3:
        {
// switch_0578_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x4:
        {
// switch_0578_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x5:
        {
// switch_0578_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
        case 0x6:
        {
// switch_0578_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0578_case_default
        }
    }
}
// fun_0610
fun_0610() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06B8
fun_06B8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0738
    pri = 0;
    return pri;
// lab_0738
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0778
// lab_0778
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0968(var_8)
    OP_JNZ lab_0800
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_07F0
    pri = 0;
    return pri;
// lab_0800
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0848
    pri = 0;
    return pri;
// lab_0848
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08F0(var_8)
    pri = 0;
    return pri;
// lab_08A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0778
    pri = 0;
    return pri;
// lab_07F0
    OP_JUMP lab_0848
}
// fun_08F0
fun_08F0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0968
fun_0968() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0998
fun_0998() {
    OP_JUMP lab_09B0
// lab_09B0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0A40
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0A30
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06F0(var_8)
    pri = 0;
    return pri;
// lab_0A40
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AD0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0AC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06F0(var_8)
    pri = 0;
    return pri;
// lab_0AD0
    pri = 0;
    return pri;
// lab_0AC0
    OP_JUMP lab_0AE0
// lab_0AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09B0
    pri = 0;
    return pri;
// lab_0A30
    OP_JUMP lab_0AE0
}
// fun_0B20
fun_0B20() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0998(var_40)
    pri = 0;
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0BE0
fun_0BE0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0C08
fun_0C08() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0C40
fun_0C40() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_0C78
fun_0C78() {
    pri = 128;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_0D00
// lab_0D00
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_0E80
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_0E70
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_0DC0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_0DC0
    pri = 0;
    OP_JUMP lab_0DC8
// lab_0E80
    pri = 0;
    return pri;
// lab_0E70
    OP_JUMP lab_0CF8
// lab_0CF8
    OP_INC_P_S -936
// lab_0DC0
    pri = 1;
// lab_0DC8
    OP_JZER lab_0E40
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_0E38
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_0E40
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_0E38
}
// fun_0EA0
fun_0EA0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_0F38
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02A8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0318()
    var_56 = 0;
    pri = fun_0BE0()
// lab_0F38
    pri = arg_4;
    OP_JZER lab_0F70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C08(var_8)
// lab_0F70
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_0FC8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_0FC8
    pri = 0;
    OP_JUMP lab_0FD0
// lab_0FC8
    pri = 1;
// lab_0FD0
    OP_JZER lab_1098
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1098
    var_16 = 0;
    pri = fun_03A8()
    OP_JZER lab_1070
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0B20(var_32, var_24)
    OP_JUMP lab_1098
// lab_1098
    pri = arg_2;
    OP_JZER lab_1170
    var_8 = 0;
    pri = fun_03A8()
    OP_JZER lab_1140
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0928(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06B8(var_40)
    OP_JUMP lab_1170
// lab_1170
    pri = arg_3;
    OP_JZER lab_11A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0BA8(var_8)
// lab_11A8
    pri = 0;
    return pri;
// lab_1140
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0928(var_16, var_8)
// lab_1070
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0B20(var_16, var_8)
}
// fun_11B8
fun_11B8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C78(var_24)
    pri = 0;
    return pri;
}
// fun_1220
fun_1220() {
    pri = g_mode;
    switch (pri) {
// switch_12E0
        case default:
        {
// switch_12E0_case_default
            pri = CommandNOP()
            OP_JUMP lab_1328
// lab_1328
            pri = 0;
            return pri;
        }
        case 0xb84a7d221acaedbb:
        {
// switch_12E0_case_0xb84a7d221acaedbb
            var_8 = 0;
            pri = fun_1858()
            OP_JUMP lab_1328
        }
        case 0x0:
        {
// switch_12E0_case_0x0
            var_8 = 0;
            pri = fun_1338()
            OP_JUMP lab_1328
        }
        case 0x548f5b1e68af2307:
        {
// switch_12E0_case_0x548f5b1e68af2307
            var_8 = 0;
            pri = fun_1948()
            OP_JUMP lab_1328
        }
    }
}
// fun_1338
fun_1338() {
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0EA0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = -4825674380137535056;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 16;
    pri = fun_0138(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    var_8 = 3;
    var_16 = 8;
    pri = fun_03D0(var_8)
    var_24 = 1;
    var_32 = 8802641224559852288;
    var_40 = 16;
    pri = fun_0678(var_32, var_24)
    var_48 = 1;
    var_56 = -2664763386676178833;
    var_64 = 16;
    pri = fun_0678(var_56, var_48)
    var_72 = 1;
    var_80 = -1110336741612234150;
    var_88 = 16;
    pri = fun_0678(var_80, var_72)
    var_96 = 1;
    var_104 = -2468653985012663263;
    var_112 = 16;
    pri = fun_0678(var_104, var_96)
    var_120 = 60;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 0;
    var_144 = 201901857388939299;
    var_152 = 16;
    pri = fun_0640(var_144, var_136)
    var_160 = 1048;
    var_168 = 8;
    pri = fun_0C40(var_160)
    var_176 = 1;
    var_184 = 201901857388939299;
    var_192 = 16;
    pri = fun_0640(var_184, var_176)
    var_200 = 0;
    var_208 = 8802641224559852288;
    var_216 = 16;
    pri = fun_0678(var_208, var_200)
    var_224 = 0;
    var_232 = -2664763386676178833;
    var_240 = 16;
    pri = fun_0678(var_232, var_224)
    var_248 = 0;
    var_256 = -1110336741612234150;
    var_264 = 16;
    pri = fun_0678(var_256, var_248)
    var_272 = 0;
    var_280 = -2468653985012663263;
    var_288 = 16;
    pri = fun_0678(var_280, var_272)
    pri = 0;
    return pri;
}
// fun_1680
fun_1680() {
    pri = 0;
    return pri;
}
// fun_1698
fun_1698() {
    var_8 = 521;
    var_16 = 8;
    pri = fun_11B8(var_8)
    var_24 = 20;
    var_32 = 8451806550567554440;
    pri = WorkSet(var_32, var_24)
    var_40 = -2664763386676178833;
    var_48 = 8;
    pri = fun_0610(var_40)
    var_56 = -1110336741612234150;
    var_64 = 8;
    pri = fun_0610(var_56)
    var_72 = -2468653985012663263;
    var_80 = 8;
    pri = fun_0610(var_72)
    var_88 = 6302179420569030780;
    pri = FlagSet(var_88)
    var_96 = 3;
    var_104 = 8;
    pri = fun_03D0(var_96)
    pri = 0;
    return pri;
}
// fun_17C0
fun_17C0() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 80;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0248(var_32, var_24)
    var_48 = 0;
    pri = fun_0318()
    var_56 = 1208;
    pri = CallTips(var_56)
    pri = 0;
    return pri;
}
// fun_1858
fun_1858() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1350()
    var_16 = 0;
    pri = fun_13A8()
    var_24 = 0;
    pri = fun_13E8()
    var_32 = 0;
    pri = fun_1428()
    var_40 = 0;
    pri = fun_1680()
    var_48 = 0;
    pri = fun_1698()
    var_56 = 0;
    pri = fun_17C0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_1948
fun_1948() {
    var_8 = 0;
    pri = fun_13A8()
    var_16 = 0;
    pri = fun_1698()
    pri = 0;
    return pri;
}
