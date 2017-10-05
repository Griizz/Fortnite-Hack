#pragma once
#include <Windows.h>
#include <Psapi.h>
#include "SDK.hpp"

namespace Global
{
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
