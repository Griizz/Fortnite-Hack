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

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Glow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           GlowIcon                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleSquadSlotButton_C::Update_SubType_Icon_Glow(bool GlowIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Glow");

	USimpleSquadSlotButton_C_Update_SubType_Icon_Glow_Params params;
	params.GlowIcon = GlowIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Image
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USimpleSquadSlotButton_C::Update_SubType_Icon_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Image");

	USimpleSquadSlotButton_C_Update_SubType_Icon_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.IsSlotEmpty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEmpty                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleSquadSlotButton_C::IsSlotEmpty(bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.IsSlotEmpty");

	USimpleSquadSlotButton_C_IsSlotEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Mark Squad Slot Seen State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USimpleSquadSlotButton_C::Mark_Squad_Slot_Seen_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Mark Squad Slot Seen State");

	USimpleSquadSlotButton_C_Mark_Squad_Slot_Seen_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USimpleSquadSlotButton_C::Update_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update Bang State");

	USimpleSquadSlotButton_C_Update_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.GetSimpleSquadButtonTooltipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* USimpleSquadSlotButton_C::GetSimpleSquadButtonTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.GetSimpleSquadButtonTooltipWidget");

	USimpleSquadSlotButton_C_GetSimpleSquadButtonTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleSquadSlotButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.PreConstruct");

	USimpleSquadSlotButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USimpleSquadSlotButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Construct");

	USimpleSquadSlotButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USimpleSquadSlotButton_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP");

	USimpleSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.SquadSlotWidgetUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USimpleSquadSlotButton_C::SquadSlotWidgetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.SquadSlotWidgetUpdated");

	USimpleSquadSlotButton_C_SquadSlotWidgetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USimpleSquadSlotButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.OnSelected");

	USimpleSquadSlotButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.ExecuteUbergraph_SimpleSquadSlotButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleSquadSlotButton_C::ExecuteUbergraph_SimpleSquadSlotButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.ExecuteUbergraph_SimpleSquadSlotButton");

	USimpleSquadSlotButton_C_ExecuteUbergraph_SimpleSquadSlotButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
