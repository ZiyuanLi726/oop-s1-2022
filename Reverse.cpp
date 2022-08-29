#include "Reverse.h"
#include <iostream>
using namespace std;

int sum = 0,r;

int Reverse::reverseDigit(int value)
{

   if(value<0)
   {
       return(-1);
   }
   
   if (value) 
   {
      r = value%10;
      sum = sum*10+r;
   }

   else
   {
      cout<<value%10;
      reverseDigit(value/10);
   }
}   
    
    


string Reverse::reverseString(string letters)
{
    int i == 0;
    int n = letters.length();
    if (i == n / 2)
        return;
    swap(str[i], str[n - i - 1]);
    reverseString(str, i + 1);
}
