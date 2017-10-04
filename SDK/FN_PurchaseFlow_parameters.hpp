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

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
struct UPurchaseFlowJSBridge_RequestClose_Params
{
	struct FString                                     CloseInfo;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
struct UPurchaseFlowJSBridge_RECEIPT_Params
{
	struct FPurchaseFlowReceiptParam                   RECEIPT;                                                  // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
