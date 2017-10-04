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

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Removed                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInterestIndicatorWidget_C::RemovePointOfInterest(class AActor* PointOfInterest, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest");

	UInterestIndicatorWidget_C_RemovePointOfInterest_Params params;
	params.PointOfInterest = PointOfInterest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   DisplayText                    (CPF_Parm)
// class UTexture2D*              DisplayImage                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInterestIndicatorWidget_C::InitPointOfInterest(class AActor* PointOfInterest, const struct FText& DisplayText, class UTexture2D* DisplayImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest");

	UInterestIndicatorWidget_C_InitPointOfInterest_Params params;
	params.PointOfInterest = PointOfInterest;
	params.DisplayText = DisplayText;
	params.DisplayImage = DisplayImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInterestIndicatorWidget_C::SetDisplayImage(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage");

	UInterestIndicatorWidget_C_SetDisplayImage_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_Parm)

void UInterestIndicatorWidget_C::SetDisplayText(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText");

	UInterestIndicatorWidget_C_SetDisplayText_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInterestIndicatorWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterestIndicatorWidget.InterestIndicatorWidget_C.Construct");

	UInterestIndicatorWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInterestIndicatorWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterestIndicatorWidget.InterestIndicatorWidget_C.Destruct");

	UInterestIndicatorWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInterestIndicatorWidget_C::ExecuteUbergraph_InterestIndicatorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget");

	UInterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
