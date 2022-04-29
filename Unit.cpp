#include "Unit.h"
#include <iostream>
using namespace std;

Unit::Unit()
{
    price = 0;
    square = 0;
    bednum = 0;
}

Unit::Unit(int, double, int)
{
    int bednum = bednum;
    double square = square;
    int price = price;
}

int Unit::get_bedrooms()
{
    
    return bednum;
}

int Unit::get_value()
{
   
    return price;
}

double Unit::get_area()
{
   
    return square;
}
