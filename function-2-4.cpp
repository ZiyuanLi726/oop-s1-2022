#include <iostream>
using namespace std;

bool ascending(int array[], int n)
{
    int flag1 = 0;
    int flag2 = 0;
    for(int i=0;i<n-1;i++)
    {
        if(array[i]<array[i+1])
        {
            flag1++;
        }
        else if(array[i]>array[i+1])
        {
            flag2++;
        }
        else
        {
            flag1++;
            flag2++;
        }
    }
    if(flag1==n-1)
    {
        return 1;
    }
    else if(flag2==n-1)
    {
        return 0;
    }
    else if(flag1==n-1&&flag2==n-1)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}