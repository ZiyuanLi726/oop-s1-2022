#include "ReduceGCD.h"


int ReduceGCD::binaryOpeator(int x, int y){
    if (y > 0)
    {
        return binaryOpeator(y, x % y);
    }					
    
    else{
        return x;
    }			
}