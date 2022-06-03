#include <iostream>
#include <string>
using namespace std;

#include "StoreChain.h"
#include "BookStores.h"

int main(){
    Dymocks** Dymocks_list;
    Dymocks_list = new Dymocks* [5];
        for (int i = 0; i < 5; i++){
            if (i == 3){
                Dymocks_list[i] = new Dymocks(true);
            } else if (i == 2){
                Dymocks_list[i] = new Dymocks(true);
            } else {
                Dymocks_list[i] = new Dymocks(false);
            }
        }
    BookStores::sort(Dymocks_list, 5);

    for (int i = 0; i < 5; i++){
        cout << Dymocks_list[i]->get_isOnline() << endl;
    }
    
    return 0;
}
