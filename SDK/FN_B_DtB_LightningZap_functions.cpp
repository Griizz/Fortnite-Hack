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

// Function B_DtB_LightningZap.B_DtB_LightningZap_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_DtB_LightningZap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DtB_LightningZap.B_DtB_LightningZap_C.UserConstructionScript");

	AB_DtB_LightningZap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DtB_LightningZap.B_DtB_LightningZap_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_DtB_LightningZap_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DtB_LightningZap.B_DtB_LightningZap_C.ReceiveTick");

	AB_DtB_LightningZap_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DtB_LightningZap.B_DtB_LightningZap_C.FireLightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_DtB_LightningZap_C::FireLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DtB_LightningZap.B_DtB_LightningZap_C.FireLightning");

	AB_DtB_LightningZap_C_FireLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DtB_LightningZap.B_DtB_LightningZap_C.ExecuteUbergraph_B_DtB_LightningZap
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_DtB_LightningZap_C::ExecuteUbergraph_B_DtB_LightningZap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DtB_LightningZap.B_DtB_LightningZap_C.ExecuteUbergraph_B_DtB_LightningZap");

	AB_DtB_LightningZap_C_ExecuteUbergraph_B_DtB_LightningZap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
