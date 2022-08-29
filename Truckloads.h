#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H
#include<string>
using namespace std;

class Truckloads
{
    public:
    Truckloads();
    int numTrucks(int numCrates, int loadSize);
    ~Truckloads();
    
    private:
    int numCrates,loadSize;
    

};
#endif
