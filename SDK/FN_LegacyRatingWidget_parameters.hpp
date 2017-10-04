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

// Function LegacyRatingWidget.LegacyRatingWidget_C.SetShouldShowTeamPowerRating
struct ULegacyRatingWidget_C_SetShouldShowTeamPowerRating_Params
{
	bool                                               ShowTeamRating;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Override Default Color Set
struct ULegacyRatingWidget_C_Override_Default_Color_Set_Params
{
	bool                                               Override;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Medium_Color;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Dark_Color;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Texture2D Parameter From Multi Size Brush
struct ULegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Parameter;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortMultiSizeBrush                         MBrush;                                                   // (CPF_Parm)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Base Material
struct ULegacyRatingWidget_C_Update_Base_Material_Params
{
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Update From Unique ID
struct ULegacyRatingWidget_C_Update_From_Unique_ID_Params
{
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Unique ID
struct ULegacyRatingWidget_C_Set_Unique_ID_Params
{
	struct FUniqueNetIdRepl                            ID;                                                       // (CPF_Parm)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Update
struct ULegacyRatingWidget_C_Update_Params
{
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Padding
struct ULegacyRatingWidget_C_Set_Padding_Params
{
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Size Box
struct ULegacyRatingWidget_C_Set_Size_Box_Params
{
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Rating Value
struct ULegacyRatingWidget_C_Update_Rating_Value_Params
{
	int                                                Rating;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.PreConstruct
struct ULegacyRatingWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerInfoChanged
struct ULegacyRatingWidget_C_PlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.Construct
struct ULegacyRatingWidget_C_Construct_Params
{
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerStateChanged
struct ULegacyRatingWidget_C_PlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LegacyRatingWidget.LegacyRatingWidget_C.ExecuteUbergraph_LegacyRatingWidget
struct ULegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
