// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = IsFieldObjectSetupTiming_(var_8)
    return pri;
}
// fun_0038
fun_0038() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetTentColor_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0078
fun_0078() {
    pri = g_mode;
    switch (pri) {
// switch_0110
        case default:
        {
// switch_0110_case_default
            pri = CommandNOP()
            OP_JUMP lab_0148
// lab_0148
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0110_case_0x0
            var_8 = 0;
            pri = fun_0158()
            OP_JUMP lab_0148
        }
        case 0x1:
        {
// switch_0110_case_0x1
            var_8 = 0;
            pri = fun_02C8()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 560;
    OP_JSGRTR lab_0200
    var_16 = -2217935711652527108;
    pri = FlagSet(var_16)
    var_24 = -8196952725690005508;
    pri = FlagReset(var_24)
    OP_JUMP lab_0250
// lab_0200
    var_8 = -2217935711652527108;
    pri = FlagReset(var_8)
    var_16 = -8196952725690005508;
    pri = FlagReset(var_16)
// lab_0250
    var_8 = 1611551527418391028;
    pri = FlagReset(var_8)
    var_16 = 845650607397152915;
    pri = FlagReset(var_16)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_02C8
fun_02C8() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -2607763408912600973
    OP_JZER lab_0368
    var_8 = -4603619172840388374;
    pri = FlagGet(var_8)
    OP_JNZ lab_0368
    var_16 = -4603619172840388374;
    pri = FlagSet(var_16)
// lab_0368
    var_8 = 4310437280544542441;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_03D0
    var_24 = 4;
    var_32 = 4310437280544542441;
    var_40 = 16;
    pri = fun_0038(var_32, var_24)
// lab_03D0
    pri = 0;
    return pri;
}
