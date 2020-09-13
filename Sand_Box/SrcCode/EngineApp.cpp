/*I created a copy for the project setup video of Cherno!!! All the notes I take for this
branch will be for the entry point episode.*/

/*There are always entry points to applications. Even dll files have entry points. Something will be discussed more in depth later
Our application has to start. So when we start our application what do we want to happen. There's a lot of ways to do it. But
note that dll files can have a main function. And since we want the engine to be the start we will want to move the main function
into the dll and not have it in the Sand_Box application. However this may change, Cherno says that we're trying to write a game
engine together so everything is subject to change in the future. We're also going to create an application class so we can define
an application inside our sand_box project*/

/*A list of changes that we are made since the project set up

-delete Test.cpp and Test.h files

-creating a folder called hazel inside our SrcCode which will be all of our Hazel libraries...

-Added a Core.h file into our header file

-We added the Application.cpp and the Application.h file

-We added the Hazel.h file

-We deleted the declspec import because now we're going to have the application class of sandbox be a subtype of the class we made
in the Application.h file

-We also had to replace the Hazel.dll that we copied and pasted into Sand_Box with the new dll because of the changes we have made
after building the dll. This might be added as a post build step from our engine later

-Added the entryPoint header in Hazel

-Copied the main function into entry point
*/

#include "Hazel.h"

//This is just a skeleton class that is our Hazel application
class SandBox : public Hazele::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};
//In our case we just want to define in our sandbox program a function that will return a pointer to a sandbox object on the heap
Hazele::Application* Hazele::createApplication()
{
	return new SandBox();
}