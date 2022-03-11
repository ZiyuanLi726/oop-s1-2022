#include <iostream>
using namespace std;

extern void print_scaled_matrix(int array[3][3],int scale);

int main()
{
    int scale = 4;
    int array[3][3] = {{1,2,3},{2,3,4},{3,4,5}};
    print_scaled_matrix(array,scale);
}