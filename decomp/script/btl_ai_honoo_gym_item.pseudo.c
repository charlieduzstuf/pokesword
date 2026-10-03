// fun_0010
fun_0010() {
    OP_BREAK 
    OP_PUSH_S 56
    OP_PUSH_S 48
    OP_PUSH_S 40
    OP_PUSH_S 32
    OP_PUSH_S 24
    OP_PUSH 0
    var_8 = 48;
    OP_SYSREQ_C fun_F8A8C823
    OP_STACK 56
    return pri;
}
// fun_00B8
fun_00B8() {
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_LOAD_ALT 8
    OP_ADD 
    OP_STOR_PRI 8
    pri = 0;
    return pri;
}
// fun_0110
fun_0110() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 118;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    switch (pri) {
// switch_0210
        case default:
        {
// switch_0210_case_default
            OP_STACK 8
            pri = 0;
            return pri;
        }
        case 0x4:
        {
// switch_0210_case_0x4
            OP_BREAK 
            var_8 = 0;
            pri = fun_0258()
            OP_JUMP switch_0210_case_default
        }
    }
}
// fun_0258
fun_0258() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 49
    OP_JZER lab_0348
    OP_BREAK 
    var_56 = 20;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0348
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 50;
    OP_JSLEQ lab_04C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 120;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_04B8
    OP_BREAK 
    var_104 = 20;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_04C8
    OP_BREAK 
    var_8 = -20;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_04B8
    OP_JUMP lab_0500
// lab_0500
    pri = 0;
    return pri;
}
