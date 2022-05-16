// Matthew Nispel May 11th,2022
// include all needed librays
// Allows us to do input and output to the display and keyboard
#include <iostream>
#include <string>
#include "ClassNinja.h"
#include "ClassPirate.h"

// prototype of functions
void DisplayIntro();



// return type int, is the main function of the program
int main()
{
	// display title of game
	std::cout << "\n Wekcone to my game!! \n" << std::endl;
	// call function
	DisplayIntro();

	//creates class
	ClassNinja objectNinjaJackie("Jackie Chan");

	objectNinjaJackie.ThrowStars();
	// creates a pirate
	ClassPirate objectPirateBlackBread("Black Bread");
	// said pirate swings his sword
		objectPirateBlackBread.SwingSword();

	return 0;
}


//  function for the intro to the game
void DisplayIntro() {
	// prints to the console the intro to the game
	std::cout << "intro" << std::endl;
}