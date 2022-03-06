#include <iostream>
using namespace std;

double average(int array[], int n)
{
    double avgnum = 0;
    double total = 0;
    for (int i = 0; i<n; i++)
    {
        total+=array[i];
        avgnum = total/n;
    }

    return avgnum;
}