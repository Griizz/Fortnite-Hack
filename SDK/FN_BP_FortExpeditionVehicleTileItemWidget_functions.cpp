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

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Name(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name");

	UBP_FortExpeditionVehicleTileItemWidget_C_Set_Name_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Rating(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating");

	UBP_FortExpeditionVehicleTileItemWidget_C_Set_Rating_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Icon(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon");

	UBP_FortExpeditionVehicleTileItemWidget_C_Set_Icon_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject**                InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView**        OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.SetData");

	UBP_FortExpeditionVehicleTileItemWidget_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionVehicleTileItemWidget_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnClicked");

	UBP_FortExpeditionVehicleTileItemWidget_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget");

	UBP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::OnVehicleSelected__DelegateSignature(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature");

	UBP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
