#ifndef SQUARE_H
#define SQUARE_H

class Square
{
    private:
        double length;
    public:
        bool setLength(double);
        double getLength();
        double calcArea();
};

#endif