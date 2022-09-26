#include <iostream>
#include <string>
#include <stdlib.h>
#include "Mutator.h"
#include "BitFlipProb.h"
#include "Individual.h"
using namespace std;

BitFlipProb::BitFlipProb(double likelihood){
    prob=likelihood;
}

Individual BitFlipProb::mutate(Individual list, int k)
{
   for (int i=0;i<list.getLength();i++){
        if (prob==1)
        {
            list.flipBit(i);
            continue;
        }
        if (prob==0)
        {
            list.flipBit(i);
            continue;
        }
        double temp=float(rand())/float(RAND_MAX);
        if (prob>=temp)
        {
            list.flipBit(i);
        }
    }
    return list;
}