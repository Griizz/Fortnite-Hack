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

// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVaultCharacterLightingBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript");

	AVaultCharacterLightingBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVaultCharacterLightingBP_C::LightControl(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl");

	AVaultCharacterLightingBP_C_LightControl_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AVaultCharacterLightingBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay");

	AVaultCharacterLightingBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVaultCharacterLightingBP_C::ExecuteUbergraph_VaultCharacterLightingBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP");

	AVaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
