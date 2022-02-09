//Area = ((a+b)/2)h
#include "Trapezoid.h"

bool Trapezoid::setBaseA(double a)
{
    bool validData = true; 

    if(a >= 0)
        baseA = a;
    else
        validData = false;
    return validData;
        
}

bool Trapezoid::setBaseB(double b)
{
    bool validData = true; 

    if(a >= 0)
        baseB = b;
    else
        validData = false;
    return validData;
        
}

bool Trapezoid::setHeigth(double h)
{
    bool validData = true; 

    if(a >= 0)
        heigth = h;
    else
        validData = false;
    return validData;       
}

double Trapezoid::getBaseA()
{
    return baseA;
}

double Trapezoid::getBaseB()
{
    return baseB;
}

double Trapezoid::getHeigth()
{
    return heigth;
}

double Trapezoid::calcArea()
{
    return ((baseA + baseB)/2) * heigth;
}