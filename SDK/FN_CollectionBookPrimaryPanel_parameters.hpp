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

// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.OnSummonInfoPanelExecuted
struct UCollectionBookPrimaryPanel_C_OnSummonInfoPanelExecuted_Params
{
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.HandleDisplayInfoBox
struct UCollectionBookPrimaryPanel_C_HandleDisplayInfoBox_Params
{
};

// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.ExecuteUbergraph_CollectionBookPrimaryPanel
struct UCollectionBookPrimaryPanel_C_ExecuteUbergraph_CollectionBookPrimaryPanel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
