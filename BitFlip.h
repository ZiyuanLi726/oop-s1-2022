#ifndef BitFlip_H
#define BitFlip_H
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
using namespace std;

class BitFlip : public Mutator 
{
    public:
    Individual mutate(Individual list, int k);
};


#endif