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

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.UpdateDoneButtonText
struct UItemManagementMulchDetailsPanel_C_UpdateDoneButtonText_Params
{
};

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.GetWarningText
struct UItemManagementMulchDetailsPanel_C_GetWarningText_Params
{
	TArray<EItemRecyclingWarning>                      Warnings;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               HasAnimateItems;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       WarningText;                                              // (CPF_Parm, CPF_OutParm)
};

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.DialogResult_58BF1F8B4DC97D1C2902828F65095294
struct UItemManagementMulchDetailsPanel_C_DialogResult_58BF1F8B4DC97D1C2902828F65095294_Params
{
	EFortDialogResult                                  Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.HandleSetOfItemsToMulchChangedBP
struct UItemManagementMulchDetailsPanel_C_HandleSetOfItemsToMulchChangedBP_Params
{
};

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature
struct UItemManagementMulchDetailsPanel_C_BndEvt__DoneButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.ExecuteUbergraph_ItemManagementMulchDetailsPanel
struct UItemManagementMulchDetailsPanel_C_ExecuteUbergraph_ItemManagementMulchDetailsPanel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementMulchDetailsPanel.ItemManagementMulchDetailsPanel_C.MulchListChanged__DelegateSignature
struct UItemManagementMulchDetailsPanel_C_MulchListChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
