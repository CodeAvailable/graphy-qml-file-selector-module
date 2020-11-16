#pragma once

#include <vector>

#ifdef _WIN32
#if defined(_MSC_VER) && !defined(graphyFileSelectorLib_STATIC)
#ifdef graphyFileSelectorLib_EXPORTS
#define GRAPHYFILESELECTOR_API __declspec(dllexport)
#else
#define GRAPHYFILESELECTOR_API __declspec(dllimport)
#endif
#else
#define GRAPHYFILESELECTOR_API
#endif
#endif

namespace graphyFileSelector
{
#ifdef _WIN32
	GRAPHYFILESELECTOR_API long _stdcall test();
#elif linux
	long test();
#endif
}
