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

// WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C
// 0x0020 (0x0280 - 0x0260)
class UAthenaTeamInfo_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                _Vertical_Box__Team_Members;                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UAthenaTeamMemberInfo_C*>             TeamMembers;                                              // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C");
		return ptr;
	}


	void HandleTeamMemberRemoved();
	void HandleTeamRevivingChanged(TArray<bool>* TeamReviving);
	void HandleTeamMemberPlayerNamesChanged();
	void HandleTeamDeadChanged(TArray<bool>* TeamDead);
	void HandleTeamDBNOChanged(TArray<bool>* TeamDBNO);
	void HandleTeamMemberAdded();
	void HandleTeamHitInfoChanged(TArray<float>* HealthFractions, TArray<float>* ShieldFractions);
	void ClearContents();
	void AppendTeamMember(class AFortPlayerStateAthena* PlayerState, int PlayerIndex);
	void Construct();
	void HandlePartyLeft();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_AthenaTeamInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
