
#include <iostream>
#include<iomanip>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"


using namespace std;
int main ()
{
    int menu; 

    //displaying menu :)
    cout << "1 -- circle" << endl;
    cout << "2 -- square" << endl;
    cout << "3 -- rectangle" << endl;
    cout << "4 -- trapezoid" << endl;
    cout << "5 -- quit" << endl;



do
{
    cout<< "Enter menu choice: ";
    cin >> menu;

    if(menu == 1)
    {
        Circle cir;
        double r;
        
        cout<<"This will calculate area of circle" << endl;
        cin >> r;

        if(!cir.setRadius(r) )
        {
            cout << "invalid input" << endl;
        }

        else 
        {
            cout << "Raidus: " << fixed << setprecision(1) << cir.getRadius() << endl;
            cout << "Area: " << cir.calcArea() << endl;

        }
        return 0;

    }
    else if(menu == 2)
    {
        Square sq;
        double s;
        cout << "This will calculate area of square. enter side";
        cin >> s;

        if(!sq.setLength(s))
        {
            cout << "Invalid choice" << endl;

        }
        
        else
        {
            cout << "Side: " << fixed << setprecision(1) << sq.getLength() << endl;
            cout << "Area: " << sq.calcArea() << endl;

        }
        return 0;


    }

    else if(menu == 3)
    {
        Rectangle rec;
        double l, w;
        cout <<"this will calculate area of a rectangle, enter value: ";
        cin >> l;
        cout << "enter rectangle width: ";
        cin >> w;

        if(!rec.setLength(l))
        {
            cout << "Invalid length entered" << endl;
        }

        else if(!rec.setWidth(w)) 
        {
            cout <<"invalid width entered" << endl;
        }

        else 
        {
            cout << endl;
            cout << "Length: " << fixed << setprecision(1) << rec.getLength() << endl;
            cout << "Width: " << rec.getWidth() << endl;
            cout << "Area: " << rec.calcArea() << endl;

        }
        return 0;

    }
    else if(menu==4)
    {
        Trapezoid trap;
        double b1, b2, h;

        cout <<" This will calculate area of a trapezoid. Input base 1: " ;
        cin >> b1;
        cout << "input base 2: ";
        cin >> b2;
        cout << "input height" ;
        cin >> h;

        if(!trap.setBaseA(b1))
        {
            cout <<"Invalid input" << endl;
        }

        else if (!trap.setBaseB(b2))
        {
            cout << "Invalid input" << endl;
        }
        else if (!trap.setHeigth(h))
        {
            cout << "Invalid input" << endl;

        }
        else 
        {
            cout <<"Base 1: " << fixed << setprecision(1) << trap.getBaseA() << endl;
            cout <<"Base 2: " << trap.getBaseB() << endl;
            cout <<"Height: " << trap.getHeigth() << endl;
            cout <<"Area: " << trap.calcArea() << endl;

        }
        return 0;
    }
    else
    {
        return 0;
    }

}
while((menu == 1 )|| (menu == 2 )|| (menu ==3) || (menu ==4 )|| (menu ==5));

}