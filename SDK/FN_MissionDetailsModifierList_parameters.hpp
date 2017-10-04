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

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
struct UMissionDetailsModifierList_C_CreateDebugModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
struct UMissionDetailsModifierList_C_PopulateModifiers_Params
{
	bool                                               UseTrunctatedList;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      NameTextStyle;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DescriptionTextStyle;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Show_Descriptions;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UFortGameplayModifierItemDefinition*> ModifierItems;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               UseSmallIcons;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
