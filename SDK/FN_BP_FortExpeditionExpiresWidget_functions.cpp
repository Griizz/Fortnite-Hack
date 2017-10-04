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

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Utc Now Offset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimespan UBP_FortExpeditionExpiresWidget_C::Get_Utc_Now_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Utc Now Offset");

	UBP_FortExpeditionExpiresWidget_C_Get_Utc_Now_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::Refresh_Expiration_Timer(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer");

	UBP_FortExpeditionExpiresWidget_C_Refresh_Expiration_Timer_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::SetData(class UFortExpeditionItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData");

	UBP_FortExpeditionExpiresWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FortExpeditionExpiresWidget_C::OnExpeditionExpirationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated");

	UBP_FortExpeditionExpiresWidget_C_OnExpeditionExpirationUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct");

	UBP_FortExpeditionExpiresWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget");

	UBP_FortExpeditionExpiresWidget_C_ExecuteUbergraph_BP_FortExpeditionExpiresWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
