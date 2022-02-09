#include "circle.h"


bool Circle::setRadius(double rad)
{
    bool validData = true;

    if(rad >=0)
        radius = rad;
    else
        validData = false;
    
    return validData;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::calcArea()
{
    return 3.14 * radius * radius;
}