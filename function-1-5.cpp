#include <iostream>
using namespace std;

int count_even(int number)
{
    int total = 0;
    for(int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            total++;
        }
    }
    return total;
}
