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

// Function News.News_C.UpdateInfoPanel
struct UNews_C_UpdateInfoPanel_Params
{
	struct FText                                       BodyText;                                                 // (CPF_Parm)
};

// Function News.News_C.Init
struct UNews_C_Init_Params
{
};

// Function News.News_C.PopulateEntries
struct UNews_C_PopulateEntries_Params
{
	bool                                               IsEmpty;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function News.News_C.AddEntry
struct UNews_C_AddEntry_Params
{
	struct FText                                       inEntryText;                                              // (CPF_Parm)
};

// Function News.News_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
struct UNews_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function News.News_C.Construct
struct UNews_C_Construct_Params
{
};

// Function News.News_C.ExecuteUbergraph_News
struct UNews_C_ExecuteUbergraph_News_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
