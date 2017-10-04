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

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder
struct UQuestInfo_BulletListEntry_C_ShowBorder_Params
{
};

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize
struct UQuestInfo_BulletListEntry_C_CalcBrushSize_Params
{
	struct FVector2D                                   InImageSize;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush
struct UQuestInfo_BulletListEntry_C_InitBrush_Params
{
	struct FText                                       EntryText;                                                // (CPF_Parm)
	struct FSlateBrush                                 EntryIconBrush;                                           // (CPF_Parm)
};

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet
struct UQuestInfo_BulletListEntry_C_InitBullet_Params
{
	struct FText                                       EntryText;                                                // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
