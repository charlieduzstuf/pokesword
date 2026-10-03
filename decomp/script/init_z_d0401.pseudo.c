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
            pri = fun_0248()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = 0;
    var_16 = 2047671651235024251;
    pri = WorkSet(var_16, var_8)
    var_24 = -423800443829955505;
    pri = FlagReset(var_24)
    var_32 = -423804841876468349;
    pri = FlagReset(var_32)
    var_40 = 8796413506937815540;
    pri = FlagReset(var_40)
    var_48 = -2552396852955143759;
    pri = FlagGet(var_48)
    OP_JNZ lab_0220
    var_56 = 7937307110866092179;
    pri = FlagReset(var_56)
    var_64 = 7937306011354463968;
    pri = FlagReset(var_64)
// lab_0220
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0248
fun_0248() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -6302013321637459051
    OP_JZER lab_02E8
    var_8 = -909369260115530296;
    pri = FlagGet(var_8)
    OP_JNZ lab_02E8
    var_16 = -909369260115530296;
    pri = FlagSet(var_16)
// lab_02E8
    pri = 0;
    return pri;
}
