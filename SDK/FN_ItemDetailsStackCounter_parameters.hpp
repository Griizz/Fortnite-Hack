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

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
struct UItemDetailsStackCounter_C_Refresh_Visibility_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Set Stack Count
struct UItemDetailsStackCounter_C_Set_Stack_Count_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update
struct UItemDetailsStackCounter_C_Update_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
struct UItemDetailsStackCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
struct UItemDetailsStackCounter_C_Construct_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
struct UItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
