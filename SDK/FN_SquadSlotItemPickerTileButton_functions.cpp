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

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadSlotItemPickerTileButton_C::UpdateOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays");

	USquadSlotItemPickerTileButton_C_UpdateOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject**                InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView**        OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadSlotItemPickerTileButton_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.SetData");

	USquadSlotItemPickerTileButton_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHomebaseSquadSlotId*   SquadSlotId                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USquadSlotItemPickerTileButton_C::HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId* SquadSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad");

	USquadSlotItemPickerTileButton_C_HandleItemSlottedToDifferentSquad_Params params;
	params.SquadSlotId = SquadSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USquadSlotItemPickerTileButton_C::HandleSlottingRestrictionReasonsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged");

	USquadSlotItemPickerTileButton_C_HandleSlottingRestrictionReasonsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadSlotItemPickerTileButton_C::ExecuteUbergraph_SquadSlotItemPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton");

	USquadSlotItemPickerTileButton_C_ExecuteUbergraph_SquadSlotItemPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
