#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
using namespace std;

class QuickSort : public Sort 
{
    public:
    virtual vector<int> sort(vector<int> list);
    
};

#endif 