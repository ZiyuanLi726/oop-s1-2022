#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include <string>
#include "Player.h"
using namespace std;

class PaperDoll : public Player
{
    public:
    PaperDoll();
    string performMove();
    void setCtr(int);
    ~PaperDoll;

    private:
    string hand;
    int ctr;
};

#endif