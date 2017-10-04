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

// Function AthenaCompass.AthenaCompass_C.UpdateMarker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  MarkerImage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               MarkerWorldPosition            (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                CameraRotation                 (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 PawnLocation                   (CPF_Parm, CPF_IsPlainOldData)

void UAthenaCompass_C::UpdateMarker(class UImage* MarkerImage, const struct FVector2D& MarkerWorldPosition, const struct FRotator& CameraRotation, const struct FVector& PawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompass.AthenaCompass_C.UpdateMarker");

	UAthenaCompass_C_UpdateMarker_Params params;
	params.MarkerImage = MarkerImage;
	params.MarkerWorldPosition = MarkerWorldPosition;
	params.CameraRotation = CameraRotation;
	params.PawnLocation = PawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompass.AthenaCompass_C.UpdateCompassMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                InRot                          (CPF_Parm, CPF_IsPlainOldData)

void UAthenaCompass_C::UpdateCompassMaterial(const struct FRotator& InRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompass.AthenaCompass_C.UpdateCompassMaterial");

	UAthenaCompass_C_UpdateCompassMaterial_Params params;
	params.InRot = InRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompass.AthenaCompass_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaCompass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompass.AthenaCompass_C.Construct");

	UAthenaCompass_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompass.AthenaCompass_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaCompass_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompass.AthenaCompass_C.Tick");

	UAthenaCompass_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaCompass_C::ExecuteUbergraph_AthenaCompass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass");

	UAthenaCompass_C_ExecuteUbergraph_AthenaCompass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
