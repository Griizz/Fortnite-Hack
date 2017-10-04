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

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Utc Now Offset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimespan UBP_FortExpeditionReturnsWidget_C::Get_Utc_Now_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Utc Now Offset");

	UBP_FortExpeditionReturnsWidget_C_Get_Utc_Now_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Expedition Item Definition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortExpeditionItemDefinition* ItemDef                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::Get_Expedition_Item_Definition(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition** ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Expedition Item Definition");

	UBP_FortExpeditionReturnsWidget_C_Get_Expedition_Item_Definition_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDef != nullptr)
		*ItemDef = params.ItemDef;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Progress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::Set_Expedition_Return_Progress(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Progress");

	UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Progress_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Time
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::Set_Expedition_Return_Time(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Time");

	UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Time_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Refresh In Progress Widgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::Refresh_In_Progress_Widgets(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Refresh In Progress Widgets");

	UBP_FortExpeditionReturnsWidget_C_Refresh_In_Progress_Widgets_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::SetData(class UFortExpeditionItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.SetData");

	UBP_FortExpeditionReturnsWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionInProgressUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionReturnsWidget_C::OnExpeditionInProgressUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionInProgressUpdated");

	UBP_FortExpeditionReturnsWidget_C_OnExpeditionInProgressUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FortExpeditionReturnsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Construct");

	UBP_FortExpeditionReturnsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.PreConstruct");

	UBP_FortExpeditionReturnsWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.ExecuteUbergraph_BP_FortExpeditionReturnsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::ExecuteUbergraph_BP_FortExpeditionReturnsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.ExecuteUbergraph_BP_FortExpeditionReturnsWidget");

	UBP_FortExpeditionReturnsWidget_C_ExecuteUbergraph_BP_FortExpeditionReturnsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionCompleted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionReturnsWidget_C::OnExpeditionCompleted__DelegateSignature(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionCompleted__DelegateSignature");

	UBP_FortExpeditionReturnsWidget_C_OnExpeditionCompleted__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
