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

// Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject**                InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView**        OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotItemPickerTileButton_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.SetData");

	UItemTransformSlotItemPickerTileButton_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.ExecuteUbergraph_ItemTransformSlotItemPickerTileButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformSlotItemPickerTileButton_C::ExecuteUbergraph_ItemTransformSlotItemPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.ExecuteUbergraph_ItemTransformSlotItemPickerTileButton");

	UItemTransformSlotItemPickerTileButton_C_ExecuteUbergraph_ItemTransformSlotItemPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
