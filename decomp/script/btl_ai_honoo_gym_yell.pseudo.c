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
    pri = fun_1578()
    OP_JUMP lab_03D8
// lab_0308
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    OP_HEAP 8
    OP_STOR_I 
    var_24 = alt;
    var_32 = 520;
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
    var_16 = 1008;
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
    pri = fun_0110()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 62;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 4;
    var_96 = 24;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_STACK -8
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 2;
    var_144 = 33;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_STACK -8
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 1;
    var_192 = 33;
    var_200 = 40;
    pri = fun_0010(var_192, var_184, var_176, var_168, var_160)
    OP_STOR_S_PRI -40
    OP_BREAK 
    OP_LOAD_S_PRI -16
    switch (pri) {
// switch_08D8
        case default:
        {
// switch_08D8_case_default
            OP_STACK 40
            pri = 0;
            return pri;
        }
        case 0x17:
        {
// switch_08D8_case_0x17
            OP_BREAK 
            var_8 = 0;
            pri = fun_1310()
            OP_JUMP switch_08D8_case_default
        }
        case 0x1f:
        {
// switch_08D8_case_0x1f
            OP_BREAK 
            var_8 = 0;
            pri = fun_0AD8()
            OP_JUMP switch_08D8_case_default
        }
        case 0x31:
        {
// switch_08D8_case_0x31
            OP_BREAK 
            var_8 = 0;
            pri = fun_0990()
            OP_JUMP switch_08D8_case_default
        }
        case 0x43:
        {
// switch_08D8_case_0x43
            OP_BREAK 
            var_8 = 0;
            pri = fun_0F38()
            OP_JUMP switch_08D8_case_default
        }
        case 0x9e:
        {
// switch_08D8_case_0x9e
            OP_BREAK 
            var_8 = 0;
            pri = fun_0A80()
            OP_JUMP switch_08D8_case_default
        }
        case 0xa7:
        {
// switch_08D8_case_0xa7
            OP_BREAK 
            var_8 = 0;
            pri = fun_1488()
            OP_JUMP switch_08D8_case_default
        }
        case 0xb0:
        {
// switch_08D8_case_0xb0
            OP_BREAK 
            var_8 = 0;
            pri = fun_0C50()
            OP_JUMP switch_08D8_case_default
        }
        case 0x16c:
        {
// switch_08D8_case_0x16c
            OP_BREAK 
            var_8 = 0;
            pri = fun_1198()
            OP_JUMP switch_08D8_case_default
        }
    }
}
// fun_0990
fun_0990() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0A70
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0A70
    pri = 0;
    return pri;
}
// fun_0A80
fun_0A80() {
    OP_BREAK 
    var_8 = -5;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_0AD8
fun_0AD8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0C40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0C40
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0C40
    pri = 0;
    return pri;
}
// fun_0C50
fun_0C50() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0DC8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0DB8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0DC8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0F28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0F28
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0F28
    pri = 0;
    return pri;
// lab_0DB8
    OP_JUMP lab_0F28
}
// fun_0F38
fun_0F38() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10B0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10A0
    OP_BREAK 
    var_104 = -5;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1188
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1188
    pri = 0;
    return pri;
// lab_10A0
    OP_JUMP lab_1188
}
// fun_1198
fun_1198() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1300
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1300
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1300
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1478
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1478
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1478
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 160;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1568
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1568
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 3;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1658
    OP_BREAK 
    var_56 = -30;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1658
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
// switch_18D8
        case default:
        {
// switch_18D8_case_default
            OP_STACK 8
            pri = 0;
            return pri;
        }
        case 0x17:
        {
// switch_18D8_case_0x17
            OP_BREAK 
            var_8 = 0;
            pri = fun_25B0()
            OP_JUMP switch_18D8_case_default
        }
        case 0x1f:
        {
// switch_18D8_case_0x1f
            OP_BREAK 
            var_8 = 0;
            pri = fun_1D78()
            OP_JUMP switch_18D8_case_default
        }
        case 0x31:
        {
// switch_18D8_case_0x31
            OP_BREAK 
            var_8 = 0;
            pri = fun_1990()
            OP_JUMP switch_18D8_case_default
        }
        case 0x43:
        {
// switch_18D8_case_0x43
            OP_BREAK 
            var_8 = 0;
            pri = fun_21D8()
            OP_JUMP switch_18D8_case_default
        }
        case 0x9e:
        {
// switch_18D8_case_0x9e
            OP_BREAK 
            var_8 = 0;
            pri = fun_1BF0()
            OP_JUMP switch_18D8_case_default
        }
        case 0xa7:
        {
// switch_18D8_case_0xa7
            OP_BREAK 
            var_8 = 0;
            pri = fun_26A0()
            OP_JUMP switch_18D8_case_default
        }
        case 0xb0:
        {
// switch_18D8_case_0xb0
            OP_BREAK 
            var_8 = 0;
            pri = fun_1EF0()
            OP_JUMP switch_18D8_case_default
        }
        case 0x16c:
        {
// switch_18D8_case_0x16c
            OP_BREAK 
            var_8 = 0;
            pri = fun_2438()
            OP_JUMP switch_18D8_case_default
        }
    }
}
// fun_1990
fun_1990() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B08
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1AF8
    OP_BREAK 
    var_104 = -4;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1B08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1BE0
    OP_BREAK 
    var_56 = 5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1BE0
    pri = 0;
    return pri;
// lab_1AF8
    OP_JUMP lab_1BE0
}
// fun_1BF0
fun_1BF0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JZER lab_1D18
    OP_BREAK 
    var_56 = -10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_1D18
    OP_BREAK 
    var_8 = 10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_1D78
fun_1D78() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1EE0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1EE0
    OP_BREAK 
    var_104 = 4;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1EE0
    pri = 0;
    return pri;
}
// fun_1EF0
fun_1EF0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2068
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_2058
    OP_BREAK 
    var_104 = 4;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2068
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21C8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_21C8
    pri = 0;
    return pri;
// lab_2058
    OP_JUMP lab_21C8
}
// fun_21D8
fun_21D8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2350
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_2340
    OP_BREAK 
    var_104 = -5;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2350
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2428
    OP_BREAK 
    var_56 = 6;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2428
    pri = 0;
    return pri;
// lab_2340
    OP_JUMP lab_2428
}
// fun_2438
fun_2438() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_25A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_25A0
    OP_BREAK 
    var_104 = 5;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_25A0
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 120;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2690
    OP_BREAK 
    var_56 = 5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2690
    pri = 0;
    return pri;
}
// fun_26A0
fun_26A0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2780
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2780
    pri = 0;
    return pri;
}
