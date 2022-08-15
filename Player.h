#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player
{
    public:
    Player();
    Player(string);
    virtual string performMove();
    virtual void setCtr(int);
    virtual void addAnswer(string);
    ~Player();

    private:
    string name;
};

#endif