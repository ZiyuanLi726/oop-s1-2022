#include <iostream>
using namespace std;

extern int count(int array[], int n, int number);
int main()
{
 int test_array1[8] = { 2,4,5,8,12,13,15,20 };
 int test_array2[5] = { 100,15,9,20,10 };
 int test_array3[4] = { 23,25,47,13 };
 cout << "Average numbers in test_array1 are:" << count(test_array1, 8,5) << endl;
 cout << "Average numbers in test_array2 are:" << count(test_array2, 5,2) << endl;
 cout << "Average numbers in test_array3 are:" << count(test_array3, 4,3) << endl;
}