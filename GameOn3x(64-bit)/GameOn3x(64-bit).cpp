// GameOn3x(64-bit).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//We start by including some header files into our program: pch.h and iostream
//No clue where pch.h comes from, but the header "iostream" belongs to the standard library (or std)
#include "pch.h"
#include <iostream>

//This specifies the compiler that you'll be using this library, thus taking functions, objects, and classes that belong
//to this library.
using namespace std; 

//This is our main function. It don't have to be like this, but I like how "sophisticated" it looks.
int main(int argc, char** argv[])
{
	cout << "Game on!" << endl; //Here we use cout to print an output value onto the console.
							   //After printing "Game On" onto the screen, endl well then act
							   //as a carriage return; it'll jump to a newline.

	/*-----------------------------------------------------------------------------------------------------------
	//We could of orignally added the prefix "std" by using the scope resolution operator "::"
	//resulting in "std::cout"
	//But since we included the line "using namespace std", all objects of that namespace can now opt-out
	//from using the prefix. A much prefered approach.
	-----------------------------------------------------------------------------------------------------------*/

	return 0; //Returning a value of 0 indicates that the program that you're running passed with no errors.
}
