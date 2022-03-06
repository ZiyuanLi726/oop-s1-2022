#include <iostream>
using namespace std;

extern int sum_array(int array[], int n);
int main()
{
 int test_array1[8] = { 2,4,5,8,12,13,15,20 };
 int test_array2[5] = { 100,15,9,20,10 };
 int test_array3[4] = { 23,25,47,13 };
 cout << "total count of numbers in test_array1 are:" << sum_array(test_array1, 8) << endl;
 cout << "total count of numbers in test_array2 are:" << sum_array(test_array2, 5) << endl;
 cout << "total count of numbers in test_array3 are:" << sum_array(test_array3, 4) << endl;
}