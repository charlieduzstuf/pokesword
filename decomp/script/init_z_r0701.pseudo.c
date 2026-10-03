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
            pri = fun_0188()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0188
fun_0188() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -765774668402727154
    OP_JZER lab_0228
    var_8 = -6537368755776073809;
    pri = FlagGet(var_8)
    OP_JNZ lab_0228
    var_16 = -6537368755776073809;
    pri = FlagSet(var_16)
// lab_0228
    var_8 = 7303958233374688264;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_0290
    var_24 = 8;
    var_32 = 7303958233374688264;
    var_40 = 16;
    pri = fun_0038(var_32, var_24)
// lab_0290
    pri = 0;
    return pri;
}
