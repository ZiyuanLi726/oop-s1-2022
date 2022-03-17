#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){
    int num=0;
    int n=0;
    for(int i=number_of_digits-1; i>=0; i--)
    {
        if(binary_digits[n]==1)
        {
            num+=pow(2,i)*binary_digits[n];
        }
        n++;
    }
    
    return num;
    
}