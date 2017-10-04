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

// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
struct UInterfacePlayerPawn_C_FootStepRight_Params
{
};

// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
struct UInterfacePlayerPawn_C_FootStepLeft_Params
{
};

// Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
struct UInterfacePlayerPawn_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                          // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
struct UInterfacePlayerPawn_C_MeleeSwingLeft_Params
{
};

// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
struct UInterfacePlayerPawn_C_MeleeSwingRight_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
