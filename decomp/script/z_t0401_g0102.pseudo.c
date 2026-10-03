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
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0170
fun_0170() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_01B0
fun_01B0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_01F8
    pri = 0;
    return pri;
// lab_01F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0238
// lab_0238
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_03E8(var_8)
    OP_JNZ lab_02C0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_02B0
    pri = 0;
    return pri;
// lab_02C0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0308
    pri = 0;
    return pri;
// lab_0308
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0368
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_03B0(var_8)
    pri = 0;
    return pri;
// lab_0368
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0238
    pri = 0;
    return pri;
// lab_02B0
    OP_JUMP lab_0308
}
// fun_03B0
fun_03B0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_03E8
fun_03E8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0418
fun_0418() {
    OP_JUMP lab_0430
// lab_0430
    pri = EvCameraMoveWait_()
    OP_JZER lab_0468
    pri = 0;
    return pri;
// lab_0468
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0430
    pri = 0;
    return pri;
}
// fun_04A8
fun_04A8() {
    pri = g_mode;
    switch (pri) {
// switch_0658
        case default:
        {
// switch_0658_case_default
            pri = CommandNOP()
            OP_JUMP lab_0700
// lab_0700
            pri = 0;
            return pri;
        }
        case 0xaff4cd4791fee488:
        {
// switch_0658_case_0xaff4cd4791fee488
            var_8 = 0;
            pri = fun_0BD0()
            OP_JUMP lab_0700
        }
        case 0xaff4ce4791fee63b:
        {
// switch_0658_case_0xaff4ce4791fee63b
            var_8 = 0;
            pri = fun_0E18()
            OP_JUMP lab_0700
        }
        case 0xaff4cf4791fee7ee:
        {
// switch_0658_case_0xaff4cf4791fee7ee
            var_8 = 0;
            pri = fun_0740()
            OP_JUMP lab_0700
        }
        case 0xaff4d04791fee9a1:
        {
// switch_0658_case_0xaff4d04791fee9a1
            var_8 = 0;
            pri = fun_0988()
            OP_JUMP lab_0700
        }
        case 0xaff4d14791feeb54:
        {
// switch_0658_case_0xaff4d14791feeb54
            var_8 = 0;
            pri = fun_14F0()
            OP_JUMP lab_0700
        }
        case 0xaff4d34791feeeba:
        {
// switch_0658_case_0xaff4d34791feeeba
            var_8 = 0;
            pri = fun_1060()
            OP_JUMP lab_0700
        }
        case 0xaff4d44791fef06d:
        {
// switch_0658_case_0xaff4d44791fef06d
            var_8 = 0;
            pri = fun_12A8()
            OP_JUMP lab_0700
        }
        case 0xe4650b199066e4ac:
        {
// switch_0658_case_0xe4650b199066e4ac
            var_8 = 0;
            pri = fun_0728()
            OP_JUMP lab_0700
        }
        case 0x0:
        {
// switch_0658_case_0x0
            var_8 = 0;
            pri = fun_0710()
            OP_JUMP lab_0700
        }
    }
}
// fun_0710
fun_0710() {
    pri = 0;
    return pri;
}
// fun_0728
fun_0728() {
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    OP_PUSH5_C 4664317441025769472, 4644952842237378560, 4662885876886405120, 4665321295141928960, 4649007841120616448
    var_32 = 4662372404956233728;
    var_40 = 32;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_01B0(var_48)
    var_64 = 4;
    var_72 = 32;
    var_80 = 8802641224559852288;
    var_88 = 24;
    pri = fun_0170(var_80, var_72, var_64)
    var_96 = 160;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0138(var_104, var_96)
    var_120 = 12;
    pri = GetTargetFieldObjectID()
    var_128 = pri;
    var_136 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_136, var_128, var_120)
    var_144 = 12;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 296;
    pri = SoundPostEvent(var_160)
    pri = GimmickWaterSwitch_()
    var_168 = 0;
    pri = fun_0418()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_01B0(var_176)
    var_192 = 3;
    var_200 = 0;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_0988
fun_0988() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    OP_PUSH5_C 4662320727909728256, 4649474034050793472, 4663390552723554304, 4663249815235198976, 4650802244097146880
    var_32 = 4663548882397954048;
    var_40 = 32;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_01B0(var_48)
    var_64 = 4;
    var_72 = 608;
    var_80 = 8802641224559852288;
    var_88 = 24;
    pri = fun_0170(var_80, var_72, var_64)
    var_96 = 736;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0138(var_104, var_96)
    var_120 = 12;
    pri = GetTargetFieldObjectID()
    var_128 = pri;
    var_136 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_136, var_128, var_120)
    var_144 = 12;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 872;
    pri = SoundPostEvent(var_160)
    pri = GimmickWaterSwitch_()
    var_168 = 0;
    pri = fun_0418()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_01B0(var_176)
    var_192 = 3;
    var_200 = 0;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_0BD0
fun_0BD0() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    OP_PUSH5_C 4661746782840029184, 4651585096376123392, 4657823725352124416, 4663062898258477056, 4651523523724967936
    var_32 = 4656770393212715008;
    var_40 = 32;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_01B0(var_48)
    var_64 = 4;
    var_72 = 1184;
    var_80 = 8802641224559852288;
    var_88 = 24;
    pri = fun_0170(var_80, var_72, var_64)
    var_96 = 1312;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0138(var_104, var_96)
    var_120 = 12;
    pri = GetTargetFieldObjectID()
    var_128 = pri;
    var_136 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_136, var_128, var_120)
    var_144 = 12;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 1448;
    pri = SoundPostEvent(var_160)
    pri = GimmickWaterSwitch_()
    var_168 = 0;
    pri = fun_0418()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_01B0(var_176)
    var_192 = 3;
    var_200 = 0;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    OP_PUSH5_C 4663732500839792640, 4646676876469731328, 4663088187025915904, 4664919973397790720, 4649289316097327104
    var_32 = 4662197582607417344;
    var_40 = 32;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_01B0(var_48)
    var_64 = 4;
    var_72 = 1760;
    var_80 = 8802641224559852288;
    var_88 = 24;
    pri = fun_0170(var_80, var_72, var_64)
    var_96 = 1888;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0138(var_104, var_96)
    var_120 = 12;
    pri = GetTargetFieldObjectID()
    var_128 = pri;
    var_136 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_136, var_128, var_120)
    var_144 = 12;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 2024;
    pri = SoundPostEvent(var_160)
    pri = GimmickWaterSwitch_()
    var_168 = 0;
    pri = fun_0418()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_01B0(var_176)
    var_192 = 3;
    var_200 = 0;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    OP_PUSH5_C 4661284987956363264, 4648972656748527616, 4662632989212016640, 4663210232816599040, 4649808285585637376
    var_32 = 4662057944630689792;
    var_40 = 40;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_01B0(var_48)
    var_64 = 4;
    var_72 = 2336;
    var_80 = 8802641224559852288;
    var_88 = 24;
    pri = fun_0170(var_80, var_72, var_64)
    var_96 = 2464;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0138(var_104, var_96)
    var_120 = 12;
    pri = GetTargetFieldObjectID()
    var_128 = pri;
    var_136 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_136, var_128, var_120)
    var_144 = 12;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 2600;
    pri = SoundPostEvent(var_160)
    pri = GimmickWaterSwitch_()
    var_168 = 0;
    pri = fun_0418()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_01B0(var_176)
    var_192 = 3;
    var_200 = 0;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    OP_PUSH5_C 4663847949560709120, 4649430053585682432, 4660024947630931968, 4664796828095479808, 4650793448004124672
    var_32 = 4659411420142632960;
    var_40 = 32;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_01B0(var_48)
    var_64 = 4;
    var_72 = 2912;
    var_80 = 8802641224559852288;
    var_88 = 24;
    pri = fun_0170(var_80, var_72, var_64)
    var_96 = 3040;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0138(var_104, var_96)
    var_120 = 12;
    pri = GetTargetFieldObjectID()
    var_128 = pri;
    var_136 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_136, var_128, var_120)
    var_144 = 12;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 3176;
    pri = SoundPostEvent(var_160)
    pri = GimmickWaterSwitch_()
    var_168 = 0;
    pri = fun_0418()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_01B0(var_176)
    var_192 = 3;
    var_200 = 0;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    OP_PUSH5_C 4661730290165612544, 4650529565213458432, 4660176680235565056, 4663062898258477056, 4652236007259766784
    var_32 = 4659110153956622336;
    var_40 = 32;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 8802641224559852288;
    var_56 = 8;
    pri = fun_01B0(var_48)
    var_64 = 4;
    var_72 = 3488;
    var_80 = 8802641224559852288;
    var_88 = 24;
    pri = fun_0170(var_80, var_72, var_64)
    var_96 = 3616;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0138(var_104, var_96)
    var_120 = 12;
    pri = GetTargetFieldObjectID()
    var_128 = pri;
    var_136 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_136, var_128, var_120)
    var_144 = 12;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 3752;
    pri = SoundPostEvent(var_160)
    pri = GimmickWaterSwitch_()
    var_168 = 0;
    pri = fun_0418()
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_01B0(var_176)
    var_192 = 3;
    var_200 = 0;
    pri = EvCameraEnd(var_200, var_192)
    pri = 0;
    return pri;
}
