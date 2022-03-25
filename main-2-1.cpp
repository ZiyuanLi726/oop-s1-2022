#include <iostream>
using namespace std;

extern void print_sevens(int *nums,int length);

int main()
{
    int arr[5] = {1,7,14,6,2};
    int length = 5;
    int *ptr = arr;
    print_sevens(ptr,length);
    return 0;
}