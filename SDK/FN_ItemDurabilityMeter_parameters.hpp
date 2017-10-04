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

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Backfill Color
struct UItemDurabilityMeter_C_Set_Backfill_Color_Params
{
	struct FLinearColor                                Backfill_Color;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Durability
struct UItemDurabilityMeter_C_Set_Durability_Params
{
	float                                              Durability;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Update
struct UItemDurabilityMeter_C_Update_Params
{
	struct FVector2D                                   Draw_Size;                                                // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Durability;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Construct
struct UItemDurabilityMeter_C_Construct_Params
{
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.ExecuteUbergraph_ItemDurabilityMeter
struct UItemDurabilityMeter_C_ExecuteUbergraph_ItemDurabilityMeter_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
