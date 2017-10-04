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

// Function ItemWindow.ItemWindow_C.Set Description Text
struct UItemWindow_C_Set_Description_Text_Params
{
	class UFortItemDefinition*                         Item_Definition;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonTextBlock*                            Text_Box_to_Set;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.InternalToExternalRarity
struct UItemWindow_C_InternalToExternalRarity_Params
{
	struct FText                                       ExternalRarity;                                           // (CPF_Parm, CPF_OutParm)
};

// Function ItemWindow.ItemWindow_C.HandleButton
struct UItemWindow_C_HandleButton_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.Initialize
struct UItemWindow_C_Initialize_Params
{
};

// Function ItemWindow.ItemWindow_C.AddInfo
struct UItemWindow_C_AddInfo_Params
{
	TArray<class UFortItemDefinition*>                 Info_Items;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FText                                       Title;                                                    // (CPF_Parm)
};

// Function ItemWindow.ItemWindow_C.OnSelectedButtonChanged_Event_1
struct UItemWindow_C_OnSelectedButtonChanged_Event_1_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ButtonIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.Destruct
struct UItemWindow_C_Destruct_Params
{
};

// Function ItemWindow.ItemWindow_C.Construct
struct UItemWindow_C_Construct_Params
{
};

// Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct UItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow
struct UItemWindow_C_ExecuteUbergraph_ItemWindow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
