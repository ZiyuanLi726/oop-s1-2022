#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include "Player.h"
using namespace std;

class Referee
{
    public:
    Referee();
    ~Referee();
    string getMove(string);
    string Fight(Player *p1,Player *p2);

    private:
    string checkwin(string,string);
    bool checkValid(string);
};

#endif