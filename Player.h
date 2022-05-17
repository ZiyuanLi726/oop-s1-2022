#include<iostream>
using namespace std;

class Player{
    
public: //this could be protected maybe
    string name; 
    int ID;
    
    Player(int choice);
    Player(int enemychoice) 
    int pick_Pokemon();
    std::string check_game();
    void exit_game();
    
}