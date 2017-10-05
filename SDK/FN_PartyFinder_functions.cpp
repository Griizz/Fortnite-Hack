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

// Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyFinder_C::UpdateDetailsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty");

	UPartyFinder_C_UpdateDetailsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        FriendId                       (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPartyFinder_C::HandleFriendPresenceUpdated(struct FUniqueNetIdRepl* FriendId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated");

	UPartyFinder_C_HandleFriendPresenceUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendId != nullptr)
		*FriendId = params.FriendId;
}


// Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UObject*> UPartyFinder_C::SocialTreeView_GetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory");

	UPartyFinder_C_SocialTreeView_GetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.IgnoreInvite
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyFinder_C::IgnoreInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.IgnoreInvite");

	UPartyFinder_C_IgnoreInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.SendInvite
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyFinder_C::SendInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.SendInvite");

	UPartyFinder_C_SendInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.GetFinderItemVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortSocialItem*         PartyFinderItem                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UPartyFinder_C::GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.GetFinderItemVisibility");

	UPartyFinder_C_GetFinderItemVisibility_Params params;
	params.PartyFinderItem = PartyFinderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.UpdateDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortSocialItem*         PartyFinderItem                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::UpdateDetails(class UFortSocialItem* PartyFinderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.UpdateDetails");

	UPartyFinder_C_UpdateDetails_Params params;
	params.PartyFinderItem = PartyFinderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandleSocialListChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*> SocialItems                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bExpandAll                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::HandleSocialListChanged(bool bExpandAll, TArray<class UFortSocialItem*>* SocialItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandleSocialListChanged");

	UPartyFinder_C_HandleSocialListChanged_Params params;
	params.bExpandAll = bExpandAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocialItems != nullptr)
		*SocialItems = params.SocialItems;
}


// Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortPartyTransition           Transition                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::HandlePartyTransitionStarted(EFortPartyTransition Transition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted");

	UPartyFinder_C_HandlePartyTransitionStarted_Params params;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyFinder_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BindDelegates");

	UPartyFinder_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.DialogResult_9763B6F5495998E5B2E944A5F646709C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::DialogResult_9763B6F5495998E5B2E944A5F646709C(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.DialogResult_9763B6F5495998E5B2E944A5F646709C");

	UPartyFinder_C_DialogResult_9763B6F5495998E5B2E944A5F646709C_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPartyFinder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.Construct");

	UPartyFinder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandlePartyDataChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPartyState             PartyData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPartyFinder_C::HandlePartyDataChanged(const struct FPartyState& PartyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandlePartyDataChanged");

	UPartyFinder_C_HandlePartyDataChanged_Params params;
	params.PartyData = PartyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature");

	UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.OnSocialListChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*> SocialItems                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPartyFinder_C::OnSocialListChanged(TArray<class UFortSocialItem*> SocialItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.OnSocialListChanged");

	UPartyFinder_C_OnSocialListChanged_Params params;
	params.SocialItems = SocialItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPartyFinder_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.OnActivated");

	UPartyFinder_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature");

	UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPartyFinder_C::ExecuteUbergraph_PartyFinder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder");

	UPartyFinder_C_ExecuteUbergraph_PartyFinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
