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

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanViewProfile
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanView                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::CanViewProfile(bool* CanView)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanViewProfile");

	UAthenaLobbyPlayerPanelActions_C_CanViewProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanView != nullptr)
		*CanView = params.CanView;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsTeamMemberLocalPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAthenaLobbyPlayerPanelActions_C::IsTeamMemberLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsTeamMemberLocalPlayer");

	UAthenaLobbyPlayerPanelActions_C_IsTeamMemberLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.SetTeamMemberInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void UAthenaLobbyPlayerPanelActions_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.SetTeamMemberInfo");

	UAthenaLobbyPlayerPanelActions_C_SetTeamMemberInfo_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnActiveFriendsCountUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ActiveFriendsCount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::OnActiveFriendsCountUpdated(int ActiveFriendsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnActiveFriendsCountUpdated");

	UAthenaLobbyPlayerPanelActions_C_OnActiveFriendsCountUpdated_Params params;
	params.ActiveFriendsCount = ActiveFriendsCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnPartyInvitesCountChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InvitesCount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::OnPartyInvitesCountChanged(int InvitesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnPartyInvitesCountChanged");

	UAthenaLobbyPlayerPanelActions_C_OnPartyInvitesCountChanged_Params params;
	params.InvitesCount = InvitesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.InitializeContextEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelActions_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.InitializeContextEvents");

	UAthenaLobbyPlayerPanelActions_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelActions_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Focus");

	UAthenaLobbyPlayerPanelActions_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.HasValidActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bHasValidActions               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::HasValidActions(bool* bHasValidActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.HasValidActions");

	UAthenaLobbyPlayerPanelActions_C_HasValidActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasValidActions != nullptr)
		*bHasValidActions = params.bHasValidActions;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.GetFirstActiveActionButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UIconTextButton_C*       IconTextButton                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::GetFirstActiveActionButton(class UIconTextButton_C** IconTextButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.GetFirstActiveActionButton");

	UAthenaLobbyPlayerPanelActions_C_GetFirstActiveActionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconTextButton != nullptr)
		*IconTextButton = params.IconTextButton;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanManage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCanManage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::CanManage(bool* bCanManage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanManage");

	UAthenaLobbyPlayerPanelActions_C_CanManage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanManage != nullptr)
		*bCanManage = params.bCanManage;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsInvitationPending
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsInvitationPending           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::IsInvitationPending(bool* bIsInvitationPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsInvitationPending");

	UAthenaLobbyPlayerPanelActions_C_IsInvitationPending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInvitationPending != nullptr)
		*bIsInvitationPending = params.bIsInvitationPending;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanInviteToParty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCanInviteToParty              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::CanInviteToParty(bool* bCanInviteToParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanInviteToParty");

	UAthenaLobbyPlayerPanelActions_C_CanInviteToParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanInviteToParty != nullptr)
		*bCanInviteToParty = params.bCanInviteToParty;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanFriend
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCanFriend                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::CanFriend(bool* bCanFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanFriend");

	UAthenaLobbyPlayerPanelActions_C_CanFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanFriend != nullptr)
		*bCanFriend = params.bCanFriend;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsMissionLocalPlayersOutpost
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isLocalPlayersOutpost          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::IsMissionLocalPlayersOutpost(bool* isLocalPlayersOutpost)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsMissionLocalPlayersOutpost");

	UAthenaLobbyPlayerPanelActions_C_IsMissionLocalPlayersOutpost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isLocalPlayersOutpost != nullptr)
		*isLocalPlayersOutpost = params.isLocalPlayersOutpost;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsLocalPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsLocalPlayer                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::IsLocalPlayer(bool* bIsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsLocalPlayer");

	UAthenaLobbyPlayerPanelActions_C_IsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLocalPlayer != nullptr)
		*bIsLocalPlayer = params.bIsLocalPlayer;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelActions_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Refresh");

	UAthenaLobbyPlayerPanelActions_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelActions_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Initialize");

	UAthenaLobbyPlayerPanelActions_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnButtonHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::OnButtonHovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnButtonHovered");

	UAthenaLobbyPlayerPanelActions_C_OnButtonHovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature");

	UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature");

	UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature");

	UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	UAthenaLobbyPlayerPanelActions_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.ExecuteUbergraph_AthenaLobbyPlayerPanelActions
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelActions_C::ExecuteUbergraph_AthenaLobbyPlayerPanelActions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.ExecuteUbergraph_AthenaLobbyPlayerPanelActions");

	UAthenaLobbyPlayerPanelActions_C_ExecuteUbergraph_AthenaLobbyPlayerPanelActions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnGadgetsClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelActions_C::OnGadgetsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnGadgetsClicked__DelegateSignature");

	UAthenaLobbyPlayerPanelActions_C_OnGadgetsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
