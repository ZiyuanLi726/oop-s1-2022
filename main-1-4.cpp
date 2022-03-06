#include <iostream>
using namespace std;

extern int sumtwo(int array[], int secondarray[], int n);
int main()
{
 int test_array1[5] = { 2,4,5,8,12 };
 int test_array2[5] = { 100,15,9,20,10 };
 cout << "total count of numbers in sum are:" << sumtwo(test_array1, test_array2, 5) << endl;
 
 
} 