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

// WidgetBlueprintGeneratedClass LegacyRatingWidget.LegacyRatingWidget_C
// 0x15C1 (0x1E29 - 0x0868)
class ULegacyRatingWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UBorder*                                     Border_Base;                                              // 0x0870(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0878(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UFortNumericTextBlock*                       NumericText_RatingValue;                                  // 0x0880(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox;                                                  // 0x0888(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                RatingValue;                                              // 0x0890(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0898(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              InterpDuration;                                           // 0x08B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Silhouette;                                        // 0x08B8(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Chamfer;                                           // 0x0C18(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Shadow;                                            // 0x0F78(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Icon;                                              // 0x12D8(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      OverrideDefaultColor : 1;                                 // 0x1638(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1639(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Light;                                              // 0x163C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Color_Medium;                                             // 0x164C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Color_Dark;                                               // 0x165C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Default_Color_Light;                                      // 0x166C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Default_Color_Medium;                                     // 0x167C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Default_Color_Dark;                                       // 0x168C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x169C(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Icon_Alt;                                          // 0x16A0(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UseAlternateIcon : 1;                                     // 0x1A00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1A01(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Shadow_Alt;                                        // 0x1A08(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin_Alt;                                              // 0x1D68(0x0060) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin;                                                  // 0x1DC8(0x0060) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      ShowTeamPowerRating : 1;                                  // 0x1E28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegacyRatingWidget.LegacyRatingWidget_C");
		return ptr;
	}


	void SetShouldShowTeamPowerRating(bool ShowTeamRating);
	void Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color);
	void Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, const struct FFortMultiSizeBrush& MBrush);
	void Update_Base_Material();
	void Update_From_Unique_ID();
	void Set_Unique_ID(const struct FUniqueNetIdRepl& ID);
	void Update();
	void Set_Padding();
	void Set_Size_Box();
	void Update_Rating_Value(int Rating);
	void PreConstruct(bool* IsDesignTime);
	void PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void Construct();
	void PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_LegacyRatingWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
