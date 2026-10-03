#include "lib/std.inc"

native PlayCharacterMotion_(motion_index, arg1, arg2, arg3, arg4);
native PlayPokemonMotion_(motion_index, arg1, arg2, arg3[], arg4, arg5);
native NumericToString(number, out[]);
native ConcatString(str1[], str2[], out[]);
native AddParallelCommandMonitorState_(motion_index, command[], arg3);
native WaitAnimationState_(motion_index, command[]);
new fi_types[46][] = {
    "fi_yes01_",
    "fi_no01_",
    "fi_pass01_",
    "fi_get01_",
    "fi_shock01_",
    "fi0901_bow01_03",
    "fi0902_holdin01_03",
    "fi0903_holdout01_03",
    "fi_ballthrow01",
    "fi0901_dress01",
    "fi_watch01",
    "fi_fairypose01",
    "fi0901_bow01_03",
    "fi_greeting01",
    "fi_greeting01",
    "fi_emotionalspeak01",
    "fi_search01_mid",
    "fi_search01_up",
    "fi_lickup01",
    "fi_lickup02",
    "fi_idling01",
    "fi_idling02",
    "fi_reply_yes",
    "fi_reply_no",
    "fi_pass01",
    "fi_get01",
    "fi_byebye",
    "fi1006_dowsingreturn01",
    "fi0081_whistle01",
    "sd9051_pm0948",
    "sd9051_pm0954",
    "sd9051_pm0951",
    "kw32_happyA01",
    "kw32_happyB01",
    "kw32_happyC01",
    "kw30_hate01",
    "ba02_roar01",
    "ba20_buturi01",
    "ba20_buturi02",
    "ba20_buturi03",
    "ba20_buturi04",
    "ba21_tokusyu01",
    "ba21_tokusyu02",
    "ba21_tokusyu03",
    "ba21_tokusyu04",
    "kw60_touch01",
}

fun_1ED8(motion_index, fi_index, arg2, arg3, arg4, arg5, arg6) {
    if (arg6 == 0) {
        SetTemp14();
    }
    switch (fi_index) {
        case 0:
            PlayCharacterMotion_(motion_index, 0, 1, -1, 0)
        case 1:
            PlayCharacterMotion_(motion_index, 0, 2, -1, 0)
        case 2:
            PlayCharacterMotion_(motion_index, 0, 3, -1, 0)
        case 3:
            PlayCharacterMotion_(motion_index, 0, 4, -1, 0)
        case 4:
            PlayCharacterMotion_(motion_index, 0, 5, -1, 0)
        case 5:
        {
            PlayCharacterMotion_(motion_index, 4, 1, 2, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 6:
        {
            PlayCharacterMotion_(motion_index, 4, 2, 2, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 7:
        {
            PlayCharacterMotion_(motion_index, 4, 3, 2, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 8:
            PlayCharacterMotion_(motion_index, 4, 6, 0, 0)
        case 9:
        {
            PlayCharacterMotion_(motion_index, 4, 2, 0, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 10:
        {
            PlayCharacterMotion_(motion_index, 4, 1, 0, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 11:
        {
            PlayCharacterMotion_(motion_index, 4, 3, 0, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 12:
        {
            PlayCharacterMotion_(motion_index, 4, 1, 2, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 13:
            PlayCharacterMotion_(motion_index, 4, 1, 0, 0)
        case 14:
            PlayCharacterMotion_(motion_index, 0, 6, 0, 0)
        case 15:
            PlayCharacterMotion_(motion_index, 4, 1, 0, 0)
        case 16:
        {
            PlayCharacterMotion_(motion_index, 1, 4, -1, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 17:
        {
            PlayCharacterMotion_(motion_index, 1, 5, -1, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 18:
            PlayCharacterMotion_(motion_index, 1, 6, -1, 0)
        case 19:
            PlayCharacterMotion_(motion_index, 1, 7, -1, 0)
        case 20:
        {
            PlayCharacterMotion_(motion_index, 5, 1, -1, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 21:
        {
            PlayCharacterMotion_(motion_index, 5, 2, -1, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 22:
            PlayCharacterMotion_(motion_index, 0, 1, -1, 0)
        case 23:
            PlayCharacterMotion_(motion_index, 0, 2, -1, 0)
        case 24:
            PlayCharacterMotion_(motion_index, 0, 3, -1, 0)
        case 25:
            PlayCharacterMotion_(motion_index, 0, 4, -1, 0)
        case 26:
            PlayCharacterMotion_(motion_index, 0, 5, -1, 0)
        case 27:
            PlayCharacterMotion_(motion_index, 0, 5, -1, 0)
        case 28:
        {
            PlayCharacterMotion_(motion_index, 0, 6, -1, 0);
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 29:
        {
            SetAnimationStateIntParameter(motion_index, "fi_action_number", 1);
            SetAnimationStateTrigger(motion_index, "fi_demo");
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 30:
        {
            SetAnimationStateIntParameter(motion_index, "fi_action_number", 3);
            SetAnimationStateTrigger(motion_index, "fi_demo");
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 31:
        {
            SetAnimationStateIntParameter(motion_index, "fi_action_number", 2);
            SetAnimationStateTrigger(motion_index, "fi_demo");
            AddParallelCommandControlFacial(motion_index, fi_types[fi_index], "", "", "", arg4, arg5);
        }
        case 32:
            PlayPokemonMotion_(motion_index, 0, 2, "to_kw32_happyA01", 0, arg3)
        case 33:
            PlayPokemonMotion_(motion_index, 0, 2, "to_kw32_happyB01", 0, arg3)
        case 34:
            PlayPokemonMotion_(motion_index, 0, 2, "to_kw32_happyC01", 0, arg3)
        case 35:
            PlayPokemonMotion_(motion_index, 0, 2, "to_kw30_hate01", 0, arg3)
        case 36:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba02_roar01", 0, arg3)
        case 37:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba20_buturi01", 0, arg3)
        case 38:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba20_buturi02", 0, arg3)
        case 39:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba20_buturi03", 0, arg3)
        case 40:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba20_buturi04", 0, arg3)
        case 41:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba21_tokusyu01", 0, arg3)
        case 42:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba21_tokusyu02", 0, arg3)
        case 43:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba21_tokusyu03", 0, arg3)
        case 44:
            PlayPokemonMotion_(motion_index, 0, 1, "to_ba21_tokusyu04", 0, arg3)
        case 45:
            PlayPokemonMotion_(motion_index, 0, 2, "to_kw60_touch01", 0, arg3)
    }
    new fi_type[64] = "";
    if (fi_index >= 0 && fi_index < 5) {
        new fi_wait_type = GetAnimationStateIntParameter(motion_index, "fi_wait_type");
        new temp_string[2] = "";
        NumericToString(fi_wait_type + 1, temp_string);
        ConcatString("0", temp_string, temp_string);
        ConcatString(fi_types[fi_index], temp_string, fi_type);
    } else {
        CopyString(fi_type, fi_types[fi_index], 64);
    }
    if (fi_index < 33) {
        AddParallelCommandMonitorState_(motion_index, fi_type, 0);
    } else {
        if (IsExistPokemonMotion(motion_index)) {
            AddParallelCommandMonitorState_(motion_index, fi_type, 0);
        }
    }
    if (arg2) {
        WaitAnimationState_(motion_index, fi_type);
    }
    ClearTemp14();
}

new fi_types_2[72][] = {
    "fi_speak01_",
    "fi_speak02_",
    "fi_speak03_",
    "fi_seach01_",
    "fi_laugh01_",
    "fi_chairwait01_loop",
    "fi_think01_01_start",
    "fi_wave01_01_start",
    "fi_pleasure01_01_start",
    "fi_grief01_01_start",
    "fi_cry01_01_start",
    "fi_anger01_01_start",
    "fi_surprise01_01_start",
    "fi_champpose01_01_start",
    "fi0950_champpose01_01_start",
    "fi_cheer01_start",
    "fi_fan01_start",
    "fi_fan02_start",
    "fi_work01_start",
    "fi0094_chairwait02_start",
    "fi_champpose01_01_start",
    "fi_champwait01_start",
    "fi_talkwave01_01_start",
    "fi_champwait01_start",
    "fi_champwait02_start",
    "fi0917_barbecue01_start",
    "fi_ballget01_start",
    "fi_handshake01_start",
    "fi_phone01_start",
    "fi_speech01_start",
    "fi_practice01_start",
    "fi0904_speech01_start",
    "fi0907_whisper01_start",
    "fi_speech01_start",
    "fi_fingerclick01_start",
    "fi_champpose01_01_start",
    "fi_tame01_start",
    "fi_tame01_start",
    "fi_violence01_start",
    "fi_warm01_start",
    "fi_handshake01_start",
    "fi_apologize_start",
    "fi_puthand_start",
    "fi_evsing01_start",
    "fi_evspeak01_start",
    "fi_leanspeak_start",
    "fi_fall_loop",
    "fi_cheer01_start",
    "fi_cheer02_start",
    "fi0901_pose01_start",
    "fi_violence01_start",
    "fi_phone01_start",
    "fi_pose01_start",
    "fi0901_phone01_start",
    "fi_tout01_start",
    "fi_pose01_start",
    "fi_call01_start",
    "fi0094_chairwait02_start",
    "fi_tired01_start",
    "fi_masterpose01_start",
    "fi_masterpose01_start",
    "fi_passclothes01_start",
    "fi_standready01_start",
    "fi_growthdance01_start",
    "fi_littlesurprise01_loop",
    "fi_appeal01_loop",
    "fi_halfsit01_start",
    "fi_chairwait01_start",
    "kw20_drowseB01",
    "fi70_threeselect01",
    "fi57_getpass02_loop",
    "fi_wait05_start",
}

fun_3C40(arg0, arg1, arg2, arg3, arg4, arg5, arg6)
{
    if (arg5 == 0) {
        SetTemp14();
    }
    new a = -2;
    if (arg6) {
        a = -1;
    }
    switch (arg1) {
        case 0:
            PlayCharacterMotion_(arg0, 2, 1, a, 0)
        case 1:
            PlayCharacterMotion_(arg0, 2, 2, a, 0)
        case 2:
            PlayCharacterMotion_(arg0, 2, 3, a, 0)
        case 3:
            PlayCharacterMotion_(arg0, 2, 4, a, 0)
        case 4:
            PlayCharacterMotion_(arg0, 2, 5, a, 0)
        case 5:
        {
            SetAnimationStateIntParameter(arg0, "fi_npc_type", 2);
            ResetAnimationState(arg0);
        }
        case 6:
            PlayCharacterMotion_(arg0, 3, 1, 0, 0)
        case 7:
            PlayCharacterMotion_(arg0, 3, 2, 0, 0)
        case 8:
            PlayCharacterMotion_(arg0, 3, 3, 0, 0)
        case 9:
            PlayCharacterMotion_(arg0, 3, 4, 0, 0)
        case 10:
            PlayCharacterMotion_(arg0, 3, 5, 0, 0)
        case 11:
            PlayCharacterMotion_(arg0, 3, 6, 0, 0)
        case 12:
            PlayCharacterMotion_(arg0, 3, 7, 0, 0)
        case 13:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_champpose01_01_start", "fi_champpose01_01_loop", "fi_champpose01_01_end", "", arg3, arg4);
        }
        case 14:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi0950_champpose01_01_start", "fi0951_champpose01_01_loop", "fi0952_champpose01_01_end", "", arg3, arg4);
        }
        case 15:
        {
            PlayCharacterMotion_(arg0, 4, 2, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_cheer01_start", "fi_cheer01_loop", "fi_cheer01_end", "", arg3, arg4);
        }
        case 16:
        {
            PlayCharacterMotion_(arg0, 4, 3, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_fan01_start", "fi_fan01_loop", "fi_fan01_end", "", arg3, arg4);
        }
        case 17:
        {
            PlayCharacterMotion_(arg0, 4, 4, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_fan02_start", "fi_fan02_loop", "fi_fan02_end", "", arg3, arg4);
        }
        case 18:
            PlayCharacterMotion_(arg0, 4, 2, 0, 0)
        case 19:
            PlayCharacterMotion_(arg0, 2, 2, -2, 0)
        case 20:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_champpose01_01_start", "fi_champpose01_01_loop", "fi_champpose01_01_end", "", arg3, arg4);
        }
        case 21:
            PlayCharacterMotion_(arg0, 4, 2, 0, 0)
        case 22:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 23:
            PlayCharacterMotion_(arg0, 4, 2, 0, 0)
        case 24:
            PlayCharacterMotion_(arg0, 4, 3, 0, 0)
        case 25:
            PlayCharacterMotion_(arg0, 4, 4, 0, 0)
        case 26:
            PlayCharacterMotion_(arg0, 4, 5, 0, 0)
        case 27:
            PlayCharacterMotion_(arg0, 4, 7, 0, 0)
        case 28:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_phone01_start", "fi_phone01_loop", "fi_phone01_end", "", arg3, arg3);
        }
        case 29:
            PlayCharacterMotion_(arg0, 4, 3, 0, 0)
        case 30:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_practice01_start", "fi_practice01_loop", "fi_practice01_end", "", arg3, arg3);
        }
        case 31:
            PlayCharacterMotion_(arg0, 3, 1, 3, 0)
        case 32:
            PlayCharacterMotion_(arg0, 3, 2, 3, 0)
        case 33:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 34:
            PlayCharacterMotion_(arg0, 4, 2, 0, 0)
        case 35:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 36:
        {
            PlayCharacterMotion_(arg0, 4, 2, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_tame01_start", "fi_tame01_loop", "fi_tame01_end", "", arg3, arg4);
        }
        case 37:
        {
            PlayCharacterMotion_(arg0, 4, 4, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_tame01_start", "fi_tame01_loop", "fi_tame01_end", "", arg3, arg4);
        }
        case 38:
            PlayCharacterMotion_(arg0, 4, 2, 0, 0)
        case 39:
            PlayCharacterMotion_(arg0, 4, 3, 0, 0)
        case 40:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 41:
        {
            PlayCharacterMotion_(arg0, 4, 2, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_apologize_start", "fi_apologize_loop", "fi_apologize_end", "", arg3, arg4);
        }
        case 42:
        {
            PlayCharacterMotion_(arg0, 4, 3, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_puthand_start", "fi_puthand_loop", "fi_puthand_end", "", arg3, arg4);
        }
        case 43:
        {
            PlayCharacterMotion_(arg0, 3, 1, 1, 0);
            AddParallelCommandControlFacial(arg0, "fi_evsing01_start", "fi_evsing01_loop", "fi_evsing01_end", "", arg3, arg4);
        }
        case 44:
        {
            PlayCharacterMotion_(arg0, 3, 2, 1, 0);
            AddParallelCommandControlFacial(arg0, "fi_evspeak01_start", "fi_evspeak01_loop", "fi_evspeak01_end", "", arg3, arg4);
        }
        case 45:
            PlayCharacterMotion_(arg0, 3, 1, 2, 0)
        case 46:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_fall_dummy", "fi_fall_loop", "fi_fall_end", "", arg3, arg4);
        }
        case 47:
        {
            PlayCharacterMotion_(arg0, 4, 2, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_cheer01_start", "fi_cheer01_loop", "fi_cheer01_end", "", arg3, arg4);
        }
        case 48:
        {
            PlayCharacterMotion_(arg0, 4, 3, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_cheer02_start", "fi_cheer02_loop", "fi_cheer02_end", "", arg3, arg4);
        }
        case 49:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 50:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 51:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_phone01_start", "fi_phone01_loop", "fi_phone01_end", "", arg3, arg4);
        }
        case 52:
        {
            PlayCharacterMotion_(arg0, 4, 2, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_pose01_start", "fi_pose01_loop", "fi_pose01_end", "", arg3, arg4);
        }
        case 53:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi0901_phone01_start", "fi0902_phone01_loop", "fi0903_phone01_end", "", arg3, arg4);
        }
        case 54:
        {
            PlayCharacterMotion_(arg0, 4, 2, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_tout01_start", "fi_tout01_loop", "fi_tout01_end", "", arg3, arg4);
        }
        case 55:
            PlayCharacterMotion_(arg0, 4, 3, 0, 0)
        case 56:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_call01_start", "fi_call01_loop", "fi_call01_end", "", arg3, arg4);
        }
        case 57:
            PlayCharacterMotion_(arg0, 2, 2, -2, 0)
        case 58:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 59:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 60:
        {
            PlayCharacterMotion_(arg0, 4, 1, 0, 0);
            AddParallelCommandControlFacial(arg0, "fi_masterpose01_start", "fi_masterpose01_loop", "fi_masterpose01_end", "", arg3, arg4);
        }
        case 61:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 62:
            PlayCharacterMotion_(arg0, 4, 1, 0, 0)
        case 63:
            PlayCharacterMotion_(arg0, 4, 1, 1, 0)
        case 64:
            PlayCharacterMotion_(arg0, 4, 2, 0, 0)
        case 65:
            PlayCharacterMotion_(arg0, 4, 3, 0, 0)
        case 66:
            PlayCharacterMotion_(arg0, 1, 9, -1, 0)
        case 67:
            PlayCharacterMotion_(arg0, 6, 1, -1, 0)
        case 68:
            PlayPokemonMotion_(arg0, 1, 2, "kw20_drowse01_Enabled", 1, 0)
        case 69:
            PlayPokemonMotion_(arg0, 2, 3, "field_event_state", 1, 0)
        case 70:
            SetAnimationStateIntParameter(arg0, "field_event_state", 4)
        case 71:
            SetAnimationStateIntParameter(arg0, "fi_wait_type", 4)
    }
    new fi_type[64] = "";
    if (arg1 == 0 && GetAnimationStateIntParameter(arg0, "fi_npc_type") == 2) {
        CopyString(fi_type, "fi_chairspeak01_start", 64);
    } else {
        if (arg1 >= 0 && arg1 < 5) {
            new fi_wait_type = GetAnimationStateIntParameter(arg0, "fi_wait_type");
            new temp_string[16] = "";
            NumericToString(fi_wait_type + 1, temp_string);
            ConcatString("0", temp_string, temp_string);
            ConcatString(temp_string, "_start", temp_string);
            ConcatString(fi_types_2[arg1], temp_string, fi_type);
        } else {
            CopyString(fi_type, fi_types_2[arg1], 64);
        }
    }
    AddParallelCommandMonitorState_(arg0, fi_type, 0);
    if (arg2) {
        WaitAnimationState_(arg0, fi_type);
    }
    ClearTemp14();
}

fun_6318(arg0, arg1, arg2, arg3, arg4)
{
    if (arg4 == 0) {
        SetTemp14();
    }
    switch (arg1) {
        case 0:
            PlayCharacterMotion_(arg0, 2, 0, -2, 1)
        case 1:
            PlayCharacterMotion_(arg0, 2, 0, -2, 1)
        case 2:
            PlayCharacterMotion_(arg0, 2, 0, -2, 1)
        case 3:
            PlayCharacterMotion_(arg0, 2, 0, -2, 1)
        case 4:
            PlayCharacterMotion_(arg0, 2, 0, -2, 1)
        case 5:
        {
            SetAnimationStateIntParameter(arg0, "fi_npc_type", 1);
            ResetAnimationState(arg0);
        }
        case 6:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 7:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 8:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 9:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 10:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 11:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 12:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 13:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 14:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 15:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 16:
            PlayCharacterMotion_(arg0, 4, 3, -2, 1)
        case 17:
            PlayCharacterMotion_(arg0, 4, 4, -2, 1)
        case 18:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 19:
            PlayCharacterMotion_(arg0, 2, 0, -2, 1)
        case 20:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 21:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 22:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 23:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 24:
            PlayCharacterMotion_(arg0, 4, 3, -2, 1)
        case 25:
            PlayCharacterMotion_(arg0, 4, 4, -2, 1)
        case 26:
            PlayCharacterMotion_(arg0, 4, 5, -2, 1)
        case 27:
            PlayCharacterMotion_(arg0, 4, 7, -2, 1)
        case 28:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 29:
            PlayCharacterMotion_(arg0, 4, 3, -2, 1)
        case 30:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 31:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 32:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 33:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 34:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 35:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 36:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 37:
            PlayCharacterMotion_(arg0, 4, 4, -2, 1)
        case 38:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 39:
            PlayCharacterMotion_(arg0, 4, 3, -2, 1)
        case 40:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 41:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 42:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 43:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 44:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 45:
            PlayCharacterMotion_(arg0, 3, 0, -2, 1)
        case 46:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 47:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 48:
            PlayCharacterMotion_(arg0, 4, 3, -2, 1)
        case 49:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 50:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 51:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 52:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 53:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 54:
            PlayCharacterMotion_(arg0, 4, 2, -2, 1)
        case 55:
            PlayCharacterMotion_(arg0, 4, 3, -2, 1)
        case 56:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 57:
            PlayCharacterMotion_(arg0, 2, 2, -2, 1)
        case 58:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 59:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 60:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 61:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 62:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 63:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 64:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 65:
            PlayCharacterMotion_(arg0, 4, 1, -2, 1)
        case 66:
            PlayCharacterMotion_(arg0, 1, 9, -2, 1)
        case 67:
            PlayCharacterMotion_(arg0, 6, 0, -2, 1)
        case 68:
            PlayPokemonMotion_(arg0, 1, 2, "kw20_drowse01_Enabled", 0, arg3)
        case 69:
            PlayPokemonMotion_(arg0, 2, 3, "field_event_state", 0, arg3)
        case 70:
            SetAnimationStateIntParameter(arg0, "field_event_state", 0)
        case 71:
            SetAnimationStateIntParameter(arg0, "fi_wait_type", 3)
    }
    new fi_type[32] = "fi_wait";
    if (TestIsPokemonObject(arg0)) {
        switch (arg3) {
            case 3:
                CopyString(fi_type, "fi01_wait01", 32)
            case 1:
                CopyString(fi_type, "ba10_waitA01", 32)
            case 2:
                CopyString(fi_type, "kw01_wait01", 32)
        }
    } else {
        if ((arg1 == 0 || arg1 == 19) && GetAnimationStateIntParameter(arg0, "fi_npc_type") == 2) {
            CopyString(fi_type, "fi_chairwait01_loop", 32);
        } else {
            if (arg0 == 8802641224559852288) {
                CopyString(fi_type, "fi_wait01_loop", 32);
            } else {
                new fi_wait_type = GetAnimationStateIntParameter(arg0, "fi_wait_type");
                new temp_string[16] = "";
                NumericToString(fi_wait_type + 1, temp_string);
                ConcatString("0", temp_string, temp_string);
                ConcatString(temp_string, "_loop", temp_string);
                ConcatString(fi_type, temp_string, fi_type);
            }
        }
    }
    AddParallelCommandMonitorState_(arg0, fi_type, 1);
    if (arg2) {
        WaitAnimationState_(arg0, fi_type);
    }
    ClearTemp14();
}

fun_8398(arg0, arg1, arg2, arg3, arg4, arg5)
{
    EasyTalkPlayer(arg0, arg1, arg5);
    new a = 0;
    switch (arg3) {
        case 0: a = 1
        case 1: a = 2
        case 2: a = 3
        case 3: a = 4
    }
    EasyTalkCharacter(arg0, 8802641224559852288, arg2, arg4, a, arg5);
}

fun_8558(arg0, arg1, arg2, arg3)
{
    CommandNOP();
    EasyTalkTerminate(arg0);
    for (;;) {
        EasyTalkTerminate(8802641224559852288);
        if (FindParallelWait(8802641224559852288, "EasyTalkPlayer") == 0) {
            break;
        }
        SuspendN(1);
    }
    if (arg3 >= 0) {
        fun_6318(arg0, arg3, 0, 3, 1);
        DoSetNPCDefaultMotion(arg0);
    }
    if (TempWorkGet(15) != 1) {
        DisableFieldObjectLookAt(8802641224559852288, -1);
    }
    DisableFieldObjectLookAt(arg0, -1);
    new a = 4;
    if (arg1) {
        WaitForAnimation(arg0);
        StartTurnAround(arg0, arg2, a, 0, 0, 4607182418800017408);
    }
    if (IsPlayerRideBicycle()) {
        return;
    }
    CommandNOP();
    if (TempWorkGet(15) == 1) {
        SuspendN(1);
        SetAnimationStateTrigger(8802641224559852288, "fi_event_trigger");
        new b = TempWorkGet(7);
        if (b >= 23) {
            SuspendN(12);
        }
        DisableFieldObjectLookAt(8802641224559852288, -1);
    }
    CleanUpRunningActionCommand(8802641224559852288);
    CleanUpRunningActionCommand(arg0);
    WaitForAnimation(8802641224559852288);
}

fun_8A20(arg0, arg1, arg2)
{
    if (arg1 == 4) {
        WaitForAnimation(arg0);
        fun_1ED8(arg0, 2, 0, 3, -1, -1, 1);
    }
    SuspendN(8);
    if (arg2 == 6) {
        if (IsPlayerRideBicycle() == 0 && IsAnimationStateName_(8802641224559852288, "fi_halfsit01") == 0) {
            WaitForAnimation(8802641224559852288);
            fun_1ED8(8802641224559852288, 25, 0, 3, -1, -1, 1);
        }
    }
}

fun_8C20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
{
    fun_8A20(arg0, arg6, arg7);
    fun_8CA8(arg1, arg2, arg3, arg4, arg5);
}

fun_8CA8(arg0, arg1, arg2, arg3, arg4)
{
    fun_8E40(arg0, arg1, arg2, arg3, arg4, 0, 0);
}

TryToShowItemDescription(item, arg1)
{
    new should_show_description = ItemHaveNeverAdded(item);
    if (arg1 == 8) {
        should_show_description = true;
    }
    if (item == 0) {
        should_show_description = false;
    }
    if (should_show_description) {
        ItemOpenDescWindow(item);
        SuspendN(30);
        ABKeyWait();
        ItemCloseDescWindow();
    }
}

fun_8E40(arg0, arg1, arg2, arg3, arg4, arg5, arg6)
{
    LoadExtraMessage("script/fld_item.dat");
    WaitUntilExtraMessageIsLoaded();
    if (arg3 == false) {
        if (ItemAddCheck(arg0, arg1)) {
            fun_8FD0(arg0, arg1, arg2, arg4, arg5, arg6);
        } else {
            fun_9098(arg0, arg1);
        }
    } else {
        fun_9170(arg0, arg1, arg2, arg4, arg5, arg6);
    }
    UnloadExtraMessage();
}

fun_8FD0(arg0, arg1, arg2, arg3, arg4, arg5)
{
    fun_9170(arg0, arg1, arg2, arg3, arg4, arg5);
    new bool:dummy = true;
    if (dummy) {
        ItemAdd(arg0, arg1);
    }
}

fun_9098(arg0, arg1)
{
    PG_WordSetRegisterItem(0, arg0, arg1);
    ShowMessageWindow_3(msg_item_get_fail_nowait, 0, 3);
    FinishMessage(1);
    CloseMessageWindow();
    PG_WordSetRegisterPlayerName(0);
}

fun_9170(item, arg1, arg2, arg3, arg4, arg5)
{
    if (arg3 == 2) {
        PlayItemGetSound(item);
    }
    if (arg4 == 0) {
        PG_WordSetRegisterPlayerName(0);
        PG_WordSetRegisterItem(1, item, arg1);
    }
    if (ItemIsWazaMachine(item)) {
        PG_WordSetRegisterPokemonMove(2, item);
        ShowMessageWindow_3(msg_item_get_04, 0, 3);
    } else {
        new a = arg4;
        if (a == 0) {
            a = msg_item_get_06;
            if (arg1 > 1) {
                a = msg_item_get_05;
                WordSetNumber(2, arg1, 0, 0);
            }
        }
        ShowMessageWindow_3(a, 0, 3);
    }
    if (arg3 == 2) {
        WaitForSoundToFinish(0);
    }
    FinishMessage(1);
    ShowItemGetMessage(item, arg1, arg5);
    TryToShowItemDescription(item, arg2);
}

PlayItemGetSound(item)
{
    if (ItemIsEventItem(item)) {
        return SoundPostEvent("Play_me_or_st_item_get_key");
    }
    new item_category = ItemGetCategory(item);
    switch (item_category) {
        case 1:
            return SoundPostEvent("Play_me_or_waza")
        case 2:
            return SoundPostEvent("Play_me_or_st_kinomi_get")
        default:
            if (GetPocketNumberFromItemNumber_(item) == 8) {
                return SoundPostEvent("Play_me_or_st_item_get_key");
            }
    }
    return SoundPostEvent("Play_me_or_st_item_get");

}

ShowItemGetMessage(item, arg1, arg2)
{
    if (arg2 == 0) {
        PG_WordSetRegisterPlayerName(0);
        PG_WordSetRegisterItem(1, item, arg1);
        new pocket_number = GetPocketNumberFromItemNumber_(item);
        PG_WordSetRegisterBagPocket(2, pocket_number);
        arg2 = msg_item_get_pocket_nowait;
    }
    ShowMessageWindow_3(arg2, 0, 3);
    FinishMessage(1);
    CloseMessageWindow();
}

main()
{
    switch (g_mode) {
        case 0xa0c37823e9d16ad0:
            fun_9970()
        case 0:
            fun_98C0()
        default:
            CommandNOP()
    }
}

fun_98C0()
{
    return;
}

ShowMouthBasedMessage(msg_hash)
{
    new target = GetTargetFieldObjectID();
    ShowMouthBasedMessageWindow(target, msg_hash, -1, 100, 0, 3, 0);
}

fun_9970()
{
    CommandNOP();
    new target = GetTargetFieldObjectID();
    fun_8398(target, 1, 1, 1, 1, 0);
    if (FlagGet(FE_CAMPKING_FIRST) == 0) {
        FlagSet(FE_CAMPKING_FIRST);
        ShowMouthBasedMessage(sub_event_135_campking_01);
        FinishMessage(1);
    } else {
        ShowMouthBasedMessage(sub_event_135_campking_02);
        FinishMessage(1);
    }
    for (;;) {
        ShowMouthBasedMessage(sub_event_135_campking_03);
        WaitUntilMessageWindowIsLoaded(0, sub_event_135_select_01, 0);
        WaitUntilMessageWindowIsLoaded(1, sub_event_135_select_02, 0);
        if (FlagGet(FSYS_POKECAMP_OPEN_GOLDEN_KITCHENWARE)) {
            WaitUntilMessageWindowIsLoaded(2, sub_event_135_select_03, 0);
        }
        WaitUntilMessageWindowIsLoaded(3, sub_event_135_select_08, 0);
        new response = RequestListInput(1, 0, 1, 0);
        CloseMessageWindow();
        switch (response) {
            case 0:
                fun_9F48();
            case 1:
                GiveCurryDexRewards();
            case 2:
                fun_BF08();
            case 3:
            {
                ShowMouthBasedMessage(sub_event_135_campking_04);
                FinishMessage(1);
                CloseMessageWindow();
                fun_8558(target, 0, 0, 1);
                return;
            }
            default:
            {
                ShowMouthBasedMessage(sub_event_135_campking_04);
                FinishMessage(1);
                CloseMessageWindow();
                fun_8558(target, 0, 0, 1);
                return;
            }
        }
    }
}

fun_9F48()
{
    new target = GetTargetFieldObjectID();
    ShowMouthBasedMessage(sub_event_135_campking_05);
    FinishMessage(1);
    new lead_pokemon = GetNextValidPartyMember(0, 0);
    new type1 = PokePartyGetParam(lead_pokemon, 6, 0);
    new type2 = PokePartyGetParam(lead_pokemon, 7, 0);
    if (type1 == type2) {
        PG_WordSetRegisterPokemonGender(0, lead_pokemon);
        PG_WordSetRegisterPokemonType(1, type1);
        ShowMouthBasedMessage(sub_event_135_campking_06);
        new response = RequestYesNo(0, 0, 0, 1, 0, 0);
        CloseMessageWindow();
        if (response) {
            fun_A4D8(type1);
        } else {
            fun_A7C8();
        }
    } else {
        PG_WordSetRegisterPokemonGender(0, lead_pokemon);
        ShowMouthBasedMessage(sub_event_135_campking_07);
        PG_WordSetRegisterPokemonType(0, type1);
        PG_WordSetRegisterPokemonType(1, type2);
        WaitUntilMessageWindowIsLoaded(0, sub_event_135_select_06, 0);
        WaitUntilMessageWindowIsLoaded(1, sub_event_135_select_07, 0);
        WaitUntilMessageWindowIsLoaded(2, sub_event_135_select_08, 0);
        new response = RequestListInput(1, 0, 1, 0);
        CloseMessageWindow();
        new type = 0;
        switch (response) {
            case 0: type = type1
            case 1: type = type2
            case 2:
            {
                fun_A7C8();
                return;
            }
        }
        fun_A4D8(type);
    }
}

fun_A4D8(type)
{
    new target = GetTargetFieldObjectID();
    PG_WordSetRegisterPokemonType(0, type);
    new a = WorkGet(SYS_WORK_POKECAMP_TENT_COLOR);
    if (a != type) {
        WorkSet(SYS_WORK_POKECAMP_TENT_COLOR, type);
        SetPlayerTentColor(type);
        fun_6318(target, 1, 0, 3, 1);
        SoundPostEvent("Play_SS_Common_change_dish");
        fun_8A20(target, 4, 6);
        WaitForSoundToFinish(0);
        fun_3C40(target, 1, 0, -1, -1, 1, 1);
        ShowMouthBasedMessage(sub_event_135_campking_09);
        FinishMessage(1);
        CloseMessageWindow();
    } else {
        ShowMouthBasedMessage(sub_event_135_campking_41);
        FinishMessage(1);
        CloseMessageWindow();
    }
}

fun_A7C8()
{
    ShowMouthBasedMessage(sub_event_135_campking_39);
    FinishMessage(1);
    CloseMessageWindow();
}

new curry_dex_rewards[9][6] = {
    // Sausages
    {1, FE_CAMPKING_ITEM_GET_RANK_1, 1084, 3, sub_event_135_campking_24, 0},
    // Fresh Ball
    {5, FSYS_POKECAMP_OPEN_FRESH_BALL, sub_event_135_system_03, 0, sub_event_135_campking_25, sub_event_135_ballget_01},
    // Weighted Ball
    {10, FSYS_POKECAMP_OPEN_HEAVY_BALL, sub_event_135_system_04, 0, sub_event_135_campking_26, sub_event_135_ballget_02},
    // Soothe Ball
    {15, FSYS_POKECAMP_OPEN_YASURAGI_BALL, sub_event_135_system_05, 0, sub_event_135_campking_27, sub_event_135_ballget_03},
    // Mirror Ball
    {30, FSYS_POKECAMP_OPEN_MIRROR_BALL, sub_event_135_system_06, 0, sub_event_135_campking_28, sub_event_135_ballget_04},
    // Tympole Ball
    {50, FSYS_POKECAMP_OPEN_OTAMA_BALL, sub_event_135_system_07, 0, sub_event_135_campking_29, sub_event_135_ballget_05},
    // Champion Ball
    {80, FSYS_POKECAMP_OPEN_CHAMPION_BALL, sub_event_135_system_08, 0, sub_event_135_campking_30, sub_event_135_ballget_06},
    // Moomoo Cheese
    {110, FE_CAMPKING_ITEM_GET_RANK_8, 1257, 3, sub_event_135_campking_31, 0},
    // Smoke-poke Tail
    {150, FE_CAMPKING_ITEM_GET_RANK_9, 1091, 3, sub_event_135_campking_32, 0},
}

GiveCurryDexRewards()
{
    new cooked_type_count = GetCookedTypeCount();
    new curry_dex_complete = FlagGet(FE_CAMPKING_COMPLETE_DICTIONARY);
    new target = GetTargetFieldObjectID();
    if (FlagGet(FE_CAMPKING_ZUKAN_FIRST) == 0) {
        FlagSet(FE_CAMPKING_ZUKAN_FIRST);
        ShowMouthBasedMessage(sub_event_135_campking_42);
        FinishMessage(1);
        CloseMessageWindow();
    }
    if (cooked_type_count == 0) {
        ShowMouthBasedMessage(sub_event_135_campking_10);
        FinishMessage(1);
        CloseMessageWindow();
        return;
    }
    if (curry_dex_complete) {
        ShowMouthBasedMessage(sub_event_135_campking_11);
        FinishMessage(1);
        CloseMessageWindow();
        return;
    }
    PG_WordSetRegisterPlayerName(0);
    WordSetNumber(1, cooked_type_count, 0, 0);
    ShowMouthBasedMessage(sub_event_135_campking_12);
    FinishMessage(1);
    CloseMessageWindow();
    new max_reward = 0;
    if (cooked_type_count == 151) {
        max_reward = 9;
        SoundPostEvent("Play_me_or_st_curry_good");
        ShowMouthBasedMessage(sub_event_135_campking_22);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count == 150) {
        max_reward = 9;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_21);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 110) {
        max_reward = 8;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_20);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 80) {
        max_reward = 7;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_19);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 50) {
        max_reward = 6;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_18);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 30) {
        max_reward = 5;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_17);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 15) {
        max_reward = 4;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_16);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 10) {
        max_reward = 3;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_15);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 5) {
        max_reward = 2;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_14);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    } else if (cooked_type_count >= 1) {
        max_reward = 1;
        SoundPostEvent("Play_me_or_st_curry_normal");
        ShowMouthBasedMessage(sub_event_135_campking_13);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
    }
    new bool:hasnt_given_reward = true;
    for (new i = 0; i < max_reward; i++) {
        if (FlagGet(curry_dex_rewards[i][1])) {
            continue;
        }
        if (hasnt_given_reward == false) {
            ShowMouthBasedMessage(sub_event_135_campking_33);
            FinishMessage(1);
        }
        new item_count = curry_dex_rewards[i][3];
        if (item_count == 0) {
            WordSetNumber(0, curry_dex_rewards[i][0], 0, 0);
            ShowMouthBasedMessage(sub_event_135_campking_23);
            FinishMessage(1);
            CloseMessageWindow();
            fun_6318(target, 1, 0, 3, 1);
            fun_8A20(target, 4, 6);
            PG_WordSetRegisterPlayerName(0);
            ShowMessageWindow_2(curry_dex_rewards[i][5], 0, 3);
            SoundPostEvent("Play_me_or_st_item_get");
            WaitForAnimation(8802641224559852288);
            WaitForSoundToFinish(0);
            FinishMessage(1);
            CloseMessageWindow();
            ShowMessageWindow_2(curry_dex_rewards[i][2], 0, 3);
            FinishMessage(1);
            CloseMessageWindow();
        } else {
            WordSetNumber(0, curry_dex_rewards[i][0], 0, 0);
            ShowMouthBasedMessage(sub_event_135_campking_23);
            FinishMessage(1);
            CloseMessageWindow();
            fun_6318(target, 1, 0, 3, 1);
            fun_8C20(target, curry_dex_rewards[i][2], curry_dex_rewards[i][3], 9, 0, 2, 4, 6);
        }
        fun_3C40(target, 1, 0, -1, -1, 1, 1);
        ShowMouthBasedMessage(curry_dex_rewards[i][4]);
        FinishMessage(1);
        CloseMessageWindow();
        FlagSet(curry_dex_rewards[i][1]);
        hasnt_given_reward = false;
    }

    if (cooked_type_count == 151) {
        ShowMouthBasedMessage(sub_event_135_campking_34);
        FinishMessage(1);
        CloseMessageWindow();
        fun_6318(target, 1, 0, 3, 1);
        fun_8A20(target, 4, 6);
        SoundPostEvent("Play_me_or_st_item_get");
        ShowMessageWindow_2(sub_event_135_system_02, 0, 3);
        WaitForAnimation(8802641224559852288);
        WaitForSoundToFinish(0);
        FinishMessage(1);
        CloseMessageWindow();
        FlagSet(FSYS_POKECAMP_OPEN_GOLDEN_KITCHENWARE);
        FlagSet(FSYS_POKECAMP_USE_GOLDEN_KITCHENWARE);
        FlagSet(FE_CAMPKING_COMPLETE_DICTIONARY);
    }
}

fun_BF08()
{
    new target = GetTargetFieldObjectID();
    if (FlagGet(FSYS_POKECAMP_USE_GOLDEN_KITCHENWARE)) {
        ShowMouthBasedMessage(sub_event_135_campking_35);
        if (RequestYesNo(0, 0, 0, 1, 0, 0)) {
            fun_6318(target, 1, 0, 3, 1);
            SoundPostEvent("Play_SS_Common_change_dish");
            fun_8A20(target, 4, 6);
            WaitForSoundToFinish(0);
            fun_3C40(target, 1, 0, -1, -1, 1, 1);
            ShowMouthBasedMessage(sub_event_135_campking_37);
            FinishMessage(1);
            CloseMessageWindow();
            FlagReset(FSYS_POKECAMP_USE_GOLDEN_KITCHENWARE);
        } else {
            ShowMouthBasedMessage(sub_event_135_campking_40);
            FinishMessage(1);
            CloseMessageWindow();
        }
    } else {
        ShowMouthBasedMessage(sub_event_135_campking_36);
        if (RequestYesNo(0, 0, 0, 1, 0, 0)) {
            fun_6318(target, 1, 0, 3, 1);
            SoundPostEvent("Play_SS_Common_change_dish");
            fun_8A20(target, 4, 6);
            WaitForSoundToFinish(0);
            fun_3C40(target, 1, 0, -1, -1, 1, 1);
            ShowMouthBasedMessage(sub_event_135_campking_38);
            FinishMessage(1);
            CloseMessageWindow();
            FlagSet(FSYS_POKECAMP_USE_GOLDEN_KITCHENWARE);
        } else {
            ShowMouthBasedMessage(sub_event_135_campking_40);
            FinishMessage(1);
            CloseMessageWindow();
        }
    }
}