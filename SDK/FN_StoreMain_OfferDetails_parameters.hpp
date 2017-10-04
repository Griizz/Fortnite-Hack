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

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
struct UStoreMain_OfferDetails_C_PopDetails_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
struct UStoreMain_OfferDetails_C_Init_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
struct UStoreMain_OfferDetails_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated
struct UStoreMain_OfferDetails_C_OnActivated_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated
struct UStoreMain_OfferDetails_C_OnDeactivated_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
struct UStoreMain_OfferDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete
struct UStoreMain_OfferDetails_C_HandlePurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
struct UStoreMain_OfferDetails_C_Construct_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct
struct UStoreMain_OfferDetails_C_Destruct_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
struct UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
