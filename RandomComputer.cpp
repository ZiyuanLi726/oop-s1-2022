#include "RandomComputer.h"
#include "Player.h"
#include <string>
using namespace std;
#include <cstdlib>

RandomComputer::RandomComputer():Player("RandomComputer")
{

}
RandomComputer::~RandomComputer()
{

}

void RandomComputer::addAnswer(string ans)
{
    userAnswer.push_back(ans);
}

string RandomComputer::performMove()
{
    int aiMove = rand()%3 +1;
    if(aiMove == 1)
    {
        return "R";
    }
    else if(aiMove == 2)
    {
        return "P";
    }
    else
    {
        return "S";
    }
}