#include <iostream>
using namespace std;

int maximum_sum(int *nums,int length)
{
    int begin = 0;
    int end = 0;
    int max = 0;
    int sum = 0;
    int start = 0;
    for(int i = 0; i < length; i++)
    {
        sum = sum + *(nums+i);
        if(sum > max)
        {
            max = sum;
            end = i;
            begin = start;
        }
        
        if(sum<max)
        {
            max = sum;
            start = i+1;
            sum = 0;
        }
    }
    

	return max;
}
