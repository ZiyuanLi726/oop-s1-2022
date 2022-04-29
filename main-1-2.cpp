#include "Apartment.h"
using namespace std;

int main()
{
    Apartment r1(10);
    
    Unit a(4,39,100);
    Unit b(5,30,200);
    Unit c(6,38,300);
    Unit d(7,36,400);
    Unit e(8,31,500);
    
    r1.get_capacity();
    r1.get_current_number_of_units();
    r1.add_unit(a);
}
