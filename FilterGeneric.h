#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric {
private:
    virtual bool g(int input) = 0;
public:
    std::vector<int> filter(std::vector<int> arr);
    FilterGeneric();
    ~FilterGeneric();
    
};

#endif