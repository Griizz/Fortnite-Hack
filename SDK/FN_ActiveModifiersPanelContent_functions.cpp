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

// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> inModifiers                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UActiveModifiersPanelContent_C::Init(TArray<class UFortGameplayModifierItemDefinition*>* inModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init");

	UActiveModifiersPanelContent_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModifiers != nullptr)
		*inModifiers = params.inModifiers;
}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UActiveModifiersPanelContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Construct");

	UActiveModifiersPanelContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.ExecuteUbergraph_ActiveModifiersPanelContent
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UActiveModifiersPanelContent_C::ExecuteUbergraph_ActiveModifiersPanelContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.ExecuteUbergraph_ActiveModifiersPanelContent");

	UActiveModifiersPanelContent_C_ExecuteUbergraph_ActiveModifiersPanelContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
