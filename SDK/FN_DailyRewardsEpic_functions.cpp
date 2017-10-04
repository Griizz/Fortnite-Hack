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

// Function DailyRewardsEpic.DailyRewardsEpic_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDailyRewardsEpic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsEpic.DailyRewardsEpic_C.Construct");

	UDailyRewardsEpic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsEpic.DailyRewardsEpic_C.ExecuteUbergraph_DailyRewardsEpic
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDailyRewardsEpic_C::ExecuteUbergraph_DailyRewardsEpic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsEpic.DailyRewardsEpic_C.ExecuteUbergraph_DailyRewardsEpic");

	UDailyRewardsEpic_C_ExecuteUbergraph_DailyRewardsEpic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
