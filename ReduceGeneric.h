#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric 
{

public:
    ReduceGeneric();
    ~ReduceGeneric();
    int reduce(std::vector<int> arr);

private:
    virtual int binaryOperator(int x, int y) = 0;
};
#endif