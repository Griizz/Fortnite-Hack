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

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::Pre_Select_for_Console()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console");

	UBP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   RequirementTags                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_FortExpeditionPickVehicleWidget_C::Determine_Available_Expedition_Squads(const struct FGameplayTagContainer& RequirementTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads");

	UBP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads_Params params;
	params.RequirementTags = RequirementTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItem*               ItemDef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortExpeditionItemDefinition* AsFort_Expedition_Item_Definition (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition");

	UBP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Expedition_Item_Definition != nullptr)
		*AsFort_Expedition_Item_Definition = params.AsFort_Expedition_Item_Definition;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers");

	UBP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack");

	UBP_FortExpeditionPickVehicleWidget_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Construct");

	UBP_FortExpeditionPickVehicleWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::SetData(class UFortExpeditionItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData");

	UBP_FortExpeditionPickVehicleWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnActivated");

	UBP_FortExpeditionPickVehicleWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature");

	UBP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehicleSelected(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected");

	UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HACK_GetMeOutOfSelectContext
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::HACK_GetMeOutOfSelectContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HACK_GetMeOutOfSelectContext");

	UBP_FortExpeditionPickVehicleWidget_C_HACK_GetMeOutOfSelectContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehicleButtonHovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered");

	UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehcileButtonUnhovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered");

	UBP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget");

	UBP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::OnVehicleSelected__DelegateSignature(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected__DelegateSignature");

	UBP_FortExpeditionPickVehicleWidget_C_OnVehicleSelected__DelegateSignature_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
