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

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice
struct UPlayerChoiceButtonWidget_C_ConfigureChoice_Params
{
	struct FChoiceDataEntry                            Choice;                                                   // (CPF_Parm)
	int                                                ChoiceID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPlayerChoiceWidget_C*                       Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature
struct UPlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget
struct UPlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
