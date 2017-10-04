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

// Class SocialDefaults.ChatColorSchemeDataAsset
// 0x0120 (0x0148 - 0x0028)
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                            ChatColorData;                                            // 0x0028(0x0120) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.ChatColorSchemeDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialActionButtonStyleDataAsset
// 0x02A8 (0x02D0 - 0x0028)
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                                Style;                                                    // 0x0028(0x02A8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialActionButtonStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeColorSchemeDataAsset
// 0x0050 (0x0078 - 0x0028)
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                      Style;                                                    // 0x0028(0x0050) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeColorSchemeDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeMarginsDataAsset
// 0x0068 (0x0090 - 0x0028)
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                          Style;                                                    // 0x0028(0x0064) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeMarginsDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeStyleDataAsset
// 0x0850 (0x0878 - 0x0028)
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                            Style;                                                    // 0x0028(0x0850) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatMarkupStyleDataAsset
// 0x0670 (0x0698 - 0x0028)
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                            Style;                                                    // 0x0028(0x0670) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatMarkupStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatStyleDataAsset
// 0x1490 (0x14B8 - 0x0028)
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                                  Style;                                                    // 0x0028(0x1490) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialCheckBoxStyleDataAsset
// 0x05E0 (0x0608 - 0x0028)
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0028(0x05E0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialCheckBoxStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialFontStyleDataAsset
// 0x02A0 (0x02C8 - 0x0028)
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                            Style;                                                    // 0x0028(0x02A0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialFontStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialListMarginsDataAsset
// 0x0200 (0x0228 - 0x0028)
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                          Style;                                                    // 0x0028(0x0200) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialListMarginsDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialListStyleDataAsset
// 0x2870 (0x2898 - 0x0028)
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                            Style;                                                    // 0x0028(0x2870) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialListStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialProfanityDataAsset
// 0x0010 (0x0038 - 0x0028)
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                      ProfanityData;                                            // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialProfanityDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialRadioBoxStyleDataAsset
// 0x05E0 (0x0608 - 0x0028)
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0028(0x05E0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialRadioBoxStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialScrollBarStyleDataAsset
// 0x0518 (0x0540 - 0x0028)
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                             Style;                                                    // 0x0028(0x0518) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialScrollBarStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialSoundSchemaDataAsset
// 0x0048 (0x0070 - 0x0028)
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                          SoundSchema;                                              // 0x0028(0x0048) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialSoundSchemaDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialStyleDataAsset
// 0x6E70 (0x6E98 - 0x0028)
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*                   SmallFontStyle;                                           // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialFontStyleDataAsset*                   NormalFontStyle;                                          // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialFontStyleDataAsset*                   LargeFontStyle;                                           // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialFontStyleDataAsset*                   ChatFontStyle;                                            // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialListStyleDataAsset*                   SocialListStyle;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialListMarginsDataAsset*                 SocialListMargins;                                        // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatStyleDataAsset*                   ChatStyle;                                                // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatChromeStyleDataAsset*             ChatChromeStyle;                                          // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatChromeMarginsDataAsset*           ChatChromeMargins;                                        // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatChromeColorSchemeDataAsset*       ChatChromeColorScheme;                                    // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChatColorSchemeDataAsset*                   ChatColorScheme;                                          // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialSoundSchemaDataAsset*                 SoundSchema;                                              // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialActionButtonStyleDataAsset*           ActionButtonStyle;                                        // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialCheckBoxStyleDataAsset*               CheckBoxStyle;                                            // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialRadioBoxStyleDataAsset*               RadioBoxStyle;                                            // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialScrollBarStyleDataAsset*              ScrollBoxStyle;                                           // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatMarkupStyleDataAsset*             MarkupStyle;                                              // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialProfanityDataAsset*                   ProfanityDataAsset;                                       // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6DE0];                                    // 0x00B8(0x6DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialStyleDataAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
