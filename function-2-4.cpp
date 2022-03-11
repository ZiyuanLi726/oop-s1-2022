#include <iostream>
using namespace std;

int sum_min_and_max(int integers[], int length)
{
    if(length<1)
    {
        return -1;
    }
    
    int max = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (max<integers[i])
        {
            max = integers[i];
        }
    }
    
    int min = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (min>integers[i])
        {
            min = integers[i];
        }
    }
    return max+min;
    
}

int max_integer(int integers[], int length)
{
    if(length<1)
    {
        return -1;
    }
    int max = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (max<integers[i])
        {
            max = integers[i];
        }
    }
    return max;
}

int min_integer(int integers[], int length)
{
    if(length<1)
    {
        return -1;
    }
    int min = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (min>integers[i])
        {
            min = integers[i];
        }
    }
    return min;
}