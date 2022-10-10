#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
using namespace std;

class BubbleSort : public Sort 
{
    public:
    virtual vector<int> sort(vector<int> list);
};

#endif 