#include "ClassPirate.h"
#include <iostream>

ClassPirate::ClassPirate(std::string name)
{
	// sets the name of the pirate
	Name = name;
}

// is the fuction to let the pirates fight back
void ClassPirate::SwingSword()
{
	std::cout << Name << "/n Im Swinging my Sword." << std::endl;
}
