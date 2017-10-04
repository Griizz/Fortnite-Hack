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

// Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMessageCenterListItem_C::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren");

	UMessageCenterListItem_C_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMessageCenterListItem_C::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel");

	UMessageCenterListItem_C_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMessageCenterListItem_C::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded");

	UMessageCenterListItem_C_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.GetData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UMessageCenterListItem_C::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.GetData");

	UMessageCenterListItem_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)
// class UCommonTextBlock*        TextBlock                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterListItem_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.ShowText");

	UMessageCenterListItem_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUINotification*     MESSAGE                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterListItem_C::SetMessage(class UFortUINotification* MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetMessage");

	UMessageCenterListItem_C_SetMessage_Params params;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMessageCenterListItem_C::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool");

	UMessageCenterListItem_C_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMessageCenterListItem_C::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool");

	UMessageCenterListItem_C_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageCenterListItem_C::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked");

	UMessageCenterListItem_C_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UMessageCenterListItem_C::RegisterOnClicked(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked");

	UMessageCenterListItem_C_RegisterOnClicked_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bExpanded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterListItem_C::SetExpanded(bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded");

	UMessageCenterListItem_C_SetExpanded_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterListItem_C::SetIndexInList(int InIndexInList)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList");

	UMessageCenterListItem_C_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageCenterListItem_C::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion");

	UMessageCenterListItem_C_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.Reset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageCenterListItem_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.Reset");

	UMessageCenterListItem_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView*         OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterListItem_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetData");

	UMessageCenterListItem_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMessageCenterListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.Construct");

	UMessageCenterListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.SetSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterListItem_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.SetSelected");

	UMessageCenterListItem_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterListItem_C::ExecuteUbergraph_MessageCenterListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem");

	UMessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
