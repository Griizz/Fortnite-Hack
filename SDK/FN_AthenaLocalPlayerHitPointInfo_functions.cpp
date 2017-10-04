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

// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaLocalPlayerHitPointInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.Construct");

	UAthenaLocalPlayerHitPointInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLocalPlayerHitPointInfo_C::ExecuteUbergraph_AthenaLocalPlayerHitPointInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo");

	UAthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
