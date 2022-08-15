#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include "Player.h"
using namespace std;

class Bureaucrat : public Player
{
    public:
    Bureaucrat();
    string performMove();
    ~Bureaucrat();

    private:
    string hand;
};

#endif