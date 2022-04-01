#include <iostream>
using namespace std;

int count_negatives(int *vals,int len)
{
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(*(vals+i)<0)
        {
            count++;
        }
    }
    return count;
}

int* collate_negatives(int *vals,int len, int num_negative)
{
    int num_negative = new int[count];
    for(int j = 0; j < count; j++)
    {
        if(*(vals+j)<0)
        {
            num_negative[i] = *(vals+j);
        }
    }
    return num_negative;
    delete[] num_negative;
}