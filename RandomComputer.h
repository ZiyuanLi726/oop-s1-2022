#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include string
#include "Player.h"
#include <vector>
using namespace std;

class RandomComputer:public Player
{
    public:
    RandomComputer();
    string performMove();
    void addAnswer(string ans);
    ~RandomComputer();

    private:
    int handInt;
    vector<string> userAnswers;
};


#endif;