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

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterialForUniqueId_New
struct UBannerLibrary_C_UpdateBannerMeshMaterialForUniqueId_New_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseIconMask;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.Get Icon Texture and Colors
struct UBannerLibrary_C_Get_Icon_Texture_and_Colors_Params
{
	struct FString                                     BannerIconId;                                             // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     BannerColorId;                                            // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                PrimaryColor;                                             // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FLinearColor                                Secondary_Color;                                          // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateMaterial_New
struct UBannerLibrary_C_UpdateMaterial_New_Params
{
	class UImage*                                      Banner_material;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortHomeBaseInfo                           Image_info;                                               // (CPF_Parm)
	bool                                               Is_Icon;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial_New
struct UBannerLibrary_C_UpdateBannerMeshMaterial_New_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseIconMask;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPlayerState*                            InstigatorPlayerState;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial
struct UBannerLibrary_C_UpdateBannerIconOnMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    Icon;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial
struct UBannerLibrary_C_UpdateBannerColorOnMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                PrimaryBGColor;                                           // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                SecondaryBGColor;                                         // (CPF_Parm, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial
struct UBannerLibrary_C_GenericUpdateMaterial_Params
{
	class UMaterialInstanceDynamic*                    Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    BannerIcon;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                BG_PrimaryColor;                                          // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                BG_SecondaryColor;                                        // (CPF_Parm, CPF_IsPlainOldData)
	class UTexture*                                    ShapeIcon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
