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

// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.OnRewardStatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCollectionBookSectionRewardWidget_C::OnRewardStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.OnRewardStatusChanged");

	UCollectionBookSectionRewardWidget_C_OnRewardStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.ExecuteUbergraph_CollectionBookSectionRewardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionRewardWidget_C::ExecuteUbergraph_CollectionBookSectionRewardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.ExecuteUbergraph_CollectionBookSectionRewardWidget");

	UCollectionBookSectionRewardWidget_C_ExecuteUbergraph_CollectionBookSectionRewardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
