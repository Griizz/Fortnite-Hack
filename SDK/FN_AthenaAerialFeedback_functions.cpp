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

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAerialFeedback_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick");

	UAthenaAerialFeedback_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAerialFeedback_C::ExecuteUbergraph_AthenaAerialFeedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback");

	UAthenaAerialFeedback_C_ExecuteUbergraph_AthenaAerialFeedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
