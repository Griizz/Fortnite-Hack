#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TabGameOptionsMain.TabGameOptionsMain_C.Set Settings Tooltip
struct UTabGameOptionsMain_C_Set_Settings_Tooltip_Params
{
	class UCommonTextBlock*                            Tooltip_To_Display;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.Initialize Data
struct UTabGameOptionsMain_C_Initialize_Data_Params
{
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.Update Data
struct UTabGameOptionsMain_C_Update_Data_Params
{
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
struct UTabGameOptionsMain_C_Construct_Params
{
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
struct UTabGameOptionsMain_C_UpdateOptionsTab_Params
{
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
struct UTabGameOptionsMain_C_CenterOnTab_Params
{
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
struct UTabGameOptionsMain_C_UpdatePossibleLanguages_Params
{
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__First-PersonCamera_K2Node_ComponentBoundEvent_106_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__First_PersonCamera_K2Node_ComponentBoundEvent_106_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
struct UTabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
