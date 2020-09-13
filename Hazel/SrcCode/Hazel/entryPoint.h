#pragma once

/*You use this Windows definition that we created to tell it to only use this entry point if we're using windows...
This is because we will possibly need to change the where the entry point is for different platforms*/
#ifdef HZ_PLATFORM_WINDOWS

extern Hazele::Application* createAppliction();/*This is meant to be something where we define an application somewhere else
													at a later time and then it returns the application that we have created.
													CreateImplementation is something that we will implemant in the client. In our
													case this will be in some sandbox app*/

/*Okay... So I think I get it. Extern means that the function will be defined externally. So we define it in the
client... In this case sandbox and then that is because it goes to find it there there's no compile error.
But that doesn't stop intellisense to freak out since it can't see where Hazele is found in this file.
I still would like to find exactly how extern allows the linker to find a function from another file.*/

int main(int argc, char** argv)//We give arguments so we might want to store information on how the system is run
{
	/*We choose to be explicit with memory because whole applications can take up a lot of memory and this is our
	entire application so we really want a lot of control over when it starts and ends.*/
	//SandBox* sandPlay = new SandBox();
	/*Now instead of setting this up this way we want there to be a way to create an application and there's a better
	way to do this than having weird and complex macros... So that's where the extern keyword came in*/
	
	//This is what we'll do instead
	printf("Hazel Engine\n");//This function only works with stdio.h file which is defined in Hazel.h
	auto app = Hazele::createApplication();
	app->Run();
	delete app;

	return 0;
}
#endif