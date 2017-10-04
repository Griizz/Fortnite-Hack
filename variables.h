#pragma once
#include <Windows.h>
#include <Psapi.h>
#include "SDK.hpp"

namespace Variables
{
	bool isInitialized = false;
	float fov = 120;

	DWORD_PTR BaseAddress;
	MODULEINFO info;
	SDK::UWorld** m_UWorld;
	SDK::ULevel* m_persistentLevel;
	SDK::UGameInstance* m_owningGameInstance;
	SDK::TArray<SDK::ULocalPlayer*> LocalPlayers;
	SDK::ULocalPlayer* m_LocalPlayer;
	SDK::TArray<SDK::AActor*>* m_Actors;
	SDK::FVector2D ViewportSize;
	SDK::AActor* currentPlayer;
}

WCHAR ptrBuf[1000];
WCHAR ptrData[] = L"m_UWorld: 0x%016X\n";
WCHAR ptrBuf2[1000];
WCHAR ptrData2[] = L"m_OwningGameInstance: 0x%016X\n";
WCHAR ptrBuf3[1000];
WCHAR ptrData3[] = L"m_LocalPlayers: 0x%016X\n";
WCHAR ptrBuf4[1000];
WCHAR ptrData4[] = L"[View Angles] | Pitch: %d | Yaw: %d | Roll: %d |\n";
//WCHAR ptrData4[] = L"m_LocalPlayer: 0x%016X\n";
WCHAR ptrData4_[] = L"[View Angles] | Loading";
