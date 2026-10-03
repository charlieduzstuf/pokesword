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
            pri = fun_01D8()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    var_8 = -3101195578225323866;
    pri = FlagReset(var_8)
    var_16 = -1945335710956130654;
    pri = FlagReset(var_16)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_01D8
fun_01D8() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -5534200428893711657
    OP_JZER lab_0278
    var_8 = -1677182152859277690;
    pri = FlagGet(var_8)
    OP_JNZ lab_0278
    var_16 = -1677182152859277690;
    pri = FlagSet(var_16)
// lab_0278
    var_8 = 6185638140641505285;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_02E0
    var_24 = 0;
    var_32 = 6185638140641505285;
    var_40 = 16;
    pri = fun_0038(var_32, var_24)
// lab_02E0
    pri = 0;
    return pri;
}
