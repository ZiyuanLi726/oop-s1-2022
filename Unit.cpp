#include "Unit.h"
#include <iostream>
using namespace std;

Unit::Unit()
{
    price = 0;
    square = 0;
    bednum = 0;
}

Unit::Unit(int be, double sq, int pr)
{
    bednum = int be;
    square = double sq;
    price = int pr;
}

int Unit::get_bedrooms()
{
    if(bednum<0)
    {
        bednum = 0;
    }
    return bednum;
}

int Unit::get_value()
{
    if(price<0)
    {
        price = 0;
    }
    return price;
}

double Unit::get_area()
{
    if(square<0)
    {
        square = 0;
    }
    return square;
}
