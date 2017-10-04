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

// Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation
struct UNormalBangWrapper_C_Adjust_Bang_Image_Translation_Params
{
	struct FVector2D                                   Translation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version
struct UNormalBangWrapper_C_Update_Bang_Icon_Version_Params
{
	int                                                InCount;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle
struct UNormalBangWrapper_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged
struct UNormalBangWrapper_C_OnBangStateChanged_Params
{
	bool*                                              bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int*                                               Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout
struct UNormalBangWrapper_C_OnStopCallout_Params
{
};

// Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout
struct UNormalBangWrapper_C_OnStartCallout_Params
{
};

// Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct
struct UNormalBangWrapper_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper
struct UNormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
