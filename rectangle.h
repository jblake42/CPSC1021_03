#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private: 
        double length, width;
    public:
        Rectangle()
        {
            length = 1.0;
            width = 1.0;
        }
        bool setLength(double);
        bool setWidth(double);
        double getLength();
        double getWidth();
        double calcArea();
};

#endif