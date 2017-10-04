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

// Function LegalInfo.LegalInfo_C.On Scroll Down
struct ULegalInfo_C_On_Scroll_Down_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegalInfo.LegalInfo_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature
struct ULegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegalInfo.LegalInfo_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
struct ULegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegalInfo.LegalInfo_C.BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature
struct ULegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegalInfo.LegalInfo_C.Construct
struct ULegalInfo_C_Construct_Params
{
};

// Function LegalInfo.LegalInfo_C.ExecuteUbergraph_LegalInfo
struct ULegalInfo_C_ExecuteUbergraph_LegalInfo_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
