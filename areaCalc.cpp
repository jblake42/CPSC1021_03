
#include <iostream>
#include<iomanip>
//#include "Circle.h"
//#include "Rectangle.h"
//#include "Square.h"
//#include "Trapezoid.h"


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

}
while((menu == 1 )|| (menu == 2 )|| (menu ==3) || (menu ==4 )|| (menu ==5));

}