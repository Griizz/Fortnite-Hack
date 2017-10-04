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

// WidgetBlueprintGeneratedClass AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C
// 0x0009 (0x0239 - 0x0230)
class UAthenaTeamMemberDBNOState_C : public UUserWidget
{
public:
	class UImage*                                      DBNOIndicator;                                            // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0238(0x0001) UNKNOWN PROPERTY: EnumProperty AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Visibility When Not DBNO

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C");
		return ptr;
	}


	void Set_Reviving(bool Is_Reviving);
	void Set_DBNO(bool Is_DBNO);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
