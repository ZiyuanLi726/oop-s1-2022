#ifndef STORECHAIN_H
#define STORECHAIN_H
#include "BookStore.h"
#include "Dymocks.h"
#include <iostream>
using namespace std;

class StoreChain
{
public:
    StoreChain();
    BookStore** get_bookStores;
    ~StoreChain();

private:
    BookStore**BookStores;
};

#endif