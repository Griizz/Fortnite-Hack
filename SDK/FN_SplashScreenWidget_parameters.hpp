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

// Function SplashScreenWidget.SplashScreenWidget_C.OnFocusReceived
struct USplashScreenWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnMouseButtonDown
struct USplashScreenWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SplashScreenWidget.SplashScreenWidget_C.RelinquishInputFocus
struct USplashScreenWidget_C_RelinquishInputFocus_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.SetInputFocus
struct USplashScreenWidget_C_SetInputFocus_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
struct USplashScreenWidget_C_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnGameBootableInviteReceived
struct USplashScreenWidget_C_OnGameBootableInviteReceived_Params
{
	int*                                               UserIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnActivated
struct USplashScreenWidget_C_OnActivated_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
struct USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
