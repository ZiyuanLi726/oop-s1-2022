#include <iostream>
using namespace std;

extern int count(int array[], int n, int number);
int main()
{
 int test_array1[8] = { 2,4,5,8,12,13,15,20 };
 cout << "The number is:" << count(test_array1, 8,5) << endl;
}
