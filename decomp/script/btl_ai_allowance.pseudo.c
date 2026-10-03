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
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 117;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0198
fun_0198() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_01D8()
    pri = 0;
    return pri;
}
// fun_01D8
fun_01D8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    pri = fun_0110()
    var_40 = pri;
    var_48 = 26;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_06A0
    OP_BREAK 
    OP_STACK -8
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 55;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_03A0
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_06A0
    pri = 0;
    return pri;
// lab_03A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0520
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0510
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_0520
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0690
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 150;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0690
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_0690
    OP_STACK 8
// lab_0510
    OP_JUMP lab_0690
}
