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

// Function MtxStoreRoot.MtxStoreRoot_C.ClosePopup
struct UMtxStoreRoot_C_ClosePopup_Params
{
};

// Function MtxStoreRoot.MtxStoreRoot_C.Construct
struct UMtxStoreRoot_C_Construct_Params
{
};

// Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature
struct UMtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature
struct UMtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxStoreRoot.MtxStoreRoot_C.ExecuteUbergraph_MtxStoreRoot
struct UMtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
