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

// Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USurvivorTraitsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.HandlePostDifferentItemToDetailSet");

	USurvivorTraitsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.ExecuteUbergraph_SurvivorTraitsDetailWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USurvivorTraitsDetailWidget_C::ExecuteUbergraph_SurvivorTraitsDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.ExecuteUbergraph_SurvivorTraitsDetailWidget");

	USurvivorTraitsDetailWidget_C_ExecuteUbergraph_SurvivorTraitsDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
