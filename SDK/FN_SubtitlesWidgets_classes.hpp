#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// 0x0030 (0x0058 - 0x0028)
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UOverlays*                                   SourceSubtitles;                                          // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.FortMediaSubtitlesPlayer");
		return ptr;
	}


	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


// Class SubtitlesWidgets.SubtitleDisplay
// 0x02B0 (0x03C8 - 0x0118)
class USubtitleDisplay : public UWidget
{
public:
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0118(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              WrapTextAt;                                               // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x234];                                     // 0x0194(0x0234) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.SubtitleDisplay");
		return ptr;
	}


	bool HasSubtitles();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
