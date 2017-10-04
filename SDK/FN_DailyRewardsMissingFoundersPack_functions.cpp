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

// Function DailyRewardsMissingFoundersPack.DailyRewardsMissingFoundersPack_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDailyRewardsMissingFoundersPack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsMissingFoundersPack.DailyRewardsMissingFoundersPack_C.Construct");

	UDailyRewardsMissingFoundersPack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsMissingFoundersPack.DailyRewardsMissingFoundersPack_C.ExecuteUbergraph_DailyRewardsMissingFoundersPack
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDailyRewardsMissingFoundersPack_C::ExecuteUbergraph_DailyRewardsMissingFoundersPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsMissingFoundersPack.DailyRewardsMissingFoundersPack_C.ExecuteUbergraph_DailyRewardsMissingFoundersPack");

	UDailyRewardsMissingFoundersPack_C_ExecuteUbergraph_DailyRewardsMissingFoundersPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
