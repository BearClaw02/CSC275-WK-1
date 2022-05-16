#include "ClassNinja.h"
#include <iostream>

ClassNinja::ClassNinja(std::string name)
{
	// set name
	Name = name;
}

void ClassNinja::ThrowStars() {

	std::cout << Name <<" says " << " \n I'm throwing Stars" << std::endl;
}
