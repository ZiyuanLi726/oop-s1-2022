#ifndef REVERSE_H
#define REVERSE_H
#include <string>
using namespace std;

class Reverse
{
    public:
    int reverseDigit(int value);
    string reverseString(string letters,int len,int hei);

    private:
    int value;
    string letters;

};

#endif