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
            pri = fun_0230()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    var_8 = 3959051494598239103;
    pri = FlagReset(var_8)
    var_16 = -22527807675259664;
    pri = FlagReset(var_16)
    var_24 = -22525608652003242;
    pri = FlagReset(var_24)
    var_32 = -22524509140375031;
    pri = FlagReset(var_32)
    var_40 = -22522310117118609;
    pri = FlagReset(var_40)
    var_48 = -22521210605490398;
    pri = FlagReset(var_48)
    var_56 = -22520111093862187;
    pri = FlagReset(var_56)
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0230
fun_0230() {
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 9023940719055555153
    OP_JZER lab_02D0
    var_8 = 2211420772901007116;
    pri = FlagGet(var_8)
    OP_JNZ lab_02D0
    var_16 = 2211420772901007116;
    pri = FlagSet(var_16)
// lab_02D0
    pri = 0;
    return pri;
}
