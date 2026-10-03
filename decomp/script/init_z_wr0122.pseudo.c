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
    pri = arg_1;
    OP_JZER lab_0180
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_0180
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01B8
fun_01B8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0218
fun_0218() {
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
// fun_0288
fun_0288() {
    OP_JUMP lab_02A0
// lab_02A0
    pri = FadeWait_()
    OP_JZER lab_02D8
    pri = 0;
    return pri;
// lab_02D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02A0
    pri = 0;
    return pri;
}
// fun_0318
fun_0318() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0348
fun_0348() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0378
fun_0378() {
    var_8 = arg_0;
    pri = IsFieldObjectSetupTiming_(var_8)
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_03E8
fun_03E8() {
    pri = arg_1;
    OP_JZER lab_0458
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0218(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0288()
// lab_0458
    pri = 80;
    OP_ADDR_ALT -1200
    OP_MOVS 1200
    OP_CONST_S -1208, 50
    OP_ZERO_P_S -1216
    OP_CONST_S -1224, 5
    var_1232 = -9019446742694110882;
    pri = FlagGet(var_1232)
    OP_JZER lab_0538
    pri = var_1208;
    var_1216 = pri;
    OP_JUMP lab_0550
// lab_0538
    OP_CONST_S -1216, 22
// lab_0550
    OP_ZERO_P_S -1232
    OP_ZERO_P_S -1240
    OP_ZERO_P_S -1232
    OP_JUMP lab_0590
// lab_0590
    OP_LOAD_S_BOTH -1232, -1208
    OP_JSGEQ lab_0698
    OP_ADDR_P_ALT -1200
    pri = var_1232;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    pri = FlagSet(var_8)
    pri = arg_0;
    OP_JZER lab_0688
    OP_ADDR_P_ALT -1200
    pri = var_1232;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 8;
    pri = fun_0348(var_16)
// lab_0698
    OP_ZERO_P_S -1232
    OP_JUMP lab_06B8
// lab_06B8
    OP_LOAD_S_BOTH -1232, -1224
    OP_JSGEQ lab_0968
    OP_ZERO_P_S -1240
    OP_JUMP lab_0700
// lab_0968
    pri = arg_1;
    OP_JZER lab_09E0
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1280;
    var_32 = 8;
    var_40 = 16;
    pri = fun_01B8(var_32, var_24)
    var_48 = 0;
    pri = fun_0288()
// lab_09E0
    pri = 0;
    return pri;
// lab_0700
    pri = var_1240;
    alt = 100;
    OP_JSGEQ lab_0958
    var_16 = 0;
    var_24 = var_1216;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    var_1248 = pri;
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_40 = pri;
    pri = VanishFlagGet(var_40)
    OP_JZER lab_0840
    pri = arg_2;
    var_48 = pri;
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_JEQ lab_0840
    pri = 1;
    OP_JUMP lab_0848
// lab_0958
    OP_JUMP lab_06B0
// lab_06B0
    OP_INC_P_S -1232
// lab_0840
    pri = 0;
// lab_0848
    OP_JZER lab_0940
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_8 = pri;
    pri = FlagReset(var_8)
    pri = arg_0;
    OP_JZER lab_0928
    OP_ADDR_P_ALT -1200
    pri = var_1248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 8;
    pri = fun_0318(var_16)
// lab_0940
    OP_JUMP lab_06F8
// lab_06F8
    OP_INC_P_S -1240
// lab_0928
    OP_JUMP lab_0958
// lab_0688
    OP_JUMP lab_0588
// lab_0588
    OP_INC_P_S -1232
}
// fun_09F8
fun_09F8() {
    pri = 1328;
    OP_ADDR_ALT -912
    OP_MOVS 912
    pri = 2240;
    OP_ADDR_ALT -1056
    OP_MOVS 144
    OP_CONST_S -1064, 114
    OP_CONST_S -1072, 18
    OP_ZERO_P_S -1080
    OP_ZERO_P_S -1080
    OP_JUMP lab_0AE0
// lab_0AE0
    OP_LOAD_S_BOTH -1080, -1064
    OP_JSGEQ lab_0B50
    OP_ADDR_P_ALT -912
    pri = var_1080;
    OP_LIDX_P_B 3
    var_8 = pri;
    pri = FlagReset(var_8)
    OP_JUMP lab_0AD8
// lab_0B50
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_0BE0
    var_8 = -1251043979743435512;
    pri = FlagReset(var_8)
    var_16 = 9084871044164192133;
    pri = FlagReset(var_16)
    OP_JUMP lab_0C30
// lab_0BE0
    var_8 = 4639331620742658412;
    pri = FlagReset(var_8)
    var_16 = 4284010857221015048;
    pri = FlagReset(var_16)
// lab_0C30
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_0CF8
    OP_ZERO_P_S -1080
    OP_JUMP lab_0C88
// lab_0CF8
    pri = 0;
    return pri;
// lab_0C88
    OP_LOAD_S_BOTH -1080, -1072
    OP_JSGEQ lab_0CF8
    OP_ADDR_P_ALT -1056
    pri = var_1080;
    OP_LIDX_P_B 3
    var_8 = pri;
    pri = FlagReset(var_8)
    OP_JUMP lab_0C80
// lab_0C80
    OP_INC_P_S -1080
// lab_0AD8
    OP_INC_P_S -1080
}
// fun_0D10
fun_0D10() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_0DD0
    var_8 = 8106079978163211080;
    pri = FlagReset(var_8)
    var_16 = 3659812871750077692;
    pri = FlagReset(var_16)
    var_24 = 2113986344944074123;
    pri = FlagReset(var_24)
    OP_JUMP lab_0E48
// lab_0DD0
    var_8 = -8622062552344276047;
    pri = FlagReset(var_8)
    var_16 = 3177992585167662909;
    pri = FlagReset(var_16)
    var_24 = -4857160162063413694;
    pri = FlagReset(var_24)
// lab_0E48
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = -317401305166797496;
    pri = FlagGet(var_8)
    OP_JNZ lab_0F38
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 24;
    pri = fun_03E8(var_32, var_24, var_16)
    pri = CommandNOP()
    var_48 = 0;
    pri = fun_09F8()
    var_56 = 0;
    pri = fun_0D10()
    var_64 = -317401305166797496;
    pri = FlagSet(var_64)
// lab_0F38
    pri = 0;
    return pri;
}
// fun_0F48
fun_0F48() {
    pri = g_mode;
    switch (pri) {
// switch_0FE0
        case default:
        {
// switch_0FE0_case_default
            pri = CommandNOP()
            OP_JUMP lab_1018
// lab_1018
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0FE0_case_0x0
            var_8 = 0;
            pri = fun_1028()
            OP_JUMP lab_1018
        }
        case 0x1:
        {
// switch_0FE0_case_0x1
            var_8 = 0;
            pri = fun_1070()
            OP_JUMP lab_1018
        }
    }
}
// fun_1028
fun_1028() {
    var_8 = 0;
    pri = fun_0E58()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_1070
fun_1070() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 8605954963873100932
    OP_JZER lab_1110
    var_8 = -711226611558766645;
    pri = FlagGet(var_8)
    OP_JNZ lab_1110
    var_16 = -711226611558766645;
    pri = FlagSet(var_16)
// lab_1110
    var_8 = -8753057709848650353;
    var_16 = 8;
    pri = fun_0378(var_8)
    OP_JZER lab_11E0
    var_24 = 1;
    pri = Azukariya_IsEggExist_(var_24)
    OP_JZER lab_11E0
    var_32 = 1;
    var_40 = 2384;
    var_48 = -8753057709848650353;
    var_56 = 24;
    pri = fun_03A8(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 3709265103350776868;
    pri = WorkSet(var_72, var_64)
// lab_11E0
    pri = 0;
    return pri;
}
