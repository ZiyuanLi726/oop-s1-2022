#include <iostream>
using namespace std;

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main()
{
    int number_of_digits = 5;
    int binary_digits[5] = {1,0,1,1,0};
    cout<<binary_to_number(binary_digits,number_of_digits)<<endl;
}