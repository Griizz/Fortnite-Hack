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

// Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            MaxNumberOfSections            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   OriginalSectionName            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SectionName                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGAB_GenericDeath_C::GetRandomSectionName(int MaxNumberOfSections, const struct FName& OriginalSectionName, struct FName* SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName");

	UGAB_GenericDeath_C_GetRandomSectionName_Params params;
	params.MaxNumberOfSections = MaxNumberOfSections;
	params.OriginalSectionName = OriginalSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionName != nullptr)
		*SectionName = params.SectionName;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventHitData                   (CPF_Parm)

void UGAB_GenericDeath_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection");

	UGAB_GenericDeath_C_InitializeDeathHitDirection_Params params;
	params.EventHitData = EventHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_GenericDeath_C::OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4");

	UGAB_GenericDeath_C_OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_GenericDeath_C::OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4");

	UGAB_GenericDeath_C_OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_GenericDeath_C::OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4");

	UGAB_GenericDeath_C_OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_GenericDeath_C::OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4");

	UGAB_GenericDeath_C_OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGAB_GenericDeath_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility");

	UGAB_GenericDeath_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_GenericDeath_C::PickDeathMontageSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection");

	UGAB_GenericDeath_C_PickDeathMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGAB_GenericDeath_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent");

	UGAB_GenericDeath_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGAB_GenericDeath_C::ExecuteUbergraph_GAB_GenericDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath");

	UGAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
