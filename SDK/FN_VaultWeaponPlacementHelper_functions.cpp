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

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVaultWeaponPlacementHelper_C::OnLobbyPlayerUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerUnhovered");

	AVaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::GetFrontendAnimInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance");

	AVaultWeaponPlacementHelper_C_GetFrontendAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void AVaultWeaponPlacementHelper_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberStateChanged");

	AVaultWeaponPlacementHelper_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamMemberInfo                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVaultWeaponPlacementHelper_C::OnTeamMemberRemoved(int TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberRemoved");

	AVaultWeaponPlacementHelper_C_OnTeamMemberRemoved_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void AVaultWeaponPlacementHelper_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberAdded");

	AVaultWeaponPlacementHelper_C_OnTeamMemberAdded_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::OnFrontEndCameraChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged");

	AVaultWeaponPlacementHelper_C_OnFrontEndCameraChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::OnLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyStarted");

	AVaultWeaponPlacementHelper_C_OnLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize");

	AVaultWeaponPlacementHelper_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents");

	AVaultWeaponPlacementHelper_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVaultWeaponPlacementHelper_C::OnLobbyPlayerSelected(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerSelected");

	AVaultWeaponPlacementHelper_C_OnLobbyPlayerSelected_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVaultWeaponPlacementHelper_C::OnLobbyPlayerHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerHovered");

	AVaultWeaponPlacementHelper_C_OnLobbyPlayerHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.UserConstructionScript");

	AVaultWeaponPlacementHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay");

	AVaultWeaponPlacementHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::ItemRez()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez");

	AVaultWeaponPlacementHelper_C_ItemRez_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVaultWeaponPlacementHelper_C::ExecuteUbergraph_VaultWeaponPlacementHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper");

	AVaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultWeaponPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature");

	AVaultWeaponPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
