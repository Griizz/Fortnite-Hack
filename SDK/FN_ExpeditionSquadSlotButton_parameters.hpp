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

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Send to Skill Tree
struct UExpeditionSquadSlotButton_C_Send_to_Skill_Tree_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data
struct UExpeditionSquadSlotButton_C_Get_Squad_Data_Params
{
	struct FName                                       OutSquadId;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<EFortItemType>                              ItemTypes;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct
struct UExpeditionSquadSlotButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnClicked
struct UExpeditionSquadSlotButton_C_OnClicked_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated
struct UExpeditionSquadSlotButton_C_SquadSlotWidgetUpdated_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
struct UExpeditionSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnDoubleClicked
struct UExpeditionSquadSlotButton_C_OnDoubleClicked_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSelected
struct UExpeditionSquadSlotButton_C_OnSelected_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton
struct UExpeditionSquadSlotButton_C_ExecuteUbergraph_ExpeditionSquadSlotButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotOpened__DelegateSignature_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotUpdated__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
