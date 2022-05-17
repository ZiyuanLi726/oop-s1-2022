#include<iostream>
#include"Player.h"
#include "Pokemon.h"
using namespace std;

int main()
{
    std::cout << "\nWelcome to the pokemon battle! \n";
    std::cout << "Menu: \n [B] Battle\n[C]Check Pokemon info\n [E]Exit\n(Pick a Letter you want to do!)"
    std::cin >> init_choice;
    if(init_choice=="B")
    {
        cout<<"Let's pick a Pokemon!\n [1]Charmander [2]Bulbosaur [3]Squirtle\n"<<player(int choice);
        std::cin>>choice;
        if(choice==1)
        {
            cout<<"You choose the Charmander successfully!\nIt's attack type is fire!"<<endl;
            cout<<"Choose an attack:\n[1] ember [2] dragon_breath [3] jump_kick [4] run"<<attack;
            cin<<attack;
            switch(attack)
            {
                case 1:
                {
                    ember();
                    cout<<"Demage 40 fire!"<<endl;
                    break
                }
                case 2:
                {
                    dragon_breath();
                    cout<<"Demage 60 dragon!"<<endl;
                    break
                }
                case 3:
                {
                    jump kick();
                    cout<<"Demage 100 normal!"<<endl;
                    break
                }
                case 4:
                {
                    escape();
                    break
                }
            }
        }
        if(choice==2)
        {
            cout<<"You choose the Bulbosaur successfully!\nIt's attack type is grass!"<<endl;
            cout<<"Choose an attack:\n[1] razor leaf [2] absorb [3] headbutt [4] run"<<attack;
            cin<<attack;
            switch(attack)
            {
                case 1:
                {
                    razor_leaf();
                    cout<<"Demage 55 grass!"<<endl;
                    break
                }
                case 2:
                {
                    absorb();
                    cout<<"Demage 20 HP and add 10 grass!"<<endl;
                    break
                }
                case 3:
                {
                    headbutt();
                    cout<<"Demage 70 normal!"<<endl;
                    break
                }
                case 4:
                {
                    escape();
                    break
                }
            }
        }
        if(choice==3)
        {
            cout<<"You choose the Squirtle successfully!\nIt's attack type is water!"<<endl;
            cout<<"Choose an attack:\n[1] water gun [2] surf [3] body slam [4] run"<<attack;
            cin<<attack;
            switch(attack)
            {
                case 1:
                {
                    water_gun();
                    cout<<"Demage 40 water!"<<endl;
                    break
                }
                case 2:
                {
                    surf();
                    cout<<"Demage 90 ice!"<<endl;
                    break
                }
                case 3:
                {
                    body_slum();
                    cout<<"Demage 85 normal!"<<endl;
                    break
                }
                case 4:
                {
                    escape();
                    break
                }
            }
        }
        else
        {
            cout<<"Invalid command!"<<endl;
            return 0;
        }
    }
    else if(init_choice == "C")
    {
        cout<<"Which Pokemon you want to check?\n [1]Charmander [2]Bulbosaur [3]Squirtle\n"<<check_pokemon(int choice);
        std::cin>>choice;
    }
    else if(init_choice == "E")
    {
        cout<<"Bye!"<<endl;
        return 0;
    }
    else
    {
        cout<<"Invalid command!"<<endl;
        return 0;
    }
} 