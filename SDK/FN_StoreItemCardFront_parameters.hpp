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

// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
struct UStoreItemCardFront_C_Get_Type_Text_Params
{
	struct FText                                       OutText;                                                  // (CPF_Parm, CPF_OutParm)
};

// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
struct UStoreItemCardFront_C_Get_Card_Name_Text_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
struct UStoreItemCardFront_C_Draw_Card_Params
{
};

// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
struct UStoreItemCardFront_C_Initialize_Card_Params
{
	struct FCard                                       inCard;                                                   // (CPF_Parm)
};

// Function StoreItemCardFront.StoreItemCardFront_C.Construct
struct UStoreItemCardFront_C_Construct_Params
{
};

// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
struct UStoreItemCardFront_C_OnFortStoreStateChanged_Params
{
	EFortStoreState                                    NewStoreState;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
struct UStoreItemCardFront_C_InitFromObject_Params
{
	class UObject*                                     InitObject;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
struct UStoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
