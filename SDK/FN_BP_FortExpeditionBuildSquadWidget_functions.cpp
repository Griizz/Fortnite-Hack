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

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Utc Now Offset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimespan UBP_FortExpeditionBuildSquadWidget_C::Get_Utc_Now_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Utc Now Offset");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Utc_Now_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSuccessChanceTooltipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UBP_FortExpeditionBuildSquadWidget_C::GetSuccessChanceTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSuccessChanceTooltipWidget");

	UBP_FortExpeditionBuildSquadWidget_C_GetSuccessChanceTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSquadRatingTooltipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UBP_FortExpeditionBuildSquadWidget_C::GetSquadRatingTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSquadRatingTooltipWidget");

	UBP_FortExpeditionBuildSquadWidget_C_GetSquadRatingTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Bonus Display Name and Brush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Condition                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             OutBrush_Brush_M               (CPF_Parm, CPF_OutParm)
// struct FText                   OutDisplayName                 (CPF_Parm, CPF_OutParm)
// struct FLinearColor            OutRarityColor                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Bonus_Display_Name_and_Brush(const struct FGameplayTag& Tag, bool Condition, struct FSlateBrush* OutBrush_Brush_M, struct FText* OutDisplayName, struct FLinearColor* OutRarityColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Bonus Display Name and Brush");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Bonus_Display_Name_and_Brush_Params params;
	params.Tag = Tag;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBrush_Brush_M != nullptr)
		*OutBrush_Brush_M = params.OutBrush_Brush_M;
	if (OutDisplayName != nullptr)
		*OutDisplayName = params.OutDisplayName;
	if (OutRarityColor != nullptr)
		*OutRarityColor = params.OutRarityColor;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Item In Selected Squad Slot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFortItem* UBP_FortExpeditionBuildSquadWidget_C::Get_Item_In_Selected_Squad_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Item In Selected Squad Slot");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Item_In_Selected_Squad_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadPicker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::HACK_SetCursorToSquadPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadPicker");

	UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Inspect Item for Squad Slot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Determine_Inspect_Item_for_Squad_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Inspect Item for Squad Slot");

	UBP_FortExpeditionBuildSquadWidget_C_Determine_Inspect_Item_for_Squad_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Inspect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Inspect(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Inspect");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Inspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Slot (SAFE)
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UBP_FortExpeditionBuildSquadWidget_C::Get_Selected_Slot__SAFE_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Slot (SAFE)");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Slot__SAFE__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Purchase Slot State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Purchase_Slot_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Purchase Slot State");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Purchase_Slot_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Purchase Slot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Purchase_Slot(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Purchase Slot");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Purchase_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Angle for Preview State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UBP_FortExpeditionBuildSquadWidget_C::Determine_Buff_Arrow_Angle_for_Preview_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Angle for Preview State");

	UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Angle_for_Preview_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Color for Preview State
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UBP_FortExpeditionBuildSquadWidget_C::Determine_Buff_Arrow_Color_for_Preview_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Color for Preview State");

	UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Color_for_Preview_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Chance Buff Arrow for Preview
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Chance_Buff_Arrow_for_Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Chance Buff Arrow for Preview");

	UBP_FortExpeditionBuildSquadWidget_C_Update_Chance_Buff_Arrow_for_Preview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Rating Buff Arrow for Preview
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Rating_Buff_Arrow_for_Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Rating Buff Arrow for Preview");

	UBP_FortExpeditionBuildSquadWidget_C_Update_Rating_Buff_Arrow_for_Preview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Visiblity From Preview State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UBP_FortExpeditionBuildSquadWidget_C::Determine_Buff_Arrow_Visiblity_From_Preview_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Visiblity From Preview State");

	UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Visiblity_From_Preview_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Text Style from Preview State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UBP_FortExpeditionBuildSquadWidget_C::Determine_Text_Style_from_Preview_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Text Style from Preview State");

	UBP_FortExpeditionBuildSquadWidget_C_Determine_Text_Style_from_Preview_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Power and Rating for Preview
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UFortItem*>       SlottedItems1                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Power_and_Rating_for_Preview(class UFortItem* Item, TArray<class UFortItem*>* SlottedItems1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Power and Rating for Preview");

	UBP_FortExpeditionBuildSquadWidget_C_Update_Power_and_Rating_for_Preview_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlottedItems1 != nullptr)
		*SlottedItems1 = params.SlottedItems1;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Preview State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Preview                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Determine_Preview_State(float Preview, float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Preview State");

	UBP_FortExpeditionBuildSquadWidget_C_Determine_Preview_State_Params params;
	params.Preview = Preview;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update For Preview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Update_For_Preview(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update For Preview");

	UBP_FortExpeditionBuildSquadWidget_C_Update_For_Preview_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back with Squad Clear
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Back_with_Squad_Clear(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back with Squad Clear");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_with_Squad_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Slot Item State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Slot_Item_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Slot Item State");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Slot_Item_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Open Picker State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Open_Picker_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Open Picker State");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Open_Picker_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Vehicle Selected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentSquadId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Vehicle_Selected(const struct FName& CurrentSquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Vehicle Selected");

	UBP_FortExpeditionBuildSquadWidget_C_Update_Vehicle_Selected_Params params;
	params.CurrentSquadId = CurrentSquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Open Picker
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Open_Picker(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Open Picker");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Open_Picker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Start Expedition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Start_Expedition(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Start Expedition");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Start_Expedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Picker Closed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Squad_Picker_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Picker Closed");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Picker_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Slot Selected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Squad_Slot_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Slot Selected");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Slot_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Selected Item Committed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Selected_Item_Committed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Selected Item Committed");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Selected_Item_Committed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Close Picker Action
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Close_Picker_Action(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Close Picker Action");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Close_Picker_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Slot Item Action
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Slot_Item_Action(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Slot Item Action");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Slot_Item_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Start Expedition Widget State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Start_Expedition_Widget_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Start Expedition Widget State");

	UBP_FortExpeditionBuildSquadWidget_C_Update_Start_Expedition_Widget_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Expedition Expired
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Expedition_Expired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Expedition Expired");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Expedition_Expired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Try to Auto Select First Vehicle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Try_to_Auto_Select_First_Vehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Try to Auto Select First Vehicle");

	UBP_FortExpeditionBuildSquadWidget_C_Try_to_Auto_Select_First_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Item
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UBP_FortExpeditionBuildSquadWidget_C::Get_Selected_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Item");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Picker List View
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItemTileView*       PickerTileView                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Picker_List_View(class UFortItemTileView** PickerTileView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Picker List View");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Picker_List_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PickerTileView != nullptr)
		*PickerTileView = params.PickerTileView;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadSlotSlotted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::HACK_SetCursorToSquadSlotSlotted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadSlotSlotted");

	UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadSlotSlotted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Bonus Criteria
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UFortItem*>       SlottedItems                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Bonus_Criteria(class UFortExpeditionItem* Item, TArray<class UFortItem*> SlottedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Bonus Criteria");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Bonus_Criteria_Params params;
	params.Item = Item;
	params.SlottedItems = SlottedItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Expedition Power
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Expedition_Power()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Expedition Power");

	UBP_FortExpeditionBuildSquadWidget_C_Update_Expedition_Power_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Squad Slot Pickers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedSquadIndex             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Update_Squad_Slot_Pickers(int SelectedSquadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Squad Slot Pickers");

	UBP_FortExpeditionBuildSquadWidget_C_Update_Squad_Slot_Pickers_Params params;
	params.SelectedSquadIndex = SelectedSquadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Expedition Costs
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition* ItemDef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Expedition_Costs(class UFortExpeditionItemDefinition* ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Expedition Costs");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Expedition_Costs_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Requirements
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition* ItemDef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Requirements(class UFortExpeditionItemDefinition* ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Requirements");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Requirements_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Remaining Expiration Time
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Remaining Expiration Time");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Remaining_Expiration_Time_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Clear Vehicle Widgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Clear_Vehicle_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Clear Vehicle Widgets");

	UBP_FortExpeditionBuildSquadWidget_C_Clear_Vehicle_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Vehicle Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHomebaseSquad          HomebaseSquad                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Vehicle_Name(const struct FHomebaseSquad& HomebaseSquad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Vehicle Name");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Vehicle_Name_Params params;
	params.HomebaseSquad = HomebaseSquad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Squad Widgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Refresh_Squad_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Squad Widgets");

	UBP_FortExpeditionBuildSquadWidget_C_Refresh_Squad_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Change Vehicle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Change_Vehicle(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Change Vehicle");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Change_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition* ItemDef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Rewards(class UFortExpeditionItemDefinition* ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rewards");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Rewards_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rarity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Rarity(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rarity");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Rarity_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Duration
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition* ItemDef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Duration(class UFortExpeditionItemDefinition* ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Duration");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Duration_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Expedition Item Definition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortExpeditionItemDefinition* ItemDef                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Get_Expedition_Item_Definition(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition** ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Expedition Item Definition");

	UBP_FortExpeditionBuildSquadWidget_C_Get_Expedition_Item_Definition_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDef != nullptr)
		*ItemDef = params.ItemDef;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Item Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Refresh_Item_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Item Data");

	UBP_FortExpeditionBuildSquadWidget_C_Refresh_Item_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Rating(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rating");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Rating_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Description
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Description(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Description");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Description_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Set_Name(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Name");

	UBP_FortExpeditionBuildSquadWidget_C_Set_Name_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Setup Input Action Handlers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Setup Input Action Handlers");

	UBP_FortExpeditionBuildSquadWidget_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::Handle_Back(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back");

	UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.DialogResult_B738291040F33B805332A7B633B3ACBD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWaitingForLatentActionCompletion (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (CPF_Parm)

void UBP_FortExpeditionBuildSquadWidget_C::DialogResult_B738291040F33B805332A7B633B3ACBD(const struct FName& ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.DialogResult_B738291040F33B805332A7B633B3ACBD");

	UBP_FortExpeditionBuildSquadWidget_C_DialogResult_B738291040F33B805332A7B633B3ACBD_Params params;
	params.ResultName = ResultName;
	params.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	params.WaitingDialogHandle = WaitingDialogHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Construct");

	UBP_FortExpeditionBuildSquadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::SetData(class UFortExpeditionItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.SetData");

	UBP_FortExpeditionBuildSquadWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HandleVechicleSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::HandleVechicleSelected(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HandleVechicleSelected");

	UBP_FortExpeditionBuildSquadWidget_C_HandleVechicleSelected_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature");

	UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Destruct");

	UBP_FortExpeditionBuildSquadWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnActivated");

	UBP_FortExpeditionBuildSquadWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK Select Item in Picker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::HACK_Select_Item_in_Picker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK Select Item in Picker");

	UBP_FortExpeditionBuildSquadWidget_C_HACK_Select_Item_in_Picker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRefreshBuildSquadWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::OnRefreshBuildSquadWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRefreshBuildSquadWidget");

	UBP_FortExpeditionBuildSquadWidget_C_OnRefreshBuildSquadWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature");

	UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature");

	UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpedition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::OnStartExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpedition");

	UBP_FortExpeditionBuildSquadWidget_C_OnStartExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature");

	UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature");

	UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnGamepadStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::OnGamepadStateChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnGamepadStateChanged");

	UBP_FortExpeditionBuildSquadWidget_C_OnGamepadStateChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpeditionCompleted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::OnStartExpeditionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpeditionCompleted");

	UBP_FortExpeditionBuildSquadWidget_C_OnStartExpeditionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature");

	UBP_FortExpeditionBuildSquadWidget_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRequestClosePicker
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FortExpeditionBuildSquadWidget_C::OnRequestClosePicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRequestClosePicker");

	UBP_FortExpeditionBuildSquadWidget_C_OnRequestClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionBuildSquadWidget_C::ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget");

	UBP_FortExpeditionBuildSquadWidget_C_ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
