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

// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
// 0x0149 (0x0A11 - 0x08C8)
class UDefaultSkillNode_C : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USpacer*                                     InternalSpacer;                                           // 0x08D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UImage*                                      SelectionPulseEffect;                                     // 0x08D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              SelectionGlowPercentage;                                  // 0x08E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HoverGlowPercentage;                                      // 0x08E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                HoverGlowTimerHandle;                                     // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                SelectionGlowTimerHandle;                                 // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FSkillTreePageColors                        PageColors;                                               // 0x08F8(0x00C0) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ESkillTreePages>                       Pages;                                                    // 0x09B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09B9(0x0003) MISSED OFFSET
	struct FSkillTreeGroupColors                       GroupColors;                                              // 0x09BC(0x0054) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ESkillTreeGroups>                      Groups;                                                   // 0x0A10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C");
		return ptr;
	}


	void SetBackgroundColor();
	void UpdateFromButtonState();
	void UpdateSelectionGlow();
	void UpdateHoverGlow();
	void StepSelectionGlowInterpolation();
	void StepHoverGlowInterpolation();
	void UpdateFromNodeData();
	void UpdateFromNodeState();
	void Construct();
	void HandleSkillTreeNodeStateChanged();
	void PreConstruct(bool* IsDesignTime);
	void OnUnhovered();
	void OnHovered();
	void OnSelected();
	void OnDeselected();
	void ExecuteUbergraph_DefaultSkillNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
