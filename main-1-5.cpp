#include <iostream>
using namespace std;

extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

int main()
{
    int array1[3][3] = {{1,2,3},{2,3,4},{3,4,5}};
    int array2[3][3] = {{4,7,4},{7,2,8},{3,9,1}};
    print_summed_matrices(array1,array2);
}