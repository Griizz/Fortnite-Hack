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

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo
struct UItemTransformConfirmationModal_C_UpdateTransformInfo_Params
{
	class UFortItem*                                   TransformKey;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortItem*>                           SacrificeItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                SacrificePoints;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentTier;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnActivated
struct UItemTransformConfirmationModal_C_OnActivated_Params
{
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal
struct UItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnConfirm__DelegateSignature
struct UItemTransformConfirmationModal_C_OnConfirm__DelegateSignature_Params
{
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnCancel__DelegateSignature
struct UItemTransformConfirmationModal_C_OnCancel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
