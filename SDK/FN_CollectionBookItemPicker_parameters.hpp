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

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text
struct UCollectionBookItemPicker_C_Get_Type_Text_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Type;                                                     // (CPF_Parm, CPF_OutParm)
};

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction
struct UCollectionBookItemPicker_C_HandleCommitAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected
struct UCollectionBookItemPicker_C_HandleItemSelected_Params
{
	class UObject*                                     ItemSelected;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsSelected;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030
struct UCollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030_Params
{
	EFortDialogResult                                  Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWaitingForLatentActionCompletion;                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       WaitingDialogHandle;                                      // (CPF_Parm)
};

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct
struct UCollectionBookItemPicker_C_Construct_Params
{
};

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation
struct UCollectionBookItemPicker_C_ShowSlotItemConfirmation_Params
{
	class UFortItem*                                   SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker
struct UCollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
