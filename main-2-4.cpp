#include <iostream>

using namespace std;

extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);
extern int sum_min_and_max(int integers[], int length);

int main (void)
{
    int integers[6]={1,3,4,2,5,4};
    int sum=sum_min_and_max(integers, 6);
    
    cout<< sum <<endl;
    
    return 0;
    
}