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

// Function ItemStackCounter.ItemStackCounter_C.Refresh Visibility
struct UItemStackCounter_C_Refresh_Visibility_Params
{
};

// Function ItemStackCounter.ItemStackCounter_C.Set Stack Count
struct UItemStackCounter_C_Set_Stack_Count_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemStackCounter.ItemStackCounter_C.Update
struct UItemStackCounter_C_Update_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemStackCounter.ItemStackCounter_C.PreConstruct
struct UItemStackCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemStackCounter.ItemStackCounter_C.ExecuteUbergraph_ItemStackCounter
struct UItemStackCounter_C_ExecuteUbergraph_ItemStackCounter_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
