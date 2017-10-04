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

// Function ItemManagementItemDetailsPanel-OverviewOnly.ItemManagementItemDetailsPanel-OverviewOnly_C.SetDescriptionText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementItemDetailsPanel_OverviewOnly_C::SetDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemDetailsPanel-OverviewOnly.ItemManagementItemDetailsPanel-OverviewOnly_C.SetDescriptionText");

	UItemManagementItemDetailsPanel_OverviewOnly_C_SetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemDetailsPanel-OverviewOnly.ItemManagementItemDetailsPanel-OverviewOnly_C.HandleDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementItemDetailsPanel_OverviewOnly_C::HandleDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemDetailsPanel-OverviewOnly.ItemManagementItemDetailsPanel-OverviewOnly_C.HandleDifferentItemToDetailSet");

	UItemManagementItemDetailsPanel_OverviewOnly_C_HandleDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemDetailsPanel-OverviewOnly.ItemManagementItemDetailsPanel-OverviewOnly_C.ExecuteUbergraph_ItemManagementItemDetailsPanel-OverviewOnly
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementItemDetailsPanel_OverviewOnly_C::ExecuteUbergraph_ItemManagementItemDetailsPanel_OverviewOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemDetailsPanel-OverviewOnly.ItemManagementItemDetailsPanel-OverviewOnly_C.ExecuteUbergraph_ItemManagementItemDetailsPanel-OverviewOnly");

	UItemManagementItemDetailsPanel_OverviewOnly_C_ExecuteUbergraph_ItemManagementItemDetailsPanel_OverviewOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
