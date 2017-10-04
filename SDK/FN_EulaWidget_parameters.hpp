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

// Function EulaWidget.EulaWidget_C.SetViewOnly
struct UEulaWidget_C_SetViewOnly_Params
{
	bool                                               bViewOnly;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EulaWidget.EulaWidget_C.SetEulaText
struct UEulaWidget_C_SetEulaText_Params
{
	struct FText                                       EULA;                                                     // (CPF_Parm)
};

// Function EulaWidget.EulaWidget_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature
struct UEulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EulaWidget.EulaWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UEulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EulaWidget.EulaWidget_C.Destruct
struct UEulaWidget_C_Destruct_Params
{
};

// Function EulaWidget.EulaWidget_C.Construct
struct UEulaWidget_C_Construct_Params
{
};

// Function EulaWidget.EulaWidget_C.ExecuteUbergraph_EulaWidget
struct UEulaWidget_C_ExecuteUbergraph_EulaWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature
struct UEulaWidget_C_OnEulaResponse__DelegateSignature_Params
{
	bool                                               Accepted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
