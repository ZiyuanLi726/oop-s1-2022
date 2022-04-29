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
    bednum = be;
    square = sq;
    price = pr;
}

int Unit::get_bedrooms()
{
    if(bednum<0)
    {
        bednum = 0;
    }
    else
    {
        return bednum;
    }
}

int Unit::get_value()
{
    if(price<0)
    {
        price = 0;
    }
    else
    {
        return price;
    }
}

double Unit::get_area()
{
    if(square<0)
    {
        square = 0;
    }
    else
    {
        return square;
    }
}
