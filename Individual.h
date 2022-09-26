#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>
#include <iostream>
using namespace std;

class Individual
{
    public:
    Individual(int lengthofBinaryDNA);
    Individual(string initialString);
    string binaryString="";
    string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();

};
#endif