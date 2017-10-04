// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> Modifiers                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMissionDetailsModifierList_C::CreateDebugModifiers(TArray<class UFortGameplayModifierItemDefinition*>* Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers");

	UMissionDetailsModifierList_C_CreateDebugModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifiers != nullptr)
		*Modifiers = params.Modifiers;
}


// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseTrunctatedList              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  NameTextStyle                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  DescriptionTextStyle           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Show_Descriptions              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UFortGameplayModifierItemDefinition*> ModifierItems                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           UseSmallIcons                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionDetailsModifierList_C::PopulateModifiers(bool UseTrunctatedList, class UClass* NameTextStyle, class UClass* DescriptionTextStyle, bool Show_Descriptions, bool UseSmallIcons, TArray<class UFortGameplayModifierItemDefinition*>* ModifierItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers");

	UMissionDetailsModifierList_C_PopulateModifiers_Params params;
	params.UseTrunctatedList = UseTrunctatedList;
	params.NameTextStyle = NameTextStyle;
	params.DescriptionTextStyle = DescriptionTextStyle;
	params.Show_Descriptions = Show_Descriptions;
	params.UseSmallIcons = UseSmallIcons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierItems != nullptr)
		*ModifierItems = params.ModifierItems;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
