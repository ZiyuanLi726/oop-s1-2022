#include <iostream>

using namespace std;

extern int sum_elements(int*, int);
extern bool is_a_palindrome(int*, int);
extern int sum_if_a_palindrome(int*, int);

int main (void)
{
    int total=0;
    
    int array[6]={3,7,0,0,7,3};
    
    bool a=is_a_palindrome(array, 6);
    
    if(a==true)
    {
        total=sum_if_a_palindrome(array, 6);
    }
    else
    {
        total=sum_elements(array, 6);
    }
    
    cout<< total <<endl;
}