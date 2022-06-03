#include <iostream>
#include <string>
using namespace std;
#include "BookStore.h"

int main()
{
    BookStore shop("shop", "111 baker street", 100);
    cout << shop.get_address() << endl;
    shop.set_address("22 taminga way");
    cout << shop.get_address() << endl;
    return 0;
}
