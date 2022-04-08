#include "meerkat.h"
#include <iostream>
#include <string>
meerkat::meerkat()
{}

void meerkat::setName(string meerName)
{
    name = meerName;
}

string meerkat::getName()
{
    return name;
}

void meerkat::setAge(int meerage)
{
    age = meerage;
}

int meerkat::getAge()
{
    return age;
}

