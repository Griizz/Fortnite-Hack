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

// Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (CPF_Parm, CPF_IsPlainOldData)

void UNormalBangWrapper_C::Adjust_Bang_Image_Translation(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation");

	UNormalBangWrapper_C_Adjust_Bang_Image_Translation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InCount                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNormalBangWrapper_C::Update_Bang_Icon_Version(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version");

	UNormalBangWrapper_C_Update_Bang_Icon_Version_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNormalBangWrapper_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle");

	UNormalBangWrapper_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNormalBangWrapper_C::OnBangStateChanged(bool* bEnabled, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged");

	UNormalBangWrapper_C_OnBangStateChanged_Params params;
	params.bEnabled = bEnabled;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNormalBangWrapper_C::OnStopCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout");

	UNormalBangWrapper_C_OnStopCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNormalBangWrapper_C::OnStartCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout");

	UNormalBangWrapper_C_OnStartCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNormalBangWrapper_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct");

	UNormalBangWrapper_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNormalBangWrapper_C::ExecuteUbergraph_NormalBangWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper");

	UNormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
