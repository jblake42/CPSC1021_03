#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid
{
        private:
            double baseA, baseB, heigth ;
        public:
            bool setBaseA(double);
            bool setBaseB(double);
            bool setHeigth(double);
            double getBaseA();
            double getBaseB();
            double getHeigth();
            double calcArea();

};

#endif