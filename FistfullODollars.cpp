#include <string>
#include <iostream>
#include "Player.h"
#include "FirstfullODollars.h"
using namespace std;

FirstfullODollars::FirstfullODollars();
Player("FirstfullODollars")
{
    ctr = 0;
}

FirstfullODollars::~FirstfullODollars()
{

}

void FirstfullODollars::setCtr(int newCtr)
{
    ctr = newCtr;
}

string FirstfullODollars::performMove()
{
    if(ctr == 0)
    {
        return "Rock"; 
    }
    else if(ctr == 1)
    {
        return "Paper";
    }
    else if (ctr == 2)
    {
        return "Paper";
    }
    return 0;
}
