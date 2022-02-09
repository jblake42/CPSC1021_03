// a = s^2
#include "Square.h"

bool Square::setLength(double len)
{
    bool validData = true;
    if (len >= 0)
        length = len;
    else
        validData = false;

    return validData;
}

double Square::getLength()
{
    return length;
}

double Square::calcArea()
{
    return length * length;
}