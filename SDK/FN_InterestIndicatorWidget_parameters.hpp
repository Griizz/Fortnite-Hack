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

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest
struct UInterestIndicatorWidget_C_RemovePointOfInterest_Params
{
	class AActor*                                      PointOfInterest;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Removed;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest
struct UInterestIndicatorWidget_C_InitPointOfInterest_Params
{
	class AActor*                                      PointOfInterest;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayText;                                              // (CPF_Parm)
	class UTexture2D*                                  DisplayImage;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage
struct UInterestIndicatorWidget_C_SetDisplayImage_Params
{
	class UTexture2D*                                  Icon;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText
struct UInterestIndicatorWidget_C_SetDisplayText_Params
{
	struct FText                                       Description;                                              // (CPF_Parm)
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Construct
struct UInterestIndicatorWidget_C_Construct_Params
{
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Destruct
struct UInterestIndicatorWidget_C_Destruct_Params
{
};

// Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget
struct UInterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
