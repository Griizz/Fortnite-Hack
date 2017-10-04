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

// WidgetBlueprintGeneratedClass RatingWidget_NUI.RatingWidget_NUI_C
// 0x15C3 (0x17FB - 0x0238)
class URatingWidget_NUI_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonNumericTextBlock*                     CommonNumericTextRatingValue;                             // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UImage*                                      Image_1;                                                  // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox;                                                  // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                RatingValue;                                              // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0268(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              InterpDuration;                                           // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Silhouette;                                        // 0x0288(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Chamfer;                                           // 0x05E8(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Shadow;                                            // 0x0948(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Icon;                                              // 0x0CA8(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      OverrideDefaultColor : 1;                                 // 0x1008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1009(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Light;                                              // 0x100C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Color_Medium;                                             // 0x101C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Color_Dark;                                               // 0x102C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Default_Color_Light;                                      // 0x103C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Default_Color_Medium;                                     // 0x104C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Default_Color_Dark;                                       // 0x105C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x106C(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Icon_Alt;                                          // 0x1070(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UseAlternateIcon : 1;                                     // 0x13D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x13D1(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Shadow_Alt;                                        // 0x13D8(0x0360) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin_Alt;                                              // 0x1738(0x0060) (CPF_Edit, CPF_BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin;                                                  // 0x1798(0x0060) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      ShowTeamPowerRating : 1;                                  // 0x17F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // 0x17F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseRatingValuesFromPlayer : 1;                           // 0x17FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RatingWidget_NUI.RatingWidget_NUI_C");
		return ptr;
	}


	void SetShouldShowTeamPowerRating(bool ShowTeamRating);
	void Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color);
	void Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, const struct FFortMultiSizeBrush& MBrush);
	void Update_From_Unique_ID();
	void Set_Unique_ID(const struct FUniqueNetIdRepl& ID);
	void Update();
	void Update_Rating_Value(int Rating);
	void PreConstruct(bool* IsDesignTime);
	void PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void Construct();
	void PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_RatingWidget_NUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
