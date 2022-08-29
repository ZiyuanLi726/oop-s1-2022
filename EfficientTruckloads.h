#ifndef EFFICIENT_TRUKLOADS_H
#define EFFICIENT_TRUKLOADS_H
#include<vector>
#include<string>


using namespace std;


class EfficientTruckloads
{
    public:
    EfficientTruckloads();
    int numTrucks(int numCrates,int loadSize);
    ~EfficientTruckloads();
    private:
    int numCrates;
    int loadSize;
};

#endif
