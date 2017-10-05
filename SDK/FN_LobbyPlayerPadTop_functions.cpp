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

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshReadyState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Ready                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::RefreshReadyState(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshReadyState");

	ULobbyPlayerPadTop_C_RefreshReadyState_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyStateChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        Member_Id                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Ready                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::OnAthenaReadyStateChanged(bool Ready, struct FUniqueNetIdRepl* Member_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyStateChanged");

	ULobbyPlayerPadTop_C_OnAthenaReadyStateChanged_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Member_Id != nullptr)
		*Member_Id = params.Member_Id;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::OnLobbyPlayerUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered");

	ULobbyPlayerPadTop_C_OnLobbyPlayerUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::Initialize(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize");

	ULobbyPlayerPadTop_C_Initialize_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadTop_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents");

	ULobbyPlayerPadTop_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::OnLobbyPlayerHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered");

	ULobbyPlayerPadTop_C_OnLobbyPlayerHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void ULobbyPlayerPadTop_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo");

	ULobbyPlayerPadTop_C_SetTeamMemberInfo_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadTop_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh");

	ULobbyPlayerPadTop_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadTop_C::RefreshPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName");

	ULobbyPlayerPadTop_C_RefreshPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshHomeBasePower
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadTop_C::RefreshHomeBasePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshHomeBasePower");

	ULobbyPlayerPadTop_C_RefreshHomeBasePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct");

	ULobbyPlayerPadTop_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULobbyPlayerPadTop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct");

	ULobbyPlayerPadTop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadTop_C::OnLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted");

	ULobbyPlayerPadTop_C_OnLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerNetId                    (CPF_Parm)
// bool                           bIsReady                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::OnUpdateLobbyPlayerPadTop(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop");

	ULobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop_Params params;
	params.PlayerNetId = PlayerNetId;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULobbyPlayerPadTop_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected");

	ULobbyPlayerPadTop_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyPlayerPadTop_C::ExecuteUbergraph_LobbyPlayerPadTop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop");

	ULobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
