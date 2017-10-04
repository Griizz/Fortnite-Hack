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

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
struct UCollectionBookSectionPanel_C_OnInspectItem_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AllowItemModifications;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsTemporaryItem;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
struct UCollectionBookSectionPanel_C_OnSlotItemConfirm_Params
{
	class UFortItem*                                   ItemToSlot;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
struct UCollectionBookSectionPanel_C_ShowItemDetail_Params
{
	class UFortItem*                                   SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
struct UCollectionBookSectionPanel_C_Construct_Params
{
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
struct UCollectionBookSectionPanel_C_OnSectionChanged_Params
{
	class UFortCollectionBookSection**                 Section;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
struct UCollectionBookSectionPanel_C_OnActivated_Params
{
};

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
struct UCollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
