#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio                          = 0,
	Binary                         = 1,
	Caption                        = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaPlayerOverlay
// 0x0028
struct FMediaPlayerOverlay
{
	bool                                               HasPosition;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   Position;                                                 // 0x0004(0x0008) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0010(0x0018)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
