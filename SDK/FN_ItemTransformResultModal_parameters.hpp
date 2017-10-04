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

// Function ItemTransformResultModal.ItemTransformResultModal_C.OpenResult
struct UItemTransformResultModal_C_OpenResult_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       RewardItems;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>       SacrificeItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ItemTransformResultModal.ItemTransformResultModal_C.OpenInspect
struct UItemTransformResultModal_C_OpenInspect_Params
{
};

// Function ItemTransformResultModal.ItemTransformResultModal_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UItemTransformResultModal_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformResultModal.ItemTransformResultModal_C.BndEvt__InspectButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UItemTransformResultModal_C_BndEvt__InspectButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformResultModal.ItemTransformResultModal_C.OnActivated
struct UItemTransformResultModal_C_OnActivated_Params
{
};

// Function ItemTransformResultModal.ItemTransformResultModal_C.ExecuteUbergraph_ItemTransformResultModal
struct UItemTransformResultModal_C_ExecuteUbergraph_ItemTransformResultModal_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformResultModal.ItemTransformResultModal_C.OnContinue__DelegateSignature
struct UItemTransformResultModal_C_OnContinue__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
