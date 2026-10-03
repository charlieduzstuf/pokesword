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
    OP_JZER lab_0260
    OP_BREAK 
    var_56 = 0;
    pri = fun_F2F8()
    OP_JUMP lab_0288
// lab_0260
    OP_BREAK 
    var_8 = 0;
    pri = fun_0298()
// lab_0288
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 890
    OP_JZER lab_03E8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 95;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 1
    OP_JZER lab_03E8
    pri = 1;
    OP_JUMP lab_03F0
// lab_03E8
    pri = 0;
// lab_03F0
    OP_JZER lab_0890
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 888
    OP_JNZ lab_0540
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 889
    OP_JNZ lab_0540
    pri = 0;
    OP_JUMP lab_0550
// lab_0890
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 890
    OP_JZER lab_09D8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 95;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 1
    OP_JZER lab_09D8
    pri = 1;
    OP_JUMP lab_09E0
// lab_09D8
    pri = 0;
// lab_09E0
    OP_JZER lab_0D30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 888
    OP_JNZ lab_0B30
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 889
    OP_JNZ lab_0B30
    pri = 0;
    OP_JUMP lab_0B40
// lab_0D30
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
// switch_1218
        case default:
        {
// switch_1218_case_default
            OP_STACK 8
            pri = 0;
            return pri;
        }
        case 0x9e:
        {
// switch_1218_case_0x9e
            OP_BREAK 
            var_8 = 0;
            pri = fun_1380()
            OP_JUMP switch_1218_case_default
        }
        case 0xaa:
        {
// switch_1218_case_0xaa
            OP_BREAK 
            var_8 = 0;
            pri = fun_1470()
            OP_JUMP switch_1218_case_default
        }
        case 0xac:
        {
// switch_1218_case_0xac
            OP_BREAK 
            var_8 = 0;
            pri = fun_1F00()
            OP_JUMP switch_1218_case_default
        }
        case 0xbe:
        {
// switch_1218_case_0xbe
            OP_BREAK 
            var_8 = 0;
            pri = fun_5228()
            OP_JUMP switch_1218_case_default
        }
        case 0x103:
        {
// switch_1218_case_0x103
            OP_BREAK 
            var_8 = 0;
            pri = fun_6040()
            OP_JUMP switch_1218_case_default
        }
        case 0x116:
        {
// switch_1218_case_0x116
            OP_BREAK 
            var_8 = 0;
            pri = fun_7588()
            OP_JUMP switch_1218_case_default
        }
        case 0x12c:
        {
// switch_1218_case_0x12c
            OP_BREAK 
            var_8 = 0;
            pri = fun_CF68()
            OP_JUMP switch_1218_case_default
        }
        case 0x12d:
        {
// switch_1218_case_0x12d
            OP_BREAK 
            var_8 = 0;
            pri = fun_85F8()
            OP_JUMP switch_1218_case_default
        }
        case 0x132:
        {
// switch_1218_case_0x132
            OP_BREAK 
            var_8 = 0;
            pri = fun_8AC8()
            OP_JUMP switch_1218_case_default
        }
        case 0x135:
        {
// switch_1218_case_0x135
            OP_BREAK 
            var_8 = 0;
            pri = fun_CF68()
            OP_JUMP switch_1218_case_default
        }
        case 0x139:
        {
// switch_1218_case_0x139
            OP_BREAK 
            var_8 = 0;
            pri = fun_A828()
            OP_JUMP switch_1218_case_default
        }
        case 0x13b:
        {
// switch_1218_case_0x13b
            OP_BREAK 
            var_8 = 0;
            pri = fun_A840()
            OP_JUMP switch_1218_case_default
        }
        case 0x14f:
        {
// switch_1218_case_0x14f
            OP_BREAK 
            var_8 = 0;
            pri = fun_BBF8()
            OP_JUMP switch_1218_case_default
        }
        case 0x150:
        {
// switch_1218_case_0x150
            OP_BREAK 
            var_8 = 0;
            pri = fun_C250()
            OP_JUMP switch_1218_case_default
        }
        case 0x15e:
        {
// switch_1218_case_0x15e
            OP_BREAK 
            var_8 = 0;
            pri = fun_C8A8()
            OP_JUMP switch_1218_case_default
        }
        case 0x16e:
        {
// switch_1218_case_0x16e
            OP_BREAK 
            var_8 = 0;
            pri = fun_CFB8()
            OP_JUMP switch_1218_case_default
        }
        case 0x181:
        {
// switch_1218_case_0x181
            OP_BREAK 
            var_8 = 0;
            pri = fun_E2B8()
            OP_JUMP switch_1218_case_default
        }
        case 0x182:
        {
// switch_1218_case_0x182
            OP_BREAK 
            var_8 = 0;
            pri = fun_CF68()
            OP_JUMP switch_1218_case_default
        }
        case 0x195:
        {
// switch_1218_case_0x195
            OP_BREAK 
            var_8 = 0;
            pri = fun_E7F0()
            OP_JUMP switch_1218_case_default
        }
    }
// lab_0B30
    pri = 1;
// lab_0B40
    OP_JZER lab_0D30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_0D30
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    pri = fun_0110()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 781
    OP_JNZ lab_0CA0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 782
    OP_JNZ lab_0CA0
    pri = 0;
    OP_JUMP lab_0CB0
// lab_0CA0
    pri = 1;
// lab_0CB0
    OP_JZER lab_0D20
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_0D20
    OP_STACK 8
// lab_0540
    pri = 1;
// lab_0550
    OP_JZER lab_0890
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 2;
    OP_JSGEQ lab_0648
    OP_BREAK 
    var_56 = -10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0648
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 4;
    OP_JSGEQ lab_07B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_07B8
    OP_BREAK 
    var_104 = -5;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_07B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0890
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_1380
fun_1380() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1460
    OP_BREAK 
    var_56 = 4;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1460
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 266;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1618
    var_56 = 0;
    var_64 = 0;
    var_72 = 266;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1618
    var_104 = 0;
    var_112 = 0;
    var_120 = 266;
    var_128 = 7;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_1618
    pri = 0;
    OP_JUMP lab_1628
// lab_1618
    pri = 1;
// lab_1628
    OP_JZER lab_1710
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1710
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1710
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 495;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1830
    var_56 = 0;
    var_64 = 0;
    var_72 = 511;
    var_80 = 5;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1830
    pri = 0;
    OP_JUMP lab_1840
// lab_1830
    pri = 1;
// lab_1840
    OP_JZER lab_19B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_19B0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19B0
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_19B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 495;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1AD0
    var_56 = 0;
    var_64 = 0;
    var_72 = 511;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1AD0
    pri = 0;
    OP_JUMP lab_1AE0
// lab_1AD0
    pri = 1;
// lab_1AE0
    OP_JZER lab_1C50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 6;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1C50
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1C50
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1C50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 495;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1D70
    var_56 = 0;
    var_64 = 0;
    var_72 = 511;
    var_80 = 7;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1D70
    pri = 0;
    OP_JUMP lab_1D80
// lab_1D70
    pri = 1;
// lab_1D80
    OP_JZER lab_1EF0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 7;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1EF0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1EF0
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1EF0
    pri = 0;
    return pri;
}
// fun_1F00
fun_1F00() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1FE0
    OP_BREAK 
    var_56 = -20;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1FE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 172;
    var_32 = 5;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2330
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    var_104 = pri;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 5;
    var_144 = 94;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_POP_ALT 
    OP_JSGEQ lab_2258
    OP_BREAK 
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 128;
    var_192 = 96;
    var_200 = 40;
    pri = fun_0010(var_192, var_184, var_176, var_168, var_160)
    OP_JZER lab_2248
    OP_BREAK 
    var_208 = -5;
    var_216 = 8;
    pri = fun_00B8(var_208)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2330
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 172;
    var_32 = 6;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2680
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    var_104 = pri;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 6;
    var_144 = 94;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_POP_ALT 
    OP_JSGEQ lab_25A8
    OP_BREAK 
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 128;
    var_192 = 96;
    var_200 = 40;
    pri = fun_0010(var_192, var_184, var_176, var_168, var_160)
    OP_JZER lab_2598
    OP_BREAK 
    var_208 = -5;
    var_216 = 8;
    pri = fun_00B8(var_208)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2680
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 172;
    var_32 = 7;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_29D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    var_104 = pri;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 7;
    var_144 = 94;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_POP_ALT 
    OP_JSGEQ lab_28F8
    OP_BREAK 
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 128;
    var_192 = 96;
    var_200 = 40;
    pri = fun_0010(var_192, var_184, var_176, var_168, var_160)
    OP_JZER lab_28E8
    OP_BREAK 
    var_208 = -5;
    var_216 = 8;
    pri = fun_00B8(var_208)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_29D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 433;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_2B70
    var_56 = 0;
    var_64 = 0;
    var_72 = 433;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_2B70
    var_104 = 0;
    var_112 = 0;
    var_120 = 433;
    var_128 = 7;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_2B70
    pri = 0;
    OP_JUMP lab_2B80
// lab_2B70
    pri = 1;
// lab_2B80
    OP_JZER lab_2D00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 72;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2C28
    OP_JUMP lab_2D00
// lab_2D00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 366;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3038
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 4;
    var_80 = 1;
    var_88 = 17;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3038
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 5;
    var_136 = 81;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_2F48
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 33;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    alt = 158;
    OP_JEQ lab_2F48
    pri = 1;
    OP_JUMP lab_2F50
// lab_3038
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 366;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3370
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 4;
    var_80 = 1;
    var_88 = 17;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3370
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 6;
    var_136 = 81;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_3280
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 33;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    alt = 158;
    OP_JEQ lab_3280
    pri = 1;
    OP_JUMP lab_3288
// lab_3370
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 366;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_36A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 4;
    var_80 = 1;
    var_88 = 17;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_36A8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 7;
    var_136 = 81;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_35B8
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 33;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    alt = 158;
    OP_JEQ lab_35B8
    pri = 1;
    OP_JUMP lab_35C0
// lab_36A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 284;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_37C8
    var_56 = 0;
    var_64 = 0;
    var_72 = 323;
    var_80 = 5;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_37C8
    pri = 0;
    OP_JUMP lab_37D8
// lab_37C8
    pri = 1;
// lab_37D8
    OP_JZER lab_39D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_39D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 5;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_39D0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 180;
    var_136 = 96;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_39D0
    OP_BREAK 
    var_152 = 3;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_39D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 284;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_3AF0
    var_56 = 0;
    var_64 = 0;
    var_72 = 323;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_3AF0
    pri = 0;
    OP_JUMP lab_3B00
// lab_3AF0
    pri = 1;
// lab_3B00
    OP_JZER lab_3CF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 6;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3CF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 6;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3CF8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 180;
    var_136 = 96;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_3CF8
    OP_BREAK 
    var_152 = 3;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3CF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 284;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_3E18
    var_56 = 0;
    var_64 = 0;
    var_72 = 323;
    var_80 = 7;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_3E18
    pri = 0;
    OP_JUMP lab_3E28
// lab_3E18
    pri = 1;
// lab_3E28
    OP_JZER lab_4020
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 7;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4020
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 7;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4020
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 180;
    var_136 = 96;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_4020
    OP_BREAK 
    var_152 = 3;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4020
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 264;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_41C0
    var_56 = 0;
    var_64 = 0;
    var_72 = 264;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_41C0
    var_104 = 0;
    var_112 = 0;
    var_120 = 264;
    var_128 = 7;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_41C0
    pri = 0;
    OP_JUMP lab_41D0
// lab_41C0
    pri = 1;
// lab_41D0
    OP_JZER lab_42B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_42B8
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_42B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 504;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4658
    var_56 = 0;
    var_64 = 0;
    var_72 = 349;
    var_80 = 5;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4658
    var_104 = 0;
    var_112 = 0;
    var_120 = 483;
    var_128 = 5;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_4658
    var_152 = 0;
    var_160 = 0;
    var_168 = 97;
    var_176 = 5;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_4658
    var_200 = 0;
    var_208 = 0;
    var_216 = 397;
    var_224 = 5;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_4658
    var_248 = 0;
    var_256 = 0;
    var_264 = 475;
    var_272 = 5;
    var_280 = 47;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_4658
    var_296 = 0;
    var_304 = 0;
    var_312 = 508;
    var_320 = 5;
    var_328 = 47;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_4658
    pri = 0;
    OP_JUMP lab_4668
// lab_4658
    pri = 1;
// lab_4668
    OP_JZER lab_47D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_47D8
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_47D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 504;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4B78
    var_56 = 0;
    var_64 = 0;
    var_72 = 349;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4B78
    var_104 = 0;
    var_112 = 0;
    var_120 = 483;
    var_128 = 6;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_4B78
    var_152 = 0;
    var_160 = 0;
    var_168 = 97;
    var_176 = 6;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_4B78
    var_200 = 0;
    var_208 = 0;
    var_216 = 397;
    var_224 = 6;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_4B78
    var_248 = 0;
    var_256 = 0;
    var_264 = 475;
    var_272 = 6;
    var_280 = 47;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_4B78
    var_296 = 0;
    var_304 = 0;
    var_312 = 508;
    var_320 = 6;
    var_328 = 47;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_4B78
    pri = 0;
    OP_JUMP lab_4B88
// lab_4B78
    pri = 1;
// lab_4B88
    OP_JZER lab_4CF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 6;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4CF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4CF8
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4CF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 504;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5098
    var_56 = 0;
    var_64 = 0;
    var_72 = 349;
    var_80 = 7;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5098
    var_104 = 0;
    var_112 = 0;
    var_120 = 483;
    var_128 = 7;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_5098
    var_152 = 0;
    var_160 = 0;
    var_168 = 97;
    var_176 = 7;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_5098
    var_200 = 0;
    var_208 = 0;
    var_216 = 397;
    var_224 = 7;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_5098
    var_248 = 0;
    var_256 = 0;
    var_264 = 475;
    var_272 = 7;
    var_280 = 47;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_5098
    var_296 = 0;
    var_304 = 0;
    var_312 = 508;
    var_320 = 7;
    var_328 = 47;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_5098
    pri = 0;
    OP_JUMP lab_50A8
// lab_5098
    pri = 1;
// lab_50A8
    OP_JZER lab_5218
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 7;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5218
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5218
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5218
    pri = 0;
    return pri;
// lab_35B8
    pri = 0;
// lab_35C0
    OP_JZER lab_36A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_36A8
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3280
    pri = 0;
// lab_3288
    OP_JZER lab_3370
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3370
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2F48
    pri = 0;
// lab_2F50
    OP_JZER lab_3038
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3038
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2C28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2D00
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_28F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 127;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_29D0
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_28E8
    OP_JUMP lab_29D0
// lab_25A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 127;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2680
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2598
    OP_JUMP lab_2680
// lab_2258
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 127;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2330
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2248
    OP_JUMP lab_2330
}
// fun_5228
fun_5228() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5308
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5308
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_53E0
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_53E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5580
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 6;
    var_88 = 6;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5580
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 7;
    var_136 = 6;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_5580
    pri = 0;
    OP_JUMP lab_5590
// lab_5580
    pri = 1;
// lab_5590
    OP_JZER lab_55B8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_55B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 495;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_56D8
    var_56 = 0;
    var_64 = 0;
    var_72 = 511;
    var_80 = 5;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_56D8
    pri = 0;
    OP_JUMP lab_56E8
// lab_56D8
    pri = 1;
// lab_56E8
    OP_JZER lab_5858
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5858
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5858
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5858
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 495;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5978
    var_56 = 0;
    var_64 = 0;
    var_72 = 511;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5978
    pri = 0;
    OP_JUMP lab_5988
// lab_5978
    pri = 1;
// lab_5988
    OP_JZER lab_5AF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 6;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5AF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5AF8
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5AF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 495;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5C18
    var_56 = 0;
    var_64 = 0;
    var_72 = 511;
    var_80 = 7;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5C18
    pri = 0;
    OP_JUMP lab_5C28
// lab_5C18
    pri = 1;
// lab_5C28
    OP_JZER lab_5D98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 7;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5D98
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5D98
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5D98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 266;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5F38
    var_56 = 0;
    var_64 = 0;
    var_72 = 266;
    var_80 = 5;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5F38
    var_104 = 0;
    var_112 = 0;
    var_120 = 266;
    var_128 = 5;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_5F38
    pri = 0;
    OP_JUMP lab_5F48
// lab_5F38
    pri = 1;
// lab_5F48
    OP_JZER lab_6030
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6030
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_6030
    pri = 0;
    return pri;
}
// fun_6040
fun_6040() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 5;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 6;
    var_136 = 81;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_STACK -8
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 7;
    var_184 = 81;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_6520
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_JNZ lab_6358
    OP_BREAK 
    var_200 = -2;
    var_208 = 8;
    pri = fun_00B8(var_200)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6520
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_67A8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_JNZ lab_65E0
    OP_BREAK 
    var_8 = -2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_67A8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JZER lab_6A30
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_JNZ lab_6868
    OP_BREAK 
    var_8 = -2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6A30
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JZER lab_6CB8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_JNZ lab_6AF0
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6CB8
    OP_STACK 32
    pri = 0;
    return pri;
// lab_6AF0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JZER lab_6B88
    OP_BREAK 
    var_8 = 2;
    var_16 = 8;
    pri = fun_6CD8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6B88
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JZER lab_6C20
    OP_BREAK 
    var_8 = 3;
    var_16 = 8;
    pri = fun_6CD8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6C20
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JZER lab_6CB8
    OP_BREAK 
    var_8 = 3;
    var_16 = 8;
    pri = fun_6CD8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6868
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JZER lab_6900
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6900
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JZER lab_6998
    OP_BREAK 
    var_8 = 3;
    var_16 = 8;
    pri = fun_6CD8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6998
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JZER lab_6A30
    OP_BREAK 
    var_8 = 3;
    var_16 = 8;
    pri = fun_6CD8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_65E0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JZER lab_6678
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6678
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JZER lab_6710
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6710
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JZER lab_67A8
    OP_BREAK 
    var_8 = 2;
    var_16 = 8;
    pri = fun_6CD8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6358
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JZER lab_63F0
    OP_BREAK 
    var_8 = -2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_63F0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JZER lab_6488
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_6488
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JZER lab_6520
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
}
// fun_6CD8
fun_6CD8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 5;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 433;
    var_128 = 5;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_7530
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JZER lab_7018
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 150;
    var_184 = 96;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_6FB8
    OP_BREAK 
    OP_PUSH_S 24
    var_200 = 8;
    pri = fun_00B8(var_192)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_7530
    OP_BREAK 
    OP_PUSH_S 24
    var_8 = 8;
    pri = fun_00B8(var_0)
    OP_STACK 16
    pri = 0;
    return pri;
// lab_7018
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_LOAD_S_ALT -16
    OP_JNEQ lab_73E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 5;
    var_96 = 94;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_JSGEQ lab_72A0
    OP_BREAK 
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 128;
    var_144 = 96;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_JZER lab_7240
    OP_BREAK 
    var_160 = -5;
    var_168 = 8;
    pri = fun_00B8(var_160)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_73E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 150;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_74D0
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_74D0
    OP_BREAK 
    OP_PUSH_S 24
    var_8 = 8;
    pri = fun_00B8(var_0)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_72A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7388
    OP_BREAK 
    OP_PUSH_S 24
    var_56 = 8;
    pri = fun_00B8(var_48)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_7388
    OP_BREAK 
    var_8 = -5;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_7240
    OP_BREAK 
    OP_PUSH_S 24
    var_8 = 8;
    pri = fun_00B8(var_0)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_6FB8
    OP_BREAK 
    var_8 = -5;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
}
// fun_7588
fun_7588() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 157
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 423
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 382
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 142
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 230
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 445
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 639
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 460
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 471
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 609
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 248
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 485
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 530
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 593
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 612
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 637
    OP_JNZ lab_7978
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 646
    OP_JNZ lab_7978
    pri = 0;
    OP_JUMP lab_7988
// lab_7978
    pri = 1;
// lab_7988
    OP_JZER lab_7A80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7A80
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_7A80
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 29;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 59
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 59
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 57
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 57
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 89
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 89
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 157
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 157
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 257
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 257
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 304
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 304
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 323
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 323
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 330
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 330
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 435
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 435
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 436
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 436
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 482
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 482
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 485
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 485
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 545
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 545
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 547
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 547
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 549
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 549
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 555
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 555
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 570
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 570
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 572
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 572
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 586
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 586
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 591
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 591
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 605
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 605
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 614
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 614
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 615
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 615
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 616
    OP_JNZ lab_84D0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 616
    OP_JNZ lab_84D0
    pri = 0;
    OP_JUMP lab_84E0
// lab_84D0
    pri = 1;
// lab_84E0
    OP_JZER lab_85D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_85D8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_85D8
    OP_STACK 24
    pri = 0;
    return pri;
}
// fun_85F8
fun_85F8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_87E8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_87E8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_87E8
    pri = 0;
    OP_JUMP lab_87F8
// lab_87E8
    pri = 1;
// lab_87F8
    OP_JZER lab_8820
    OP_BREAK 
    pri = 0;
    return pri;
// lab_8820
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 496;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_89C0
    var_56 = 0;
    var_64 = 0;
    var_72 = 496;
    var_80 = 6;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_89C0
    var_104 = 0;
    var_112 = 0;
    var_120 = 496;
    var_128 = 7;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_89C0
    pri = 0;
    OP_JUMP lab_89D0
// lab_89C0
    pri = 1;
// lab_89D0
    OP_JZER lab_8AB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_8AB8
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_8AB8
    pri = 0;
    return pri;
}
// fun_8AC8
fun_8AC8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 501;
    var_32 = 5;
    var_40 = 48;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_8C78
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    var_104 = pri;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 5;
    var_144 = 81;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_POP_ALT 
    OP_XCHG 
    OP_JSLESS lab_8C78
    pri = 0;
    OP_JUMP lab_8C88
// lab_8C78
    pri = 1;
// lab_8C88
    OP_JZER lab_9568
    OP_BREAK 
    var_8 = 0;
    pri = fun_95B0()
    OP_EQ_C_PRI 1
    OP_JZER lab_8DB0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 180;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_8DA0
    OP_BREAK 
    var_64 = 2;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_9568
    OP_BREAK 
    var_8 = -5;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_8DB0
    OP_BREAK 
    var_8 = 0;
    pri = fun_98F8()
    OP_EQ_C_PRI 1
    OP_JZER lab_92C0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 35;
    var_40 = 5;
    var_48 = 4;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_8F50
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 200;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_8F40
    OP_BREAK 
    var_112 = 8;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_92C0
    OP_BREAK 
    var_8 = 0;
    pri = fun_9EB0()
    OP_EQ_C_PRI 1
    OP_JZER lab_9520
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 20;
    var_40 = 5;
    var_48 = 4;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_9450
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 100;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_9450
    OP_BREAK 
    var_112 = 8;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_9520
    OP_BREAK 
    var_8 = -5;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_9450
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_9510
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_9510
    OP_JUMP lab_9558
// lab_9558
    OP_JUMP lab_95A0
// lab_95A0
    pri = 0;
    return pri;
// lab_8F50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 35;
    var_32 = 6;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_90A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_9098
    OP_BREAK 
    var_104 = 8;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_90A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 35;
    var_32 = 7;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_91F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_91F0
    OP_BREAK 
    var_104 = 8;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_91F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_92B0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_92B0
    OP_JUMP lab_9558
// lab_9098
    OP_JUMP lab_91F0
// lab_8F40
    OP_JUMP lab_91F0
// lab_8DA0
    OP_JUMP lab_9558
}
// fun_95B0
fun_95B0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 198
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 302
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 313
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 314
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 354
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 510
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 547
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 641
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 642
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 678
    OP_JNZ lab_9880
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 707
    OP_JNZ lab_9880
    pri = 0;
    OP_JUMP lab_9890
// lab_9880
    pri = 1;
// lab_9890
    OP_JZER lab_98D0
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_98D0
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_98F8
fun_98F8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 59
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 107
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 115
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 303
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 184
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 212
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 149
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 185
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 264
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 89
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 292
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 332
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 352
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 359
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 430
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 442
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 454
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 460
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 500
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 534
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 621
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 625
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 631
    OP_JNZ lab_9E38
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 625
    OP_JNZ lab_9E38
    pri = 0;
    OP_JUMP lab_9E48
// lab_9E38
    pri = 1;
// lab_9E48
    OP_JZER lab_9E88
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_9E88
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_9EB0
fun_9EB0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 131
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 136
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 141
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 127
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 91
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 89
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 76
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 68
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 24
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 20
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 160
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 168
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 221
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 222
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 225
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 301
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 237
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 244
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 245
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 277
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 286
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 335
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 342
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 348
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 354
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 376
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 419
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 448
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 460
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 470
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 471
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 473
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 477
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 550
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 556
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 565
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 614
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 615
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 660
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 676
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 680
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 681
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 700
    OP_JNZ lab_A7B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 676
    OP_JNZ lab_A7B0
    pri = 0;
    OP_JUMP lab_A7C0
// lab_A7B0
    pri = 1;
// lab_A7C0
    OP_JZER lab_A800
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_A800
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_A828
fun_A828() {
    pri = 0;
    return pri;
}
// fun_A840
fun_A840() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_A978
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 158
    OP_JNZ lab_A978
    pri = 0;
    OP_JUMP lab_A988
// lab_A978
    pri = 1;
// lab_A988
    OP_JZER lab_BBB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 1;
    OP_JSLEQ lab_AFA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 1
    OP_JZER lab_AFA0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 284;
    var_128 = 5;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_ABE8
    var_152 = 0;
    var_160 = 0;
    var_168 = 323;
    var_176 = 5;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_ABE8
    pri = 0;
    OP_JUMP lab_ABF8
// lab_BBB0
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
// lab_AFA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 6;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 1;
    OP_JSLEQ lab_B5A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 1
    OP_JZER lab_B5A8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 284;
    var_128 = 6;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_B1F0
    var_152 = 0;
    var_160 = 0;
    var_168 = 323;
    var_176 = 6;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_B1F0
    pri = 0;
    OP_JUMP lab_B200
// lab_B5A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 7;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 1;
    OP_JSLEQ lab_BBB0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 1
    OP_JZER lab_BBB0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 284;
    var_128 = 7;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_B7F8
    var_152 = 0;
    var_160 = 0;
    var_168 = 323;
    var_176 = 7;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_B7F8
    pri = 0;
    OP_JUMP lab_B808
// lab_B7F8
    pri = 1;
// lab_B808
    OP_JZER lab_B978
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 7;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B978
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B978
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_B978
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_BA50
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_BA50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 264;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_BBB0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_BBB0
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_B1F0
    pri = 1;
// lab_B200
    OP_JZER lab_B370
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 6;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B370
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B370
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_B370
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B448
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_B448
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 264;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B5A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B5A8
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_ABE8
    pri = 1;
// lab_ABF8
    OP_JZER lab_AD68
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 5;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_AD68
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_AD68
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_AD68
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_AE40
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_AE40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 264;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_AFA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_AFA0
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_BBF8
fun_BBF8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_BDE8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_BDE8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_BDE8
    pri = 0;
    OP_JUMP lab_BDF8
// lab_BDE8
    pri = 1;
// lab_BDF8
    OP_JZER lab_BE20
    OP_BREAK 
    pri = 0;
    return pri;
// lab_BE20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 559;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_BF80
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_BF80
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_BF80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 559;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C0E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C0E0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_C0E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 559;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C240
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C240
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_C240
    pri = 0;
    return pri;
}
// fun_C250
fun_C250() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_C440
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_C440
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_C440
    pri = 0;
    OP_JUMP lab_C450
// lab_C440
    pri = 1;
// lab_C450
    OP_JZER lab_C478
    OP_BREAK 
    pri = 0;
    return pri;
// lab_C478
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 558;
    var_32 = 5;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C5D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C5D8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_C5D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 558;
    var_32 = 6;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C738
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C738
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_C738
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 558;
    var_32 = 7;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C898
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C898
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_C898
    pri = 0;
    return pri;
}
// fun_C8A8
fun_C8A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 9;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 11
    OP_JNZ lab_C9F0
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 10;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 11
    OP_JNZ lab_C9F0
    pri = 0;
    OP_JUMP lab_CA00
// lab_C9F0
    pri = 1;
// lab_CA00
    OP_JZER lab_CAE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_CAE8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_CAE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 11;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 11
    OP_JNZ lab_CC28
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 12;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 11
    OP_JNZ lab_CC28
    pri = 0;
    OP_JUMP lab_CC38
// lab_CC28
    pri = 1;
// lab_CC38
    OP_JZER lab_CD20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_CD20
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_CD20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 13;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 11
    OP_JNZ lab_CE60
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 14;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 11
    OP_JNZ lab_CE60
    pri = 0;
    OP_JUMP lab_CE70
// lab_CE60
    pri = 1;
// lab_CE70
    OP_JZER lab_CF58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_CF58
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_CF58
    pri = 0;
    return pri;
}
// fun_CF68
fun_CF68() {
    OP_BREAK 
    var_8 = -12;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
}
// fun_CFB8
fun_CFB8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 6;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 7;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 57
    OP_JNZ lab_D208
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 58
    OP_JNZ lab_D208
    pri = 0;
    OP_JUMP lab_D218
// lab_D208
    pri = 1;
// lab_D218
    OP_JZER lab_D738
    OP_BREAK 
    var_8 = 0;
    var_16 = 9;
    var_24 = 2;
    var_32 = 5;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D350
    var_56 = 0;
    var_64 = 9;
    var_72 = 4;
    var_80 = 5;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_D350
    pri = 1;
    OP_JUMP lab_D358
// lab_D738
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 57
    OP_JNZ lab_D7B8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 58
    OP_JNZ lab_D7B8
    pri = 0;
    OP_JUMP lab_D7C8
// lab_D7B8
    pri = 1;
// lab_D7C8
    OP_JZER lab_DCE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 9;
    var_24 = 2;
    var_32 = 6;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D900
    var_56 = 0;
    var_64 = 9;
    var_72 = 4;
    var_80 = 6;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_D900
    pri = 1;
    OP_JUMP lab_D908
// lab_DCE8
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 57
    OP_JNZ lab_DD68
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 58
    OP_JNZ lab_DD68
    pri = 0;
    OP_JUMP lab_DD78
// lab_DD68
    pri = 1;
// lab_DD78
    OP_JZER lab_E298
    OP_BREAK 
    var_8 = 0;
    var_16 = 9;
    var_24 = 2;
    var_32 = 7;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DEB0
    var_56 = 0;
    var_64 = 9;
    var_72 = 4;
    var_80 = 7;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_DEB0
    pri = 1;
    OP_JUMP lab_DEB8
// lab_E298
    OP_STACK 24
    pri = 0;
    return pri;
// lab_DEB0
    pri = 0;
// lab_DEB8
    OP_JZER lab_DFB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DFB0
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_DFB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 7;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E0D8
    var_56 = 0;
    var_64 = 7;
    var_72 = 4;
    var_80 = 7;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E0D8
    pri = 1;
    OP_JUMP lab_E0E0
// lab_E0D8
    pri = 0;
// lab_E0E0
    OP_JZER lab_E1D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E1D8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_E1D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E298
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_D900
    pri = 0;
// lab_D908
    OP_JZER lab_DA00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DA00
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_DA00
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 6;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DB28
    var_56 = 0;
    var_64 = 7;
    var_72 = 4;
    var_80 = 6;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_DB28
    pri = 1;
    OP_JUMP lab_DB30
// lab_DB28
    pri = 0;
// lab_DB30
    OP_JZER lab_DC28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DC28
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_DC28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DCE8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_D350
    pri = 0;
// lab_D358
    OP_JZER lab_D450
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D450
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_D450
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 5;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D578
    var_56 = 0;
    var_64 = 7;
    var_72 = 4;
    var_80 = 5;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_D578
    pri = 1;
    OP_JUMP lab_D580
// lab_D578
    pri = 0;
// lab_D580
    OP_JZER lab_D678
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D678
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_D678
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D738
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_E2B8
fun_E2B8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 5;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E408
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E408
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E408
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 6;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E550
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E550
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E550
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 7;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E698
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E698
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E698
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E7E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E7E0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E7E0
    pri = 0;
    return pri;
}
// fun_E7F0
fun_E7F0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 6;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 7;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 155
    OP_JNZ lab_EA40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 154
    OP_JNZ lab_EA40
    pri = 0;
    OP_JUMP lab_EA50
// lab_EA40
    pri = 1;
// lab_EA50
    OP_JZER lab_ECC8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 5;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_ECC8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    var_104 = pri;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 5;
    var_144 = 81;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_POP_ALT 
    OP_ADD 
    alt = 1;
    OP_JSLEQ lab_ECC8
    OP_BREAK 
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 200;
    var_192 = 0;
    var_200 = 40;
    pri = fun_0010(var_192, var_184, var_176, var_168, var_160)
    OP_JZER lab_ECC8
    OP_BREAK 
    var_208 = 2;
    var_216 = 8;
    pri = fun_00B8(var_208)
// lab_ECC8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 155
    OP_JNZ lab_ED48
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 154
    OP_JNZ lab_ED48
    pri = 0;
    OP_JUMP lab_ED58
// lab_ED48
    pri = 1;
// lab_ED58
    OP_JZER lab_EFD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 6;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_EFD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    var_104 = pri;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 6;
    var_144 = 81;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_POP_ALT 
    OP_ADD 
    alt = 1;
    OP_JSLEQ lab_EFD0
    OP_BREAK 
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 200;
    var_192 = 0;
    var_200 = 40;
    pri = fun_0010(var_192, var_184, var_176, var_168, var_160)
    OP_JZER lab_EFD0
    OP_BREAK 
    var_208 = 2;
    var_216 = 8;
    pri = fun_00B8(var_208)
// lab_EFD0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 155
    OP_JNZ lab_F050
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 154
    OP_JNZ lab_F050
    pri = 0;
    OP_JUMP lab_F060
// lab_F050
    pri = 1;
// lab_F060
    OP_JZER lab_F2D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 7;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F2D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    var_104 = pri;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 7;
    var_144 = 81;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_POP_ALT 
    OP_ADD 
    alt = 1;
    OP_JSLEQ lab_F2D8
    OP_BREAK 
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 200;
    var_192 = 0;
    var_200 = 40;
    pri = fun_0010(var_192, var_184, var_176, var_168, var_160)
    OP_JZER lab_F2D8
    OP_BREAK 
    var_208 = 2;
    var_216 = 8;
    pri = fun_00B8(var_208)
// lab_F2D8
    OP_STACK 24
    pri = 0;
    return pri;
}
// fun_F2F8
fun_F2F8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F3D8
    OP_BREAK 
    var_56 = -30;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_F3D8
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
// switch_F940
        case default:
        {
// switch_F940_case_default
            OP_BREAK 
            var_8 = -20;
            var_16 = 8;
            pri = fun_00B8(var_8)
            OP_JUMP lab_FA98
// lab_FA98
            OP_STACK 8
            pri = 0;
            return pri;
        }
        case 0x76:
        {
// switch_F940_case_0x76
            OP_BREAK 
            var_8 = 0;
            pri = fun_FAB8()
            OP_JUMP lab_FA98
        }
        case 0x8f:
        {
// switch_F940_case_0x8f
            OP_BREAK 
            var_8 = 0;
            pri = fun_10108()
            OP_JUMP lab_FA98
        }
        case 0x9a:
        {
// switch_F940_case_0x9a
            OP_BREAK 
            var_8 = 0;
            pri = fun_10A98()
            OP_JUMP lab_FA98
        }
        case 0xa7:
        {
// switch_F940_case_0xa7
            OP_BREAK 
            var_8 = 0;
            pri = fun_10CE0()
            OP_JUMP lab_FA98
        }
        case 0xb0:
        {
// switch_F940_case_0xb0
            OP_BREAK 
            var_8 = 0;
            pri = fun_11328()
            OP_JUMP lab_FA98
        }
        case 0xb2:
        {
// switch_F940_case_0xb2
            OP_BREAK 
            var_8 = 0;
            pri = fun_11620()
            OP_JUMP lab_FA98
        }
        case 0xbf:
        {
// switch_F940_case_0xbf
            OP_BREAK 
            var_8 = 0;
            pri = fun_11638()
            OP_JUMP lab_FA98
        }
        case 0xe2:
        {
// switch_F940_case_0xe2
            OP_BREAK 
            var_8 = 0;
            pri = fun_12A20()
            OP_JUMP lab_FA98
        }
        case 0x11d:
        {
// switch_F940_case_0x11d
            OP_BREAK 
            var_8 = 0;
            pri = fun_12F48()
            OP_JUMP lab_FA98
        }
        case 0x12b:
        {
// switch_F940_case_0x12b
            OP_BREAK 
            var_8 = 0;
            pri = fun_13310()
            OP_JUMP lab_FA98
        }
        case 0x12c:
        {
// switch_F940_case_0x12c
            OP_BREAK 
            var_8 = 0;
            pri = fun_14FB0()
            OP_JUMP lab_FA98
        }
        case 0x135:
        {
// switch_F940_case_0x135
            OP_BREAK 
            var_8 = 0;
            pri = fun_156C0()
            OP_JUMP lab_FA98
        }
        case 0x16a:
        {
// switch_F940_case_0x16a
            OP_BREAK 
            var_8 = 0;
            pri = fun_15B78()
            OP_JUMP lab_FA98
        }
        case 0x181:
        {
// switch_F940_case_0x181
            OP_BREAK 
            var_8 = 0;
            pri = fun_15F98()
            OP_JUMP lab_FA98
        }
        case 0x182:
        {
// switch_F940_case_0x182
            OP_BREAK 
            var_8 = 0;
            pri = fun_156C0()
            OP_JUMP lab_FA98
        }
        case 0x187:
        {
// switch_F940_case_0x187
            OP_BREAK 
            var_8 = 0;
            pri = fun_16240()
            OP_JUMP lab_FA98
        }
        case 0x189:
        {
// switch_F940_case_0x189
            OP_BREAK 
            var_8 = 0;
            pri = fun_156C0()
            OP_JUMP lab_FA98
        }
        case 0x18e:
        {
// switch_F940_case_0x18e
            OP_BREAK 
            var_8 = 0;
            pri = fun_16778()
            OP_JUMP lab_FA98
        }
        case 0x18f:
        {
// switch_F940_case_0x18f
            OP_BREAK 
            var_8 = 0;
            pri = fun_16A28()
            OP_JUMP lab_FA98
        }
        case 0x192:
        {
// switch_F940_case_0x192
            OP_BREAK 
            var_8 = 0;
            pri = fun_16B88()
            OP_JUMP lab_FA98
        }
    }
}
// fun_FAB8
fun_FAB8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 101;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_FB98
    OP_BREAK 
    var_56 = -12;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_FB98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 126
    OP_JZER lab_FC80
    OP_BREAK 
    var_56 = -12;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_FC80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JNZ lab_FF40
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 106;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_FF40
    var_104 = 0;
    var_112 = 0;
    var_120 = 156;
    var_128 = 0;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_FF40
    var_152 = 0;
    var_160 = 0;
    var_168 = 157;
    var_176 = 0;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_FF40
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 33;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_EQ_C_PRI 20
    OP_JNZ lab_FF40
    pri = 0;
    OP_JUMP lab_FF50
// lab_FF40
    pri = 1;
// lab_FF50
    OP_JZER lab_100C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_100C0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_100C0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_100C0
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
}
// fun_10108
fun_10108() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10270
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10258
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10270
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_10590
    var_56 = 0;
    var_64 = 6;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_10590
    var_104 = 0;
    var_112 = 6;
    var_120 = 3;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_10590
    var_152 = 0;
    var_160 = 6;
    var_168 = 4;
    var_176 = 1;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_10590
    var_200 = 0;
    var_208 = 6;
    var_216 = 7;
    var_224 = 1;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_10590
    var_248 = 0;
    var_256 = 6;
    var_264 = 6;
    var_272 = 1;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_10590
    pri = 0;
    OP_JUMP lab_105A0
// lab_10590
    pri = 1;
// lab_105A0
    OP_JZER lab_10688
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10670
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_10688
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_109A8
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_109A8
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 0;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_109A8
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 0;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_109A8
    var_200 = 0;
    var_208 = 7;
    var_216 = 7;
    var_224 = 0;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_109A8
    var_248 = 0;
    var_256 = 7;
    var_264 = 6;
    var_272 = 0;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_109A8
    pri = 0;
    OP_JUMP lab_109B8
// lab_109A8
    pri = 1;
// lab_109B8
    OP_JZER lab_10A88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10A88
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_10A88
    pri = 0;
    return pri;
// lab_10670
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10258
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_10A98
fun_10A98() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 154
    OP_JZER lab_10C98
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 9;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10C98
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 180;
    var_136 = 96;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_10C98
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10C98
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
}
// fun_10CE0
fun_10CE0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 9
    OP_JNZ lab_10E28
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 9
    OP_JNZ lab_10E28
    pri = 0;
    OP_JUMP lab_10E38
// lab_10E28
    pri = 1;
// lab_10E38
    OP_JZER lab_10E98
    OP_BREAK 
    var_8 = -11;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10E98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 70;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10F70
    OP_BREAK 
    var_56 = -10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10F70
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 18
    OP_JZER lab_11128
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11128
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_11128
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 62
    OP_JZER lab_112D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 9;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_112D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_112D0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_112D0
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_11328
fun_11328() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_11538
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 2;
    OP_JSLESS lab_11528
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 100;
    var_136 = 96;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_11528
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_11538
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11610
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_11610
    pri = 0;
    return pri;
// lab_11528
    OP_JUMP lab_11610
}
// fun_11620
fun_11620() {
    pri = 0;
    return pri;
}
// fun_11638
fun_11638() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 94;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 54
    OP_JNZ lab_11888
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 112
    OP_JNZ lab_11888
    pri = 0;
    OP_JUMP lab_11898
// lab_11888
    pri = 1;
// lab_11898
    OP_JZER lab_11908
    OP_BREAK 
    var_8 = -12;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_11908
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 54
    OP_JNZ lab_11988
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 112
    OP_JNZ lab_11988
    pri = 0;
    OP_JUMP lab_11998
// lab_11988
    pri = 1;
// lab_11998
    OP_JZER lab_11A90
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11A90
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_11A90
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 26
    OP_JZER lab_11DD0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 485
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 219
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 462
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 306
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 476
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 411
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 758
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 777
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 793
    OP_JNZ lab_11CC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 805
    OP_JNZ lab_11CC8
    pri = 0;
    OP_JUMP lab_11CD8
// lab_11DD0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 157
    OP_JZER lab_11E58
    OP_LOAD_S_PRI -16
    alt = 157;
    OP_JEQ lab_11E58
    pri = 1;
    OP_JUMP lab_11E60
// lab_11E58
    pri = 0;
// lab_11E60
    OP_JZER lab_12208
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 537
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 423
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 340
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 195
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 260
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 76
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 464
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 565
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 139
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 141
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 689
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 222
    OP_JNZ lab_12100
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 369
    OP_JNZ lab_12100
    pri = 0;
    OP_JUMP lab_12110
// lab_12208
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI -32
    alt = 2;
    OP_JEQ lab_12460
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_12358
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_12358
    pri = 0;
    OP_JUMP lab_12368
// lab_12460
    OP_BREAK 
    OP_LOAD_S_PRI -32
    alt = 1;
    OP_JEQ lab_12620
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 70
    OP_JNZ lab_12518
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 70
    OP_JNZ lab_12518
    pri = 0;
    OP_JUMP lab_12528
// lab_12620
    OP_BREAK 
    OP_LOAD_S_PRI -32
    alt = 4;
    OP_JEQ lab_127E0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 45
    OP_JNZ lab_126D8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 45
    OP_JNZ lab_126D8
    pri = 0;
    OP_JUMP lab_126E8
// lab_127E0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 22
    OP_JNZ lab_12860
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 22
    OP_JNZ lab_12860
    pri = 0;
    OP_JUMP lab_12870
// lab_12860
    pri = 1;
// lab_12870
    OP_JZER lab_12A00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_12A00
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12A00
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_12A00
    OP_STACK 32
    pri = 0;
    return pri;
// lab_126D8
    pri = 1;
// lab_126E8
    OP_JZER lab_127E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_127E0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_12518
    pri = 1;
// lab_12528
    OP_JZER lab_12620
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12620
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_12358
    pri = 1;
// lab_12368
    OP_JZER lab_12460
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12460
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_12100
    pri = 1;
// lab_12110
    OP_JZER lab_12208
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12208
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_11CC8
    pri = 1;
// lab_11CD8
    OP_JZER lab_11DD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11DD0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
}
// fun_12A20
fun_12A20() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 141
    OP_JNZ lab_12B40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 86
    OP_JNZ lab_12B40
    pri = 0;
    OP_JUMP lab_12B50
// lab_12B40
    pri = 1;
// lab_12B50
    OP_JZER lab_12C48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12C48
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_12C48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12DB8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12D90
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_12DB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12F28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 150;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12F00
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_12F28
    OP_STACK 8
    pri = 0;
    return pri;
// lab_12F00
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_12D90
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_12F48
fun_12F48() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 485
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 219
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 462
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 306
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 476
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 411
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 758
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 777
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 793
    OP_JNZ lab_131E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 805
    OP_JNZ lab_131E8
    pri = 0;
    OP_JUMP lab_131F8
// lab_131E8
    pri = 1;
// lab_131F8
    OP_JZER lab_132F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_132F0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_132F0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_13310
fun_13310() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 84
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 97
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 141
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 57
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 58
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 31
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 47
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 115
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 55
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 101
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 26
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 33
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 103
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 56
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 34
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 20
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 153
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 89
    OP_JNZ lab_13858
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 104
    OP_JNZ lab_13858
    pri = 0;
    OP_JUMP lab_13868
// lab_13858
    pri = 1;
// lab_13868
    OP_JZER lab_139E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_139C0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_139C0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_139E8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 47
    OP_JZER lab_13C68
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 11
    OP_JNZ lab_13B60
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 11
    OP_JNZ lab_13B60
    pri = 0;
    OP_JUMP lab_13B70
// lab_13C68
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 93
    OP_JZER lab_13EA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13E80
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 40;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 2
    OP_JZER lab_13E80
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 96;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_13E80
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_13EA8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 33
    OP_JZER lab_14060
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JZER lab_14038
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_14038
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_14060
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 34
    OP_JZER lab_14218
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_141F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_141F0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_14218
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 157
    OP_JZER lab_145B8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 76
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 464
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 139
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 141
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 195
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 260
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 340
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 369
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 423
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 537
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 565
    OP_JNZ lab_144B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 689
    OP_JNZ lab_144B0
    pri = 0;
    OP_JUMP lab_144C0
// lab_145B8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 31
    OP_JNZ lab_14668
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_14668
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 78
    OP_JNZ lab_14668
    pri = 0;
    OP_JUMP lab_14678
// lab_14668
    pri = 1;
// lab_14678
    OP_JZER lab_14870
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 130
    OP_JNZ lab_14768
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 226
    OP_JNZ lab_14768
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 279
    OP_JNZ lab_14768
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 581
    OP_JNZ lab_14768
    pri = 0;
    OP_JUMP lab_14778
// lab_14870
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 26
    OP_JZER lab_14BB0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 462
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 219
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 306
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 411
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 476
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 485
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 758
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 777
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 793
    OP_JNZ lab_14AA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 805
    OP_JNZ lab_14AA8
    pri = 0;
    OP_JUMP lab_14AB8
// lab_14BB0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 178
    OP_JZER lab_14F90
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 399;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_14E88
    var_56 = 0;
    var_64 = 0;
    var_72 = 396;
    var_80 = 0;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_14E88
    var_104 = 0;
    var_112 = 0;
    var_120 = 352;
    var_128 = 0;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_14E88
    var_152 = 0;
    var_160 = 0;
    var_168 = 406;
    var_176 = 0;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_14E88
    var_200 = 0;
    var_208 = 0;
    var_216 = 505;
    var_224 = 0;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_14E88
    pri = 0;
    OP_JUMP lab_14E98
// lab_14F90
    OP_STACK 16
    pri = 0;
    return pri;
// lab_14E88
    pri = 1;
// lab_14E98
    OP_JZER lab_14F90
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14F68
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14F68
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_14AA8
    pri = 1;
// lab_14AB8
    OP_JZER lab_14BB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14B88
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14B88
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_14768
    pri = 1;
// lab_14778
    OP_JZER lab_14870
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14848
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14848
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_144B0
    pri = 1;
// lab_144C0
    OP_JZER lab_14590
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14590
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14590
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_141F0
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_14038
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_13E80
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_13B60
    pri = 1;
// lab_13B70
    OP_JZER lab_13C40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13C40
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_13C40
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_139C0
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
}
// fun_14FB0
fun_14FB0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_150E8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 158
    OP_JNZ lab_150E8
    pri = 0;
    OP_JUMP lab_150F8
// lab_150E8
    pri = 1;
// lab_150F8
    OP_JZER lab_15678
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 1;
    OP_JSLEQ lab_15518
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 284;
    var_80 = 0;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_152C0
    var_104 = 0;
    var_112 = 0;
    var_120 = 323;
    var_128 = 0;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_152C0
    pri = 0;
    OP_JUMP lab_152D0
// lab_15678
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
// lab_15518
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 264;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15678
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15678
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_152C0
    pri = 1;
// lab_152D0
    OP_JZER lab_15440
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15440
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15440
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_15440
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15518
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_156C0
fun_156C0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 100;
    var_32 = 0;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15828
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 97;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15810
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15828
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15988
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 96;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15970
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15988
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15B68
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 1;
    OP_JSLEQ lab_15B68
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 96;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_15B68
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_15B68
    pri = 0;
    return pri;
// lab_15970
    OP_BREAK 
    pri = 0;
    return pri;
// lab_15810
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_15B78
fun_15B78() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 100;
    var_32 = 0;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15CE0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15CC8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15CE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15E40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15E28
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15E40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15F88
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15F88
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15F88
    pri = 0;
    return pri;
// lab_15E28
    OP_BREAK 
    pri = 0;
    return pri;
// lab_15CC8
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_15F98
fun_15F98() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_160E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_160E8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_160E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16230
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16230
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16230
    pri = 0;
    return pri;
}
// fun_16240
fun_16240() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 57
    OP_JNZ lab_16360
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 58
    OP_JNZ lab_16360
    pri = 0;
    OP_JUMP lab_16370
// lab_16360
    pri = 1;
// lab_16370
    OP_JZER lab_16758
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_164C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_164C8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16758
    OP_STACK 8
    pri = 0;
    return pri;
// lab_164C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 3;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16610
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16610
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16610
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 3;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16758
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16758
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
}
// fun_16778
fun_16778() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_168B0
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 81;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 1;
    OP_JSGRTR lab_168B0
    pri = 0;
    OP_JUMP lab_168C0
// lab_168B0
    pri = 1;
// lab_168C0
    OP_JZER lab_16A18
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16A18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16A18
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16A18
    pri = 0;
    return pri;
}
// fun_16A28
fun_16A28() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16B78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16B78
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16B78
    pri = 0;
    return pri;
}
// fun_16B88
fun_16B88() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_172A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 347;
    var_80 = 0;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_170B8
    var_104 = 0;
    var_112 = 0;
    var_120 = 339;
    var_128 = 0;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_170B8
    var_152 = 0;
    var_160 = 0;
    var_168 = 133;
    var_176 = 0;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_170B8
    var_200 = 0;
    var_208 = 0;
    var_216 = 334;
    var_224 = 0;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_170B8
    var_248 = 0;
    var_256 = 0;
    var_264 = 14;
    var_272 = 0;
    var_280 = 47;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_170B8
    var_296 = 0;
    var_304 = 0;
    var_312 = 107;
    var_320 = 0;
    var_328 = 47;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_170B8
    var_344 = 0;
    var_352 = 0;
    var_360 = 112;
    var_368 = 0;
    var_376 = 47;
    var_384 = 40;
    pri = fun_0010(var_376, var_368, var_360, var_352, var_344)
    OP_JNZ lab_170B8
    var_392 = 0;
    var_400 = 0;
    var_408 = 151;
    var_416 = 0;
    var_424 = 47;
    var_432 = 40;
    pri = fun_0010(var_424, var_416, var_408, var_400, var_392)
    OP_JNZ lab_170B8
    var_440 = 0;
    var_448 = 0;
    var_456 = 417;
    var_464 = 0;
    var_472 = 47;
    var_480 = 40;
    pri = fun_0010(var_472, var_464, var_456, var_448, var_440)
    OP_JNZ lab_170B8
    pri = 0;
    OP_JUMP lab_170C8
// lab_172A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 80;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17360
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_17360
    pri = 0;
    return pri;
// lab_170B8
    pri = 1;
// lab_170C8
    OP_JZER lab_172A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 81;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 81;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_JSGEQ lab_172A0
    OP_BREAK 
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 128;
    var_144 = 96;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_JZER lab_172A0
    OP_BREAK 
    var_160 = 3;
    var_168 = 8;
    pri = fun_00B8(var_160)
}
