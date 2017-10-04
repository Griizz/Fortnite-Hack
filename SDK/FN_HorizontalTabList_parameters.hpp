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

// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
struct UHorizontalTabList_C_Get_Tab_From_Id_Params
{
	struct FName                                       TabNameID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings
struct UHorizontalTabList_C_ChangeInputBindings_Params
{
	struct FDataTableRowHandle                         NextBinding;                                              // (CPF_Parm)
	struct FDataTableRowHandle                         PreviousBinding;                                          // (CPF_Parm)
};

// Function HorizontalTabList.HorizontalTabList_C.Construct
struct UHorizontalTabList_C_Construct_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged
struct UHorizontalTabList_C_Handle_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
struct UHorizontalTabList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.Previous Visibility
struct UHorizontalTabList_C_Previous_Visibility_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
struct UHorizontalTabList_C_HandleTabCreated_Params
{
	struct FName*                                      TabNameID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton**                              TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1
struct UHorizontalTabList_C_CustomEvent_1_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
struct UHorizontalTabList_C_ExecuteUbergraph_HorizontalTabList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
