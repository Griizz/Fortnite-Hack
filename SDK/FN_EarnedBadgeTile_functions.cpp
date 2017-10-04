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

// Function EarnedBadgeTile.EarnedBadgeTile_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEarnedBadgeTile_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarnedBadgeTile.EarnedBadgeTile_C.PreConstruct");

	UEarnedBadgeTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarnedBadgeTile.EarnedBadgeTile_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEarnedBadgeTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EarnedBadgeTile.EarnedBadgeTile_C.Construct");

	UEarnedBadgeTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarnedBadgeTile.EarnedBadgeTile_C.ExecuteUbergraph_EarnedBadgeTile
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEarnedBadgeTile_C::ExecuteUbergraph_EarnedBadgeTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarnedBadgeTile.EarnedBadgeTile_C.ExecuteUbergraph_EarnedBadgeTile");

	UEarnedBadgeTile_C_ExecuteUbergraph_EarnedBadgeTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
