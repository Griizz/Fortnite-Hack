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

// Function StoreMain_Root.StoreMain_Root_C.HandleBack
struct UStoreMain_Root_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat
struct UStoreMain_Root_C_AboutToEnterChat_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails
struct UStoreMain_Root_C_AboutToPushDetails_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
struct UStoreMain_Root_C_IsOffersScrollBoxActive_Params
{
	bool                                               Return_Value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.SetFocus
struct UStoreMain_Root_C_SetFocus_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.AddOffer
struct UStoreMain_Root_C_AddOffer_Params
{
	class UFortMtxStoreOfferBase*                      MtxOffer;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
struct UStoreMain_Root_C_NoOffersAvailable_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnActivated
struct UStoreMain_Root_C_OnActivated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
struct UStoreMain_Root_C_OnMtxOfferGenerated_Params
{
	class UFortMtxStoreOfferBase**                     MtxOffer;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
struct UStoreMain_Root_C_OnOffersGenerated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
struct UStoreMain_Root_C_OnStartReadingOffers_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnDeactivated
struct UStoreMain_Root_C_OnDeactivated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Destruct
struct UStoreMain_Root_C_Destruct_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Construct
struct UStoreMain_Root_C_Construct_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
struct UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
