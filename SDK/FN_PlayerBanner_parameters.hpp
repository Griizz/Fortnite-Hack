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

// Function PlayerBanner.PlayerBanner_C.ClearBannerState
struct UPlayerBanner_C_ClearBannerState_Params
{
};

// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
struct UPlayerBanner_C_OnBannerIconLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.GetBannerMID
struct UPlayerBanner_C_GetBannerMID_Params
{
	class UMaterialInstanceDynamic*                    BannerMID;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
struct UPlayerBanner_C_SetBannerOwner_Params
{
	struct FUniqueNetIdRepl                            OwnerId;                                                  // (CPF_Parm)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
struct UPlayerBanner_C_SetBannerColorId_Params
{
	struct FName                                       InBannerColorId;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
struct UPlayerBanner_C_SetBannerIconId_Params
{
	struct FName                                       InBannerIconId;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerImage
struct UPlayerBanner_C_SetBannerImage_Params
{
	struct FFortHomeBaseInfo                           Image_info;                                               // (CPF_Parm)
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
struct UPlayerBanner_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function PlayerBanner.PlayerBanner_C.PreConstruct
struct UPlayerBanner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
struct UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
