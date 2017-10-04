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

// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString*                TheaterId                      (CPF_Parm, CPF_ZeroConstructor)
// class AWorldMapPin*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AWorldMapPin* AWM_PinManager_C::CreateWorldMapPin(struct FString* TheaterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin");

	AWM_PinManager_C_CreateWorldMapPin_Params params;
	params.TheaterId = TheaterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WM_PinManager.WM_PinManager_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWM_PinManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.UserConstructionScript");

	AWM_PinManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWM_PinManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay");

	AWM_PinManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWM_PinManager_C::ExecuteUbergraph_WM_PinManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager");

	AWM_PinManager_C_ExecuteUbergraph_WM_PinManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
