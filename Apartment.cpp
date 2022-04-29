#include "Apartment.h"
#include "Unit.h"
using namespace std;

Apartment::Apartment()
{
    max = 10;
    curnum = 0;
}

Apartment::Apartment(int capacity)
{
    max = capacity;
    curnum = 0;
    units = new Unit[10];
}

int Apartment::get_capacity()
{
    return max;
}

int Apartment::get_current_number_of_units()
{
    return curnum;
}

Unit * Apartment::get_contents()
{
    return units;
}

bool Apartment::add_unit(Unit unit)
{
    if(curnum < max)
    {
        curnum++;
        units[curnum] = unit;
        return true;
    }
    else
    {
        return false;
    }
}


Apartment::~Apartment()
{
    delete[] units;
}