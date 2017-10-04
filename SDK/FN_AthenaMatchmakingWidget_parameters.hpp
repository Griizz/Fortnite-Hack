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

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.FillChange
struct UAthenaMatchmakingWidget_C_FillChange_Params
{
	bool                                               bDirection;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.PlaylistChange
struct UAthenaMatchmakingWidget_C_PlaylistChange_Params
{
	bool                                               bDirection;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetAutoFillOptions
struct UAthenaMatchmakingWidget_C_SetAutoFillOptions_Params
{
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.RefreshInput
struct UAthenaMatchmakingWidget_C_RefreshInput_Params
{
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.OnActivated
struct UAthenaMatchmakingWidget_C_OnActivated_Params
{
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetPlayButtonState
struct UAthenaMatchmakingWidget_C_SetPlayButtonState_Params
{
	bool*                                              bCanMatchmake;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.Construct
struct UAthenaMatchmakingWidget_C_Construct_Params
{
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetCancelButtonState
struct UAthenaMatchmakingWidget_C_SetCancelButtonState_Params
{
	bool*                                              bIsMatchmaking;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.ExecuteUbergraph_AthenaMatchmakingWidget
struct UAthenaMatchmakingWidget_C_ExecuteUbergraph_AthenaMatchmakingWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
