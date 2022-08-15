#include <string>
#include <iostream>
#include "Player.h"
#include "Human.h"
using namesoace std;

Human::Human():Player("Avalanche"){}
Human::~Human(){}
string Human::performMove()
{
    string userHand;
    cout<<"Enter your play:";
    cin>>userHand;
    return userHand;
}