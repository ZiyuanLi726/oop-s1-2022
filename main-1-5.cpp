#include <iostream>
using namespace std;

extern int count_even(int number);
int main()
{
 int test_number = 7;

 cout << "total sum of even numbers is:" << count_even(test_number) << endl;
}