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

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenCanEditPanel_C::CenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget");

	UOutpostScreenCanEditPanel_C_CenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCanEdit                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditPanel_C::SetMasterSwitch(bool bCanEdit)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch");

	UOutpostScreenCanEditPanel_C_SetMasterSwitch_Params params;
	params.bCanEdit = bCanEdit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerControllerOutpost* InOutpostOwner                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditPanel_C::Init(class AFortPlayerControllerOutpost* InOutpostOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init");

	UOutpostScreenCanEditPanel_C_Init_Params params;
	params.InOutpostOwner = InOutpostOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditPanel_C::BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");

	UOutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOutpostScreenCanEditPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Construct");

	UOutpostScreenCanEditPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (CPF_Parm)

void UOutpostScreenCanEditPanel_C::HandleJoined(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined");

	UOutpostScreenCanEditPanel_C_HandleJoined_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditPanel_C::HandleRemoved(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved");

	UOutpostScreenCanEditPanel_C_HandleRemoved_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature");

	UOutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOutpostScreenCanEditPanel_C::PartyUpdated(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated");

	UOutpostScreenCanEditPanel_C_PartyUpdated_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditPanel_C::ExecuteUbergraph_OutpostScreenCanEditPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel");

	UOutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
