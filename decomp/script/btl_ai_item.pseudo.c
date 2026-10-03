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
// switch_0440
        case default:
        {
// switch_0440_case_default
            OP_STACK 8
            pri = 0;
            return pri;
        }
        case 0x11:
        {
// switch_0440_case_0x11
            OP_BREAK 
            var_8 = 0;
            pri = fun_0528()
            OP_JUMP switch_0440_case_default
        }
        case 0x17:
        {
// switch_0440_case_0x17
            OP_BREAK 
            var_8 = 0;
            pri = fun_0C20()
            OP_JUMP switch_0440_case_default
        }
        case 0x18:
        {
// switch_0440_case_0x18
            OP_BREAK 
            var_8 = 0;
            pri = fun_0528()
            OP_JUMP switch_0440_case_default
        }
        case 0x19:
        {
// switch_0440_case_0x19
            OP_BREAK 
            var_8 = 0;
            pri = fun_0528()
            OP_JUMP switch_0440_case_default
        }
        case 0x1a:
        {
// switch_0440_case_0x1a
            OP_BREAK 
            var_8 = 0;
            pri = fun_0528()
            OP_JUMP switch_0440_case_default
        }
        case 0x1b:
        {
// switch_0440_case_0x1b
            OP_BREAK 
            var_8 = 0;
            pri = fun_1C48()
            OP_JUMP switch_0440_case_default
        }
        case 0x39:
        {
// switch_0440_case_0x39
            OP_BREAK 
            var_8 = 0;
            pri = fun_22E0()
            OP_JUMP switch_0440_case_default
        }
        case 0x3a:
        {
// switch_0440_case_0x3a
            OP_BREAK 
            var_8 = 0;
            pri = fun_22E0()
            OP_JUMP switch_0440_case_default
        }
        case 0x3b:
        {
// switch_0440_case_0x3b
            OP_BREAK 
            var_8 = 0;
            pri = fun_2408()
            OP_JUMP switch_0440_case_default
        }
        case 0x3d:
        {
// switch_0440_case_0x3d
            OP_BREAK 
            var_8 = 0;
            pri = fun_22E0()
            OP_JUMP switch_0440_case_default
        }
        case 0x3e:
        {
// switch_0440_case_0x3e
            OP_BREAK 
            var_8 = 0;
            pri = fun_22E0()
            OP_JUMP switch_0440_case_default
        }
    }
}
// fun_0528
fun_0528() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0840
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 31;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_0690
    OP_BREAK 
    var_104 = 10;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0840
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0BD8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 31;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_0A28
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_0A28
    OP_BREAK 
    var_152 = 10;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0BD8
    OP_BREAK 
    var_8 = -20;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
// lab_0A28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 70;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0B00
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0B00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 70;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0BD8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0690
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0768
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0768
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 170;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0840
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_0C20
fun_0C20() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 31;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_0D88
    OP_BREAK 
    var_104 = 10;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_13D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C00
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 31;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_15B8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_15B8
    OP_BREAK 
    var_152 = 10;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1C00
    OP_BREAK 
    var_8 = -20;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
// lab_15B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1958
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 1;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1958
    var_104 = 0;
    var_112 = 0;
    var_120 = 5;
    var_128 = 1;
    var_136 = 10;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_1958
    var_152 = 0;
    var_160 = 0;
    var_168 = 1;
    var_176 = 1;
    var_184 = 10;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_1958
    var_200 = 0;
    var_208 = 0;
    var_216 = 4;
    var_224 = 1;
    var_232 = 10;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_1958
    var_248 = 0;
    var_256 = 0;
    var_264 = 6;
    var_272 = 1;
    var_280 = 10;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_1958
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 1;
    var_328 = 12;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_1958
    pri = 0;
    OP_JUMP lab_1968
// lab_1958
    pri = 1;
// lab_1968
    OP_JZER lab_1A50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1A50
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1A50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B28
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1B28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C00
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_0D88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1128
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 1;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1128
    var_104 = 0;
    var_112 = 0;
    var_120 = 5;
    var_128 = 1;
    var_136 = 10;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_1128
    var_152 = 0;
    var_160 = 0;
    var_168 = 1;
    var_176 = 1;
    var_184 = 10;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_1128
    var_200 = 0;
    var_208 = 0;
    var_216 = 4;
    var_224 = 1;
    var_232 = 10;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_1128
    var_248 = 0;
    var_256 = 0;
    var_264 = 6;
    var_272 = 1;
    var_280 = 10;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_1128
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 1;
    var_328 = 12;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_1128
    pri = 0;
    OP_JUMP lab_1138
// lab_1128
    pri = 1;
// lab_1138
    OP_JZER lab_1220
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1220
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1220
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12F8
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_12F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 170;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13D0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_1C48
fun_1C48() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1FF0
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 1;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1FF0
    var_104 = 0;
    var_112 = 0;
    var_120 = 5;
    var_128 = 1;
    var_136 = 10;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_1FF0
    var_152 = 0;
    var_160 = 0;
    var_168 = 1;
    var_176 = 1;
    var_184 = 10;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_1FF0
    var_200 = 0;
    var_208 = 0;
    var_216 = 4;
    var_224 = 1;
    var_232 = 10;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_1FF0
    var_248 = 0;
    var_256 = 0;
    var_264 = 6;
    var_272 = 1;
    var_280 = 10;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_1FF0
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 1;
    var_328 = 12;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_1FF0
    pri = 0;
    OP_JUMP lab_2000
// lab_1FF0
    pri = 1;
// lab_2000
    OP_JZER lab_2298
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 31;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_20E8
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_2298
    OP_BREAK 
    var_8 = -20;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
// lab_20E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 150;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21C0
    OP_BREAK 
    var_56 = 10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_21C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 150;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2298
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_22E0
fun_22E0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_23C0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_23C0
    OP_BREAK 
    var_8 = -20;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
}
// fun_2408
fun_2408() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24E8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_24E8
    OP_BREAK 
    var_8 = -20;
    var_16 = 8;
    pri = fun_00B8(var_8)
    pri = 0;
    return pri;
}
