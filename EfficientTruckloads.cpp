#include "EfficientTruckloads.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

EfficientTruckloads::EfficientTruckloads()
{

};
EfficientTruckloads::~EfficientTruckloads()
{

};

static int*p = new int[100000];

int EfficientTruckloads::numTrucks(int numCrates,int loadSize)
{
    if(numCrates<=loadSize&&numCrates>0)
    {
        return 1;
    }

    if(numCrates<1)
    {
        return 0;
    }

    if(p[numCrates]>0)
    {
        return p[numCrates];
    }

    p[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates - numCrates/2,loadSize);

    return p[numCrates];

}
