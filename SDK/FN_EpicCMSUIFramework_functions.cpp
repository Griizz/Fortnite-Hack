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

// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UEpicCMSTileBase::Launch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileBase.Launch");

	UEpicCMSTileBase_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// bool                           bIsLoading                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEpicCMSTileBase::DynamicHandleIconLoadingStateChanged(bool bIsLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged");

	UEpicCMSTileBase_DynamicHandleIconLoadingStateChanged_Params params;
	params.bIsLoading = bIsLoading;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            PageIndex                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEpicCMSTileCarousel::SetCurrentPageByIndex(int PageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex");

	UEpicCMSTileCarousel_SetCurrentPageByIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UEpicCMSTileCarousel::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage");

	UEpicCMSTileCarousel_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UEpicCMSTileCarousel::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage");

	UEpicCMSTileCarousel_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowNavigation                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged");

	UEpicCMSTileCarousel_NavigationVisibilityChanged_Params params;
	params.bShowNavigation = bShowNavigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 TileWidget                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded");

	UEpicCMSTileCarousel_HandleTilePageAdded_Params params;
	params.TileWidget = TileWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEpicCMSTileCarousel::GetCurrentPageIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex");

	UEpicCMSTileCarousel_GetCurrentPageIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
