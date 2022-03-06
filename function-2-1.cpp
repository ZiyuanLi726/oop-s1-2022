#include <iostream>
using namespace std;

int minimum(int array[], int n)
{
    int smallest = array[0];
    for(int i = 1; i < n; i++)
    {
        if( smallest > array[i] )
        {

 	        smallest = array[i];
        }

    }
    return smallest;
}