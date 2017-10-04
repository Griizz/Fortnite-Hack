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

// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
struct UPowerRequirement_C_GenerateToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
struct UPowerRequirement_C_SetUIForRequired_Params
{
	int                                                PartyPower;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
struct UPowerRequirement_C_SetUIForRecommended_Params
{
	int                                                PartyPower;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.Update
struct UPowerRequirement_C_Update_Params
{
};

// Function PowerRequirement.PowerRequirement_C.SetRequirements
struct UPowerRequirement_C_SetRequirements_Params
{
	int                                                RequiredPower;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RecommendedPower;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.Construct
struct UPowerRequirement_C_Construct_Params
{
};

// Function PowerRequirement.PowerRequirement_C.PlayerInfoChanged
struct UPowerRequirement_C_PlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
struct UPowerRequirement_C_ExecuteUbergraph_PowerRequirement_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
