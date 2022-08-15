#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include"Player.h"
#include<vector>

class Human:public Player
{
    public:
    Human();
    string performMove();
    ~Human();

    private:

};

#endif