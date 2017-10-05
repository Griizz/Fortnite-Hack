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

// Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hover                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyMember_C::HandleMouseHoverVisualState(bool Hover)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState");

	UMiniPartyMember_C_HandleMouseHoverVisualState_Params params;
	params.Hover = Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMiniPartyMember_C::OpenPartyFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder");

	UMiniPartyMember_C_OpenPartyFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UMiniPartyMember_C::GetLeaderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility");

	UMiniPartyMember_C_GetLeaderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberInfo                  (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMiniPartyMember_C::UpdateMemberInfo(struct FFortTeamMemberInfo* NewMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo");

	UMiniPartyMember_C_UpdateMemberInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewMemberInfo != nullptr)
		*NewMemberInfo = params.NewMemberInfo;
}


// Function MiniPartyMember.MiniPartyMember_C.ShowOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMiniPartyMember_C::ShowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ShowOpen");

	UMiniPartyMember_C_ShowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMiniPartyMember_C::ShowConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ShowConnected");

	UMiniPartyMember_C_ShowConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnecting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMiniPartyMember_C::ShowConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ShowConnecting");

	UMiniPartyMember_C_ShowConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMiniPartyMember_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.Destruct");

	UMiniPartyMember_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (CPF_Parm)

void UMiniPartyMember_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged");

	UMiniPartyMember_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyMember_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.PreConstruct");

	UMiniPartyMember_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiniPartyMember_C::ExecuteUbergraph_MiniPartyMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember");

	UMiniPartyMember_C_ExecuteUbergraph_MiniPartyMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
