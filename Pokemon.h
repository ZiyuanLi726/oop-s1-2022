#include <iostream>
#include "string"
using namespace std;

class Pokemon //Base abstract class 
{
    
public:

virtual ~pokemon( ) {} //pokemon is virtual because it cannot be create
virtual void attack();
    void escape;
    string type; //type of pokemon, whether its a fire type, grass or water. 

private:
    string name;
    int id;
    int HP;
}

class Bulbosaur: public Pokemon //cody 
{
public: // add inherited data members from pokomon 

Void attack() overide //
{
   //add unique Bulbosaur attack method
   void razor_leaf; //damage 55 GRASS 
   void absorb; //damage 20 HP +10 GRASS
   void headbutt; // damage 70 NORMAL
   void run;     
}

class Squirtle: public Pokemon  
{
    
public: // add inherited data members from pokomon 

Void attack() overide  
{
    //add unique Bulbosaur attack method
    void water_gun; //Damage 40 WATER
    void surf; // Damage 90 ICE
    void body_slam; // Damage 85 NORMAL
    void run;
}
}

class Charmander: public Pokemon 
{
    
public: // add inherited data members from pokomon 

Void attack() overide  
{
    //add unique Bulbosaur attack method
    void ember; //damage 40 FIRE
    void dragon_breath; // damage 60 DRAGON
    void jump_kick; //damage 100 NORMAL
    void run;
}
}
