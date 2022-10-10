#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
using namespace std;


int main()
{
    vector<int> arr1, arr2;
    QuickSort sort;
    RecursiveBinarySearch search;
    
    while(true)
    {
        int num;
        cin>>num;
        arr1.push_back(num);
        if(cin.get() == '\n')
        {
            break;
        }
    }
    
    arr2 = sort.sort(arr1);

    if(search.search(arr2, 1))
    {
        cout<<"true ";
    }
    
    else
    {
        cout<<"false ";
    }

    int size = arr2.size();

    for(int i = 0; i < size; i++)
    {
        cout << arr2[i];

        if(i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}