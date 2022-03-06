#include <iostream>
using namespace std;

extern bool ascending(int array[], int n);

int main()
{
    int test_array[8] = {2,3,4,5,6,7,8,0};
    cout << ascending(test_array,8) << endl;
}