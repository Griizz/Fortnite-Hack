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

// Function PlayerInfo.PlayerInfo_C.UpdateLocalPlayerInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Player_Info                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerInfo_C::UpdateLocalPlayerInfo(struct FFortTeamMemberInfo* Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.UpdateLocalPlayerInfo");

	UPlayerInfo_C_UpdateLocalPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Info != nullptr)
		*Player_Info = params.Player_Info;
}


// Function PlayerInfo.PlayerInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.Construct");

	UPlayerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfo.PlayerInfo_C.HandlePlayerStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerInfo_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.HandlePlayerStateChanged");

	UPlayerInfo_C_HandlePlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfo.PlayerInfo_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerInfo_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.Destruct");

	UPlayerInfo_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerInfo_C::ExecuteUbergraph_PlayerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo");

	UPlayerInfo_C_ExecuteUbergraph_PlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
