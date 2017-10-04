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

// WidgetBlueprintGeneratedClass QuickbarBase.QuickbarBase_C
// 0x0021 (0x0281 - 0x0260)
class UQuickbarBase_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0268(0x0001) UNKNOWN PROPERTY: EnumProperty QuickbarBase.QuickbarBase_C.MyQuickbarIndex
	unsigned char                                      UnknownData01[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	int                                                FocusedSlot;                                              // 0x026C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UQuickbarSlot_C*>                     QuickbarSlots;                                            // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      IsMaximized : 1;                                          // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickbarBase.QuickbarBase_C");
		return ptr;
	}


	void RefreshQuickbar();
	void HandleKeybindsChanged();
	void Minimize();
	void Maximize();
	void Is_Valid_Slot(int Slot, bool* Is_Valid, int* Array_Index);
	void Construct();
	void OnWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved);
	void OnQuickbarSlotFocusChanged(int Slot);
	void OnQuickbarContentsChanged();
	void OnQuickbarForceFullUpdate();
	void OnQuickbarSecondarySlotFocusChanged_Event_1(int Slot);
	void OnLocalPlayerDied(const struct FFortPlayerDeathReport& DeathReport);
	void OnLocalPlayerRevived();
	void OnLocalPlayerSpawned();
	void Destruct();
	void ExecuteUbergraph_QuickbarBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
