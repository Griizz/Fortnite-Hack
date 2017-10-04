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

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Air Vehicles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Update_Air_Vehicles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Air Vehicles");

	UBP_ItemTransform_TabButton_C_Update_Air_Vehicles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Sea Vehicles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Update_Sea_Vehicles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Sea Vehicles");

	UBP_ItemTransform_TabButton_C_Update_Sea_Vehicles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Land Vehicles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Update_Land_Vehicles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Land Vehicles");

	UBP_ItemTransform_TabButton_C_Update_Land_Vehicles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update All Vehicles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Update_All_Vehicles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update All Vehicles");

	UBP_ItemTransform_TabButton_C_Update_All_Vehicles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Available Vehicles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Update_Available_Vehicles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Update Available Vehicles");

	UBP_ItemTransform_TabButton_C_Update_Available_Vehicles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ItemTransform_TabButton_C::Set_Tab_Id(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id");

	UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Refresh_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State");

	UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_Parm)

void UBP_ItemTransform_TabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon");

	UBP_ItemTransform_TabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_Parm)

void UBP_ItemTransform_TabButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text");

	UBP_ItemTransform_TabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged");

	UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ItemTransform_TabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct");

	UBP_ItemTransform_TabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_ItemTransform_TabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo");

	UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct");

	UBP_ItemTransform_TabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected");

	UBP_ItemTransform_TabButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected");

	UBP_ItemTransform_TabButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered");

	UBP_ItemTransform_TabButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ItemTransform_TabButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered");

	UBP_ItemTransform_TabButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ItemTransform_TabButton_C::ExecuteUbergraph_BP_ItemTransform_TabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton");

	UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
