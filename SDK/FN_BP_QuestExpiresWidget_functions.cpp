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

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.GetFortPC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFortPlayerController*   AsFort_Player_Controller       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_QuestExpiresWidget_C::GetFortPC(class AFortPlayerController** AsFort_Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.GetFortPC");

	UBP_QuestExpiresWidget_C_GetFortPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Player_Controller != nullptr)
		*AsFort_Player_Controller = params.AsFort_Player_Controller;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.Refresh Expiration Timer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_QuestExpiresWidget_C::Refresh_Expiration_Timer(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.Refresh Expiration Timer");

	UBP_QuestExpiresWidget_C_Refresh_Expiration_Timer_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_QuestExpiresWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.PreConstruct");

	UBP_QuestExpiresWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem**         InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_QuestExpiresWidget_C::SetData(class UFortQuestItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.SetData");

	UBP_QuestExpiresWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.OnQuestExpirationUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_QuestExpiresWidget_C::OnQuestExpirationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.OnQuestExpirationUpdated");

	UBP_QuestExpiresWidget_C_OnQuestExpirationUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.ExecuteUbergraph_BP_QuestExpiresWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_QuestExpiresWidget_C::ExecuteUbergraph_BP_QuestExpiresWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.ExecuteUbergraph_BP_QuestExpiresWidget");

	UBP_QuestExpiresWidget_C_ExecuteUbergraph_BP_QuestExpiresWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
