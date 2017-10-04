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

// Function MTXButton.MTXButton_C.UpdateState
struct UMTXButton_C_UpdateState_Params
{
};

// Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_1
struct UMTXButton_C_Get_Button_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MTXButton.MTXButton_C.UpdateAmount
struct UMTXButton_C_UpdateAmount_Params
{
	struct FFortPrivateAccountInfo                     FortPrivateAccountInfo;                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MTXButton.MTXButton_C.Construct
struct UMTXButton_C_Construct_Params
{
};

// Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged
struct UMTXButton_C_HandleLocalAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     NewInfo;                                                  // (CPF_Parm)
};

// Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UMTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MTXButton.MTXButton_C.HandleInputActionChnaged
struct UMTXButton_C_HandleInputActionChnaged_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MTXButton.MTXButton_C.Destruct
struct UMTXButton_C_Destruct_Params
{
};

// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
struct UMTXButton_C_ExecuteUbergraph_MTXButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
