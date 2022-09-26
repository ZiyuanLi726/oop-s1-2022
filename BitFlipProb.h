#ifndef BitFlipProb_H
#define BitFlipProb_H
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
using namespace std;

class BitFlipProb : public Mutator
{
    private:
    double prob=0;
    
    public:
    Individual mutate(Individual list, int k);
    BitFlipProb(double likelihood);  
    
};

#endif