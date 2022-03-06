#include <iostream>
using namespace std;

extern int minimum(int array[], int n);
int main()
{
    int test_array[7] = {5,3,7,34,6,83,2};
    cout << "smallest numbers in test_array is:" << minimum(test_array, 7) << endl;
}