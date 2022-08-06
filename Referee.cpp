#include "Referee.h"
#include <iostream>
using namespace std;

char Referee::refGame(Human player1,Computer player2)
{
    char playerchoice = player1.makeMove();
    char computerchoice = 'R';

    if(playerchoice == computerchoice)
    {
        return 'T';
    }

    else if(playerchoice == 'R' && computerchoice == 'S')
    {
        return 'W';
    }

    else if (playerchoice == 'S' && computerchoice == 'P')
    {
        return 'W';
    }

    else if (playerchoice == 'P' && computerchoice == 'R')
    {
        return 'W';
    }

    else
    {
        return 'D';
    }
}