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

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void UAthenaLobbyPlayerPanelDetails_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo");

	UAthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents");

	UAthenaLobbyPlayerPanelDetails_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ActiveFriendsCount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::OnActiveFriendsCountUpdated(int ActiveFriendsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated");

	UAthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated_Params params;
	params.ActiveFriendsCount = ActiveFriendsCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InvitesCount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::OnPartyInvitesCountChanged(int InvitesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged");

	UAthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged_Params params;
	params.InvitesCount = InvitesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize");

	UAthenaLobbyPlayerPanelDetails_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsInvitationPending           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::IsInvitationPending(bool* bIsInvitationPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending");

	UAthenaLobbyPlayerPanelDetails_C_IsInvitationPending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInvitationPending != nullptr)
		*bIsInvitationPending = params.bIsInvitationPending;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPendingInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite");

	UAthenaLobbyPlayerPanelDetails_C_RefreshPendingInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName");

	UAthenaLobbyPlayerPanelDetails_C_RefreshPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh");

	UAthenaLobbyPlayerPanelDetails_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct");

	UAthenaLobbyPlayerPanelDetails_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails");

	UAthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
