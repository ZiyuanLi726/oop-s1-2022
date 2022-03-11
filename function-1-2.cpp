#include <iostream>
using namespace std;

int identity(int array[10][10])
{
    int i,j;
    for(i = 0;i < 10;i++)
    {
        for(j = 0;j < 10;j++)
        {
            if(i==j && array[i][j]!=1)
            {
                goto LBL_NOT;
            }
            if(i!=j && array[i][j]!=0)
            {
                goto LBL_NOT;
            }
        }
    }
    return 1;
    LBL_NOT:
    return 0;
}