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

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.IsItemSimple
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDescriptionDetailWidget_C::IsItemSimple(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.IsItemSimple");

	UItemDescriptionDetailWidget_C_IsItemSimple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemDescriptionDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemDescriptionDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.ExecuteUbergraph_ItemDescriptionDetailWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDescriptionDetailWidget_C::ExecuteUbergraph_ItemDescriptionDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.ExecuteUbergraph_ItemDescriptionDetailWidget");

	UItemDescriptionDetailWidget_C_ExecuteUbergraph_ItemDescriptionDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
