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

// Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText ABluGlo_Node_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString");

	ABluGlo_Node_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABluGlo_Node_C::OnRep_CanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract");

	ABluGlo_Node_C_OnRep_CanInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABluGlo_Node_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract");

	ABluGlo_Node_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABluGlo_Node_C::OnRep_DeActivateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects");

	ABluGlo_Node_C_OnRep_DeActivateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABluGlo_Node_C::OnRep_ActivateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects");

	ABluGlo_Node_C_OnRep_ActivateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABluGlo_Node_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript");

	ABluGlo_Node_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc
// (FUNC_BlueprintEvent)

void ABluGlo_Node_C::Trail__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc");

	ABluGlo_Node_C_Trail__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc
// (FUNC_BlueprintEvent)

void ABluGlo_Node_C::Trail__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc");

	ABluGlo_Node_C_Trail__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABluGlo_Node_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay");

	ABluGlo_Node_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGlo_Node_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract");

	ABluGlo_Node_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (CPF_Parm, CPF_IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (CPF_Parm)
// class UFortMissionEventParams* Params                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDataAsset*              EventContent                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  EventInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GenericInt                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          GenericFloat                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   GenericText                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (CPF_Parm)
// struct FFortMissionEvent       MissionEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABluGlo_Node_C::HandleMissionEvent_LocateBluGlo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo");

	ABluGlo_Node_C_HandleMissionEvent_LocateBluGlo_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (CPF_Parm, CPF_IsPlainOldData)
// float                          AnimDelay                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGlo_Node_C::ShowSpawnTrail(const struct FVector& StartLocation, float AnimDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail");

	ABluGlo_Node_C_ShowSpawnTrail_Params params;
	params.StartLocation = StartLocation;
	params.AnimDelay = AnimDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGlo_Node_C::ExecuteUbergraph_BluGlo_Node(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node");

	ABluGlo_Node_C_ExecuteUbergraph_BluGlo_Node_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
