// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Results_TeleportPad.Results_TeleportPad_C.Should Hide Exit Timer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bHideExitTimer                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::Should_Hide_Exit_Timer(bool* bHideExitTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Should Hide Exit Timer");

	UResults_TeleportPad_C_Should_Hide_Exit_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHideExitTimer != nullptr)
		*bHideExitTimer = params.bHideExitTimer;
}


// Function Results_TeleportPad.Results_TeleportPad_C.Enable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Enable");

	UResults_TeleportPad_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.Disable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Disable");

	UResults_TeleportPad_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Focus");

	UResults_TeleportPad_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortCompletionResult          CompletionResult               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::Initialize(class UFortUIScoreReport* InScoreReport, EFortCompletionResult CompletionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Initialize");

	UResults_TeleportPad_C_Initialize_Params params;
	params.InScoreReport = InScoreReport;
	params.CompletionResult = CompletionResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Intro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::Team_Score_Screen_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Intro");

	UResults_TeleportPad_C_Team_Score_Screen_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Outro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::Team_Score_Screen_Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Team Score Screen Outro");

	UResults_TeleportPad_C_Team_Score_Screen_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.Teleport Pad Screen Intro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::Teleport_Pad_Screen_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.Teleport Pad Screen Intro");

	UResults_TeleportPad_C_Teleport_Pad_Screen_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeleportPad_C::BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeleportPad_C::BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeleportPad_C::BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeleportPad_C::BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.ExitButtonShown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::ExitButtonShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.ExitButtonShown");

	UResults_TeleportPad_C_ExitButtonShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeleportPad_C::BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeleportPad_C::BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimerFinished
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::OnExitTimerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimerFinished");

	UResults_TeleportPad_C_OnExitTimerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimeRemainingUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int*                           TimeRemainingSeconds           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::OnExitTimeRemainingUpdated(int* TimeRemainingSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimeRemainingUpdated");

	UResults_TeleportPad_C_OnExitTimeRemainingUpdated_Params params;
	params.TimeRemainingSeconds = TimeRemainingSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimePercentagePassedUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Percent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::OnExitTimePercentagePassedUpdated(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.OnExitTimePercentagePassedUpdated");

	UResults_TeleportPad_C_OnExitTimePercentagePassedUpdated_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C* TeleportPadPlayer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature_Params params;
	params.TeleportPadPlayer = TeleportPadPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C* TeleportPadPlayer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature_Params params;
	params.TeleportPadPlayer = TeleportPadPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C* TeleportPadPlayer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature_Params params;
	params.TeleportPadPlayer = TeleportPadPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C* TeleportPadPlayer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature");

	UResults_TeleportPad_C_BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature_Params params;
	params.TeleportPadPlayer = TeleportPadPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.ExecuteUbergraph_Results_TeleportPad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPad_C::ExecuteUbergraph_Results_TeleportPad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.ExecuteUbergraph_Results_TeleportPad");

	UResults_TeleportPad_C_ExecuteUbergraph_Results_TeleportPad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.OnUpVoteClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.OnUpVoteClicked__DelegateSignature");

	UResults_TeleportPad_C_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.OnAddFriendClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPad_C::OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.OnAddFriendClicked__DelegateSignature");

	UResults_TeleportPad_C_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.OnExitClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::OnExitClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.OnExitClicked__DelegateSignature");

	UResults_TeleportPad_C_OnExitClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPad.Results_TeleportPad_C.OnMissionStatsClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPad_C::OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPad.Results_TeleportPad_C.OnMissionStatsClicked__DelegateSignature");

	UResults_TeleportPad_C_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
