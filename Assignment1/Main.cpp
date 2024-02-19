// Michael Walker
// CSC275: C++ Programming II
//
// Week 1 Assignment: Object Oriented Programming

//-----------------------------------------------
// TODO:
//  - Cool intro to game
// 
//  - Add a game loop into the main() function
// 
//  - Create a class called GameStructure
// 
//  - Create a base class with a display method 
//    for encapsulation plus at least 3 private 
//    attributes and 2 constructors
// 
//  - Create 2 classes that inherit from the base 
//    class.  Each must have at least 3 additional 
//    private attributes and 3 methods including 
//    one that updates, one that displays (using 
//    the base class display method as well) and 
//    at least 1 constructor
// 
//  - Create 2 methods in one of the derived 
//    classes (not the constructor) with the 
//    same name and different parameters
//-----------------------------------------------

#include <iostream>
#include <string>

#include "GameStructure.h"

int main()
{
	// Create a game object
	GameStructure game;

	// Start the game
	game.startGame();

	return 0;
}