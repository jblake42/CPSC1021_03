#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
    private:
        double radius;
    public:
        Circle() {
            radius = 1.0;
        }
        bool setRadius(double);
        double getRadius();
        double calcArea();
};

#endif