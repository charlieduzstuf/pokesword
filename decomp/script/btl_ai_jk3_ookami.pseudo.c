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
    OP_SYSREQ_C AI_CMD
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
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 67;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0308
    OP_BREAK 
    var_56 = 8;
    var_64 = 0;
    pri = fun_0110()
    OP_HEAP 8
    OP_STOR_I 
    var_72 = alt;
    var_80 = 24;
    var_88 = 24;
    OP_SYSREQ_C printf
    OP_STACK 32
    OP_HEAP -8
    OP_BREAK 
    var_96 = 0;
    pri = fun_0E88()
    OP_JUMP lab_03D8
// lab_0308
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    OP_HEAP 8
    OP_STOR_I 
    var_24 = alt;
    var_32 = 528;
    var_40 = 24;
    OP_SYSREQ_C printf
    OP_STACK 32
    OP_HEAP -8
    OP_BREAK 
    var_48 = 0;
    pri = fun_0440()
// lab_03D8
    OP_BREAK 
    var_8 = 8;
    var_16 = 1024;
    var_24 = 16;
    OP_SYSREQ_C printf
    OP_STACK 24
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 62;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    switch (pri) {
// switch_0658
        case default:
        {
// switch_0658_case_default
            OP_STACK 8
            pri = 0;
            return pri;
        }
        case 0xa:
        {
// switch_0658_case_0xa
            OP_BREAK 
            var_8 = 0;
            pri = fun_06F0()
            OP_JUMP switch_0658_case_default
        }
        case 0x23:
        {
// switch_0658_case_0x23
            OP_BREAK 
            var_8 = 0;
            pri = fun_08B8()
            OP_JUMP switch_0658_case_default
        }
        case 0x45:
        {
// switch_0658_case_0x45
            OP_BREAK 
            var_8 = 0;
            pri = fun_0E30()
            OP_JUMP switch_0658_case_default
        }
        case 0x8b:
        {
// switch_0658_case_0x8b
            OP_BREAK 
            var_8 = 0;
            pri = fun_0DD8()
            OP_JUMP switch_0658_case_default
        }
        case 0x12f:
        {
// switch_0658_case_0x12f
            OP_BREAK 
            var_8 = 0;
            pri = fun_0D80()
            OP_JUMP switch_0658_case_default
        }
        case 0x1b3:
        {
// switch_0658_case_0x1b3
            OP_BREAK 
            var_8 = 0;
            pri = fun_0B98()
            OP_JUMP switch_0658_case_default
        }
    }
}
// fun_06F0
fun_06F0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_07D0
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_07D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_08A8
    OP_BREAK 
    var_56 = 4;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_08A8
    pri = 0;
    return pri;
}
// fun_08B8
fun_08B8() {
    OP_BREAK 
    var_8 = 1280;
    var_16 = 8;
    OP_SYSREQ_C printf
    OP_STACK 16
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 23;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    OP_JNZ lab_09E0
    OP_BREAK 
    var_72 = 10;
    var_80 = 8;
    pri = fun_00B8(var_72)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_09E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0AB0
    OP_BREAK 
    var_56 = -10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_JUMP lab_0B88
// lab_0AB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0B88
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0B88
    pri = 0;
    return pri;
}
// fun_0B98
fun_0B98() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_0C88
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0C88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 1;
    OP_JSLEQ lab_0D70
    OP_BREAK 
    var_56 = 8;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0D70
    pri = 0;
    return pri;
}
// fun_0D80
fun_0D80() {
    OP_BREAK 
    var_8 = 2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    OP_BREAK 
    var_8 = 2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    OP_BREAK 
    var_8 = 3;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_0E88
fun_0E88() {
    OP_BREAK 
    var_8 = -30;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
