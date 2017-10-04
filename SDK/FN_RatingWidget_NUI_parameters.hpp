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

// Function RatingWidget_NUI.RatingWidget_NUI_C.SetShouldShowTeamPowerRating
struct URatingWidget_NUI_C_SetShouldShowTeamPowerRating_Params
{
	bool                                               ShowTeamRating;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Override Default Color Set
struct URatingWidget_NUI_C_Override_Default_Color_Set_Params
{
	bool                                               Override;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Medium_Color;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Dark_Color;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Texture2D Parameter From Multi Size Brush
struct URatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Parameter;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortMultiSizeBrush                         MBrush;                                                   // (CPF_Parm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update From Unique ID
struct URatingWidget_NUI_C_Update_From_Unique_ID_Params
{
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Unique ID
struct URatingWidget_NUI_C_Set_Unique_ID_Params
{
	struct FUniqueNetIdRepl                            ID;                                                       // (CPF_Parm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update
struct URatingWidget_NUI_C_Update_Params
{
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update Rating Value
struct URatingWidget_NUI_C_Update_Rating_Value_Params
{
	int                                                Rating;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.PreConstruct
struct URatingWidget_NUI_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerInfoChanged
struct URatingWidget_NUI_C_PlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Construct
struct URatingWidget_NUI_C_Construct_Params
{
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerStateChanged
struct URatingWidget_NUI_C_PlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.ExecuteUbergraph_RatingWidget_NUI
struct URatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
