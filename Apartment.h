#include <iostream>
#include "Unit.h"
#ifndef APARTMENT_H
#define APARTMENT_H
using namespace std;


class Apartment
{
    
public:
    Apartment();
    Apartment(int capacity);
    int get_capacity();
    
    
    int get_current_number_of_units(); 
    
    
    Unit * get_contents();
    

    bool add_unit(Unit unit);
    
   
    ~Apartment();
    
private:
    int max;
    int curnum;
    Unit *units = new Unit;
};

#endif