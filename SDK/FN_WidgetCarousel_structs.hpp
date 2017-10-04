#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// 0x0888 (0x0890 - 0x0008)
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HighlightBrush;                                           // 0x0008(0x0090) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                LeftButtonStyle;                                          // 0x0098(0x02A8) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                CenterButtonStyle;                                        // 0x0340(0x02A8) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                RightButtonStyle;                                         // 0x05E8(0x02A8) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// 0x03C8 (0x03D0 - 0x0008)
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                InnerButtonStyle;                                         // 0x0008(0x02A8)
	struct FSlateBrush                                 NavigationButtonLeftImage;                                // 0x02B0(0x0090)
	struct FSlateBrush                                 NavigationButtonRightImage;                               // 0x0340(0x0090)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
