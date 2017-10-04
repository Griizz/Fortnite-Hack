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

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
struct UMissionDetailsModifierRow_C_PlayIntroAnimation_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init
struct UMissionDetailsModifierRow_C_Init_Params
{
	struct FText                                       ModifierName;                                             // (CPF_Parm)
	struct FText                                       ModifierDescription;                                      // (CPF_Parm)
	class UTexture2D*                                  ModifierIcon;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TextStyle;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Show_Description;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseSmallIcon;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
struct UMissionDetailsModifierRow_C_Construct_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
struct UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
