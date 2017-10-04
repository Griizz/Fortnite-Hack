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

// Function IconTabButton.IconTabButton_C.Update Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bBangEnabled                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UIconTabButton_C::Update_Bang_State(bool bBangEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Update Bang State");

	UIconTabButton_C_Update_Bang_State_Params params;
	params.bBangEnabled = bBangEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UIconTabButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle");

	UIconTabButton_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.ShowText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UIconTabButton_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.ShowText");

	UIconTabButton_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.Set Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_Parm)

void UIconTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Set Icon");

	UIconTabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.Set Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_Parm)

void UIconTabButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Set Text");

	UIconTabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UIconTabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.PreConstruct");

	UIconTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UIconTabButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged");

	UIconTabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UIconTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.SetTabLabelInfo");

	UIconTabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UIconTabButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnSelected");

	UIconTabButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnDeselected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UIconTabButton_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnDeselected");

	UIconTabButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UIconTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Construct");

	UIconTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UIconTabButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnHovered");

	UIconTabButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UIconTabButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnUnhovered");

	UIconTabButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnEnabled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UIconTabButton_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnEnabled");

	UIconTabButton_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnDisabled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UIconTabButton_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnDisabled");

	UIconTabButton_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UIconTabButton_C::ExecuteUbergraph_IconTabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton");

	UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
