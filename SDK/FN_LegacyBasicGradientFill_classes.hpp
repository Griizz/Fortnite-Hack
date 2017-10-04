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

// WidgetBlueprintGeneratedClass LegacyBasicGradientFill.LegacyBasicGradientFill_C
// 0x003C (0x027C - 0x0240)
class ULegacyBasicGradientFill_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      ImageFill;                                                // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FLinearColor                                Color_1;                                                  // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   Brush_Size;                                               // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Rotation;                                                 // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegacyBasicGradientFill.LegacyBasicGradientFill_C");
		return ptr;
	}


	void Set_Brush_Size(const struct FVector2D& Brush_Size);
	void Set_Fill(const struct FLinearColor& Color_1, const struct FLinearColor& Color_2, float Rotation__0___1_);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_LegacyBasicGradientFill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
