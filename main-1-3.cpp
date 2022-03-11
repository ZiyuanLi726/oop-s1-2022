#include <iostream>
using namespace std;

extern void count_numbers(int array[4][4]);

int main()
{
    int array[4][4] = {{1,3,5,7},{2,4,6,8},{9,6,0,5},{2,5,4,1}};
    count_numbers(array);
   
}