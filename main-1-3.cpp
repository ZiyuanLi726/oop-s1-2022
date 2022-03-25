#include <iostream>

using namespace std;
extern void cpyia(int old_array[],int new_array[],int length);

int main()
{
    int length = 4;
    int arr1[4] = {1,2,3,4};
    int arr2[4];
    cpyia(arr1,arr2,4);
    return 0;
}