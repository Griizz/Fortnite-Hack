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

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerOutpost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript");

	ABP_PlayerControllerOutpost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           GetHelp                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerOutpost_C::ServerStartExpandingOutpost(bool GetHelp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost");

	ABP_PlayerControllerOutpost_C_ServerStartExpandingOutpost_Params params;
	params.GetHelp = GetHelp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerOutpost_C::ExecuteUbergraph_BP_PlayerControllerOutpost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost");

	ABP_PlayerControllerOutpost_C_ExecuteUbergraph_BP_PlayerControllerOutpost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
