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

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDailyRewardsCurrent_C::Set_Item_Flare()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare");

	UDailyRewardsCurrent_C_Set_Item_Flare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item_To_Represent              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Quantity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDailyRewardsCurrent_C::Set_Item(class UFortItem* Item_To_Represent, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item");

	UDailyRewardsCurrent_C_Set_Item_Params params;
	params.Item_To_Represent = Item_To_Represent;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDailyRewardsCurrent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsCurrent.DailyRewardsCurrent_C.Construct");

	UDailyRewardsCurrent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDailyRewardsCurrent_C::ExecuteUbergraph_DailyRewardsCurrent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent");

	UDailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
