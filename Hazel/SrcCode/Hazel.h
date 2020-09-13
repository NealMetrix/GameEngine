#pragma once
/*We added this header file for client applications so if someone wanted to use Hazel.h all they would need to do is just include Hazel.h
To implement Hazel into their project. This way they don't need to access the Hazle folder to access any of our libraries*/
#include "Hazel/Application.h"
/*Something else I did after creating this file was that in the properties of Sand_Box in C/C++ >> General >> Additional include Directories
we added the following solution directory
$(SolutionDir)Hazel/SrcCode;

You will see that this allows us to just put include "Hazel.h"
in the Sand_Box application instad of having to go through all of the Hazel Project folder and then going into the SrcCode file
*/
#include <stdio.h>//Gives us access to a simple print function in the entryPoint.h file
/*Entry Point-------------------*/
#include "Hazel/entryPoint.h"
/*-------------------------------*/