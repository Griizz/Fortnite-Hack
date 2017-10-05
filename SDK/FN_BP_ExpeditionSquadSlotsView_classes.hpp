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

// WidgetBlueprintGeneratedClass BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C
// 0x0039 (0x02F9 - 0x02C0)
class UBP_ExpeditionSquadSlotsView_C : public UFortSquadSlotsView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USquadSlotGroup_C*                           SubordinatesSquadSlotGroup;                               // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSquadSlotSelected;                                      // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               bShowHeader;                                              // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSelectableButtons;                                       // 0x02E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02E2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSquadSlotOpened;                                        // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	EFortItemCardSize                                  Slot_Size;                                                // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C");
		return ptr;
	}


	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int* SquadSlotIndex, struct FHomebaseSquadSlot* SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
	void HandleSquadSlotSelected(int SquadSlotIndex);
	void PreConstruct(bool* IsDesignTime);
	void HandleSquadSlotOpened();
	void ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int EntryPoint);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
