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

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked                     = 0,
	InertialOnly                   = 1,
	Tracked                        = 2,
	ETrackingStatus_MAX            = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
