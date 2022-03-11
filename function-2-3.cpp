#include <iostream>
using namespace std;

int sum_if_a_palindrome(int integers[], int length)
{
    int sum=0;
    for(int i = 0; i < length; i++){
        sum+=integers[i];
    }
    
    return sum;
}

bool is_a_palindrome(int integers[], int length)
{
    if(length<1)
    {
        return false;
    }
    for(int i=0; i<length/2; i++){
        if(integers[i] !=integers[length-i-1])
        {
            return false;
        }
    }
    return true;
}

int sum_elements(int integers[], int length){
    int sum=0;
    for(int i=0; i<length; i++){
        sum+=integers[i];
    }
    
    return sum;
}