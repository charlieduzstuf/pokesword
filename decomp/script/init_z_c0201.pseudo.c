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
            pri = fun_0168()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = 2234620552158517153;
    pri = FlagReset(var_8)
    var_16 = -3054674591831309094;
    pri = FlagReset(var_16)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0168
fun_0168() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI -281100147996315678
    OP_JZER lab_0230
    var_8 = -2367958935666578021;
    pri = FlagGet(var_8)
    OP_JNZ lab_0230
    var_16 = -2367958935666578021;
    pri = FlagSet(var_16)
    var_24 = -352066330549648574;
    pri = FlagSet(var_24)
// lab_0230
    pri = 0;
    return pri;
}
