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

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.SetSlotCompletionRatio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumSlotted                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumSlots                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionTileRewardWidget_C::SetSlotCompletionRatio(int NumSlotted, int NumSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.SetSlotCompletionRatio");

	UCollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio_Params params;
	params.NumSlotted = NumSlotted;
	params.NumSlots = NumSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.OnRewardStatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ECollectionBookRewardStatus*   NewStatus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionTileRewardWidget_C::OnRewardStatusChanged(ECollectionBookRewardStatus* NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.OnRewardStatusChanged");

	UCollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged_Params params;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.ExecuteUbergraph_CollectionBookSectionTileRewardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionTileRewardWidget_C::ExecuteUbergraph_CollectionBookSectionTileRewardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.ExecuteUbergraph_CollectionBookSectionTileRewardWidget");

	UCollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
