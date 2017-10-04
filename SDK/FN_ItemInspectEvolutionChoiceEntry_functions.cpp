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

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.UnselectEvolutionChoice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionChoiceEntry_C::UnselectEvolutionChoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.UnselectEvolutionChoice");

	UItemInspectEvolutionChoiceEntry_C_UnselectEvolutionChoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SelectEvolutionChoice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionChoiceEntry_C::SelectEvolutionChoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SelectEvolutionChoice");

	UItemInspectEvolutionChoiceEntry_C_SelectEvolutionChoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.DoDesignTimeRandomization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemInspectEvolutionChoiceEntry_C::DoDesignTimeRandomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.DoDesignTimeRandomization");

	UItemInspectEvolutionChoiceEntry_C_DoDesignTimeRandomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SetItemToRepresent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RecipeIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           EnabledChoice                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::SetItemToRepresent(class UFortItem* Item, int RecipeIndex, bool EnabledChoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SetItemToRepresent");

	UItemInspectEvolutionChoiceEntry_C_SetItemToRepresent_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;
	params.EnabledChoice = EnabledChoice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UItemInspectEvolutionChoiceEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UItemInspectEvolutionChoiceEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UItemInspectEvolutionChoiceEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.PreConstruct");

	UItemInspectEvolutionChoiceEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature");

	UItemInspectEvolutionChoiceEntry_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.ExecuteUbergraph_ItemInspectEvolutionChoiceEntry
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::ExecuteUbergraph_ItemInspectEvolutionChoiceEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.ExecuteUbergraph_ItemInspectEvolutionChoiceEntry");

	UItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RecipeIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceSelected__DelegateSignature(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceSelected__DelegateSignature");

	UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceUnhovered__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceUnhovered__DelegateSignature");

	UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceUnhovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RecipeIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceHovered__DelegateSignature(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceHovered__DelegateSignature");

	UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceHovered__DelegateSignature_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
