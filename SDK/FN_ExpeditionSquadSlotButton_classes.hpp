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

// WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C
// 0x0040 (0x0938 - 0x08F8)
class UExpeditionSquadSlotButton_C : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	TEnumAsByte<EFortBrushSize>                        SlottedItemCardSize;                                      // 0x0900(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0901(0x0003) MISSED OFFSET
	int                                                SquadSlotIndex;                                           // 0x0904(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSquadSlotSelected;                                      // 0x0908(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadSlotUpdated;                                       // 0x0918(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadSlotOpened;                                        // 0x0928(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C");
		return ptr;
	}


	void Send_to_Skill_Tree();
	void Get_Squad_Data(struct FName* OutSquadId, int* OutSquadSlotIndex);
	void PreConstruct(bool* IsDesignTime);
	void OnClicked();
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void OnDoubleClicked();
	void OnSelected();
	void ExecuteUbergraph_ExpeditionSquadSlotButton(int EntryPoint);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item);
	void OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
