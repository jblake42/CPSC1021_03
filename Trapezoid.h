#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid
{
        private:
            double baseA, baseB, heigth ;
        public:
            Trapezoid(){
                baseA = 1.0;
                baseB = 1.0;
                heigth = 1.0;
            }
            bool setBaseA(double);
            bool setBaseB(double);
            bool setHeigth(double);
            double getBaseA();
            double getBaseB();
            double getHeigth();
            double calcArea();

};

#endif