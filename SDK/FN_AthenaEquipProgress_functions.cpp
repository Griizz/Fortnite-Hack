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

// Function AthenaEquipProgress.AthenaEquipProgress_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaEquipProgress_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.Tick");

	UAthenaEquipProgress_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaEquipProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.Construct");

	UAthenaEquipProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CueName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaEquipProgress_C::OnUIGameplayCue_Event_1(const struct FName& CueName, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_1");

	UAthenaEquipProgress_C_OnUIGameplayCue_Event_1_Params params;
	params.CueName = CueName;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaEquipProgress_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct");

	UAthenaEquipProgress_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaEquipProgress_C::ExecuteUbergraph_AthenaEquipProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress");

	UAthenaEquipProgress_C_ExecuteUbergraph_AthenaEquipProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
