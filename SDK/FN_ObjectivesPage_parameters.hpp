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

// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
struct UObjectivesPage_C_MissionHasModifiers_Params
{
	bool                                               MissionHasModifiers;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
struct UObjectivesPage_C_ConfigureModifiersView_Params
{
	bool                                               ShowModifiers;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
struct UObjectivesPage_C_HandleInventory_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
struct UObjectivesPage_C_HandleSelectedButtonChanged_Params
{
	class UCommonButton*                               InButton;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InButtonIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.HandleBack
struct UObjectivesPage_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesPage.ObjectivesPage_C.Construct
struct UObjectivesPage_C_Construct_Params
{
};

// Function ObjectivesPage.ObjectivesPage_C.OnActivated
struct UObjectivesPage_C_OnActivated_Params
{
};

// Function ObjectivesPage.ObjectivesPage_C.Destruct
struct UObjectivesPage_C_Destruct_Params
{
};

// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
struct UObjectivesPage_C_ExecuteUbergraph_ObjectivesPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
