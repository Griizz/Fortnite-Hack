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

// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAthena_PlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript");

	AAthena_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay");

	AAthena_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthena_PlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReceiveTick");

	AAthena_PlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAthena_PlayerController_C::PlayWinEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects");

	AAthena_PlayerController_C_PlayWinEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController");

	AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
