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

// Function ItemCooldownMeter.ItemCooldownMeter_C.GetCooldownMaterial
struct UItemCooldownMeter_C_GetCooldownMaterial_Params
{
	class UMaterialInstanceDynamic*                    CooldownMat;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes
struct UItemCooldownMeter_C_GetSecondsCorrectedMinutes_Params
{
	int                                                Minutes;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Seconds;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown
struct UItemCooldownMeter_C_Set_Cooldown_Params
{
	struct FTimespan                                   Time_Left;                                                // (CPF_Parm)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.Update
struct UItemCooldownMeter_C_Update_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
