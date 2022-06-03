#ifndef DYMOCKS_H
#define DYMOCKS_H
#include "BookStore.h"
#include <iostream>
using namespace std;

class Dymocks : public BookStore
{
private:
    static int nextNumStores = 0;
    int storeID;
    bool isOnline;

public:
    Dymocks();
    Dymocks(bool o);
    void set_storeID(int storeID);
    int get_storeID();
    void set__isOnline(bool isOnline);
    bool get_isOnline();
    ~Dymocks();

};

#endif