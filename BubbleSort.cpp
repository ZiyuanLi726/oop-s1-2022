#include "BubbleSort.h"
#include <vector>
#include <iostream>
using namespace std;

vector<int> BubbleSort::sort(vector<int> list)
{
    int len = list.size();
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - 1 - i; j++)
        {
            if(list[j] > list[j+1])
            {
                int num = list[j];
                list[j] = list[j+1];
                list[j+1] = num;
            }
        }
    }
    return list;
}
    
