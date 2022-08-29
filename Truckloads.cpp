#include"Truckloads.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


Truckloads::Truckloads(){};
Truckloads::~Truckloads(){};

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if (numCrates<=loadSize&&numCrates>0)
    {
        return 1;
    }

    if(numCrates<1 || numCrates>100000)
    {
        return 0;
    }

	return numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);
}
