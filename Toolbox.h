#ifndef TOOLBOX_H
#define TOOLBOX_H
#include <string>
#include "Player.h"

class Toolbox:public Player()
{
    public:
    Toolbox();
    string performMove();
    ~Toolbox();

    private:
    string hand;
}

#endif