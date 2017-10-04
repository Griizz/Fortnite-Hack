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

// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
struct USkillTreeColorSetup_C_SkillTreeBGSetup_Params
{
	struct FSkillTreePageColors                        Page_Color;                                               // (CPF_Parm)
	TEnumAsByte<ESkillTreePages>                       Pages;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
