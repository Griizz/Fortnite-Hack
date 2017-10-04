#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
struct UEpicCMSTileBase_Launch_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged
struct UEpicCMSTileBase_DynamicHandleIconLoadingStateChanged_Params
{
	bool                                               bIsLoading;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
struct UEpicCMSTileCarousel_SetCurrentPageByIndex_Params
{
	int                                                PageIndex;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
struct UEpicCMSTileCarousel_PreviousPage_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
struct UEpicCMSTileCarousel_NextPage_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
struct UEpicCMSTileCarousel_NavigationVisibilityChanged_Params
{
	bool                                               bShowNavigation;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
struct UEpicCMSTileCarousel_HandleTilePageAdded_Params
{
	class UWidget*                                     TileWidget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
struct UEpicCMSTileCarousel_GetCurrentPageIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
