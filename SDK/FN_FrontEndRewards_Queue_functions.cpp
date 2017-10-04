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

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconInit
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Queue_C::TickIconInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconInit");

	UFrontEndRewards_Queue_C_TickIconInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartInitAnimation
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Queue_C::StartInitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartInitAnimation");

	UFrontEndRewards_Queue_C_StartInitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.SlideIcon
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          Icon                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Queue_C::SlideIcon(class URewardsIcon_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.SlideIcon");

	UFrontEndRewards_Queue_C_SlideIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartDequeueAnimation
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Queue_C::StartDequeueAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartDequeueAnimation");

	UFrontEndRewards_Queue_C_StartDequeueAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconSlide
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Queue_C::TickIconSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconSlide");

	UFrontEndRewards_Queue_C_TickIconSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.HandleIconHideAnimationFinished
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          Icon                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Queue_C::HandleIconHideAnimationFinished(class URewardsIcon_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.HandleIconHideAnimationFinished");

	UFrontEndRewards_Queue_C_HandleIconHideAnimationFinished_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PopIcon
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          OutIcon                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Queue_C::PopIcon(class URewardsIcon_C** OutIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PopIcon");

	UFrontEndRewards_Queue_C_PopIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.RandomizeDesignView
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Queue_C::RandomizeDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.RandomizeDesignView");

	UFrontEndRewards_Queue_C_RandomizeDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.CloneIconList
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class URewardsIcon_C*>  IconListClone                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UFrontEndRewards_Queue_C::CloneIconList(TArray<class URewardsIcon_C*>* IconListClone)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.CloneIconList");

	UFrontEndRewards_Queue_C_CloneIconList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconListClone != nullptr)
		*IconListClone = params.IconListClone;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ClearQueue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Queue_C::ClearQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ClearQueue");

	UFrontEndRewards_Queue_C_ClearQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.DequeueReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* OutReward                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Queue_C::DequeueReward(class UFortRewardNotificationData** OutReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.DequeueReward");

	UFrontEndRewards_Queue_C_DequeueReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReward != nullptr)
		*OutReward = params.OutReward;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.QueueReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* RewardItem                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class URewardsIcon_C*          OutIcon                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Queue_C::QueueReward(class UFortRewardNotificationData* RewardItem, bool IsDesignTime, class URewardsIcon_C** OutIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.QueueReward");

	UFrontEndRewards_Queue_C_QueueReward_Params params;
	params.RewardItem = RewardItem;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Queue_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PreConstruct");

	UFrontEndRewards_Queue_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ExecuteUbergraph_FrontEndRewards_Queue
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Queue_C::ExecuteUbergraph_FrontEndRewards_Queue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ExecuteUbergraph_FrontEndRewards_Queue");

	UFrontEndRewards_Queue_C_ExecuteUbergraph_FrontEndRewards_Queue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
