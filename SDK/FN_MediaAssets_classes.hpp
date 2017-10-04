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

// Class MediaAssets.MediaOverlays
// 0x0088 (0x00B0 - 0x0028)
class UMediaOverlays : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaOverlays");
		return ptr;
	}


	void GetTexts(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutTexts);
	void GetSubtitles(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutSubtitles);
	void GetCaptions(const struct FTimespan& Time, TArray<struct FMediaPlayerOverlay>* OutCaptions);
};


// Class MediaAssets.MediaPlayer
// 0x0138 (0x0160 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEndReached;                                             // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                        // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                        // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                      // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      PlayOnOpen : 1;                                           // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	unsigned char                                      Shuffle : 1;                                              // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      Loop : 1;                                                 // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	class UMediaOverlays*                              Overlays;                                                 // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaPlaylist*                              Playlist;                                                 // 0x00B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x00B8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UMediaSoundWave*                             SoundWave;                                                // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaTexture*                               VideoTexture;                                             // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x90];                                      // 0x00D0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	void SetVideoTexture(class UMediaTexture* NewTexture);
	void SetSoundWave(class UMediaSoundWave* NewSoundWave);
	bool SetRate(float Rate);
	void SetOverlays(class UMediaOverlays* NewOverlays);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(const struct FName& PlayerName);
	bool SelectTrack(int TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& URL);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	struct FString GetUrl();
	struct FString GetTrackLanguage(int TrackIndex);
	struct FText GetTrackDisplayName(int TrackIndex);
	struct FTimespan GetTime();
	int GetSelectedTrack();
	struct FFloatRange GetReverseRates(bool Unthinned);
	float GetRate();
	struct FName GetPlayerName();
	int GetNumTracks();
	struct FFloatRange GetForwardRates(bool Unthinned);
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	void Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                        Items;                                                    // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}


	void RemoveAt(int Index);
	void Remove(class UMediaSource* MediaSource);
	int Num();
	void Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* GetRandom(int* InOutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int Index);
	void Add(class UMediaSource* MediaSource);
};


// Class MediaAssets.MediaSoundWave
// 0x00D8 (0x0340 - 0x0268)
class UMediaSoundWave : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET
	int                                                AudioTrackIndex;                                          // 0x0270(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0280(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundWave");
		return ptr;
	}

};


// Class MediaAssets.MediaSource
// 0x0008 (0x0030 - 0x0028)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}

};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0038 - 0x0030)
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                               // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0018 (0x0050 - 0x0038)
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      PrecacheFile : 1;                                         // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath(const struct FString& Path);
};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0038 - 0x0030)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

};


// Class MediaAssets.MediaTexture
// 0x00E8 (0x01B0 - 0x00C8)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x00D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x00D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x00D4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VideoTrackIndex;                                          // 0x00F0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xBC];                                      // 0x00F4(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	int GetWidth();
	int GetHeight();
	float GetAspectRatio();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
