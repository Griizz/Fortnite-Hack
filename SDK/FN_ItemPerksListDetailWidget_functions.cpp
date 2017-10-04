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

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemPerksListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemPerksListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemPerksListDetailWidget_C::ExecuteUbergraph_ItemPerksListDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget");

	UItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
