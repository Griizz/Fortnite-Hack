//
// FindPattern.h
//

#include <Windows.h>

#pragma once

namespace Utils {
	namespace Pattern {
		bool DataCompare(PBYTE pData, PBYTE bSig, char* szMask) {
			for (; *szMask; ++szMask, ++pData, ++bSig) {
				if (*szMask == 'x' && *pData != *bSig)
					return false;
			}
			return (*szMask) == 0;
		}

		PBYTE FindPattern(PBYTE dwAddress, DWORD dwSize, PBYTE pbSig, char* szMask, long offset) {
			size_t length = strlen(szMask);
			for (size_t i = NULL; i < dwSize - length; i++) {
				if (DataCompare(dwAddress + i, pbSig, szMask))
					return dwAddress + i + offset;
			}
			return 0;
		}
	}
}