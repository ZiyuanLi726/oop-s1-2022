#include "Reverse.h"
#include <iostream>
using namespace std;

int sum = 0,r;

int reverseDigit(int value)
{
    if(value<=0)
    {
        cout<<"ERROR"<<endl;
    }
   
    else if (value) 
    {
       r = value%10;
       sum = sum*10+r;
       reverseDigit(value/10);
    }

    else
    {
       return sum;
    }
    return sum;
}   
    
    


string reverseString(string&letters,int l,int h)
{
    if(l<h)
    {
        swap(letters[l],letters[h]);
        reverseString(letters,l+1,h-1);
    }
    return letters;
}