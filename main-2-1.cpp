#include <iostream>
#include <stdlib.h>
#include <string>
#include "meerkat.h"
#include "cart.h"
using namespace std;
int main(int argc, char const *argv[])
{
meerkat Alice;
Alice.setName("Alice");
Alice.setAge(19);
meerkat Sam;
Sam.setName("Sam");
Sam.setAge(19);


cart cart;
meerkat M[2]={Alice,Sam};

for (size_t i = 0; i < 2; i++)
{

if (cart.addMeerkat(M[i])==false)
{

std::cout << "the cart is full" <<std::endl;
}
}

cart.printMeerkats();
return 0;
}
