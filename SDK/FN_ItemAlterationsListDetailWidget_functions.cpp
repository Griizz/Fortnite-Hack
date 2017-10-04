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

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemAlterationsListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemAlterationsListDetailWidget_C::ExecuteUbergraph_ItemAlterationsListDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget");

	UItemAlterationsListDetailWidget_C_ExecuteUbergraph_ItemAlterationsListDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
