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

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsLocalPlayersPad             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::IsLocalPlayersPad(bool* bIsLocalPlayersPad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad");

	UResults_TeleportPadPlayer_C_IsLocalPlayersPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLocalPlayersPad != nullptr)
		*bIsLocalPlayersPad = params.bIsLocalPlayersPad;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus");

	UResults_TeleportPadPlayer_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanFriend
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCanFriendPlayer               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::CanFriend(bool* bCanFriendPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanFriend");

	UResults_TeleportPadPlayer_C_CanFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanFriendPlayer != nullptr)
		*bCanFriendPlayer = params.bCanFriendPlayer;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanInviteParty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCanInvitePlayer               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::CanInviteParty(bool* bCanInvitePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanInviteParty");

	UResults_TeleportPadPlayer_C_CanInviteParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanInvitePlayer != nullptr)
		*bCanInvitePlayer = params.bCanInvitePlayer;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.InvitePlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::InvitePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.InvitePlayer");

	UResults_TeleportPadPlayer_C_InvitePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::ThumbsUpPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer");

	UResults_TeleportPadPlayer_C_ThumbsUpPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsValid                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::IsValidPad(bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad");

	UResults_TeleportPadPlayer_C_IsValidPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::SetIsValidPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad");

	UResults_TeleportPadPlayer_C_SetIsValidPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UFortUIScoreReport*      InScoreReport                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FUniqueNetIdRepl        InConsoleUniqueId              (CPF_Parm)

void UResults_TeleportPadPlayer_C::Initialize(const struct FUniqueNetIdRepl& InConsoleUniqueId, struct FUniqueNetIdRepl* InUniqueId, class UFortUIScoreReport** InScoreReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize");

	UResults_TeleportPadPlayer_C_Initialize_Params params;
	params.InConsoleUniqueId = InConsoleUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InUniqueId != nullptr)
		*InUniqueId = params.InUniqueId;
	if (InScoreReport != nullptr)
		*InScoreReport = params.InScoreReport;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro");

	UResults_TeleportPadPlayer_C_Team_Score_Screen_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro");

	UResults_TeleportPadPlayer_C_Team_Score_Screen_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::Teleport_Pad_Screen_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro");

	UResults_TeleportPadPlayer_C_Teleport_Pad_Screen_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro");

	UResults_TeleportPadPlayer_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::ExecuteUbergraph_Results_TeleportPadPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer");

	UResults_TeleportPadPlayer_C_ExecuteUbergraph_Results_TeleportPadPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C* TeleportPadPlayer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeleportPadPlayer_C::OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnTeleportPadIntroFinished__DelegateSignature_Params params;
	params.TeleportPadPlayer = TeleportPadPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPadPlayer_C::OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnUpVoteClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TargetId                       (CPF_Parm)
// struct FString                 TargetName                     (CPF_Parm, CPF_ZeroConstructor)

void UResults_TeleportPadPlayer_C::OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const struct FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnAddFriendClicked__DelegateSignature_Params params;
	params.TargetId = TargetId;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeleportPadPlayer_C::OnMissionStatsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature");

	UResults_TeleportPadPlayer_C_OnMissionStatsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
