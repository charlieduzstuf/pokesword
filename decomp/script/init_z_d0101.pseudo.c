// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_00A0
        case default:
        {
// switch_00A0_case_default
            pri = CommandNOP()
            OP_JUMP lab_00D8
// lab_00D8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_00A0_case_0x0
            var_8 = 0;
            pri = fun_00E8()
            OP_JUMP lab_00D8
        }
        case 0x1:
        {
// switch_00A0_case_0x1
            var_8 = 0;
            pri = fun_0118()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0118
fun_0118() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -8113290503354198418
    OP_JZER lab_01B8
    var_8 = 932588694068753615;
    pri = FlagGet(var_8)
    OP_JNZ lab_01B8
    var_16 = 932588694068753615;
    pri = FlagSet(var_16)
// lab_01B8
    pri = 0;
    return pri;
}
