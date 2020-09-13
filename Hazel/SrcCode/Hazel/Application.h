#pragma once
#include "Core.h"
namespace Hazele
{
	class HAZEL_API Application//We need to _declspec(dllexport) which will allow us to import this class into our Sand_Box application
	{
	public:
		Application();
		virtual ~Application();/*We need this to be marked as virtual because this will be subtyped by the Sand_Box application*/

		void Run();
	};
	//To be defined in client
	Application* createApplication();
};
