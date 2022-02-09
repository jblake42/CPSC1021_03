// a = h * w
#include "rectangle.h"

bool Rectangle::setLength(double len)
{

    bool validData = true;

    if(len >= 0)
        length = len;
    else
        validData = false;
    
    return validData;
}

bool Rectangle::setWidth(double w)
{
    bool validData = true;

    if (w >= 0)
        width = w;
    else 
        validData = false; 
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width; 
}

double Rectangle::calcArea()
{
    return length * width;
}