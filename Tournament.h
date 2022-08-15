#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <string>
#include <vector>
#include "Player.h"

class Tournament
{
    public:
    Tournament();
    void addPlayers(Player*);
    string compete();
    ~Tournament();

    private:
    vector<Player*> Round1;
    vector<Player*> Round2;
    vector<Player*> Round3;
};

#endif