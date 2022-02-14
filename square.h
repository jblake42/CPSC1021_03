#ifndef SQUARE_H
#define SQUARE_H

class Square
{
    private:
        double length;
    public:
        Square(){
            length = 1.0;
        }
        bool setLength(double);
        double getLength();
        double calcArea();
};

#endif