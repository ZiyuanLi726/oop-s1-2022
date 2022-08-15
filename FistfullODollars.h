#ifndef FIRSTFULLODOLLARS_H
#define FIRSTFULLODOLLARS_H
#include <string>
#include "Player.h"
using namespace std;

class FirstfullODollars:public Player
{
    public:
    FirstfullODollars();
    string performMove();
    void setCtr(int);
    ~FirstfullODollars;

    private:
    string hand;
    int ctr;
};

#endif
