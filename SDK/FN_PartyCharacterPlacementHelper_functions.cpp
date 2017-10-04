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

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     MemberInfo                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APartyCharacterPlacementHelper_C::OnPartyDataChanged(struct FFortTeamMemberInfo* MemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged");

	APartyCharacterPlacementHelper_C_OnPartyDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberInfo != nullptr)
		*MemberInfo = params.MemberInfo;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bCompleted                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::CompletedQuestPrerequisites(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites");

	APartyCharacterPlacementHelper_C_CompletedQuestPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsInLobby                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::IsInLobby(bool* IsInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby");

	APartyCharacterPlacementHelper_C_IsInLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInLobby != nullptr)
		*IsInLobby = params.IsInLobby;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PartyMemberIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::PlayLobbyAnimation(int PartyMemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation");

	APartyCharacterPlacementHelper_C_PlayLobbyAnimation_Params params;
	params.PartyMemberIndex = PartyMemberIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected");

	APartyCharacterPlacementHelper_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::RefreshWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets");

	APartyCharacterPlacementHelper_C_RefreshWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets");

	APartyCharacterPlacementHelper_C_InitializeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void APartyCharacterPlacementHelper_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged");

	APartyCharacterPlacementHelper_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamMemberRemovedInt           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnTeamMemberRemoved(int TeamMemberRemovedInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved");

	APartyCharacterPlacementHelper_C_OnTeamMemberRemoved_Params params;
	params.TeamMemberRemovedInt = TeamMemberRemovedInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void APartyCharacterPlacementHelper_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded");

	APartyCharacterPlacementHelper_C_OnTeamMemberAdded_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnFrontEndCameraChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged");

	APartyCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted");

	APartyCharacterPlacementHelper_C_OnLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializePadUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI");

	APartyCharacterPlacementHelper_C_InitializePadUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize");

	APartyCharacterPlacementHelper_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents");

	APartyCharacterPlacementHelper_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnselected(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerUnselected_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerSelected(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerSelected_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript");

	APartyCharacterPlacementHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay");

	APartyCharacterPlacementHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed");

	APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabClosed_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected");

	APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyCharacterPlacementHelper_C::ExecuteUbergraph_PartyCharacterPlacementHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper");

	APartyCharacterPlacementHelper_C_ExecuteUbergraph_PartyCharacterPlacementHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APartyCharacterPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature");

	APartyCharacterPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
