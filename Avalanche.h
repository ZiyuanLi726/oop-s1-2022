#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Player.h"
#include <string>
using namespace std;

class Avalanche : public Player
{
    public:
    Avalanche();
    string performMove();
    ~Avalanche();

    private:
    string hand;
};

#endif