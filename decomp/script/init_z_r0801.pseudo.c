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
            pri = fun_0200()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    var_8 = 2991094152967520476;
    pri = FlagReset(var_8)
    var_16 = 5978005932493166891;
    pri = FlagReset(var_16)
    var_24 = -8327637197536965948;
    pri = FlagReset(var_24)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0200
fun_0200() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 4943510927838926711
    OP_JZER lab_02A0
    var_8 = -2137603707415615466;
    pri = FlagGet(var_8)
    OP_JNZ lab_02A0
    var_16 = -2137603707415615466;
    pri = FlagSet(var_16)
// lab_02A0
    var_8 = -6366896777942950043;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_0308
    var_24 = 13;
    var_32 = -6366896777942950043;
    var_40 = 16;
    pri = fun_0038(var_32, var_24)
// lab_0308
    pri = 0;
    return pri;
}
