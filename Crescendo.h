#ifndef CRESCENDO_H
#define CRESCENDO_H
#include <string>
#include "Player.h"
using namespace std;

class Crescendo:public Player
{
    public:
    Crescendo();
    string performMove();
    void setCtr(int);
    ~Crescendo();

    private:
    string hand;
    int ctr;
};

#endif
