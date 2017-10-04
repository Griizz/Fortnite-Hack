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

// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCapacity
struct UEquippedItem_Bandolier_C_UpdateCapacity_Params
{
	int                                                Capacity;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAmmoItemDefinition*                     AmmoData;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCurrent
struct UEquippedItem_Bandolier_C_UpdateCurrent_Params
{
	int                                                Current;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAmmoItemDefinition*                     AmmoData;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
