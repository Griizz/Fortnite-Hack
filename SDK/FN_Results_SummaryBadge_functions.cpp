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

// Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               BadgeItem                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_SummaryBadge_C::Initialize(class UFortItem* BadgeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize");

	UResults_SummaryBadge_C_Initialize_Params params;
	params.BadgeItem = BadgeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_SummaryBadge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct");

	UResults_SummaryBadge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_SummaryBadge_C::Manual_Pre_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct");

	UResults_SummaryBadge_C_Manual_Pre_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_SummaryBadge_C::ExecuteUbergraph_Results_SummaryBadge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge");

	UResults_SummaryBadge_C_ExecuteUbergraph_Results_SummaryBadge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
