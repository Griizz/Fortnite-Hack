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

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats");

	UItemCalledOutAttributesDetailWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FFortDisplayAttribute> Attributes                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UItemCalledOutAttributesDetailWidget_C::GetDisplayAttributesToCallOut(TArray<struct FFortDisplayAttribute>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut");

	UItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attributes != nullptr)
		*Attributes = params.Attributes;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemCalledOutAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCalledOutAttributesDetailWidget_C::ExecuteUbergraph_ItemCalledOutAttributesDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget");

	UItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
