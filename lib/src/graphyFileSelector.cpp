#include "graphyFileSelector.h"

namespace graphyFileSelector
{
#ifdef _WIN32
	long _stdcall test()
#elif linux
	long test()
#endif
	{
		return 3;
	}
}
