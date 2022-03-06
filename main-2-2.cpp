#include <iostream>
using namespace std;

extern int maximum(int array[], int n);
int main()
{
    int test_array[7] = {5,3,7,34,6,83,2};
    cout << "Biggest numbers in test_array is:" << maximum(test_array, 7) << endl;
}