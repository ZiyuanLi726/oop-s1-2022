#include <iostream>
using namespace std;

int sumtwo(int array[], int secondarray[], int n)
{
    int sum1 = 0;
    int sum2 = 0;
    int total = 0;
    for(int i = 0; i < n; i++ )
    {
        sum1+=array[i];
        sum2+=secondarray[i];
        total = sum1 + sum2;
    }

    return total;
}