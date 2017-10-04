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

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int*                           SquadSlotIndex                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHomebaseSquadSlot*     SquadSlotDefinition            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWidget*                 OutSquadSlotButtonHost         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortSquadSlotSelectorButton* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFortSquadSlotSelectorButton* UBP_ExpeditionSquadSlotsView_C::CreateAndAddSquadSlotButton(int* SquadSlotIndex, struct FHomebaseSquadSlot* SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton");

	UBP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton_Params params;
	params.SquadSlotIndex = SquadSlotIndex;
	params.SquadSlotDefinition = SquadSlotDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = params.OutSquadSlotButtonHost;

	return params.ReturnValue;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotSelected(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected");

	UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct");

	UBP_ExpeditionSquadSlotsView_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened");

	UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView");

	UBP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExpeditionSquadSlotsView_C::OnSquadSlotOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature");

	UBP_ExpeditionSquadSlotsView_C_OnSquadSlotOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ExpeditionSquadSlotsView_C::OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature");

	UBP_ExpeditionSquadSlotsView_C_OnSquadSlotSelected__DelegateSignature_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
