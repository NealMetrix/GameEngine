#pragma once

//Note that _declspec(dllimport) and _declspec(dllexport) are windows specific
#ifdef HZ_PLATFORM_WINDOWS//This means we only want to use _declspec(dllImport) and _declspec(dllexport) to run if we are running on a windows platform
	//These conditions are meant to define #HAZEL_API as an export or import depending on if the we are building a dll or if we are creating the application
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API _declspec(dllexport)
	#else HAZEL_API
		#define HAZEL_API _declspec(dllimport)
	#endif

#else
	#error Hazel only supports windows
#endif
/*To make sure that the error we just defined isn't triggered you need to go to...
Right click Hazel, Properties>>C/C++>>Preprocessor>>Preprocessor Definitions
type HZ_PLATFORM_WINDOWS for your x64 Platform with all configurations... This way the definition only exists when you are programming
for the x64 (a windows platform higher than Windows 7 Vista)
you will also need to put this definition in the same place for Sand_Box
We'll also define HZ_BUILD_DLL in the HAZEL project since it is the dll file that we need to export*/
