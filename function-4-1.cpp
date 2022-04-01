#include <iostream>
using namespace std;

int sum_sides(int **vals,int num_rows, int num_cols)
{
    int* sidenum = new int[num_rows];
    for(int i = 0; i < num_rows; i++)
    {
        for(int j = 0; j < num_cols; j++)
        {
            if(*(*vals))[i] = 0 or (*(*vals))[j] = 2
            {
                sidenum[i] = *(*vals)[i][j];
            }
        }
    }
    return sidenum;
    delete[] sidenum;
    
}