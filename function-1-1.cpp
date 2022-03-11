#include <iostream>
using namespace std;

int diagonal(int array[4][4])
{
    int summ = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4;j++)
        {
            if (i == j)
            {
                summ=summ+array[i][j];
            }
        }
    }
    return summ;
    return 0;
}