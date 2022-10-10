#include "QuickSort.h"
#include <vector>
#include <iostream>
using namespace std;

vector<int> QuickSort::sort(vector<int> list)
{
    int size = list.size();
    sort_recursion(&list, 0, size - 1);
    return list;
}


void QuickSort::sort_recursion(vector<int>* list, int LtoR, int RtoL)
{
    if(LtoR >= RtoL)
        return;
    int i = LtoR
    int j = RtoL
    int temp = 0;
    int base = LtoR;
    while(true)
    {
        while(list->at(j) >= list->at(base) && j > LtoR)
        {
            j--;
        }

        while(list->at(i) <= list->at(base) && i < RtoL)
        {
            i++;
        }
        
        if(i >= j)
        {
            break;
        }

        temp = list->at(i);
        list->at(i) = list->at(j);
        list->at(j) = base;
    }
    temp = list->at(j);
    list->at(j) = list->at(base);
    list->at(base) = temp;
    sort_recursion(list, LtoR, j - 1);
    sort_recursion(list, j + 1, RtoL);
}