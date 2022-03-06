#include <iostream>
using namespace std;

int maximum(int array[], int n)
{
    int biggest = array[0];
    for(int i = 1; i < n; i++)
    {
        if( biggest < array[i] )
        {

 	        biggest = array[i];
        }

    }
    return biggest;
}