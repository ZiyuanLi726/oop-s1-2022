#include <iostream>
using namespace std;

extern bool descending(int array[], int n);

int main()
{
    int test_array[7] = {8,6,4,6,3,1,6};
    cout << descending(test_array,5) << endl;
}
