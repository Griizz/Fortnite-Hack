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

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Get Item Description
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   OutDescription                 (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFrontEndRewards_ListRewards_C::Get_Item_Description(class UFortItem* Object, struct FText* OutDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Get Item Description");

	UFrontEndRewards_ListRewards_C_Get_Item_Description_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDescription != nullptr)
		*OutDescription = params.OutDescription;

	return params.ReturnValue;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Set DisplayName and Description Widget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Description                    (CPF_Parm)

void UFrontEndRewards_ListRewards_C::Set_DisplayName_and_Description_Widget(class UFortItem* Item, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Set DisplayName and Description Widget");

	UFrontEndRewards_ListRewards_C_Set_DisplayName_and_Description_Widget_Params params;
	params.Item = Item;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Clear DisplayName and Description Widgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::Clear_DisplayName_and_Description_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Clear DisplayName and Description Widgets");

	UFrontEndRewards_ListRewards_C_Clear_DisplayName_and_Description_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SkipTransitionIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SkipTransitionIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SkipTransitionIn");

	UFrontEndRewards_ListRewards_C_SkipTransitionIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TickTransitionIn
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::TickTransitionIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TickTransitionIn");

	UFrontEndRewards_ListRewards_C_TickTransitionIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BindEvents
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BindEvents");

	UFrontEndRewards_ListRewards_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleTransitionInComplete
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::HandleTransitionInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleTransitionInComplete");

	UFrontEndRewards_ListRewards_C_HandleTransitionInComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Reset");

	UFrontEndRewards_ListRewards_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddInputActions
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::AddInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddInputActions");

	UFrontEndRewards_ListRewards_C_AddInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DisableInputActions
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::DisableInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DisableInputActions");

	UFrontEndRewards_ListRewards_C_DisableInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.EnableInputActions
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::EnableInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.EnableInputActions");

	UFrontEndRewards_ListRewards_C_EnableInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PopulateFromCardsList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_ListRewards_C::PopulateFromCardsList(TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PopulateFromCardsList");

	UFrontEndRewards_ListRewards_C_PopulateFromCardsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleInspectAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Committed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleInspectAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleInspectAction");

	UFrontEndRewards_ListRewards_C_HandleInspectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleScrollAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Committed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleScrollAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleScrollAction");

	UFrontEndRewards_ListRewards_C_HandleScrollAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCollectAllAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Committed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleCollectAllAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCollectAllAction");

	UFrontEndRewards_ListRewards_C_HandleCollectAllAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetArrowVisibility
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SetArrowVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetArrowVisibility");

	UFrontEndRewards_ListRewards_C_SetArrowVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastPopInFinished
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::HandleLastPopInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastPopInFinished");

	UFrontEndRewards_ListRewards_C_HandleLastPopInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleOutroAnimFinished
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::HandleOutroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleOutroAnimFinished");

	UFrontEndRewards_ListRewards_C_HandleOutroAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectCard
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InNewIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::SelectCard(int InNewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectCard");

	UFrontEndRewards_ListRewards_C_SelectCard_Params params;
	params.InNewIndex = InNewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardSelected
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::SetCardSelected(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardSelected");

	UFrontEndRewards_ListRewards_C_SetCardSelected_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCardClicked
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleCardClicked(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCardClicked");

	UFrontEndRewards_ListRewards_C_HandleCardClicked_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ClearCards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::ClearCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ClearCards");

	UFrontEndRewards_ListRewards_C_ClearCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PlayCardSlide
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StaggerDelay                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::PlayCardSlide(class URewards_ItemCard_C* RewardsItemCard, float StaggerDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PlayCardSlide");

	UFrontEndRewards_ListRewards_C_PlayCardSlide_Params params;
	params.RewardsItemCard = RewardsItemCard;
	params.StaggerDelay = StaggerDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetItemDescription
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SetItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetItemDescription");

	UFrontEndRewards_ListRewards_C_SetItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardAlignment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 CardWidget                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SelectionIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::SetCardAlignment(class UWidget* CardWidget, int SelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardAlignment");

	UFrontEndRewards_ListRewards_C_SetCardAlignment_Params params;
	params.CardWidget = CardWidget;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectPreviousCard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SelectPreviousCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectPreviousCard");

	UFrontEndRewards_ListRewards_C_SelectPreviousCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastSlideAnimFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::HandleLastSlideAnimFinished(class URewards_ItemCard_C* RewardsItemCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastSlideAnimFinished");

	UFrontEndRewards_ListRewards_C_HandleLastSlideAnimFinished_Params params;
	params.RewardsItemCard = RewardsItemCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.GetCardAlignment
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CardQueueIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CardListIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Alignment                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FAnchors                Anchors                        (CPF_Parm, CPF_OutParm)
// float                          Scale                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Offset                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Translation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          DropShadowDepth                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::GetCardAlignment(int CardQueueIndex, int CardListIndex, struct FVector2D* Alignment, struct FAnchors* Anchors, float* Scale, float* Offset, float* Angle, struct FVector2D* Translation, float* DropShadowDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.GetCardAlignment");

	UFrontEndRewards_ListRewards_C_GetCardAlignment_Params params;
	params.CardQueueIndex = CardQueueIndex;
	params.CardListIndex = CardListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alignment != nullptr)
		*Alignment = params.Alignment;
	if (Anchors != nullptr)
		*Anchors = params.Anchors;
	if (Scale != nullptr)
		*Scale = params.Scale;
	if (Offset != nullptr)
		*Offset = params.Offset;
	if (Angle != nullptr)
		*Angle = params.Angle;
	if (Translation != nullptr)
		*Translation = params.Translation;
	if (DropShadowDepth != nullptr)
		*DropShadowDepth = params.DropShadowDepth;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectNextCard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::SelectNextCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectNextCard");

	UFrontEndRewards_ListRewards_C_SelectNextCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddCard
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::AddCard(class URewards_ItemCard_C* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddCard");

	UFrontEndRewards_ListRewards_C_AddCard_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.InitDesignView
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::InitDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.InitDesignView");

	UFrontEndRewards_ListRewards_C_InitDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PreConstruct");

	UFrontEndRewards_ListRewards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DelayedCheckScroll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::DelayedCheckScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DelayedCheckScroll");

	UFrontEndRewards_ListRewards_C_DelayedCheckScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Construct");

	UFrontEndRewards_ListRewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionInBegin
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::TransitionInBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionInBegin");

	UFrontEndRewards_ListRewards_C_TransitionInBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionOutBegin
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::TransitionOutBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionOutBegin");

	UFrontEndRewards_ListRewards_C_TransitionOutBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationLeft
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationLeft");

	UFrontEndRewards_ListRewards_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationRight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationRight");

	UFrontEndRewards_ListRewards_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnActivated");

	UFrontEndRewards_ListRewards_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnDeactivated");

	UFrontEndRewards_ListRewards_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnPrimaryAction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_ListRewards_C::OnPrimaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnPrimaryAction");

	UFrontEndRewards_ListRewards_C_OnPrimaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ExecuteUbergraph_FrontEndRewards_ListRewards
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_ListRewards_C::ExecuteUbergraph_FrontEndRewards_ListRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ExecuteUbergraph_FrontEndRewards_ListRewards");

	UFrontEndRewards_ListRewards_C_ExecuteUbergraph_FrontEndRewards_ListRewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
