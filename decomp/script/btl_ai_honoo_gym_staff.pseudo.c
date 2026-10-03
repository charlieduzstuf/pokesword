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
    pri = fun_1800()
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
// switch_0980
        case default:
        {
// switch_0980_case_default
            OP_STACK 40
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0980_case_0x0
            OP_BREAK 
            var_8 = 0;
            pri = fun_0A68()
            OP_JUMP switch_0980_case_default
        }
        case 0x4:
        {
// switch_0980_case_0x4
            OP_BREAK 
            var_8 = 0;
            pri = fun_1260()
            OP_JUMP switch_0980_case_default
        }
        case 0xf:
        {
// switch_0980_case_0xf
            OP_BREAK 
            var_8 = 0;
            pri = fun_1530()
            OP_JUMP switch_0980_case_default
        }
        case 0x17:
        {
// switch_0980_case_0x17
            OP_BREAK 
            var_8 = 0;
            pri = fun_1350()
            OP_JUMP switch_0980_case_default
        }
        case 0x1f:
        {
// switch_0980_case_0x1f
            OP_BREAK 
            var_8 = 0;
            pri = fun_1080()
            OP_JUMP switch_0980_case_default
        }
        case 0x2a:
        {
// switch_0980_case_0x2a
            OP_BREAK 
            var_8 = 0;
            pri = fun_1440()
            OP_JUMP switch_0980_case_default
        }
        case 0x7d:
        {
// switch_0980_case_0x7d
            OP_BREAK 
            var_8 = 0;
            pri = fun_1170()
            OP_JUMP switch_0980_case_default
        }
        case 0x81:
        {
// switch_0980_case_0x81
            OP_BREAK 
            var_8 = 0;
            pri = fun_0D78()
            OP_JUMP switch_0980_case_default
        }
        case 0xa7:
        {
// switch_0980_case_0xa7
            OP_BREAK 
            var_8 = 0;
            pri = fun_1710()
            OP_JUMP switch_0980_case_default
        }
        case 0xca:
        {
// switch_0980_case_0xca
            OP_BREAK 
            var_8 = 0;
            pri = fun_1620()
            OP_JUMP switch_0980_case_default
        }
        case 0x11f:
        {
// switch_0980_case_0x11f
            OP_BREAK 
            var_8 = 0;
            pri = fun_0E68()
            OP_JUMP switch_0980_case_default
        }
    }
}
// fun_0A68
fun_0A68() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 837
    OP_JZER lab_0C38
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 160;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_0C28
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_0C38
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 757
    OP_JZER lab_0D58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0D58
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_0D58
    OP_STACK 8
    pri = 0;
    return pri;
// lab_0C28
    OP_JUMP lab_0D58
}
// fun_0D78
fun_0D78() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 160;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0E58
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0E58
    pri = 0;
    return pri;
}
// fun_0E68
fun_0E68() {
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
    OP_JZER lab_0F78
    OP_BREAK 
    var_56 = -10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_JUMP lab_1060
// lab_0F78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 130;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1060
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_1060
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_1080
fun_1080() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 160;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1160
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1160
    pri = 0;
    return pri;
}
// fun_1170
fun_1170() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 130;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1250
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1250
    pri = 0;
    return pri;
}
// fun_1260
fun_1260() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 160;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1340
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1340
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1430
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1430
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 130;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1520
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1520
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 160;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1610
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1610
    pri = 0;
    return pri;
}
// fun_1620
fun_1620() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 170;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1700
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1700
    pri = 0;
    return pri;
}
// fun_1710
fun_1710() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17F0
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_17F0
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 3;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18E0
    OP_BREAK 
    var_56 = -30;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_18E0
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
// switch_1C08
        case default:
        {
// switch_1C08_case_default
            OP_STACK 8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1C08_case_0x0
            OP_BREAK 
            var_8 = 0;
            pri = fun_1CF0()
            OP_JUMP switch_1C08_case_default
        }
        case 0x4:
        {
// switch_1C08_case_0x4
            OP_BREAK 
            var_8 = 0;
            pri = fun_2328()
            OP_JUMP switch_1C08_case_default
        }
        case 0xf:
        {
// switch_1C08_case_0xf
            OP_BREAK 
            var_8 = 0;
            pri = fun_25F8()
            OP_JUMP switch_1C08_case_default
        }
        case 0x17:
        {
// switch_1C08_case_0x17
            OP_BREAK 
            var_8 = 0;
            pri = fun_2418()
            OP_JUMP switch_1C08_case_default
        }
        case 0x1f:
        {
// switch_1C08_case_0x1f
            OP_BREAK 
            var_8 = 0;
            pri = fun_2148()
            OP_JUMP switch_1C08_case_default
        }
        case 0x2a:
        {
// switch_1C08_case_0x2a
            OP_BREAK 
            var_8 = 0;
            pri = fun_2508()
            OP_JUMP switch_1C08_case_default
        }
        case 0x7d:
        {
// switch_1C08_case_0x7d
            OP_BREAK 
            var_8 = 0;
            pri = fun_2238()
            OP_JUMP switch_1C08_case_default
        }
        case 0x81:
        {
// switch_1C08_case_0x81
            OP_BREAK 
            var_8 = 0;
            pri = fun_2000()
            OP_JUMP switch_1C08_case_default
        }
        case 0xa7:
        {
// switch_1C08_case_0xa7
            OP_BREAK 
            var_8 = 0;
            pri = fun_27D8()
            OP_JUMP switch_1C08_case_default
        }
        case 0xca:
        {
// switch_1C08_case_0xca
            OP_BREAK 
            var_8 = 0;
            pri = fun_26E8()
            OP_JUMP switch_1C08_case_default
        }
        case 0x11f:
        {
// switch_1C08_case_0x11f
            OP_BREAK 
            var_8 = 0;
            pri = fun_2058()
            OP_JUMP switch_1C08_case_default
        }
    }
}
// fun_1CF0
fun_1CF0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 837
    OP_JZER lab_1EC0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1EB0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_1EC0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 757
    OP_JZER lab_1FE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1FE0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_1FE0
    OP_STACK 8
    pri = 0;
    return pri;
// lab_1EB0
    OP_JUMP lab_1FE0
}
// fun_2000
fun_2000() {
    OP_BREAK 
    var_8 = -2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_2058
fun_2058() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2138
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2138
    pri = 0;
    return pri;
}
// fun_2148
fun_2148() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2228
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2228
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2318
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2318
    pri = 0;
    return pri;
}
// fun_2328
fun_2328() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2408
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2408
    pri = 0;
    return pri;
}
// fun_2418
fun_2418() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24F8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_24F8
    pri = 0;
    return pri;
}
// fun_2508
fun_2508() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_25E8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_25E8
    pri = 0;
    return pri;
}
// fun_25F8
fun_25F8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_26D8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_26D8
    pri = 0;
    return pri;
}
// fun_26E8
fun_26E8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 170;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_27C8
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_27C8
    pri = 0;
    return pri;
}
// fun_27D8
fun_27D8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_28B8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_28B8
    pri = 0;
    return pri;
}
