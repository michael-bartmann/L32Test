

#include "SomeClassA.h"

SomeClassA::SomeClassA(const char* n)
{
    name = n;
}

int SomeClassA::prepareNumber()
{
    return 7;
}

int SomeClassA::getANumber()
{
    return 2 * prepareNumber();
}
