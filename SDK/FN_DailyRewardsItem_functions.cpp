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

// Function DailyRewardsItem.DailyRewardsItem_C.SetCardSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    CardSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDailyRewardsItem_C::SetCardSize(TEnumAsByte<EFortBrushSize> CardSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsItem.DailyRewardsItem_C.SetCardSize");

	UDailyRewardsItem_C_SetCardSize_Params params;
	params.CardSize = CardSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsItem.DailyRewardsItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDailyRewardsItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsItem.DailyRewardsItem_C.Construct");

	UDailyRewardsItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsItem.DailyRewardsItem_C.ExecuteUbergraph_DailyRewardsItem
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDailyRewardsItem_C::ExecuteUbergraph_DailyRewardsItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsItem.DailyRewardsItem_C.ExecuteUbergraph_DailyRewardsItem");

	UDailyRewardsItem_C_ExecuteUbergraph_DailyRewardsItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
