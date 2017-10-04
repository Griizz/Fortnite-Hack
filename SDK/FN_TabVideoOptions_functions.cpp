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

// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabVideoOptions_C::Initialize_Display_Resolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions");

	UTabVideoOptions_C_Initialize_Display_Resolutions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Update Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reset_Quality_Selector         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Update_Data(bool Reset_Quality_Selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Update Data");

	UTabVideoOptions_C_Update_Data_Params params;
	params.Reset_Quality_Selector = Reset_Quality_Selector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabVideoOptions_C::Initialize_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Initialize Data");

	UTabVideoOptions_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::View_Distance_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.View Distance Changed");

	UTabVideoOptions_C_View_Distance_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Discrete Resolution Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Discrete_Resolution_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Discrete Resolution Changed");

	UTabVideoOptions_C_Discrete_Resolution_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Shadows_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Shadows Changed");

	UTabVideoOptions_C_Shadows_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Anti_Aliasing_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed");

	UTabVideoOptions_C_Anti_Aliasing_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Textures_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Textures Changed");

	UTabVideoOptions_C_Textures_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Post_Processing_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed");

	UTabVideoOptions_C_Post_Processing_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Effects_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Effects Changed");

	UTabVideoOptions_C_Effects_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Quality_Changed(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Quality Changed");

	UTabVideoOptions_C_Quality_Changed_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabVideoOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab");

	UTabVideoOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Window_Mode__Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed");

	UTabVideoOptions_C_Window_Mode__Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::CustomEvent_23(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23");

	UTabVideoOptions_C_CustomEvent_23_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_24
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::CustomEvent_24(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent_24");

	UTabVideoOptions_C_CustomEvent_24_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTabVideoOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Construct");

	UTabVideoOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabVideoOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CenterOnTab");

	UTabVideoOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::VSync_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.VSync Changed");

	UTabVideoOptions_C_VSync_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Motion_Blur_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed");

	UTabVideoOptions_C_Motion_Blur_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::CustomEvent(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent");

	UTabVideoOptions_C_CustomEvent_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::CustomEvent_2(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.CustomEvent_2");

	UTabVideoOptions_C_CustomEvent_2_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.PreConstruct");

	UTabVideoOptions_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::ExecuteUbergraph_TabVideoOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions");

	UTabVideoOptions_C_ExecuteUbergraph_TabVideoOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTabVideoOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature");

	UTabVideoOptions_C_Disable_Overlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Accept_Input                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTabVideoOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature");

	UTabVideoOptions_C_Enable_Overlay__DelegateSignature_Params params;
	params.Accept_Input = Accept_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
