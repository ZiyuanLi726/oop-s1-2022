#include "RecursiveBinarySearch.h"
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

bool RecursiveBinarySearch::search(vector<int> list, int value)
{
    int size = list.size();
    return search_recursion(&list, 0, size - 1, value);
}


bool RecursiveBinarySearch::search_recursion(vector<int>* list, int l, int r, int num)
{
    if(r <= l)
    {
        if(list->at(l) == num)
            return true;
        else
            return false;
    }

    int mid = (r - l)/2 + 1;

    
    
    if(list->at(mid) == num)
    {
        return true;
    }
    
    else if(list->at(mid) > num)
    {
        return search_recursion(list, l, mid - 1, num);
    }

    else
    {
        return search_recursion(list, mid + 1, r, num);
    }
}