#include Pokemon.h
#include <iostream> 

class Pokemon
{
    int HP = 200;  //HP stands for the Life bar
    virtual~Pokemon(){}
    virtual void attack()=0;

    void escape()
    {
        cout<<"You ran away from the fight!"<<endl; 
    }

}

class Squirtle: public Pokemon() //class for the squirtle pokemon 
{
    string type = "Water";
    void attack() override{};
    void water_gun()
    {
        if(enemy = FIRE)
        {
            attack = 40*2;
        }; //damage 40 WATER
        else if(enemy = GRASS). 
        {
            attack = 40/2;
        }
        else
        {
            attack = 40;
        }
    void surf()
    {
        attack = 90;
    }; // damage 90 ICE
    void body_slam()
    {
        attack = 85;
    }; // damage 85 NORMAL

    void run()
    {
        esacepe;
    }//end the battle

}

class Charmander: public Pokemon() // charmander class 
{
    string type = "Fire";
    void attack() override{};
    void ember()   
    {
        if (enemy = GRASS)
        {
            attack = 40*2;
        }
        else if(enemy = WATER)
        {
            attack = 40/2;
        }
        else
        {
            attack = 40;
        }
    }; //damage 40 FIRE

    void dragon_breath()
    {
        attack = 60;
    } // damage 60 DRAGON

    void jump_kick()
    {
        attack = 100;
    } // damage 100 NORMAL

    void run()
    {
        escape;
    } //end battle

}

class Bulbosaur: public Pokemon() //bulbosaur class 
{
string type ="Grass"; //should this be in all caps? 
void attack overide();

void razor_leaf()
{
    if(enemy=Fire)
    { 
        attack=55*2; //ember is 55 power
    }
    
    else if (enemy=water)
    {
        attack=55*2; //this might be wrong 
    }
    else
    {
        attack=55;
    }
}; // power 55 grass

 void headbutt;
 {
     attack= 70;
     
 } //power 70 normal
 
 void run()
 {
     escape;   
 } //end battle
} 
