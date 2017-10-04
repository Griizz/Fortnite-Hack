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

// Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULocalPlayerHitPointInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.Construct");

	ULocalPlayerHitPointInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.ExecuteUbergraph_LocalPlayerHitPointInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULocalPlayerHitPointInfo_C::ExecuteUbergraph_LocalPlayerHitPointInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.ExecuteUbergraph_LocalPlayerHitPointInfo");

	ULocalPlayerHitPointInfo_C_ExecuteUbergraph_LocalPlayerHitPointInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
