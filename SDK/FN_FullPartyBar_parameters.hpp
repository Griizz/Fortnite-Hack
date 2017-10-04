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

// Function FullPartyBar.FullPartyBar_C.Get_Tech_ToolTipWidget
struct UFullPartyBar_C_Get_Tech_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.Get_Resistance_ToolTipWidget
struct UFullPartyBar_C_Get_Resistance_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.Get_Offense_ToolTipWidget
struct UFullPartyBar_C_Get_Offense_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.Get_Fortitude_ToolTipWidget
struct UFullPartyBar_C_Get_Fortitude_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.GetTotalNumFriendCodes
struct UFullPartyBar_C_GetTotalNumFriendCodes_Params
{
	int                                                Num_Codes;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.isTeammateSlotPopulated
struct UFullPartyBar_C_isTeammateSlotPopulated_Params
{
	int                                                inSlotNUmber;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.OpenPartyPrivacy
struct UFullPartyBar_C_OpenPartyPrivacy_Params
{
};

// Function FullPartyBar.FullPartyBar_C.HandlePartybarUIFeatureChanged
struct UFullPartyBar_C_HandlePartybarUIFeatureChanged_Params
{
};

// Function FullPartyBar.FullPartyBar_C.Initialize
struct UFullPartyBar_C_Initialize_Params
{
};

// Function FullPartyBar.FullPartyBar_C.BindDelegates
struct UFullPartyBar_C_BindDelegates_Params
{
};

// Function FullPartyBar.FullPartyBar_C.Construct
struct UFullPartyBar_C_Construct_Params
{
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.Destruct
struct UFullPartyBar_C_Destruct_Params
{
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
struct UFullPartyBar_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.ExecuteUbergraph_FullPartyBar
struct UFullPartyBar_C_ExecuteUbergraph_FullPartyBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyBar.FullPartyBar_C.OnButtonHovered__DelegateSignature
struct UFullPartyBar_C_OnButtonHovered__DelegateSignature_Params
{
	struct FText                                       HelpText;                                                 // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
