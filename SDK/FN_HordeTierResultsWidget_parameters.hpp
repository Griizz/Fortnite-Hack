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

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnHandleAction
struct UHordeTierResultsWidget_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (CPF_Parm, CPF_OutParm)
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached
struct UHordeTierResultsWidget_C_OnEndOfMovieReached_Params
{
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse
struct UHordeTierResultsWidget_C_ChooseMediaToUse_Params
{
	class UMediaSource*                                MediaToUse;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize
struct UHordeTierResultsWidget_C_Initialize_Params
{
	EFortCompletionResult                              Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie
struct UHordeTierResultsWidget_C_InitializeMovie_Params
{
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature
struct UHordeTierResultsWidget_C_OnTierResultsWidgetComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
