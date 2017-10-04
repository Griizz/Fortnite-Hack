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

// Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseLeave
struct UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseLeave_Params
{
};

// Function MtxOffersList_3.MtxOffersList_2_C.PlayMtxOfferAnimation_MouseEnter
struct UMtxOffersList_2_C_PlayMtxOfferAnimation_MouseEnter_Params
{
};

// Function MtxOffersList_3.MtxOffersList_2_C.Construct
struct UMtxOffersList_2_C_Construct_Params
{
};

// Function MtxOffersList_3.MtxOffersList_2_C.OnPackagesListed
struct UMtxOffersList_2_C_OnPackagesListed_Params
{
	TArray<struct FMtxPackage>                         Offers;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function MtxOffersList_3.MtxOffersList_2_C.OnBuyItem
struct UMtxOffersList_2_C_OnBuyItem_Params
{
	struct FString                                     OfferId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function MtxOffersList_3.MtxOffersList_2_C.OnPurchaseComplete
struct UMtxOffersList_2_C_OnPurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_1
struct UMtxOffersList_2_C_CustomEvent_1_Params
{
};

// Function MtxOffersList_3.MtxOffersList_2_C.CustomEvent_0_Copy
struct UMtxOffersList_2_C_CustomEvent_0_Copy_Params
{
};

// Function MtxOffersList_3.MtxOffersList_2_C.ExecuteUbergraph_MtxOffersList_3
struct UMtxOffersList_2_C_ExecuteUbergraph_MtxOffersList_3_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxOffersList_3.MtxOffersList_2_C.PurchaseComplete__DelegateSignature
struct UMtxOffersList_2_C_PurchaseComplete__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
