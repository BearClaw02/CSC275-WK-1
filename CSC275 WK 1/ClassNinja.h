#pragma once
#include "ClassCharacter.h"
class ClassNinja :
    public ClassCharacter
{
public:
    // constor
    ClassNinja(std::string name);

    // Ninja throws stars
    void ThrowStars();

private:

};

