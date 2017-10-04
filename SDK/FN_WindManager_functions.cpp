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

// Function WindManager.WindManager_C.CeilVector
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USceneCaptureComponent2D* Scene_Capture                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AWindManager_C::CeilVector(float Scale, class USceneCaptureComponent2D* Scene_Capture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.CeilVector");

	AWindManager_C_CeilVector_Params params;
	params.Scale = Scale;
	params.Scene_Capture = Scene_Capture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindManager.WindManager_C.ActivateTestContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::ActivateTestContent(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.ActivateTestContent");

	AWindManager_C_ActivateTestContent_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.SetRenderOnlyAssets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::SetRenderOnlyAssets(class UPrimitiveComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.SetRenderOnlyAssets");

	AWindManager_C_SetRenderOnlyAssets_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.InitializeOrthoSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWindManager_C::InitializeOrthoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.InitializeOrthoSettings");

	AWindManager_C_InitializeOrthoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWindManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.UserConstructionScript");

	AWindManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Add Render To Texture Particle
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              InTransform                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWindManager_C::Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Add Render To Texture Particle");

	AWindManager_C_Add_Render_To_Texture_Particle_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWorldReady
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWindManager_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.OnWorldReady");

	AWindManager_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.ReceiveTick");

	AWindManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Register player for render to texture purposes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerPawn_Generic_C*   Player_Pawn_Generic            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::Register_player_for_render_to_texture_purposes(class APlayerPawn_Generic_C* Player_Pawn_Generic)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Register player for render to texture purposes");

	AWindManager_C_Register_player_for_render_to_texture_purposes_Params params;
	params.Player_Pawn_Generic = Player_Pawn_Generic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::ExecuteUbergraph_WindManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.ExecuteUbergraph_WindManager");

	AWindManager_C_ExecuteUbergraph_WindManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
