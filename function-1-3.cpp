#include <iostream>
using namespace std;

int count(int array[], int n, int number)
{
    
    
    int num  = 0;
    num = array[--number];
    
    if (n < 1)
    {
        return 0;
    }
    return num;
}