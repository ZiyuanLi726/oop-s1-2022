#include <iostream>
#include "Unit.h"

int main()
{
    Unit room1(5,200.00,1000);
    Unit room2(6,-34.00,2000);
    
    cout << "price" << room1.get_value() << endl;
    cout << "square" << room1.get_area() << endl;
    cout << "bed" << room1.get_bedrooms() << endl;
    
    cout << "price" << room2.get_value() << endl;
    cout << "square" << room2.get_area() << endl;
    cout << "bed" << room2.get_bedrooms() << endl;
    
    return 0;
}