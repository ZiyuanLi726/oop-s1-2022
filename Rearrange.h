#ifndef Rearrange_H
#define Rearrange_H
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
using namespace std;

class Rearrange :public Mutator 
{
    public:
    Individual mutate(Individual list, int k);

};
#endif