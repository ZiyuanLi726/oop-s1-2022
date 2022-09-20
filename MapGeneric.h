#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>
using namespace std;

class MapGeneric 
{

public:
    vector<int> map(vector<int> arr);
    MapGeneric();
    ~MapGeneric();
    

private:
    virtual int f(int input) = 0;
};

#endif