#ifndef BARNESNOBLE_H
#define BARNESNOBLE_H
#include <iostream>
#include "Dymocks.h"
using namespace std;

class BarnesNoble : public Dymocks
{
private:
    int numSoldBooks;

public:
    BarnesNoble();
    BarnesNoble(string n);
    void soldBook();
    void set_numSoldBooks(int soldnum);
    int get_numSoldBooks();
    ~BarnesNoble();
};

#endif