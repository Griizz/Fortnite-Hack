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

// Function TabGameOptionsMain.TabGameOptionsMain_C.Set Settings Tooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonTextBlock*        Tooltip_To_Display             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::Set_Settings_Tooltip(class UCommonTextBlock* Tooltip_To_Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.Set Settings Tooltip");

	UTabGameOptionsMain_C_Set_Settings_Tooltip_Params params;
	params.Tooltip_To_Display = Tooltip_To_Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Initialize Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabGameOptionsMain_C::Initialize_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.Initialize Data");

	UTabGameOptionsMain_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Update Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabGameOptionsMain_C::Update_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.Update Data");

	UTabGameOptionsMain_C_Update_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTabGameOptionsMain_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.Construct");

	UTabGameOptionsMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabGameOptionsMain_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab");

	UTabGameOptionsMain_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabGameOptionsMain_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab");

	UTabGameOptionsMain_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTabGameOptionsMain_C::UpdatePossibleLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages");

	UTabGameOptionsMain_C_UpdatePossibleLanguages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__First-PersonCamera_K2Node_ComponentBoundEvent_106_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__First_PersonCamera_K2Node_ComponentBoundEvent_106_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__First-PersonCamera_K2Node_ComponentBoundEvent_106_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__First_PersonCamera_K2Node_ComponentBoundEvent_106_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection Changed__DelegateSignature");

	UTabGameOptionsMain_C_BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabGameOptionsMain_C::ExecuteUbergraph_TabGameOptionsMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain");

	UTabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
