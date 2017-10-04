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

// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.OnSectionSlotUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int*                           NumFilledSlots                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           NumSlots                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionTileWidget_C::OnSectionSlotUpdate(int* NumFilledSlots, int* NumSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.OnSectionSlotUpdate");

	UCollectionBookSectionTileWidget_C_OnSectionSlotUpdate_Params params;
	params.NumFilledSlots = NumFilledSlots;
	params.NumSlots = NumSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.ExecuteUbergraph_CollectionBookSectionTileWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionTileWidget_C::ExecuteUbergraph_CollectionBookSectionTileWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.ExecuteUbergraph_CollectionBookSectionTileWidget");

	UCollectionBookSectionTileWidget_C_ExecuteUbergraph_CollectionBookSectionTileWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
