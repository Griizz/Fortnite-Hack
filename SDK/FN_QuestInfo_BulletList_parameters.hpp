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

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntryWithBrush
struct UQuestInfo_BulletList_C_AddEntryWithBrush_Params
{
	struct FText                                       EntryText;                                                // (CPF_Parm)
	struct FSlateBrush                                 EntryIconBrush;                                           // (CPF_Parm)
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.InitDesignView
struct UQuestInfo_BulletList_C_InitDesignView_Params
{
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntry
struct UQuestInfo_BulletList_C_AddEntry_Params
{
	struct FText                                       EntryText;                                                // (CPF_Parm)
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.PreConstruct
struct UQuestInfo_BulletList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.Construct
struct UQuestInfo_BulletList_C_Construct_Params
{
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.ExecuteUbergraph_QuestInfo_BulletList
struct UQuestInfo_BulletList_C_ExecuteUbergraph_QuestInfo_BulletList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
