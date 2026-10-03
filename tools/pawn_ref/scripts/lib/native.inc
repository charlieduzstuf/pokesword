native _Suspend(delay);

enum GameVersion {
    Any = 0,
    Sword = 44,
    Shield = 45
}

native GetFnvHash64(string[]);
native FadeIn_(arg0, hash);
native FadeOut_(arg0, hash, arg2, arg3);
native FadeWait_();
native CommandNOP();
native FlagGet(hash);
native PokePartyCanEvolve(species);
native ReserveScript(hash);
native FlagSet(hash);
native PokePartyCallEvolve(species, form);
native FlagReset(hash);
native WorkGet(hash);
native WorkSet(hash, value);
native GetPublicRand(maximum);
native AddRecord_(arg0, arg1);
native IncRecord_(arg0);
native DeleteFieldObject_(hash);
native AddFieldObject_(hash);
native VanishFlagGet(hash);
native GameVersion:RomGetVersion();
native PlayerGetZoneID();
native MsgWin_(arg0, arg1, arg2, bubble_type, arg4, arg5, arg6, arg7, arg8, arg9);
native bool:IsMsgWinEnd_();
native ShowMsgWinCursor_(arg0);
native ABKeyWait_();
native SoundPostEvent(sound[]);
native MsgWinClose();
native ExtraMsgLoad(msg[]);
native ExtraMsgIsLoaded_();
native ExtraMsgUnload();
native PG_WordSetRegister(arg0, arg1, arg2, arg3);
native UpdateWalletWindow_(arg0);
native AddWatt_(delta);
native WordSetNumber(arg0, arg1, arg2, arg3);
native TempWorkGet(idx);
native TempWorkSet(idx, value);
native GetWildBattleResult_(out[]);
native PokePartyGetCount(arg0, arg1);
native GetLastSymbolEncountParam(out[]);
native CallBattleLose_();
native SoundIsPlaying(sound);
native StartTurnAround_(arg0, arg1, arg2, arg3, arg4, arg5)
native CheckActionCommandRunningState_(action_command);
native DeletePlayingActionCommand_(action_command);
native SetAnimationStateTrigger_(arg0, arg1[]);
native SetAnimationStateIntParameter_(arg0, arg1[], arg2);
native GetAnimationStateIntParameter_(arg0, arg1[]);
native bool:IsExistAnimationComponent_(arg0);
native bool:IsEndCharacterMotion_(arg0);
native bool:IsEndPokemonMotion_(arg0);
native ResetAnimationState_(arg0);
native AddParallelCommandControlFacial_(arg0, arg1[], arg2[], arg3[], arg4[], arg5[], arg6, arg7, arg8[], arg9, arg10, arg11[], arg12, arg13, arg14[], arg15, arg16)
native DisableFieldObjectLookAt_(arg0, arg1);
native bool:IsPokemonObject(arg0);
native bool:IsExistPokemonMotion(arg0);
native SetNPCDefaultMotion(arg0);
native MsgWinEmpty_();
native bool:MsgWinLoadWait_();
native ListMenuAdd_(arg0, arg1, arg2, arg3);
native ListMenuStart_Seq(arg0, arg1, arg2, arg3, arg4);
native YesNoWin_(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
native PokePartyGetParam(arg0, arg1, arg2);
native EasyTalkPlayer(arg0, arg1, arg2);
native EasyTalkCharacter(arg0, arg1, arg2, arg3, arg4, arg5);
native FindParallelWait(arg0, arg1[]);
native EasyTalkTerminate(arg0);
native bool:IsPlayerRideBicycle();
native bool:IsAnimationStateName_(arg0, arg1[]);
native bool:ItemHaveNeverAdded(arg0);
native ItemOpenDescWindow(arg0);
native ItemCloseDescWindow();
native bool:ItemAddCheck(arg0, arg1);
native ItemAdd(arg0, arg1);
native bool:ItemIsWazaMachine(item);
native bool:ItemIsEventItem(item);
native ItemGetCategory(item);
native GetPocketNumberFromItemNumber_(item);
native GetTargetFieldObjectID();
native SetPlayerTentColor(color);
native GetCookedTypeCount();
