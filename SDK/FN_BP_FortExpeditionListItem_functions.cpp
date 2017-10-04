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

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortAccountItem*        Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Update_Bang_State(class UFortAccountItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State");

	UBP_FortExpeditionListItem_C_Update_Bang_State_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Success_Chance(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance");

	UBP_FortExpeditionListItem_C_Set_Success_Chance_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Expedition                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Vehicle_Icon(class UFortExpeditionItem* Expedition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon");

	UBP_FortExpeditionListItem_C_Set_Vehicle_Icon_Params params;
	params.Expedition = Expedition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     InputPin                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Expedition_Returns_Data(class UFortExpeditionItem* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data");

	UBP_FortExpeditionListItem_C_Set_Expedition_Returns_Data_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_In_Progress_State(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State");

	UBP_FortExpeditionListItem_C_Set_In_Progress_State_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time");

	UBP_FortExpeditionListItem_C_Set_Remaining_Expiration_Time_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Rarity(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity");

	UBP_FortExpeditionListItem_C_Set_Rarity_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Rating(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating");

	UBP_FortExpeditionListItem_C_Set_Rating_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Rewards(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards");

	UBP_FortExpeditionListItem_C_Set_Rewards_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortExpeditionItemDefinition* Item_Def                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Get_Expedition_Item_Definition(class UFortItem* Item, class UFortExpeditionItemDefinition** Item_Def)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition");

	UBP_FortExpeditionListItem_C_Get_Expedition_Item_Definition_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_Def != nullptr)
		*Item_Def = params.Item_Def;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Name(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name");

	UBP_FortExpeditionListItem_C_Set_Name_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Expedition                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::Setup_Base_Item_Data(class UFortExpeditionItem* Expedition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data");

	UBP_FortExpeditionListItem_C_Setup_Base_Item_Data_Params params;
	params.Expedition = Expedition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject**                InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView**        OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.SetData");

	UBP_FortExpeditionListItem_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnSelected");

	UBP_FortExpeditionListItem_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged");

	UBP_FortExpeditionListItem_C_OnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnDeselected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnDeselected");

	UBP_FortExpeditionListItem_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature");

	UBP_FortExpeditionListItem_C_BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnHovered");

	UBP_FortExpeditionListItem_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionListItem_C::ExecuteUbergraph_BP_FortExpeditionListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem");

	UBP_FortExpeditionListItem_C_ExecuteUbergraph_BP_FortExpeditionListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
