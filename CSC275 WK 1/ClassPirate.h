#pragma once
#include "ClassCharacter.h"
class ClassPirate :
    public ClassCharacter
{
public:
    // constor
    ClassPirate(std::string name);

    // Pirate swings his sword
    void SwingSword();
};

