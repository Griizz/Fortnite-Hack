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

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bBangEnabled                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestsCountIconTabButton_C::Update_Bang_State(bool bBangEnabled, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State");

	UQuestsCountIconTabButton_C_Update_Bang_State_Params params;
	params.bBangEnabled = bBangEnabled;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::Update_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text");

	UQuestsCountIconTabButton_C_Update_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestsCountIconTabButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle");

	UQuestsCountIconTabButton_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText");

	UQuestsCountIconTabButton_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_Parm)

void UQuestsCountIconTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon");

	UQuestsCountIconTabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_Parm)

void UQuestsCountIconTabButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text");

	UQuestsCountIconTabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged");

	UQuestsCountIconTabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestsCountIconTabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct");

	UQuestsCountIconTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UQuestsCountIconTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo");

	UQuestsCountIconTabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnSelected");

	UQuestsCountIconTabButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnDeselected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnDeselected");

	UQuestsCountIconTabButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct");

	UQuestsCountIconTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnHovered");

	UQuestsCountIconTabButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnUnhovered");

	UQuestsCountIconTabButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestsCountIconTabButton_C::Handle_Quest_Count_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated");

	UQuestsCountIconTabButton_C_Handle_Quest_Count_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestsCountIconTabButton_C::ExecuteUbergraph_QuestsCountIconTabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton");

	UQuestsCountIconTabButton_C_ExecuteUbergraph_QuestsCountIconTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
