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

// Function FullPartyMember.FullPartyMember_C.UpdateBang
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::UpdateBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateBang");

	UFullPartyMember_C_UpdateBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.HighlightEmptyBanner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BannerIsHighlighted            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::HighlightEmptyBanner(bool BannerIsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.HighlightEmptyBanner");

	UFullPartyMember_C_HighlightEmptyBanner_Params params;
	params.BannerIsHighlighted = BannerIsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.SetSecondaryStatDisplayVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::SetSecondaryStatDisplayVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.SetSecondaryStatDisplayVisibility");

	UFullPartyMember_C_SetSecondaryStatDisplayVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.SetStatDisplayStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InStyle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::SetStatDisplayStyle(class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.SetStatDisplayStyle");

	UFullPartyMember_C_SetStatDisplayStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateHomebaseRating
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::UpdateHomebaseRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateHomebaseRating");

	UFullPartyMember_C_UpdateHomebaseRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateStatDisplays
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::UpdateStatDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateStatDisplays");

	UFullPartyMember_C_UpdateStatDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.InitializeConnectedWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ConnectedWidget                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.InitializeConnectedWidget");

	UFullPartyMember_C_InitializeConnectedWidget_Params params;
	params.ConnectedWidget = ConnectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.MakeLocalPlayerConfirmActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           LocalPlayerAlone               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FConfirmationDialogAction> OutConfirmActions              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UFullPartyMember_C::MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.MakeLocalPlayerConfirmActions");

	UFullPartyMember_C_MakeLocalPlayerConfirmActions_Params params;
	params.LocalPlayerAlone = LocalPlayerAlone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConfirmActions != nullptr)
		*OutConfirmActions = params.OutConfirmActions;
}


// Function FullPartyMember.FullPartyMember_C.HandleLocalPlayerActionsResult
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::HandleLocalPlayerActionsResult(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.HandleLocalPlayerActionsResult");

	UFullPartyMember_C_HandleLocalPlayerActionsResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateLocalPlayerAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::UpdateLocalPlayerAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateLocalPlayerAction");

	UFullPartyMember_C_UpdateLocalPlayerAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.DuplicateConnectedWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFullPartyMemberConnected_C* UFullPartyMember_C::DuplicateConnectedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.DuplicateConnectedWidget");

	UFullPartyMember_C_DuplicateConnectedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyMember.FullPartyMember_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.Initialize");

	UFullPartyMember_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateDimensions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               NewDimensions                  (CPF_Parm, CPF_IsPlainOldData)

void UFullPartyMember_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateDimensions");

	UFullPartyMember_C_UpdateDimensions_Params params;
	params.NewDimensions = NewDimensions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ShowConnected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::ShowConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ShowConnected");

	UFullPartyMember_C_ShowConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ShowConnecting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::ShowConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ShowConnecting");

	UFullPartyMember_C_ShowConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ShowOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::ShowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ShowOpen");

	UFullPartyMember_C_ShowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateMemberInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberInfo                  (CPF_Parm)

void UFullPartyMember_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateMemberInfo");

	UFullPartyMember_C_UpdateMemberInfo_Params params;
	params.NewMemberInfo = NewMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.DialogResult_1F64669049EA0B1762273C8ED9CBB619
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::DialogResult_1F64669049EA0B1762273C8ED9CBB619(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.DialogResult_1F64669049EA0B1762273C8ED9CBB619");

	UFullPartyMember_C_DialogResult_1F64669049EA0B1762273C8ED9CBB619_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullPartyMember_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.Construct");

	UFullPartyMember_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.PreConstruct");

	UFullPartyMember_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.OnClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyMember_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.OnClicked");

	UFullPartyMember_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullPartyMember_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.Destruct");

	UFullPartyMember_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.OnPlayerInfoChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (CPF_Parm)

void UFullPartyMember_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.OnPlayerInfoChanged");

	UFullPartyMember_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ExecuteUbergraph_FullPartyMember
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyMember_C::ExecuteUbergraph_FullPartyMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ExecuteUbergraph_FullPartyMember");

	UFullPartyMember_C_ExecuteUbergraph_FullPartyMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
