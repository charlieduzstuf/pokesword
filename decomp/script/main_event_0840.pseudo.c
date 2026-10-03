// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = _Suspend(var_8)
    pri = 0;
    OP_ZERO_ALT 
    OP_HALT 12
    pri = 0;
    return pri;
}
// fun_0060
fun_0060() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00A0
    pri = 0;
    return pri;
// lab_00A0
    OP_ZERO_P_S -8
    OP_JUMP lab_00C8
// lab_00C8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0120
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00C0
// lab_0120
    pri = 0;
    return pri;
// lab_00C0
    OP_INC_P_S -8
}
// fun_0138
fun_0138() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0198
fun_0198() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    pri = GetFnvHash64(var_24)
    var_32 = pri;
    var_40 = arg_0;
    pri = FadeOut_(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0208
fun_0208() {
    OP_JUMP lab_0220
// lab_0220
    pri = FadeWait_()
    OP_JZER lab_0258
    pri = 0;
    return pri;
// lab_0258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0220
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_02C0
fun_02C0() {
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_02F0
fun_02F0() {
    pri = arg_0;
    switch (pri) {
// switch_0498
        case default:
        {
// switch_0498_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0498_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0498_case_default
        }
        case 0x1:
        {
// switch_0498_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0498_case_default
        }
        case 0x2:
        {
// switch_0498_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0498_case_default
        }
        case 0x3:
        {
// switch_0498_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0498_case_default
        }
        case 0x4:
        {
// switch_0498_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0498_case_default
        }
        case 0x5:
        {
// switch_0498_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0498_case_default
        }
        case 0x6:
        {
// switch_0498_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0498_case_default
        }
    }
}
// fun_0530
fun_0530() {
    pri = IsFieldObjectNotSetupAny_()
    return pri;
}
// fun_0558
fun_0558() {
    OP_JUMP lab_0570
// lab_0570
    var_8 = 0;
    pri = fun_0530()
    OP_JNZ lab_05A8
    pri = 0;
    return pri;
// lab_05A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0570
    pri = 0;
    return pri;
}
// fun_05E8
fun_05E8() {
    OP_JUMP lab_0600
// lab_0600
    pri = IsAnyLoadingFieldTerrainChip_()
    OP_JNZ lab_0638
    pri = 0;
    return pri;
// lab_0638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0600
    pri = 0;
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0808
    pri = 0;
    return pri;
// lab_0808
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0848
// lab_0848
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A38(var_8)
    OP_JNZ lab_08D0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08C0
    pri = 0;
    return pri;
// lab_08D0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0918
    pri = 0;
    return pri;
// lab_0918
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0978
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09C0(var_8)
    pri = 0;
    return pri;
// lab_0978
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0848
    pri = 0;
    return pri;
// lab_08C0
    OP_JUMP lab_0918
}
// fun_09C0
fun_09C0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    OP_JUMP lab_0A80
// lab_0A80
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0B10
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0B00
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07C0(var_8)
    pri = 0;
    return pri;
// lab_0B10
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BA0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0B90
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07C0(var_8)
    pri = 0;
    return pri;
// lab_0BA0
    pri = 0;
    return pri;
// lab_0B90
    OP_JUMP lab_0BB0
// lab_0BB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A80
    pri = 0;
    return pri;
// lab_0B00
    OP_JUMP lab_0BB0
}
// fun_0BF0
fun_0BF0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07C0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A68(var_40)
    pri = 0;
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
    OP_JUMP lab_0D28
// lab_0D28
    pri = EvCameraMoveWait_()
    OP_JZER lab_0D60
    pri = 0;
    return pri;
// lab_0D60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D28
    pri = 0;
    return pri;
}
// fun_0DA0
fun_0DA0() {
    pri = 32;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_0E28
// lab_0E28
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_0FA8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_0F98
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_0EE8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_0EE8
    pri = 0;
    OP_JUMP lab_0EF0
// lab_0FA8
    pri = 0;
    return pri;
// lab_0F98
    OP_JUMP lab_0E20
// lab_0E20
    OP_INC_P_S -936
// lab_0EE8
    pri = 1;
// lab_0EF0
    OP_JZER lab_0F68
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_0F60
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_0F68
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_0F60
}
// fun_0FC8
fun_0FC8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_1060
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0CB0()
// lab_1060
    pri = arg_4;
    OP_JZER lab_1098
    var_8 = 1;
    var_16 = 8;
    pri = fun_0CD8(var_8)
// lab_1098
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_10F0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_10F0
    pri = 0;
    OP_JUMP lab_10F8
// lab_10F0
    pri = 1;
// lab_10F8
    OP_JZER lab_11C0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_11C0
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1198
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0BF0(var_32, var_24)
    OP_JUMP lab_11C0
// lab_11C0
    pri = arg_2;
    OP_JZER lab_1298
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1268
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_09F8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0788(var_40)
    OP_JUMP lab_1298
// lab_1298
    pri = arg_3;
    OP_JZER lab_12D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C78(var_8)
// lab_12D0
    pri = 0;
    return pri;
// lab_1268
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_09F8(var_16, var_8)
// lab_1198
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0BF0(var_16, var_8)
}
// fun_12E0
fun_12E0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0DA0(var_24)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
    pri = g_mode;
    switch (pri) {
// switch_1408
        case default:
        {
// switch_1408_case_default
            pri = CommandNOP()
            OP_JUMP lab_1450
// lab_1450
            pri = 0;
            return pri;
        }
        case 0xbd49c11ea439a3de:
        {
// switch_1408_case_0xbd49c11ea439a3de
            var_8 = 0;
            pri = fun_2528()
            OP_JUMP lab_1450
        }
        case 0x0:
        {
// switch_1408_case_0x0
            var_8 = 0;
            pri = fun_1460()
            OP_JUMP lab_1450
        }
        case 0x4f898b21df3b1352:
        {
// switch_1408_case_0x4f898b21df3b1352
            var_8 = 0;
            pri = fun_2438()
            OP_JUMP lab_1450
        }
    }
}
// fun_1460
fun_1460() {
    pri = 0;
    return pri;
}
// fun_1478
fun_1478() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0FC8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14D0
fun_14D0() {
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = 3;
    var_16 = 8;
    pri = fun_02F0(var_8)
    pri = IsMovieSkipEnable()
    OP_JZER lab_1560
    OP_JUMP lab_22A8
// lab_1560
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4640537203540230144, 4668523622757826560, 4671167123588907008, 8802641224559852288
    var_24 = 48;
    pri = fun_0678(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 0;
    var_56 = 4633472181624792678;
    var_64 = 0;
    OP_PUSH5_C 4668448779001323848, 4658347972496248013, 4671164578219488707, 4668937044627428475, 4657337499320089313
    var_72 = 4671165007029023539;
    var_80 = 1;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 0;
    pri = fun_0D10()
    var_96 = 0;
    var_104 = 4633472181624792678;
    var_112 = 0;
    OP_PUSH5_C 4668170558579031409, 4655671409350520340, 4671164355568384082, 4668658818707577897, 4653650506978668052
    var_120 = 4671164787126697984;
    var_128 = 240;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 1000;
    var_144 = 8;
    var_152 = 16;
    pri = fun_0138(var_144, var_136)
    var_160 = 120;
    var_168 = 8;
    pri = fun_0060(var_160)
    var_176 = 1;
    var_184 = 0;
    var_192 = 1048;
    var_200 = 1;
    var_208 = 32;
    pri = fun_0198(var_200, var_192, var_184, var_176)
    var_216 = 0;
    pri = fun_0208()
    var_224 = 0;
    var_232 = 4633584771615476941;
    var_240 = 0;
    OP_PUSH5_C 4668109491703224730, 4649016021487127101, 4671173877339080622, 4668567669193635267, 4636928694338799534
    var_248 = 4671178330361173115;
    var_256 = 1;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_0D10()
    var_272 = 0;
    var_280 = 4633584771615476941;
    var_288 = 0;
    OP_PUSH5_C 4668103746754969600, 4648878626514120212, 4671173825112278303, 4668561561406542971, 4635759869498008535
    var_296 = 4671178278134370796;
    var_304 = 150;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 1096;
    var_320 = 15;
    var_328 = 16;
    pri = fun_0138(var_320, var_312)
    var_336 = 15;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_352 = 0;
    pri = fun_02C0()
    var_360 = 105;
    var_368 = 8;
    pri = fun_0060(var_360)
    var_376 = 1;
    var_384 = 0;
    var_392 = 1144;
    var_400 = 1;
    var_408 = 32;
    pri = fun_0198(var_400, var_392, var_384, var_376)
    var_416 = 0;
    pri = fun_0208()
    var_424 = 1;
    var_432 = -2838056801110477597;
    var_440 = 16;
    pri = fun_0748(var_432, var_424)
    var_448 = 1;
    var_456 = 519233441103215706;
    var_464 = 16;
    pri = fun_0748(var_456, var_448)
    var_472 = 1;
    var_480 = 761824523284151529;
    var_488 = 16;
    pri = fun_0748(var_480, var_472)
    var_496 = 1;
    var_504 = -2838054602087221175;
    var_512 = 16;
    pri = fun_0748(var_504, var_496)
    var_520 = 1;
    var_528 = 7432982267851046221;
    var_536 = 16;
    pri = fun_0748(var_528, var_520)
    var_544 = 1;
    var_552 = 1151694325420480060;
    var_560 = 16;
    pri = fun_0748(var_552, var_544)
    var_568 = 1;
    var_576 = 1;
    var_584 = 180;
    pri = float(var_584)
    var_592 = pri;
    var_600 = 12400;
    pri = float(var_600)
    var_608 = pri;
    var_616 = 16000;
    pri = float(var_616)
    var_624 = pri;
    var_632 = 8802641224559852288;
    var_640 = 48;
    pri = fun_0678(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 0;
    var_656 = 8802641224559852288;
    var_664 = 16;
    pri = fun_0710(var_656, var_648)
    var_672 = 0;
    var_680 = 4631994437997061734;
    var_688 = 0;
    OP_PUSH5_C 4668487630244691313, 4641976948046105149, 4670291530252906660, 4669036489956602675, 4640975600816456991
    var_696 = 4670280881482791649;
    var_704 = 1;
    pri = EvCameraMove(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_712 = 0;
    pri = fun_0D10()
    var_720 = 0;
    var_728 = 4631994437997061734;
    var_736 = 3;
    OP_PUSH5_C 4668122768306130125, 4648321042177442447, 4669461159830156739, 4668601572634677740, 4650403077395799081
    var_744 = 4669225001225184870;
    var_752 = 180;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 1192;
    var_768 = 15;
    var_776 = 16;
    pri = fun_0138(var_768, var_760)
    var_784 = 150;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 1;
    var_808 = 0;
    var_816 = 1240;
    var_824 = 1;
    var_832 = 32;
    pri = fun_0198(var_824, var_816, var_808, var_800)
    var_840 = 0;
    pri = fun_0208()
    var_848 = 0;
    var_856 = 4631023349327409971;
    var_864 = 0;
    OP_PUSH5_C 4667233224916352369, 4641755638345666396, 4668686268015365325, 4667411582195052052, 4641409424124312289
    var_872 = 4668476723089343775;
    var_880 = 1;
    pri = EvCameraMove(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_888 = 0;
    pri = fun_0D10()
    var_896 = 0;
    var_904 = 4631727036769186611;
    var_912 = 3;
    OP_PUSH5_C 4667274165231812608, 4643799498520306647, 4668655454201996902, 4667478828326206833, 4634422159671191142
    var_920 = 4668793030594422374;
    var_928 = 180;
    pri = EvCameraMove(var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_936 = 1288;
    var_944 = 15;
    var_952 = 16;
    pri = fun_0138(var_944, var_936)
    var_960 = 150;
    var_968 = 8;
    pri = fun_0060(var_960)
    var_976 = 1;
    var_984 = 0;
    var_992 = 1336;
    var_1000 = 1;
    var_1008 = 32;
    pri = fun_0198(var_1000, var_992, var_984, var_976)
    var_1016 = 0;
    pri = fun_0208()
    var_1024 = 0;
    var_1032 = 4630291514387962266;
    var_1040 = 0;
    OP_PUSH5_C 4666792980460590858, 4658589887044591288, 4666562412872246231, 4667383203799939154, 4656817122456895488
    var_1048 = 4667097418737647616;
    var_1056 = 1;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 0;
    pri = fun_0D10()
    var_1072 = 0;
    var_1080 = 4629531531950843494;
    var_1088 = 0;
    OP_PUSH5_C 4666922398476738232, 4660424818019721544, 4665748790760366408, 4667617207362120581, 4658769833117593108
    var_1096 = 4665947895823482225;
    var_1104 = 240;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 1384;
    var_1120 = 15;
    var_1128 = 16;
    pri = fun_0138(var_1120, var_1112)
    var_1136 = 180;
    var_1144 = 8;
    pri = fun_0060(var_1136)
    var_1152 = 1;
    var_1160 = 0;
    var_1168 = 952;
    var_1176 = 8;
    var_1184 = 32;
    pri = fun_0198(var_1176, var_1168, var_1160, var_1152)
    var_1192 = 0;
    pri = fun_0208()
    var_1200 = 0;
    var_1208 = -2838056801110477597;
    var_1216 = 16;
    pri = fun_0748(var_1208, var_1200)
    var_1224 = 0;
    var_1232 = 519233441103215706;
    var_1240 = 16;
    pri = fun_0748(var_1232, var_1224)
    var_1248 = 0;
    var_1256 = 761824523284151529;
    var_1264 = 16;
    pri = fun_0748(var_1256, var_1248)
    var_1272 = 0;
    var_1280 = -2838054602087221175;
    var_1288 = 16;
    pri = fun_0748(var_1280, var_1272)
    var_1296 = 0;
    var_1304 = 7432982267851046221;
    var_1312 = 16;
    pri = fun_0748(var_1304, var_1296)
    var_1320 = 0;
    var_1328 = 1151694325420480060;
    var_1336 = 16;
    pri = fun_0748(var_1328, var_1320)
    var_1344 = 1;
    var_1352 = 1;
    OP_PUSH4_C 4640537203540230144, 4668523622757826560, 4671167123588907008, 8802641224559852288
    var_1360 = 48;
    pri = fun_0678(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1368 = 1;
    var_1376 = 8802641224559852288;
    var_1384 = 16;
    pri = fun_0710(var_1376, var_1368)
    var_1392 = 3;
    var_1400 = 1;
    pri = EvCameraEnd(var_1400, var_1392)
    var_1408 = 20;
    var_1416 = 8;
    pri = fun_0060(var_1408)
    var_1424 = 0;
    pri = fun_0558()
    var_1432 = 0;
    pri = fun_05E8()
// lab_22A8
    OP_LCTRL 5
    OP_SCTRL 4
    pri = IsMovieSkipEnable()
    OP_JZER lab_2348
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_06D0(var_32, var_24, var_16)
// lab_2348
    pri = 0;
    return pri;
}
// fun_2358
fun_2358() {
    pri = 0;
    return pri;
}
// fun_2370
fun_2370() {
    var_8 = 850;
    var_16 = 8;
    pri = fun_12E0(var_8)
    var_24 = 3;
    var_32 = 8;
    pri = fun_02F0(var_24)
    pri = 0;
    return pri;
}
// fun_23C8
fun_23C8() {
    pri = FieldCameraClearDelay()
    var_8 = 1000;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0138(var_16, var_8)
    var_32 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_2438
fun_2438() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_1478()
    var_16 = 0;
    pri = fun_14D0()
    var_24 = 0;
    pri = fun_14E8()
    var_32 = 0;
    pri = fun_1500()
    var_40 = 0;
    pri = fun_2358()
    var_48 = 0;
    pri = fun_2370()
    var_56 = 0;
    pri = fun_23C8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_2528
fun_2528() {
    var_8 = 0;
    pri = fun_14D0()
    var_16 = 0;
    pri = fun_2370()
    pri = 0;
    return pri;
}
