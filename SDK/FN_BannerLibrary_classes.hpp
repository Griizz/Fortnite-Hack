#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BannerLibrary.BannerLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBannerLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BannerLibrary.BannerLibrary_C");
		return ptr;
	}


	void STATIC_UpdateBannerMeshMaterialForUniqueId_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, const struct FUniqueNetIdRepl& UniqueId, class UObject* __WorldContext);
	void STATIC_Get_Icon_Texture_and_Colors(const struct FString& BannerIconId, const struct FString& BannerColorId, class UObject* __WorldContext, class UTexture2D** Icon, struct FLinearColor* PrimaryColor, struct FLinearColor* Secondary_Color);
	void STATIC_UpdateMaterial_New(class UImage* Banner_material, const struct FFortHomeBaseInfo& Image_info, bool Is_Icon, class UObject* __WorldContext);
	void STATIC_UpdateBannerMeshMaterial_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext);
	void STATIC_UpdateBannerIconOnMaterial(class UMaterialInstanceDynamic* Material, class UTexture* Icon, class UObject* __WorldContext);
	void STATIC_UpdateBannerColorOnMaterial(class UMaterialInstanceDynamic* Material, const struct FLinearColor& PrimaryBGColor, const struct FLinearColor& SecondaryBGColor, class UObject* __WorldContext);
	void STATIC_GenericUpdateMaterial(class UMaterialInstanceDynamic* Target, class UTexture* BannerIcon, const struct FLinearColor& BG_PrimaryColor, const struct FLinearColor& BG_SecondaryColor, class UTexture* ShapeIcon, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
