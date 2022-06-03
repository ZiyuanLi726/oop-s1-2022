
#include "Dymocks.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
    Dymocks online_shop(1);
    online_shop.set_name("OL_shop");
    cout << online_shop.get_name() << endl;
    cout << online_shop.get_onlineTax() << endl;
    cout << online_shop.get_numBook() << endl;
    cout << online_shop.get_isOnline() << endl;
}
