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

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Send to Skill Tree
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExpeditionSquadSlotButton_C::Send_to_Skill_Tree()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Send to Skill Tree");

	UExpeditionSquadSlotButton_C_Send_to_Skill_Tree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   OutSquadId                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OutSquadSlotIndex              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<EFortItemType>          ItemTypes                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UExpeditionSquadSlotButton_C::Get_Squad_Data(struct FName* OutSquadId, int* OutSquadSlotIndex, TArray<EFortItemType>* ItemTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data");

	UExpeditionSquadSlotButton_C_Get_Squad_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSquadId != nullptr)
		*OutSquadId = params.OutSquadId;
	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = params.OutSquadSlotIndex;
	if (ItemTypes != nullptr)
		*ItemTypes = params.ItemTypes;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UExpeditionSquadSlotButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct");

	UExpeditionSquadSlotButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnClicked");

	UExpeditionSquadSlotButton_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UExpeditionSquadSlotButton_C::SquadSlotWidgetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated");

	UExpeditionSquadSlotButton_C_SquadSlotWidgetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UExpeditionSquadSlotButton_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP");

	UExpeditionSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnDoubleClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnDoubleClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnDoubleClicked");

	UExpeditionSquadSlotButton_C_OnDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSelected");

	UExpeditionSquadSlotButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UExpeditionSquadSlotButton_C::ExecuteUbergraph_ExpeditionSquadSlotButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton");

	UExpeditionSquadSlotButton_C_ExecuteUbergraph_ExpeditionSquadSlotButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExpeditionSquadSlotButton_C::OnSquadSlotOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature");

	UExpeditionSquadSlotButton_C_OnSquadSlotOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UExpeditionSquadSlotButton_C::OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature");

	UExpeditionSquadSlotButton_C_OnSquadSlotUpdated__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UExpeditionSquadSlotButton_C::OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature");

	UExpeditionSquadSlotButton_C_OnSquadSlotSelected__DelegateSignature_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
