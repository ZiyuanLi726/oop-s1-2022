#include <iostream>
#ifndef UNIT_H
#define UNIT_H
using namespace std;

class Unit
{
public:
    Unit();          
    Unit(int, double, int);
    
    int get_bedrooms();
    double get_area();
    int get_value();
    
    

private:
    int price;
    int bednum;
    double square;
};

#endif