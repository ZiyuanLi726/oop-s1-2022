#include "Human.h"
#include <iostream>
using namespace std;

char Human::makeMove()
{
    cout<<"Rock(R),Paper(P) or Sicssors(S)?";
    cin>>choice;

    return choice;
}
